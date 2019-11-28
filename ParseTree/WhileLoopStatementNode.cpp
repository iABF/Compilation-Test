#include "WhileLoopStatementNode.h"

WhileLoopStatementNode::WhileLoopStatementNode(ParseTreeNode * cond, ParseTreeNode * b) :StatementNode(2)
{
	this->condition = cond;
	this->block = b;
}

void WhileLoopStatementNode::printText(FILE * file, int depth)
{
	fprintf(file, "Repeat Statement, while\n");
	printNode(this->condition, depth + 1, file);
	printNode(this->block, depth + 1, file);
}
