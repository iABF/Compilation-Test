#ifndef COMPOUNDSTATEMENTNODE_H
#define COMPOUNDSTATEMENTNODE_H
#include "ParseTreeNode.h"
#include "StatementNode.h"
class CompoundStatementNode : public StatementNode {
public:
	CompoundStatementNode() : StatementNode(7) {};
	void printText(FILE *file, int depth);
};
#endif // !COMPOUNDSTATEMENTNODE_H