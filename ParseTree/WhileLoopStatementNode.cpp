#include "WhileLoopStatementNode.h"

WhileLoopStatementNode::WhileLoopStatementNode(ExpressionNode *cond, StatementNode *b) :StatementNode(2)
{
	this->condition = cond;
	this->block = b;
}

void WhileLoopStatementNode::printText(FILE * file, int depth)
{
	fprintf(file, "Repeat Statement, while\n");
	printNode(this->condition, depth + 1, file);
	printNode(this->block, depth + 1, file);
}

void WhileLoopStatementNode::gen(int begin, int after)
{
	this->next = after;
	this->condition->jumping(0, after);
	int label = newlabel();
	emitLabel(label);
	this->block->gen(label, begin);
	emit("goto L" + int2str(begin));
}
