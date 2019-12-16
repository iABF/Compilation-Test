#include "ParamNode.h"

ParamNode::ParamNode(TypeNode *t, VarNode *v)
{
	this->var = v;
	this->type = t;
}

void ParamNode::printText(FILE * file, int depth)
{
	fprintf(file, "Function Parameter, %s\n", this->var->getVarName().c_str());
}
