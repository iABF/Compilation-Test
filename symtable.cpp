#include "symtable.h"



Env::Env()
{
	father = NULL;
}

Env::Env(Env * f)
{
	father = f;
}

VarNode * Env::findSymbol(std::string s)
{
	if (this->table.find(s) != this->table.end()) return this->table[s];
	return NULL;
}

VarNode * Env::findDeepSymbol(std::string s)
{
	if (this->table.find(s) != this->table.end()) return this->table[s];
	Env *cur = this;
	while (cur->father != NULL) {
		cur = cur->father;
		if (cur->table.find(s) != cur->table.end()) return cur->table[s];
	}
	return NULL;
}

void Env::insert(std::string s, VarNode * var, int offset)
{
	// assert this->table[s] does not exist
	this->table[s] = var;
	extern int variCount;
	var->varNumber = variCount++;
	var->setOffset(offset);
}