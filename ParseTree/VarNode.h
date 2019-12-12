#ifndef VARNODE_H
#define VARNODE_H
#include "ParseTreeNode.h"
#include "TypeNode.h"
class VarNode : public ParseTreeNode {
	double value;
	TypeNode *type;
	std::string name;
public:
	VarNode(std::string nam, double val);
	VarNode(std::string nam);
	void setValue(double val); // to be fixed
	void printText(FILE *file, int depth);
	void setType(TypeNode *type); // set type of this node
	std::string getVarName();
	inline double getValue() { return this->value; }
};
#endif // !VARNODE_H
