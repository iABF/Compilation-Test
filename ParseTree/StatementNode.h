#ifndef STATEMENTNODE_H
#define STATEMENTNODE_H
#include "ParseTreeNode.h"
#include "VarNode.h"
#include "AccessNode.h"
#include <assert.h>
#include <string>
class StatementNode : public ParseTreeNode {
public:
	int statementType; // type of the statement (if-else, while,...)
	StatementNode() {}
	StatementNode(int typ);
	void printText(FILE *file, int depth);
	int next = 0;
	static StatementNode *Null;
};


class AssignNode : public StatementNode {
public:
	VarNode *Id;
	ExpressionNode *expr;
	AssignNode(VarNode *i, ExpressionNode *e);
	TypeNode* check(TypeNode *a, TypeNode *b);
};

class AssignArrayNode : public StatementNode {
public:
	VarNode *arr;
	ExpressionNode *index;
	ExpressionNode *expr;
	AssignArrayNode(AccessNode *a, ExpressionNode *e);
	TypeNode* check(TypeNode *a, TypeNode *b);
};

class FunctionStatement : public StatementNode {
public:
	std::string name;
	ExpressionNode *callParamList;
	inline FunctionStatement(std::string nam, ExpressionNode *par) : StatementNode(9) {
		this->name = nam;
		this->callParamList = par;
	}
};

class ReturnStatement : public StatementNode {
public:
	ExpressionNode *expr;
	inline ReturnStatement(ExpressionNode *e) :StatementNode(10) {
		this->expr = e;
	}
};
#endif // !STATEMENTNODE_H
