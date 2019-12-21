#include "InterCodeGenerator.h"

void InterCodeGenerator::generateTopLevelDefinition(TopLevelDefinitionNode * node)
{
	TypeNode *type = (TypeNode*)node->getChildNode();
	if (type->getNextPeerNode()->nodeId == NodeId::varnode) {
		VarNode *cur = (VarNode*)type->getNextPeerNode()->getNextPeerNode();
		assert(this->envStack.back()->findSymbol(cur->name) == NULL);
		if (cur->type == NULL) {
			cur->setType(type);
			extern int offset;
			this->envStack.back()->insert(cur->name, cur, offset);
			offset += cur->type->width;
		}
		else {
			assert(cur->type->tag != Tag::Basic);
			if (cur->type->tag == Tag::Array) {
				ArrayNode *arr = (ArrayNode*)cur->type;
				arr->setType(type);
				extern int offset;
				this->envStack.back()->insert(cur->name, cur, offset);
				offset += cur->type->width;
			}
		}
		while (cur->getNextPeerNode() != NULL) {
			cur = (VarNode*)cur->getNextPeerNode();
			assert(this->envStack.back()->findSymbol(cur->name) == NULL);
			if (cur->type == NULL) {
				cur->setType(type);
				extern int offset;
				this->envStack.back()->insert(cur->name, cur, offset);
				offset += cur->type->width;
			}
			else {
				assert(cur->type->tag != Tag::Basic);
				if (cur->type->tag == Tag::Array) {
					ArrayNode *arr = (ArrayNode*)cur->type;
					arr->setType(type);
					extern int offset;
					this->envStack.back()->insert(cur->name, cur, offset);
					offset += cur->type->width;
				}
			}
		}
	}
	else {
		// function definition
		FunctionNode *cur = (FunctionNode*)type->getNextPeerNode();
		assert(this->envStack.size() == 1);
		CompoundStatementNode *body = (CompoundStatementNode*)cur->getNextPeerNode();
		cur->setReturnType(type);
		cur->setBody(body);
		Env *functionEnv = new Env(this->envStack.back());
		this->envStack.push_back(functionEnv); // enter new environment
		//insert function
		assert(this->functionTable.find(cur->name) == this->functionTable.end());
		this->functionTable[cur->name] = cur; // insertion
		emit("function " + cur->name + ":");
		/* generate code for parameter */
		ParamNode *par = cur->paramList;
		if (par != NULL) {
			generateParameter(par);
			while (par->getNextPeerNode() != NULL) {
				par = (ParamNode*)par->getNextPeerNode();
				generateParameter(par);
			}
		}
		/* generate code for body */
		int begin = newlabel();
		int after = newlabel();
		emitLabel(begin);
		generateCodeBlock(body, begin, after);
		emitLabel(after);
		/* leave function environment */
		this->envStack.pop_back();
	}
}

void InterCodeGenerator::generateParameter(ParamNode * node)
{
	/* generate single parameter */
	assert(this->envStack.back()->findSymbol(node->var->name) == NULL);
	assert(node->type->tag == Tag::Basic); // only allow basic type
	assert(node->type->btype != BasicType::Void);
	node->var->setType(node->type);
	/* add this param to symtable */
	extern int offset;
	this->envStack.back()->insert(node->var->name, node->var, offset);
	offset += node->type->width;
	/* generate code for parameter */
	emit("PARAM " + node->var->name);
}

void InterCodeGenerator::generateCodeBlock(CompoundStatementNode * node, int beg, int aft)
{
	StatementNode *cur = (StatementNode*)node->getChildNode();
	int after;
	if (cur->getNextPeerNode() != NULL)after = newlabel();
	else after = aft;
	generateStatement(cur, beg, after);
	if (after != aft)emitLabel(after);
	beg = after;
	while (cur->getNextPeerNode() != NULL) {
		cur = (StatementNode*)cur->getNextPeerNode();
		if (cur->getNextPeerNode() != NULL)after = newlabel();
		else after = aft;
		generateStatement(cur, beg, after);
		if (after != aft)emitLabel(after);
		beg = after;
	}
}

