#include "ForLoopStatementNode.h"

ForLoopStatementNode::ForLoopStatementNode(ParseTreeNode *f, ExpressionNode *s, ExpressionNode *t, StatementNode *b) :StatementNode(3)
{
	this->first = f;
	this->second = s;
	this->third = t;
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
