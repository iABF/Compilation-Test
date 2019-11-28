#ifndef WHILELOOPSTATEMENTNODE_H
#define WHILELOOPSTATEMENTNODE_H
#include "ParseTreeNode.h"
#include "StatementNode.h"
class WhileLoopStatementNode : public StatementNode {
	ParseTreeNode *condition;
	ParseTreeNode *block;
public:
	WhileLoopStatementNode(ParseTreeNode *cond, ParseTreeNode *b);
	void printText(FILE *file, int depth);
};
#endif // !WHILELOOPSTATEMENTNODE_H
