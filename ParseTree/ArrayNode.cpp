#include "ArrayNode.h"
#include <sstream>

std::string ArrayNode::getArrayName()
{
	std::string fathername;
	std::stringstream ss;
	ss << length;
	std::string le = ss.str();
	if (basicType->tag == Tag::Array)fathername = basicType->getArrayName();
	else fathername = typeName;
	return fathername + "[" + le + "]";
}

ArrayNode::ArrayNode(int len) :TypeNode(std::string(), Tag::Array)
{
	this->length = len;
	this->basicType = NULL;
}

void ArrayNode::setType(TypeNode * typ)
{
	this->basicType = typ;
	this->width = length * typ->width;
}

void ArrayNode::printText(FILE * file, int depth)
{
	fprintf(file, "Array Specifier, %s\n", getArrayName().c_str());
}
