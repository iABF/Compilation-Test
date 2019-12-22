#include "ArrayNode.h"
#include <sstream>
#include <assert.h>

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

TypeNode * ArrayNode::getOriginType()
{
	assert(hasOriginType);
	if (basicType->tag != Tag::Array)return basicType;
	return ((ArrayNode*)basicType)->getOriginType();
}

ArrayNode::ArrayNode(int len) :TypeNode(std::string(), Tag::Array)
{
	this->length = len;
	this->basicType = NULL;
	this->nodeId = NodeId::arraynode;
	this->hasOriginType = false;
}

void ArrayNode::setType(TypeNode * typ)
{
	if (this->basicType == NULL)this->basicType = typ;
	else {
		assert(this->basicType->tag == Tag::Array);
		((ArrayNode*)this->basicType)->setType(typ);
	}
	if (this->basicType->width) {
		this->width = length * this->basicType->width;
		this->hasOriginType = true;
	}
}

void ArrayNode::printText(FILE * file, int depth)
{
	fprintf(file, "Array Specifier, %s\n", getArrayName().c_str());
}
