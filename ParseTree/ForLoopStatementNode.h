#ifndef FORLOOPSTATEMENTNODE_H
#define FORLOOPSTATEMENTNODE_H
#include "ParseTreeNode.h"
#include "StatementNode.h"
#include "ExpressionNode.h"
#include <assert.h>
class ForLoopStatementNode : public StatementNode {
	ExpressionNode *first;
	ExpressionNode *second;
	ExpressionNode *third;
	StatementNode *block;
public:
	ForLoopStatementNode(ExpressionNode *f, ExpressionNode *s, ExpressionNode *t, StatementNode *b);
	void printText(FILE *file, int depth);
};
#endif // !FORLOOPSTATEMENTNODE_H
