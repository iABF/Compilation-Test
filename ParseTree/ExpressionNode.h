#ifndef EXPRESSIONNODE_H
#define EXPRESSIONNODE_H
#include "ParseTreeNode.h"
#include "TypeNode.h"
#include "InterTools.h"
class ExpressionNode : public ParseTreeNode {
public:
	std::string name;
	TypeNode *type;
	inline ExpressionNode(std::string nam, TypeNode *typ) :name(nam), type(typ) { this->nodeId = NodeId::expressionnode; }
	inline void printText(FILE *file, int depth) {}
};
#endif // !EXPRESSIONNODE_H
