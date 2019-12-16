#include "TypeNode.h"

TypeNode::TypeNode(std::string typ, Tag tag)
{
	this->typeName = typ;
	this->tag = tag;
	if (tag == Tag::Pointer)this->width = 4;
	else if (tag == Tag::Basic) {
		if (typ == "int")this->width = 4;
		else if (typ == "bool")this->width = 1;
		else if (typ == "float")this->width = 4;
		else if (typ == "double")this->width = 8;
		else if (typ == "long int")this->width = 4;
		else if (typ == "long long int")this->width = 8;
	}
	
}

void TypeNode::printText(FILE * file, int depth)
{
	fprintf(file, "Type Specifier, %s\n", typeName.c_str());
}
