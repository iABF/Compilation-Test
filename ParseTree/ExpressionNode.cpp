#include "ExpressionNode.h"

std::string ExpressionNode::toString()
{
	return this->name;
}

void ExpressionNode::jumping(int t, int f)
{
	emitjumps(toString(), t, f);
}

void ExpressionNode::emitjumps(std::string boolean, int t, int f)
{
	if (t&&f) {
		emit("if " + boolean + " goto L" + int2str(t));
		emit("goto L" + int2str(f));
	}
	else if (t)emit("if " + boolean + " goto L" + int2str(t));
	else if (f)emit("iffalse " + boolean + " goto L" + int2str(f));
}
