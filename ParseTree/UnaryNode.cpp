#include "UnaryNode.h"

UnaryNode::UnaryNode(int ope, ExpressionNode * e): ExpressionNode(NULL, NULL)
{
	this->expr = e;
	this->operatorType = ope;
	this->name = this->getOperator();
	this->nodeType = 1;
	this->nodeId = NodeId::unarynode;
}

void UnaryNode::printText(FILE * file, int depth)
{
	fprintf(file, "Expression, op: %s\n", getOperator().c_str());
}

std::string UnaryNode::getOperator()
{
	switch (operatorType)
	{
	case 16: return "-";
	default:
		return std::string();
	}
}

ExpressionNode * UnaryNode::gen()
{
	return new UnaryNode(this->operatorType, this->expr->reduce());
}

ExpressionNode * UnaryNode::reduce()
{
	ExpressionNode *ans = gen();
	TempNode *t = new TempNode(this->type);
	emit(t->toString() + " = " + ans->toString());
	return t;
}

std::string UnaryNode::toString()
{
	return this->name + " " + this->expr->toString();
}

