#ifndef VARNODE_H
#define VARNODE_H
#include "ParseTreeNode.h"
class VarNode : public ParseTreeNode {
	double value;
	std::string type;
	std::string name;
public:
	VarNode(std::string nam, double val);
	VarNode(std::string nam);
	void setValue(double val);
	void printText(FILE *file, int depth);
};
#endif // !VARNODE_H
