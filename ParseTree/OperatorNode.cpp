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

OperatorNode::OperatorNode(double val, int ope)
{
	this->value = val;
	this->operatorType = ope;
}

void OperatorNode::printText(FILE * file, int depth)
{
	fprintf(file, "Expression, op: %s\n", getOperator().c_str());
}

double OperatorNode::getValue()
{
	return this->value;
}
