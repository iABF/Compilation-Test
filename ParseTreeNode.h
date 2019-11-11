#ifndef PARSETREENODE_H
#define PARSETREENODE_H
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
class ParseTreeNode {
	std::string type;
	std::string value;
	double dval;
	ParseTreeNode *peer; // allows a peer-chain
	ParseTreeNode *child; // only one child allowed
protected:
	inline ParseTreeNode* getNextPeerNode() { return this->peer; }
	ParseTreeNode* getLastPeerNode();
	void printNode(ParseTreeNode *root, int depth, FILE *file);
public:
	ParseTreeNode(std::string t, std::string v);
	ParseTreeNode(std::string t, std::string v, double val);
	void print();
	inline ParseTreeNode* getChildNode() { return this->child; }
	inline void addChildNode(ParseTreeNode *c) { this->child = c; }
	inline double getValue() { return this->dval; }
	inline void setValue(double val) { this->dval = val; }
	inline std::string getText() { return type + ", " + value; }
	void addPeerNode(ParseTreeNode *p);
};
#endif