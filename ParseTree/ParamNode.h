#ifndef PARAMNODE_H
#define PARAMNODE_H
#include "ParseTreeNode.h"
class ParamNode : public ParseTreeNode {
	std::string name; // name of the param
	std::string type; // type of the param, to be changed to (ParseTreeNode*)
public:
	ParamNode(std::string nam, std::string typ);
	void printText(FILE *file, int depth);
};
#endif // !PARAMNODE_H
