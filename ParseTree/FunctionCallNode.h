#ifndef FUNCTIONCALLNODE_H
#define FUNCTIONCALLNODE_H
#include "ParseTreeNode.h"
#include "TypeNode.h"
#include "ExpressionNode.h"
class FunctionCallNode : public ExpressionNode {
public:
	ExpressionNode *callParamList;
	FunctionCallNode(std::string nam, ExpressionNode *par);
	void printText(FILE *file, int depth);
};
#endif // !FUNCTIONCALLNODE_H
