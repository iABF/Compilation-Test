#ifndef COMPOUNDSTATEMENTNODE_H
#define COMPOUNDSTATEMENTNODE_H
#include "ParseTreeNode.h"
class CompoundStatementNode : public ParseTreeNode {
public:
	CompoundStatementNode() : ParseTreeNode() {};
	void printText(FILE *file, int depth);
};
#endif // !COMPOUNDSTATEMENTNODE_H