#ifndef STATEMENTNODE_H
#define STATEMENTNODE_H
#include "ParseTreeNode.h"
class StatementNode : public ParseTreeNode {
	int statementType; // type of the statement (if-else, while,...)
public:
	StatementNode(int typ);
	void printText(FILE *file, int depth);
};
#endif // !STATEMENTNODE_H
