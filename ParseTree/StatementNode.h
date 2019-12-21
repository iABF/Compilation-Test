#ifndef STATEMENTNODE_H
#define STATEMENTNODE_H
#include "ParseTreeNode.h"
#include "VarNode.h"
#include "AccessNode.h"
#include <assert.h>
class StatementNode : public ParseTreeNode {
public:
	int statementType; // type of the statement (if-else, while,...)
	StatementNode() {}
	StatementNode(int typ);
	void printText(FILE *file, int depth);
	void gen(int begin, int after) {}
	int next = 0;
	static StatementNode *Null;
};


class AssignNode : public StatementNode {
public:
	VarNode *Id;
	ExpressionNode *expr;
	AssignNode(VarNode *i, ExpressionNode *e);
	TypeNode* check(TypeNode *a, TypeNode *b);
	void gen(int begin, int after); // to be removed
};

class AssignArrayNode : public StatementNode {
public:
	VarNode *arr;
	ExpressionNode *index;
	ExpressionNode *expr;
	AssignArrayNode(AccessNode *a, ExpressionNode *e);
	TypeNode* check(TypeNode *a, TypeNode *b);
	void gen(int begin, int after);
};
#endif // !STATEMENTNODE_H
