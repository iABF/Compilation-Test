#ifndef WHILELOOPSTATEMENTNODE_H
#define WHILELOOPSTATEMENTNODE_H
#include "ParseTreeNode.h"
#include "StatementNode.h"
#include "ExpressionNode.h"
#include <assert.h>
class WhileLoopStatementNode : public StatementNode {
public:
	ExpressionNode *condition;
	StatementNode *block;
	WhileLoopStatementNode(ExpressionNode *cond, StatementNode *b);
	void printText(FILE *file, int depth);
};
#endif // !WHILELOOPSTATEMENTNODE_H
