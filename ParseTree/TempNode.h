#ifndef TEMPNODE_H
#define TEMPNODE_H
#include "ParseTreeNode.h"
#include "ExpressionNode.h"
#include "InterTools.h"
class TempNode : public ExpressionNode {
public:
	static int tempCount;
	int number;
	TempNode(TypeNode *typ);
	void printText(FILE *file, int depth) {}
};
#endif // !TEMPNODE_H