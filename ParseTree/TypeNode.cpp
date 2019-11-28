#include "TypeNode.h"

TypeNode::TypeNode(std::string typ)
{
	typeName = typ;
}

void TypeNode::printText(FILE * file, int depth)
{
	fprintf(file, "Type Specifier, %s\n", typeName.c_str());
}
