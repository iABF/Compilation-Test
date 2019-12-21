#ifndef SELECTIONSTATEMENT_H
#define SELECTIONSTATEMENT_H
#include "ParseTreeNode.h"
#include "StatementNode.h"
#include "ExpressionNode.h"
#include <assert.h>
class SelectionStatementNode : public StatementNode {
public:
	ExpressionNode *condition; // actually an expression
	StatementNode *trueBlock; // if true, go here
	StatementNode *falseBlock; // else, here
	SelectionStatementNode(ExpressionNode *cond, StatementNode *t, StatementNode *f = NULL);
	void printText(FILE *file, int depth);
};
#endif // !SELECTIONSTATEMENT_H
