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

ExpressionNode * LogicalNode::gen()
{
	int f = newlabel(); // false label
	int a = newlabel(); // after this expression
	TempNode *temp = new TempNode(this->type);
	this->jumping(0, f);
	emit(temp->toString() + " = true");
	emit("goto L" + int2str(a));
	emitLabel(f);
	emit(temp->toString() + " = false");
	emitLabel(a);
	return temp;
}

std::string LogicalNode::toString()
{
	return this->left->toString() + " " + this->name + " " + this->right->toString();
}

void OrNode::jumping(int t, int f)
{
	int label;
	if (!t)label = newlabel();
	else label = t;
	this->left->jumping(label, 0);
	this->right->jumping(t, f);
	if (!t)emitLabel(label);
}

void AndNode::jumping(int t, int f)
{
	int label;
	if (!f)label = newlabel();
	else label = f;
	this->left->jumping(0, label);
	this->right->jumping(t, f);
	if (!f)emitLabel(label);
}

void NotNode::jumping(int t, int f)
{
	this->right->jumping(f, t);
}

std::string NotNode::toString()
{
	return this->name + " " + this->right->toString();
}

TypeNode * RelNode::check(TypeNode * a, TypeNode * b)
{
	if ((a->nodeId == NodeId::arraynode) || (b->nodeId == NodeId::arraynode))return NULL;
	else if (a->btype == b->btype)return new TypeNode("bool");
	else return NULL;
}

void RelNode::jumping(int t, int f)
{
	ExpressionNode *l = this->left->reduce();
	ExpressionNode *r = this->right->reduce();
	std::string boolean = l->toString() + " " + this->name + " " + r->toString();
	emitjumps(boolean, t, f);
}
