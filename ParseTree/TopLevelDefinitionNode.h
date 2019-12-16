#ifndef TOPLEVELDEFINITIONNODE_H
#define TOPLEVELDEFINITIONNODE_H
#include "ParseTreeNode.h"
class TopLevelDefinitionNode : public ParseTreeNode {
public:
	TopLevelDefinitionNode() {}
	void printText(FILE *file, int depth);
};
#endif // !TOPLEVELDEFINITIONNODE_H
