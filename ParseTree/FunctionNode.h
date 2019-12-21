#ifndef FUNCTIONNODE_H
#define FUNCTIONNODE_H
#include "ParseTreeNode.h"
#include "ParamNode.h"
#include "TypeNode.h"
#include "CompoundStatementNode.h"
class FunctionNode : public ParseTreeNode {
public:
	std::string name;
	TypeNode *returnType;
	ParamNode *paramList;
	CompoundStatementNode *functionBody;
	FunctionNode(std::string nam);
	void printText(FILE *file, int depth);
	inline void setReturnType(TypeNode *typ) { returnType = typ; }
	inline void setParam(ParamNode *par) { paramList = par; }
	inline void setBody(CompoundStatementNode *body) { functionBody = body; }
};
#endif // !FUNCTIONNODE_H
