#include "StatementNode.h"

StatementNode::StatementNode(int typ)
{
	statementType = typ;
}

void StatementNode::printText(FILE * file, int depth)
{
	if (statementType == 1)fprintf(file, "Assignment Statement\n");
	else if (statementType == 2)fprintf(file, "Repeat Statement, while\n");
	else if (statementType == 3)fprintf(file, "Repeat Statement, for\n");
	else if (statementType == 4)fprintf(file, "Selection Statement\n");
	else if (statementType == 5)fprintf(file, "Var Declaration\n");
	else if (statementType == 6)fprintf(file, "IO Statement\n");
	else if (statementType == 7)fprintf(file, "Compound Statement\n");
	else if (statementType == 8)fprintf(file, "Array Assignment Statement\n");
}

AssignNode::AssignNode(VarNode * i, ExpressionNode * e) : StatementNode(1)
{
	this->Id = i;
	this->expr = e;
}

TypeNode * AssignNode::check(TypeNode * a, TypeNode * b)
{
	if (a->btype == BasicType::Int&&b->btype == BasicType::Int)return b;
	if (a->btype == BasicType::Bool&&b->btype == BasicType::Bool)return b;
	return NULL;
}

void AssignNode::gen(int begin, int after)
{
	emit(this->Id->toString() + " = " + this->expr->gen()->toString());
}

AssignArrayNode::AssignArrayNode(AccessNode * a, ExpressionNode * e) : StatementNode(8)
{
	this->arr = a->arr;
	this->index = a->index;
	this->expr = e;
	assert(check(a->type, e->type) != NULL);
}

TypeNode * AssignArrayNode::check(TypeNode * a, TypeNode * b)
{
	if (a->tag == Tag::Array || b->tag == Tag::Array)return NULL;
	if (a->btype == b->btype)return b;
	if (a->btype == BasicType::Int&&b->btype == BasicType::Int)return b;
	return NULL;
}

void AssignArrayNode::gen(int begin, int after)
{
	emit(this->arr->toString() + " [ " + this->index->reduce()->toString() + " ] = " + this->expr->reduce()->toString());
}
