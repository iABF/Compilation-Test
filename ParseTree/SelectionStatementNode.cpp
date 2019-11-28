#include "SelectionStatementNode.h"

SelectionStatementNode::SelectionStatementNode(ParseTreeNode * cond, ParseTreeNode * t, ParseTreeNode * f): StatementNode(4)
{
	this->condition = cond;
	this->trueBlock = t;
	this->falseBlock = f;
}

void SelectionStatementNode::printText(FILE * file, int depth)
{
	fprintf(file, "Selection Statement, ");
	if (this->falseBlock != NULL)fprintf(file, "if-else\n");
	else fprintf(file, "if\n");
	printNode(this->condition, depth + 1, file);
	printNode(this->trueBlock, depth + 1, file);
	if (this->falseBlock != NULL)printNode(this->falseBlock, depth + 1, file);
}
