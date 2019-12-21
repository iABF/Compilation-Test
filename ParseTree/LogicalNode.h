#ifndef LOGICALNODE_H
#define LOGICALNODE_H
#include "ParseTreeNode.h"
#include "ExpressionNode.h"
#include "InterTools.h"
#include "ArrayNode.h"
#include <assert.h>
#include "TempNode.h"
class LogicalNode : public ExpressionNode {
public:
	ExpressionNode *left;
	ExpressionNode *right;
	LogicalNode(std::string ope, ExpressionNode *l, ExpressionNode *r);
	TypeNode* check(TypeNode *a, TypeNode *b);
	void printText(FILE *file, int depth) {}
};

class OrNode : public LogicalNode {
public:
	inline OrNode(ExpressionNode *l, ExpressionNode *r) : LogicalNode("||", l, r) { this->nodeId = NodeId::ornode; }
};

class AndNode : public LogicalNode {
public:
	inline AndNode(ExpressionNode *l, ExpressionNode *r) : LogicalNode("&&", l, r) { this->nodeId = NodeId::andnode; }
};

class NotNode : public LogicalNode {
public:
	inline NotNode(ExpressionNode *expr) : LogicalNode("!", expr, expr) { this->nodeId = NodeId::notnode; }
};

class RelNode : public LogicalNode {
public:
	inline RelNode(std::string ope, ExpressionNode *l, ExpressionNode *r) : LogicalNode(ope, l, r) { this->nodeId = NodeId::relnode; }
	TypeNode* check(TypeNode *a, TypeNode *b);
};
#endif // !LOGICALNODE_H
