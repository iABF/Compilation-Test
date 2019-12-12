#ifndef CONSTNODE_H
#define CONSTNODE_H
#include "ParseTreeNode.h"
class ConstNode : public ParseTreeNode {
	double value;
	std::string type;
public:
	ConstNode(double val);
	ConstNode(double val, std::string typ);
	void printText(FILE *file, int depth);
	double getValue();
};
#endif // !CONSTNODE_H
