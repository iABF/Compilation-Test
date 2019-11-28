#ifndef FUNCTIONNODE_H
#define FUNCTIONNODE_H
#include "ParseTreeNode.h"
#include "ParamNode.h"
class FunctionNode : public ParseTreeNode {
	std::string returnType;
	ParseTreeNode *paramList;
	std::string name;
public:
	FunctionNode(std::string nam, ParseTreeNode *par, std::string ret);
	void printText(FILE *file, int depth);
};
#endif // !FUNCTIONNODE_H
