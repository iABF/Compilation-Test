#include "VarNode.h"

VarNode::VarNode(std::string nam, double val)
{
	value = val;
	name = nam;
}

VarNode::VarNode(std::string nam)
{
	name = nam;
}

void VarNode::setValue(double val)
{
	this->value = val;
}

void VarNode::printText(FILE * file, int depth)
{
	fprintf(file, "ID Declaration, %s\n", name.c_str());
}

void VarNode::setType(TypeNode * type)
{
	this->type = type;
}

std::string VarNode::getVarName()
{
	return name;
}
