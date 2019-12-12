#include "FunctionNode.h"

FunctionNode::FunctionNode(std::string nam)
{
	name = nam;
	paramList = NULL;
}

void FunctionNode::printText(FILE * file, int depth)
{
	fprintf(file, "Function Definition, %s\n", name.c_str());
	if (this->returnType != NULL)printNode(this->returnType, depth + 1, file);
	if (this->paramList != NULL) {
		ParamNode *cur = this->paramList;
		printNode(cur, depth + 1, file);
		while (cur->getNextPeerNode() != NULL) {
			cur = (ParamNode*)cur->getNextPeerNode();
			printNode(cur, depth + 1, file);
		}
	}
	if (this->functionBody != NULL)printNode(this->functionBody, depth + 1, file);
}
