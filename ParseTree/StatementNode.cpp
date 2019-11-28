#include "StatementNode.h"

StatementNode::StatementNode(int typ)
{
	statementType = typ;
}

void StatementNode::printText(FILE * file, int depth)
{
	if (statementType == 1)fprintf(file, "Expression Statement\n");
	else if (statementType == 2)fprintf(file, "Repeat Statement, while\n");
	else if (statementType == 3)fprintf(file, "Repeat Statement, for\n");
	else if (statementType == 4)fprintf(file, "Selection Statement\n");
	else if (statementType == 5)fprintf(file, "Var Declaration\n");
	else if (statementType == 6)fprintf(file, "IO Statement\n");
}
