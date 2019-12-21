#include "SelectionStatementNode.h"

SelectionStatementNode::SelectionStatementNode(ExpressionNode *cond, StatementNode *t, StatementNode *f): StatementNode(4)
{
	this->condition = cond;
	this->trueBlock = t;
	this->falseBlock = f;
}

void SelectionStatementNode::printText(FILE * file, int depth)
{
	fprintf(file, "Selection Statement, ");
	if (this->falseBlock != NULL)fprintf(file, "if-else\n");
	else fprintf(file, "if\n");
	printNode(this->condition, depth + 1, file);
	printNode(this->trueBlock, depth + 1, file);
	if (this->falseBlock != NULL)printNode(this->falseBlock, depth + 1, file);
}

void SelectionStatementNode::gen(int begin, int after)
{
	if (this->falseBlock == NULL) {
		int label = newlabel();
		this->condition->jumping(0, after);
		emitLabel(label);
		this->trueBlock->gen(label, after);
	}
	else {
		int label1 = newlabel();
		int label2 = newlabel();
		this->condition->jumping(0, label2);
		emitLabel(label1);
		this->trueBlock->gen(label1, after);
		emit("goto L" + int2str(after));
		emitLabel(label2);
		this->falseBlock->gen(label2, after);
	}
}
