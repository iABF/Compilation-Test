#ifndef SELECTIONSTATEMENT_H
#define SELECTIONSTATEMENT_H
#include "ParseTreeNode.h"
#include "StatementNode.h"
class SelectionStatementNode : public StatementNode {
	ParseTreeNode *condition; // actually an expression
	ParseTreeNode *trueBlock; // if true, go here
	ParseTreeNode *falseBlock; // else, here
public:
	SelectionStatementNode(ParseTreeNode *cond, ParseTreeNode *t, ParseTreeNode *f = NULL);
	void printText(FILE *file, int depth);
};
#endif // !SELECTIONSTATEMENT_H
