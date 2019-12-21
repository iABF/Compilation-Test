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


