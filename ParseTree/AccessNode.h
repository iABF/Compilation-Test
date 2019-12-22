#ifndef ACCESSNODE_H
#define ACCESSNODE_H
#include "ParseTreeNode.h"
#include "ExpressionNode.h"
#include "InterTools.h"
#include "VarNode.h"
#include "TypeNode.h"
#include "TempNode.h"
class AccessNode : public ExpressionNode {
public:
	VarNode *arr;
	ExpressionNode *index;
	bool isrefreshed;
	AccessNode(VarNode *a, ExpressionNode *i, TypeNode *t);
	void printText(FILE *file, int depth) {}
};
#endif // !ACCESSNODE_H