#include "VarNode.h"

VarNode::VarNode(std::string nam, double val)
{
	value = val;
	name = nam;
	this->type = NULL;
}

VarNode::VarNode(std::string nam)
{
	name = nam;
	this->type = NULL;
}

void VarNode::setValue(double val)
{
	this->value = val;
}

void VarNode::printText(FILE * file, int depth)
{
	if (this->type->tag == Tag::Basic)fprintf(file, "ID Declaration, %s\n", name.c_str());
	else if (this->type->tag == Tag::Array)fprintf(file, "Array Declaration, %s\n", (name + ((ArrayNode*)(this->type))->getArrayName()).c_str());
}

void VarNode::setType(TypeNode * type)
{
	if(this->type == NULL)this->type = type;
	else {
		// casting needed
		if (this->type->tag == Tag::Array) {
			ArrayNode* cur = (ArrayNode*)this->type;
			if (cur->basicType == NULL) {
				cur->setType(type);
			}
			else {
				// casting needed
			}
		}
	}
}

std::string VarNode::getVarName()
{
	return name;
}
