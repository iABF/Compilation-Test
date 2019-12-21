#include "OperatorNode.h"

std::string OperatorNode::getOperator()
{
	switch (operatorType)
	{
	case 1: return "=";
	case 2: return "+";
	case 3: return "-";
	case 4: return "*";
	case 5: return "/";
	case 6: return "%";
	case 7: return "<";
	case 8: return ">";
	case 9: return "==";
	case 10: return "<=";
	case 11: return ">=";
	case 12: return "!=";
	case 13: return "&&";
	case 14: return "||";
	case 15: return "^";
	case 16: return "unary -";
	default:
		return std::string();
	}
}

ExpressionNode * OperatorNode::gen()
{
	return new OperatorNode(this->operatorType, this->left->reduce(), this->right->reduce());
}

ExpressionNode * OperatorNode::reduce()
{
	ExpressionNode *ans = gen();
	TempNode *t = new TempNode(this->type);
	emit(t->toString() + " = " + ans->toString());
	return t;
}

std::string OperatorNode::toString()
{
	return this->left->toString() + " " + this->name + " " + this->right->toString();
}

TypeNode * OperatorNode::maxt(TypeNode * a, TypeNode * b)
{
	if (a->btype == BasicType::Int || b->btype == BasicType::Int)return new TypeNode("int");
	if (a->btype == BasicType::Bool || b->btype == BasicType::Bool)return new TypeNode("bool");
	return NULL;
}

OperatorNode::OperatorNode(int ope, ExpressionNode *l, ExpressionNode *r): ExpressionNode(int2str(ope), NULL)
{
	this->left = l;
	this->right = r;
	this->operatorType = ope;
	if (l->nodeId == NodeId::varnode || r->nodeId == NodeId::varnode)this->type = new TypeNode("int");
	else this->type = maxt(l->type, r->type);
	this->name = this->getOperator();
	this->nodeType = 1;
	this->nodeId = NodeId::operatornode;
}

void OperatorNode::printText(FILE * file, int depth)
{
	fprintf(file, "Expression, op: %s\n", getOperator().c_str());
}

