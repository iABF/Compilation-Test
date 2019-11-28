#ifndef TYPENODE_H
#define TYPENODE_H
#include "ParseTreeNode.h"
class TypeNode : public ParseTreeNode {
	std::string typeName;
public:
	TypeNode(std::string typ);
	void printText(FILE *file, int depth);
};
#endif // !TYPENODE_H
