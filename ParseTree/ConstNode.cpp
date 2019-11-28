#include "ConstNode.h"

ConstNode::ConstNode(double val)
{
	this->value = val;
}

ConstNode::ConstNode(double val, std::string typ)
{
	this->value = val;
	this->type = typ;
}

void ConstNode::printText(FILE * file, int depth)
{
	fprintf(file, "Const Declaration, %g\n", value);
}