void InterCodeGenerator::generateStatement(StatementNode * node, int beg, int aft)
{
	if (node->statementType == 1)generateAssign((AssignNode*)node, beg, aft);
	else if (node->statementType == 8)generateAssignArray((AssignArrayNode*)node, beg, aft);
	else if (node->statementType == 2)generateWhileLoopStatement((WhileLoopStatementNode*)node, beg, aft);
	//else if (node->statementType == 3)generateForLoopStatement((ForLoopStatementNode*)node, beg, aft);
	else if (node->statementType == 4)generateSelectionStatement((SelectionStatementNode*)node, beg, aft);
	else if (node->statementType == 5)generateVarDefinition(node, beg, aft);
	else if (node->statementType == 7)generateCodeBlock((CompoundStatementNode*)node, beg, aft);
}

void InterCodeGenerator::generateAssign(AssignNode * node, int beg, int aft)
{
	node->Id = (VarNode*)gen(node->Id);
	assert(node->check(node->Id->type, node->expr->type));
	emit(toString(node->Id) + " = " + toString(gen(node->expr)));
}

void InterCodeGenerator::generateAssignArray(AssignArrayNode * node, int beg, int aft)
{
	emit(toString(((AssignArrayNode*)node)->arr) + " [ " + toString(reduce(((AssignArrayNode*)node)->index)) + " ] = " + toString(reduce(((AssignArrayNode*)node)->expr)));
}

void InterCodeGenerator::generateWhileLoopStatement(WhileLoopStatementNode * node, int beg, int aft)
{
	refresh((LogicalNode*)node->condition);
	assert(node->condition->type->btype == BasicType::Bool);
	Env *whileEnv = new Env(this->envStack.back());
	this->envStack.push_back(whileEnv);
	node->next = aft;
	jumping(node->condition, 0, aft);
	int label = newlabel();
	emitLabel(label);
	generateStatement(node->block, label, beg);
	emit("goto L" + int2str(beg));
	this->envStack.pop_back();
}

void InterCodeGenerator::generateSelectionStatement(SelectionStatementNode * node, int beg, int aft)
{
	refresh((LogicalNode*)node->condition);
	assert(node->condition->type->btype == BasicType::Bool);
	Env *selectionEnv = new Env(this->envStack.back());
	this->envStack.push_back(selectionEnv);
	if (node->falseBlock == NULL) {
		int label = newlabel();
		jumping(node->condition, 0, aft);
		emitLabel(label);
		generateStatement(node->trueBlock, label, aft);
	}
	else {
		int label1 = newlabel();
		int label2 = newlabel();
		jumping(node->condition, 0, label2);
		emitLabel(label1);
		generateStatement(node->trueBlock, label1, aft);;
		emit("goto L" + int2str(aft));
		emitLabel(label2);
		generateStatement(node->falseBlock, label2, aft);;
	}
	this->envStack.pop_back();
}

void InterCodeGenerator::generateVarDefinition(StatementNode * node, int beg, int aft)
{
	assert(node->statementType == 5);
	TypeNode *type = (TypeNode*)node->getChildNode();
	VarNode *cur = (VarNode*)type->getNextPeerNode();
	assert(this->envStack.back()->findSymbol(cur->name) == NULL);
	/* declaration */
	if (cur->type == NULL) {
		cur->setType(type);
		extern int offset;
		this->envStack.back()->insert(cur->name, cur, offset);
		offset += cur->type->width;
	}
	else {
		assert(cur->type->tag != Tag::Basic);
		if (cur->type->tag == Tag::Array) {
			ArrayNode *arr = (ArrayNode*)cur->type;
			arr->setType(type);
			extern int offset;
			this->envStack.back()->insert(cur->name, cur, offset);
			offset += cur->type->width;
		}
	}
	/* assignment */
	if (cur->getChildNode() != NULL) {
		// now only allows id definition
		assert(cur->type->tag == Tag::Basic);
		emit(toString(cur) + " = " + toString(gen((ExpressionNode*)cur->getChildNode())));
	}
	while (cur->getNextPeerNode() != NULL) {
		cur = (VarNode*)cur->getNextPeerNode();
		assert(this->envStack.back()->findSymbol(cur->name) == NULL);
		/* declaration */
		if (cur->type == NULL) {
			cur->setType(type);
			extern int offset;
			this->envStack.back()->insert(cur->name, cur, offset);
			offset += cur->type->width;
		}
		else {
			assert(cur->type->tag != Tag::Basic);
			if (cur->type->tag == Tag::Array) {
				ArrayNode *arr = (ArrayNode*)cur->type;
				arr->setType(type);
				extern int offset;
				this->envStack.back()->insert(cur->name, cur, offset);
				offset += cur->type->width;
			}
		}
		/* assignment */
		if (cur->getChildNode() != NULL) {
			// now only allows id definition
			assert(cur->type->tag == Tag::Basic);
			emit(toString(cur) + " = " + toString(gen((ExpressionNode*)cur->getChildNode())));
		}
	}
}

