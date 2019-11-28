#include "ForLoopStatementNode.h"

ForLoopStatementNode::ForLoopStatementNode(ParseTreeNode * f, ParseTreeNode * s, ParseTreeNode * t) :StatementNode(3)
{
	this->first = f;
	this->second = s;
	this->third = t;
}

void ForLoopStatementNode::setBlock(ParseTreeNode * b)
{
	this->block = b;
}

void ForLoopStatementNode::printText(FILE * file, int depth)
{
	fprintf(file, "Repeat Statement, for\n");
	if (this->first != NULL)printNode(this->first, depth + 1, file);
	if (this->second != NULL)printNode(this->second, depth + 1, file);
	if (this->third != NULL)printNode(this->third, depth + 1, file);
	if (this->block != NULL)printNode(this->block, depth + 1, file);
}
