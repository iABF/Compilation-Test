#ifndef SYMTABLE_H
#define SYMTABLE_H

#include "ParseTree/VarNode.h"
#include <vector>
#include <unordered_map>

#define MAXSYM 50

struct symtable
{
    char *name;
    double value;
    double (*funcptr)();
};

struct symtable *symlook(char *s);
void addfunc(char *name, double (*func)());

class Env {
private:
	std::unordered_map<std::string, VarNode*>table;
	Env *father;
public:
	bool isfunc;
	TypeNode *returnType;
	Env(); // only use once
	Env(Env *f);
	VarNode* findSymbol(std::string s); // find in this environment
	VarNode* findDeepSymbol(std::string s); // find in this environment and all fathers
	void insert(std::string s, VarNode *var, int offset);
};
#endif
