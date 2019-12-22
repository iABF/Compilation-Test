#ifndef ARRAYNODE_H
#define ARRAYNODE_H
#include "ParseTreeNode.h"
#include "TypeNode.h"
class ArrayNode : public TypeNode {
public:
	TypeNode *basicType;
	int length;
	bool hasOriginType;
	ArrayNode(int len);
	void setType(TypeNode *typ);
	void printText(FILE *file, int depth);
	std::string getArrayName();
	TypeNode* getOriginType();
};
#endif // !ARRAYNODE_H
