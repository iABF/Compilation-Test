#ifndef FORLOOPSTATEMENTNODE_H
#define FORLOOPSTATEMENTNODE_H
#include "ParseTreeNode.h"
#include "StatementNode.h"
#include "ExpressionNode.h"
#include <assert.h>
class ForLoopStatementNode : public StatementNode {
public:
	ParseTreeNode *first;
	ExpressionNode *second; // this is a logicalndoe
	ExpressionNode *third;
	StatementNode *block;
	ForLoopStatementNode(ParseTreeNode *f, ExpressionNode *s, ExpressionNode *t, StatementNode *b);
	void printText(FILE *file, int depth);
};
#endif // !FORLOOPSTATEMENTNODE_H
