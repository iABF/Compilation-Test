#ifndef OPERATORNODE_H
#define OPERATORNODE_H
#include "ParseTreeNode.h"
class OperatorNode : public ParseTreeNode {
	double value; // value of this expression
	int operatorType; // type index of operator
	std::string getOperator(); // get operator
	std::string valueType; // value type of this expression, to be changed to (ParseTreeNode*)
public:
	OperatorNode(double val, int ope);
	void printText(FILE *file, int depth);
	double getValue();
	inline void setValue(double val) { this->value = val; }
};
#endif // !OPERATORNODE_H
