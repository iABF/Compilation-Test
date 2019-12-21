#include "TypeNode.h"

TypeNode::TypeNode(std::string typ, Tag tag)
{
	this->typeName = typ;
	this->tag = tag;
	this->btype = 0;
	if (tag == Tag::Pointer)this->width = 4;
	else if (tag == Tag::Basic) {
		if (typ == "int") {
			this->width = 4;
			this->btype = BasicType::Int;
		}
		else if (typ == "bool") {
			this->width = 1;
			this->btype = BasicType::Bool;
		}
		else if (typ == "void") {
			this->width = 0;
			this->btype = BasicType::Void;
		}
	}
	else if (tag == Tag::Array)this->width = 0;
}

void TypeNode::printText(FILE * file, int depth)
{
	fprintf(file, "Type Specifier, %s\n", typeName.c_str());
}
