#include "VarNode.h"

VarNode::VarNode(std::string nam) :ExpressionNode(nam, NULL)
{
	offset = 0;
	this->nodeId = NodeId::varnode;
}



void VarNode::printText(FILE * file, int depth)
{
	fprintf(file, "ID Declaration, %s\n", name.c_str());
}

void VarNode::setType(TypeNode * type)
{
	if(this->type == NULL)this->type = type;
	else if (this->type->tag == Tag::Array) {
		ArrayNode* cur = (ArrayNode*)this->type;
		cur->setType(type);
	}
}

std::string VarNode::getVarName()
{
	return name;
}




