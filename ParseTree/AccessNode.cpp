#include "AccessNode.h"

AccessNode::AccessNode(VarNode * a, ExpressionNode * i, TypeNode * t) : ExpressionNode("[]", t)
{
	this->arr = a;
	this->index = i;
	this->nodeId = NodeId::accessnode;
}

std::string AccessNode::toString()
{
	// only used after index->reduce()
	return this->arr->toString() + " [ " + this->index->toString() + " ] ";
}

ExpressionNode * AccessNode::gen()
{
	return new AccessNode(this->arr, this->index->reduce(), this->type);
}

ExpressionNode * AccessNode::reduce()
{
	ExpressionNode *ans = gen();
	TempNode *t = new TempNode(this->type);
	emit(t->toString() + " = " + ans->toString());
	return t;
}

void AccessNode::jumping(int t, int f)
{
	// for bool in array
	emitjumps(reduce()->toString(), t, f);
}
