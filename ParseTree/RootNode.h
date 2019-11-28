#ifndef ROOTNODE_H
#define ROOTNODE_H
#include "ParseTreeNode.h"
class RootNode : public ParseTreeNode {
public:
	RootNode() : ParseTreeNode() {};
	void printText(FILE *file, int depth);
};
#endif // !ROOTNODE_H