ExpressionNode * InterCodeGenerator::gen(ExpressionNode * node)
{
	if (node->nodeId == NodeId::expressionnode
		|| node->nodeId == NodeId::tempnode
		|| node->nodeId == NodeId::constnode) {
		return node;
	}
	else if (node->nodeId == NodeId::operatornode) {
		return new OperatorNode(((OperatorNode*)node)->operatorType, reduce(((OperatorNode*)node)->left), reduce(((OperatorNode*)node)->right));
	}
	else if (node->nodeId == NodeId::varnode) {
		assert(this->envStack.back()->findDeepSymbol(node->name) != NULL);
		return this->envStack.back()->findDeepSymbol(node->name);
	}
	else if (node->nodeId == NodeId::accessnode) {
		assert(this->envStack.back()->findDeepSymbol(((AccessNode*)node)->arr->name) != NULL);
		return new AccessNode(((AccessNode*)node)->arr, reduce(((AccessNode*)node)->index), ((AccessNode*)node)->type);
	}
	else if (node->nodeId >= NodeId::logicalnode && node->nodeId <= NodeId::relnode) {
		refresh((LogicalNode*)node);
		int f = newlabel(); // false label
		int a = newlabel(); // after this expression
		TempNode *temp = new TempNode(node->type);
		jumping(node, 0, f);
		emit(toString(temp) + " = true");
		emit("goto L" + int2str(a));
		emitLabel(f);
		emit(toString(temp) + " = false");
		emitLabel(a);
		return temp;
	}
	else if (node->nodeId == NodeId::unarynode) {
		return new UnaryNode(((UnaryNode*)node)->operatorType, reduce(((UnaryNode*)node)->expr));
	}
	return NULL;
}

ExpressionNode * InterCodeGenerator::reduce(ExpressionNode * node)
{
	if (node->nodeId == NodeId::expressionnode
		|| node->nodeId == NodeId::tempnode
		|| node->nodeId == NodeId::constnode) {
		return node;
	}
	else if (node->nodeId == NodeId::operatornode) {
		ExpressionNode *ans = gen(node);
		TempNode *t = new TempNode(node->type);
		emit(toString(t) + " = " + toString(ans));
		return t;
	}
	else if (node->nodeId == NodeId::varnode) {
		assert(this->envStack.back()->findDeepSymbol(node->name) != NULL);
		return this->envStack.back()->findDeepSymbol(node->name);
	}
	else if (node->nodeId == NodeId::accessnode) {
		assert(this->envStack.back()->findDeepSymbol(((AccessNode*)node)->arr->name) != NULL);
		ExpressionNode *ans = gen(node);
		TempNode *t = new TempNode(node->type);
		emit(toString(t) + " = " + toString(ans));
		return t;
	}
	else if (node->nodeId >= NodeId::logicalnode && node->nodeId <= NodeId::relnode) {
		refresh((LogicalNode*)node);
		return node;
	}
	return NULL;
}

std::string InterCodeGenerator::toString(ExpressionNode * node)
{
	if (node->nodeId == NodeId::varnode) {
		assert(this->envStack.back()->findDeepSymbol(node->name) != NULL);
		return this->envStack.back()->findDeepSymbol(node->name)->name;
	}
	else if (node->nodeId == NodeId::expressionnode || node->nodeId == NodeId::constnode) {
		return node->name;
	}
	else if (node->nodeId == NodeId::operatornode) {
		return toString(((OperatorNode*)node)->left) + " " + node->name + " " + toString(((OperatorNode*)node)->right);
	}
	else if (node->nodeId == NodeId::accessnode) {
		// only used after index->reduce()
		assert(this->envStack.back()->findDeepSymbol(((AccessNode*)node)->arr->name) != NULL);
		return toString(((AccessNode*)node)->arr) + " [ " + toString(((AccessNode*)node)->index) + " ] ";
	}
	else if (node->nodeId >= NodeId::logicalnode && node->nodeId <= NodeId::relnode && node->nodeId != NodeId::notnode) {
		refresh((LogicalNode*)node);
		return toString(((LogicalNode*)node)->left) + " " + node->name + " " + toString(((LogicalNode*)node)->right);
	}
	else if (node->nodeId == NodeId::notnode) {
		refresh((LogicalNode*)node);
		return node->name + " " + toString(((NotNode*)node)->right);
	}
	else if (node->nodeId == NodeId::tempnode) {
		return "t" + int2str(((TempNode*)node)->number);
	}
	else if (node->nodeId == NodeId::unarynode) {
		return node->name + " " + toString(((UnaryNode*)node)->expr);
	}
	return NULL;
}

