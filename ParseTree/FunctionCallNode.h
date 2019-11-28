#ifndef FUNCTIONCALLNODE_H
#define FUNCTIONCALLNODE_H
#include "ParseTreeNode.h"
class FunctionCallNode : public ParseTreeNode {
	std::string returnType;
	std::string name;
	ParseTreeNode *callParamList;
	double value;
public:
	FunctionCallNode(std::string nam, ParseTreeNode *par);
	void printText(FILE *file, int depth);
};
#endif // !FUNCTIONCALLNODE_H
