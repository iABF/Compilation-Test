#ifndef PARAMNODE_H
#define PARAMNODE_H
#include "ParseTreeNode.h"
#include "TypeNode.h"
#include "VarNode.h"
class ParamNode : public ParseTreeNode {
	VarNode *var; // variable of the param
	TypeNode *type; // type of the param, to be changed to (ParseTreeNode*)
public:
	ParamNode(TypeNode *t, VarNode *v);
	void printText(FILE *file, int depth);
};
#endif // !PARAMNODE_H
