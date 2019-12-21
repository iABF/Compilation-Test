#ifndef TYPENODE_H
#define TYPENODE_H
#include "ParseTreeNode.h"
enum Tag {
	Basic,
	Array,
	Struct,
	Pointer
};
enum BasicType {
	Int,
	Bool,
	Void
};
class TypeNode : public ParseTreeNode {
public:
	std::string getArrayName() { return std::string(); };
	std::string typeName; // basic type of this type
	int width;
	int tag;
	int btype;
	TypeNode(std::string typ, Tag tag = Tag::Basic);
	void printText(FILE *file, int depth);
};
#endif // !TYPENODE_H
