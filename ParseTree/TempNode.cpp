#include "TempNode.h"

TempNode::TempNode(TypeNode * typ): ExpressionNode("t", typ)
{
	tempCount++;
	this->number = tempCount;
	this->nodeId = NodeId::tempnode;
}

std::string TempNode::toString()
{
	return "t" + int2str(this->number);
}
