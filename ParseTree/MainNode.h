#ifndef MAINNODE_H
#define MAINNODE_H
#include "ParseTreeNode.h"
class MainNode : public ParseTreeNode {
public:
	MainNode() : ParseTreeNode() {};
	void printText(FILE *file, int depth);
};
#endif // !MAINNODE_H