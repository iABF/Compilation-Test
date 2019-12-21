#include "LogicalNode.h"

LogicalNode::LogicalNode(std::string ope, ExpressionNode * l, ExpressionNode * r) : ExpressionNode(ope, NULL)
{
	this->left = l;
	this->right = r;
	this->nodeId = NodeId::logicalnode;
}

TypeNode * LogicalNode::check(TypeNode * a, TypeNode * b)
{
	// should be overwritten by RelNode
	if (a->btype == BasicType::Bool&&b->btype == BasicType::Bool)return new TypeNode("bool");
	else return NULL;
}

TypeNode * RelNode::check(TypeNode * a, TypeNode * b)
{
	if ((a->nodeId == NodeId::arraynode) || (b->nodeId == NodeId::arraynode))return NULL;
	else if (a->btype == b->btype)return new TypeNode("bool");
	else return NULL;
}

