#ifndef PARSETREENODE_H
#define PARSETREENODE_H
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
enum NodeId {
	arraynode,
	Default,
	varnode,
	accessnode,
	expressionnode,
	operatornode,
	logicalnode,
	ornode,
	andnode,
	notnode,
	relnode,
	tempnode,
	unarynode,
	constnode,
	statementnode,
	functioncallnode,
};
class ParseTreeNode {
	ParseTreeNode *peer; // allows a peer-chain
	ParseTreeNode *child; // only one child allowed
protected:
	ParseTreeNode* getLastPeerNode();
	void printNode(ParseTreeNode *root, int depth, FILE *file);
	virtual void printText(FILE *file, int depth) = 0;
public:
	NodeId nodeId;
	int nodeType; // for expression: op=1, varbasic=2, vararray=3, constnode=4
	ParseTreeNode();
	void print();
	inline ParseTreeNode* getNextPeerNode() { return this->peer; }
	inline ParseTreeNode* getChildNode() { return this->child; }
	inline void addChildNode(ParseTreeNode *c) { this->child = c; }
	void addPeerNode(ParseTreeNode *p);
	virtual void setBlock(ParseTreeNode *b) {};
	virtual double getValue() { return 0; };
	virtual void setValue(double val) {};
};
#endif