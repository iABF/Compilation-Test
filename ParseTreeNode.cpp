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
	FILE *file = fopen("out_parser.txt", "a");
	printNode(this, 0, file);
	fclose(file);
}

void ParseTreeNode::printNode(ParseTreeNode *root, int depth, FILE *file)
{
	if (root == NULL)return;
	if (depth == 0)fprintf(file, "* ");
	else {
		for (int k = 1; k < depth; k++)fprintf(file, "  ");
		fprintf(file, "|-* ");
	}
	fprintf(file, "%s, %s\n", root->type.c_str(), root->value.c_str());
	ParseTreeNode *c = root->child;
	while (c != NULL) {
		printNode(c, depth + 1, file);
		c = c->getNextPeerNode();
	}
}

void ParseTreeNode::addPeerNode(ParseTreeNode * p)
{
	this->getLastPeerNode()->peer = p;
}
