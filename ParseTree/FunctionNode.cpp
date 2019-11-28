#include "FunctionNode.h"

FunctionNode::FunctionNode(std::string nam, ParseTreeNode * par, std::string ret = "")
{
	returnType = ret;
	name = nam;
	paramList = par;
}

void FunctionNode::printText(FILE * file, int depth)
{
	fprintf(file, "Function Definition, %s\n", name.c_str());
}
