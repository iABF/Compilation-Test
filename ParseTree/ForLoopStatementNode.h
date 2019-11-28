#ifndef FORLOOPSTATEMENTNODE_H
#define FORLOOPSTATEMENTNODE_H
#include "ParseTreeNode.h"
#include "StatementNode.h"
class ForLoopStatementNode : public StatementNode {
	ParseTreeNode *first;
	ParseTreeNode *second;
	ParseTreeNode *third;
	ParseTreeNode *block;
public:
	ForLoopStatementNode(ParseTreeNode *f, ParseTreeNode *s, ParseTreeNode *t);
	void setBlock(ParseTreeNode *b);
	void printText(FILE *file, int depth);
};
#endif // !FORLOOPSTATEMENTNODE_H