void InterCodeGenerator::jumping(ExpressionNode * node, int t, int f)
{
	if (node->nodeId == NodeId::expressionnode
		|| node->nodeId == NodeId::operatornode
		|| node->nodeId == NodeId::varnode
		|| node->nodeId == NodeId::logicalnode
		|| node->nodeId == NodeId::tempnode
		|| node->nodeId == NodeId::unarynode) {
		emitjumps(toString(node), t, f);
	}
	else if (node->nodeId == NodeId::accessnode) {
		// for bool in array
		emitjumps(toString(reduce(node)), t, f);
	}
	else if (node->nodeId == NodeId::ornode) {
		int label;
		if (!t)label = newlabel();
		else label = t;
		jumping(((OrNode*)node)->left, label, 0);
		jumping(((OrNode*)node)->right, t, f);
		if (!t)emitLabel(label);
	}
	else if (node->nodeId == NodeId::andnode) {
		int label;
		if (!f)label = newlabel();
		else label = f;
		jumping(((AndNode*)node)->left, 0, label);
		jumping(((AndNode*)node)->right, t, f);
		if (!f)emitLabel(label);
	}
	else if (node->nodeId == NodeId::notnode) {
		jumping(((NotNode*)node)->right, f, t);
	}
	else if (node->nodeId == NodeId::relnode) {
		ExpressionNode *l = reduce(((RelNode*)node)->left);
		ExpressionNode *r = reduce(((RelNode*)node)->right);
		std::string boolean = toString(l) + " " + node->name + " " + toString(r);
		emitjumps(boolean, t, f);
	}
	else if (node->nodeId == NodeId::constnode) {
		if (((ConstNode*)node) == ConstNode::True && t)emit("goto L" + int2str(t));
		else if (((ConstNode*)node) == ConstNode::False && f)emit("goto L" + int2str(f));
	}
}

void InterCodeGenerator::emitjumps(std::string boolean, int t, int f)
{
	if (t&&f) {
		emit("if " + boolean + " goto L" + int2str(t));
		emit("goto L" + int2str(f));
	}
	else if (t)emit("if " + boolean + " goto L" + int2str(t));
	else if (f)emit("iffalse " + boolean + " goto L" + int2str(f));
}

void InterCodeGenerator::refresh(LogicalNode * node)
{
	assert(node->nodeId >= NodeId::logicalnode && node->nodeId <= NodeId::relnode);
	if (node->nodeId == NodeId::relnode) {
		node->type = ((RelNode*)node)->check(((LogicalNode*)refreshID(node->left))->type, ((LogicalNode*)refreshID(node->right))->type);
		assert(node->type != NULL);
	}
	else {
		node->type = node->check(((LogicalNode*)refreshID(node->left))->type, ((LogicalNode*)refreshID(node->right))->type);
		assert(node->type != NULL);
	}
}

ExpressionNode * InterCodeGenerator::refreshID(ExpressionNode * node)
{
	if (node->nodeId == NodeId::varnode) {
		assert(this->envStack.back()->findDeepSymbol(node->name) != NULL);
		return this->envStack.back()->findDeepSymbol(node->name);
	}
	else return node;
}

InterCodeGenerator::InterCodeGenerator(RootNode * r)
{
	this->root = r;
	this->rootEnv = new Env();
	envStack.push_back(this->rootEnv);
}

void InterCodeGenerator::generate()
{
	// now begin with RootNode!
	TopLevelDefinitionNode *cur = (TopLevelDefinitionNode*)this->root->getChildNode();
	generateTopLevelDefinition(cur);
	while (cur->getNextPeerNode() != NULL) {
		cur = (TopLevelDefinitionNode*)cur->getNextPeerNode();
		generateTopLevelDefinition(cur);
	}
}


