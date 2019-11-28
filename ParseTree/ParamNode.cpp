#include "ParamNode.h"

ParamNode::ParamNode(std::string nam, std::string typ)
{
	name = nam;
	type = typ;
}

void ParamNode::printText(FILE * file, int depth)
{
	fprintf(file, "Function parameter, %s\n", name.c_str());
}
