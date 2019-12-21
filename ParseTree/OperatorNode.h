#ifndef OPERATORNODE_H
#define OPERATORNODE_H
#include "ParseTreeNode.h"
#include "ExpressionNode.h"
#include "TempNode.h"
class OperatorNode : public ExpressionNode {
public:
	int operatorType; // type index of operator
	ExpressionNode *left;
	ExpressionNode *right;
	OperatorNode(int ope, ExpressionNode *l, ExpressionNode *r);
	void printText(FILE *file, int depth);
	std::string getOperator(); // get operator
	TypeNode* maxt(TypeNode *a, TypeNode *b);
};
#endif // !OPERATORNODE_H
