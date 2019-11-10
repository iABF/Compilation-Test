#include "ParseTreeNode.h"

ParseTreeNode * ParseTreeNode::getLastPeerNode()
{
	ParseTreeNode *cur = this;
	while (cur->getNextPeerNode() != NULL) {
		cur = cur->getNextPeerNode();
	}
	return cur;
}

ParseTreeNode::ParseTreeNode(std::string t, std::string v)
{
	this->type = t;
	this->value = v;
	this->child = NULL;
	this->peer = NULL;
}

ParseTreeNode::ParseTreeNode(std::string t, std::string v, double val)
{
	this->type = t;
	this->value = v;
	this->dval = val;
	this->child = NULL;
	this->peer = NULL;
}

void ParseTreeNode::print()
{
	printNode(this, 0);
}

void ParseTreeNode::printNode(ParseTreeNode *root, int depth)
{
	if (root == NULL)return;
	if (depth == 0)printf("* ");
	else {
		for (int k = 1; k < depth; k++)printf(" ");
		printf("|-*");
	}
	std::cout << root->type << ", " << root->value << std::endl;
	ParseTreeNode *c = root->child;
	while (c != NULL) {
		printNode(c, depth + 1);
		c = c->getNextPeerNode();
	}
}

void ParseTreeNode::addPeerNode(ParseTreeNode * p)
{
	this->getLastPeerNode()->peer = p;
}
