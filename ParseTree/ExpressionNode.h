#ifndef EXPRESSIONNODE_H
#define EXPRESSIONNODE_H
#include "ParseTreeNode.h"
#include "TypeNode.h"
#include "InterTools.h"
class ExpressionNode : public ParseTreeNode {
public:
	std::string name;
	TypeNode *type;
	inline ExpressionNode* gen() { return this; }
	inline ExpressionNode* reduce() { return this; }
	inline ExpressionNode(std::string nam, TypeNode *typ) :name(nam), type(typ) { this->nodeId = NodeId::expressionnode; }
	inline void printText(FILE *file, int depth) {}
	std::string toString(); // to be removed
	void jumping(int t, int f);
	void emitjumps(std::string boolean, int t, int f);
};
#endif // !EXPRESSIONNODE_H
