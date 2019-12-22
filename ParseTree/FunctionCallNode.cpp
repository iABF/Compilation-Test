#include "FunctionCallNode.h"

FunctionCallNode::FunctionCallNode(std::string nam, ExpressionNode *par) : ExpressionNode(nam, NULL)
{
	callParamList = par;
	this->nodeId = NodeId::functioncallnode;
}

void FunctionCallNode::printText(FILE * file, int depth)
{
	fprintf(file, "Function Call, %s\n", name.c_str());
}
