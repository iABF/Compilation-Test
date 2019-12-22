#ifndef VARNODE_H
#define VARNODE_H
#include "ParseTreeNode.h"
#include "TypeNode.h"
#include "ArrayNode.h"
#include "ExpressionNode.h"

class VarNode : public ExpressionNode {
public:
	int offset;
	int varNumber;
	VarNode(std::string nam);
	void printText(FILE *file, int depth);
	void setType(TypeNode *type); // set type of this node
	std::string getVarName();
	inline TypeNode* getType() { return this->type; }
	inline void setOffset(int off) { this->offset = off; }
};


#endif // !VARNODE_H
