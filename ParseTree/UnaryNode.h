#ifndef UNARYNODE_H
#define UNARYNODE_H
#include "ParseTreeNode.h"
#include "ExpressionNode.h"
#include "TempNode.h"
class UnaryNode : public ExpressionNode {
public:
	int operatorType; // type index of operator
	ExpressionNode *expr;
	UnaryNode(int ope, ExpressionNode *e);
	void printText(FILE *file, int depth);
	std::string getOperator(); // get operator
	ExpressionNode* gen();
	ExpressionNode* reduce();
	std::string toString();
};
#endif // !UNARYNODE_H