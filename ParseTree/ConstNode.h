#ifndef CONSTNODE_H
#define CONSTNODE_H
#include "ParseTreeNode.h"
#include "ExpressionNode.h"
#include "InterTools.h"
class ConstNode : public ExpressionNode {
public:
	inline ConstNode(std::string nam, TypeNode *typ) : ExpressionNode(nam, typ) { this->nodeId = NodeId::constnode; }
	ConstNode(int val);
	void printText(FILE *file, int depth);
	static ConstNode *True;
	static ConstNode *False;
	void jumping(int t, int f);
};

#endif // !CONSTNODE_H
