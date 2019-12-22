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
	if (node->statementType == 1)generateAssign((AssignNode*)node);
	else if (node->statementType == 8)generateAssignArray((AssignArrayNode*)node);
	else if (node->statementType == 2)generateWhileLoopStatement((WhileLoopStatementNode*)node, beg, aft);
	else if (node->statementType == 3)generateForLoopStatement((ForLoopStatementNode*)node, beg, aft);
	else if (node->statementType == 4)generateSelectionStatement((SelectionStatementNode*)node, beg, aft);
	else if (node->statementType == 5)generateVarDefinition(node);
	else if (node->statementType == 7)generateCodeBlock((CompoundStatementNode*)node, beg, aft);
	else if (node->statementType == 9)generateFunctionCallStatement((FunctionStatement*)node);
}

void InterCodeGenerator::generateAssign(AssignNode * node)
{
	node->Id = (VarNode*)gen(node->Id);
	ExpressionNode *tmp = gen(node->expr);
	emit(toString(node->Id) + " = " + toString(tmp));
	assert(node->check(node->Id->type, tmp->type));
}

void InterCodeGenerator::generateAssignArray(AssignArrayNode * node)
{
	AccessNode *cur = (AccessNode*)gen(new AccessNode(node->arr, node->index, NULL));
	node->arr = cur->arr;
	node->index = cur->index;
	assert(((AssignArrayNode*)node)->check(cur->type, ((AssignArrayNode*)node)->expr->type) != NULL);
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

void InterCodeGenerator::generateForLoopStatement(ForLoopStatementNode * node, int beg, int aft)
{
	Env *forEnv = new Env(this->envStack.back());
	this->envStack.push_back(forEnv);
	int loopbegin;
	if (node->first == NULL)loopbegin = beg;
	else {
		loopbegin = newlabel();
		if (node->first->nodeId == NodeId::statementnode) {
			generateVarDefinition((StatementNode*)node->first);
		}
		else if (node->first->nodeId == NodeId::operatornode && ((OperatorNode*)node)->operatorType == 1) {
			// this is an assignment-expression
			OperatorNode *cur = (OperatorNode*)node;
			ExpressionNode *lvalue = cur->left;
			assert(lvalue->nodeId == NodeId::varnode);
			generateAssign(new AssignNode((VarNode*)lvalue, cur->right));
		}
		emitLabel(loopbegin);
	}
	int inloop, loopend;
	if (node->second != NULL) {
		assert(node->second->nodeId >= NodeId::logicalnode && node->second->nodeId <= NodeId::relnode);
		refresh((LogicalNode*)node->second);
		jumping(node->second, 0, aft);
		inloop = newlabel();
	}
	else inloop = loopbegin;
	if (node->third == NULL)loopend = loopbegin;
	else loopend = newlabel();
	if (inloop != loopbegin)emitLabel(inloop);
	generateStatement(node->block, inloop, loopend);
	if (loopend != loopbegin)emitLabel(loopend);
	if (node->third != NULL && node->third->nodeId == NodeId::operatornode && ((OperatorNode*)node)->operatorType == 1) {
		// this is an assignment-expression
		OperatorNode *cur = (OperatorNode*)node;
		ExpressionNode *lvalue = cur->left;
		assert(lvalue->nodeId == NodeId::varnode);
		generateAssign(new AssignNode((VarNode*)lvalue, cur->right));
	}
	emit("goto L" + int2str(loopbegin));
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

void InterCodeGenerator::generateVarDefinition(StatementNode * node)
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

void InterCodeGenerator::generateFunctionCallStatement(FunctionStatement * node)
{
	assert(this->functionTable.find(node->name) != this->functionTable.end());
	FunctionNode* cur = this->functionTable[node->name];
	if (node->callParamList == NULL) {
		emit("CALL " + node->name);
	}
	else {
		ParseTreeNode *testc = cur->paramList;
		int testcnt = 1;
		while (testc->getNextPeerNode() != NULL) {
			testc = testc->getNextPeerNode();
			testcnt++;
		}
		std::stack<ExpressionNode*>argstack;
		int argCount = 0;
		argstack.push(reduce(node->callParamList));
		argCount++;
		ExpressionNode *nw = node->callParamList;
		while (nw->getNextPeerNode() != NULL) {
			nw = (ExpressionNode*)nw->getNextPeerNode();
			argstack.push(reduce(nw));
			argCount++;
		}
		assert(testcnt == argCount);
		while (!argstack.empty()) {
			emit("arg " + toString(argstack.top()));
			argstack.pop();
		}
		emit("CALL " + node->name);
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
		AccessNode *cur = (AccessNode*)refreshID(node);
		return new AccessNode(cur->arr, reduce(cur->index), cur->type);
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
	else if (node->nodeId == NodeId::functioncallnode) {
		assert(this->functionTable.find(node->name) != this->functionTable.end());
		FunctionCallNode *bas = (FunctionCallNode*)node;
		FunctionNode* cur = this->functionTable[node->name];
		assert(cur->returnType->btype != BasicType::Void);
		if (bas->callParamList == NULL) {
			TempNode *temp = new TempNode(cur->returnType);
			emit(toString(temp) + " = CALL " + node->name);
			return temp;
		}
		else {
			ParseTreeNode *testc = cur->paramList;
			int testcnt = 1;
			while (testc->getNextPeerNode() != NULL) {
				testc = testc->getNextPeerNode();
				testcnt++;
			}
			std::stack<ExpressionNode*>argstack;
			int argCount = 0;
			argstack.push(reduce(bas->callParamList));
			argCount++;
			ExpressionNode *nw = bas->callParamList;
			while (nw->getNextPeerNode() != NULL) {
				nw = (ExpressionNode*)nw->getNextPeerNode();
				argstack.push(reduce(nw));
				argCount++;
			}
			assert(testcnt == argCount);
			while (!argstack.empty()) {
				emit("arg " + toString(argstack.top()));
				argstack.pop();
			}
			TempNode *temp = new TempNode(cur->returnType);
			emit(toString(temp) + " = CALL " + node->name);
			return temp;
		}
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
	else if (node->nodeId == NodeId::functioncallnode) {
		assert(this->functionTable.find(node->name) != this->functionTable.end());
		FunctionCallNode *bas = (FunctionCallNode*)node;
		FunctionNode* cur = this->functionTable[node->name];
		assert(cur->returnType->btype != BasicType::Void);
		if (bas->callParamList == NULL) {
			TempNode *temp = new TempNode(cur->returnType);
			emit(toString(temp) + " = CALL " + node->name);
			return temp;
		}
		else {
			ParseTreeNode *testc = cur->paramList;
			int testcnt = 1;
			while (testc->getNextPeerNode() != NULL) {
				testc = testc->getNextPeerNode();
				testcnt++;
			}
			std::stack<ExpressionNode*>argstack;
			int argCount = 0;
			argstack.push(reduce(bas->callParamList));
			argCount++;
			ExpressionNode *nw = bas->callParamList;
			while (nw->getNextPeerNode() != NULL) {
				nw = (ExpressionNode*)nw->getNextPeerNode();
				argstack.push(reduce(nw));
				argCount++;
			}
			assert(testcnt == argCount);
			while (!argstack.empty()) {
				emit("arg " + toString(argstack.top()));
				argstack.pop();
			}
			TempNode *temp = new TempNode(cur->returnType);
			emit(toString(temp) + " = CALL " + node->name);
			return temp;
		}
	}
	return NULL;
}

std::string InterCodeGenerator::toString(ExpressionNode * node)
{
	if (node->nodeId == NodeId::varnode) {
		assert(this->envStack.back()->findDeepSymbol(node->name) != NULL);
		return "var" + int2str(this->envStack.back()->findDeepSymbol(node->name)->varNumber);
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
		if (node->left->nodeId >= NodeId::logicalnode && node->left->nodeId <= NodeId::relnode)refresh((LogicalNode*)node->left);
		if (node->right->nodeId >= NodeId::logicalnode && node->right->nodeId <= NodeId::relnode)refresh((LogicalNode*)node->right);
		node->type = ((RelNode*)node)->check(((LogicalNode*)refreshID(node->left))->type, ((LogicalNode*)refreshID(node->right))->type);
		assert(node->type != NULL);
	}
	else {
		if (node->left->nodeId >= NodeId::logicalnode && node->left->nodeId <= NodeId::relnode)refresh((LogicalNode*)node->left);
		if (node->right->nodeId >= NodeId::logicalnode && node->right->nodeId <= NodeId::relnode)refresh((LogicalNode*)node->right);
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
	else if (node->nodeId == NodeId::accessnode) {
		assert(this->envStack.back()->findDeepSymbol(((AccessNode*)node)->arr->name) != NULL);
		AccessNode *tmp = (AccessNode*)node;
		tmp->arr = this->envStack.back()->findDeepSymbol(tmp->arr->name);
		if (tmp->isrefreshed)return tmp;
		assert(tmp->arr->type->tag == Tag::Array);
		ArrayNode *aty = (ArrayNode*)tmp->arr->type;
		tmp->type = aty->getOriginType();
		ExpressionNode *tmpcur = tmp->index;
		ExpressionNode *base = NULL;
		ExpressionNode *mul = NULL;
		if(tmpcur->getNextPeerNode() != NULL)mul = new OperatorNode(4, tmpcur, new ConstNode(aty->length));
		else mul = tmpcur;
		base = mul;
		while (tmpcur->getNextPeerNode() != NULL) {
			assert(aty->basicType->tag == Tag::Array);
			tmpcur = (ExpressionNode*)tmpcur->getNextPeerNode();
			aty = (ArrayNode*)aty->basicType;
			if (tmpcur->getNextPeerNode() != NULL)mul = new OperatorNode(4, tmpcur, new ConstNode(aty->length));
			else mul = tmpcur;
			base = new OperatorNode(2, base, mul);
		}
		assert(aty->basicType->tag != Tag::Array);
		tmp->index = base;
		tmp->isrefreshed = true;
		return tmp;
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
	clearfile();
	// now begin with RootNode!
	TopLevelDefinitionNode *cur = (TopLevelDefinitionNode*)this->root->getChildNode();
	generateTopLevelDefinition(cur);
	while (cur->getNextPeerNode() != NULL) {
		cur = (TopLevelDefinitionNode*)cur->getNextPeerNode();
		generateTopLevelDefinition(cur);
	}
}


