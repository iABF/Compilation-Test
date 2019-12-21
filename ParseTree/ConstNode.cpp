#include "ConstNode.h"



ConstNode::ConstNode(int val): ExpressionNode(int2str(val), new TypeNode("int"))
{
	this->nodeType = 4;
	this->nodeId = NodeId::constnode;
}


void ConstNode::printText(FILE * file, int depth)
{
	fprintf(file, "Const Declaration, %s\n", this->name);
}




