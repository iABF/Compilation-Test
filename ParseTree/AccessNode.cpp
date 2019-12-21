#include "AccessNode.h"

AccessNode::AccessNode(VarNode * a, ExpressionNode * i, TypeNode * t) : ExpressionNode("[]", t)
{
	this->arr = a;
	this->index = i;
	this->nodeId = NodeId::accessnode;
}
