#ifndef INTERCODEGENERATOR_H
#define INTERCODEGENERATOR_H
#include "ParseTree/ParseTree.h"
#include "symtable.h"
class InterCodeGenerator {
	RootNode *root;
	Env *rootEnv; // Root Environment
	std::unordered_map<std::string, FunctionNode*>functionTable;
	void generateTopLevelDefinition(TopLevelDefinitionNode *node);
	void generateParameter(ParamNode *node);
	void generateCodeBlock(CompoundStatementNode *node, int beg, int aft);
	void generateStatement(StatementNode *node, int beg, int aft);
	void generateAssign(AssignNode *node);
	void generateAssignArray(AssignArrayNode *node);
	void generateWhileLoopStatement(WhileLoopStatementNode *node, int beg, int aft);
	void generateForLoopStatement(ForLoopStatementNode *node, int beg, int aft);
	void generateSelectionStatement(SelectionStatementNode *node, int beg, int aft);
	void generateVarDefinition(StatementNode *node); // [Enhanced edition] of TopLevelDefinition::var

	ExpressionNode* gen(ExpressionNode* node);
	ExpressionNode* reduce(ExpressionNode* node);
	std::string toString(ExpressionNode* node);
	void jumping(ExpressionNode* node, int t, int f);
	void emitjumps(std::string boolean, int t, int f);

	void refresh(LogicalNode* node);
	ExpressionNode* refreshID(ExpressionNode* node);
	
public:
	InterCodeGenerator(RootNode *r);
	void generate();
	std::vector<Env*>envStack;
};
#endif // !INTERCODEGENERATOR_H
