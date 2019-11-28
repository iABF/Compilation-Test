#include "FunctionCallNode.h"

FunctionCallNode::FunctionCallNode(std::string nam, ParseTreeNode * par)
{
	name = nam;
	callParamList = par;
}

void FunctionCallNode::printText(FILE * file, int depth)
{
	fprintf(file, "Function Call, %s\n", name.c_str());
}
