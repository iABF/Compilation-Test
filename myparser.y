%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2019��9��16��
****************************************************************************/
#include "mylexer.h"
#include "symtable.h"
#include "./ParseTree/ParseTree.h"
struct symtable symtable[MAXSYM];
class ParseTreeNode;
%}
/////////////////////////////////////////////////////////////////////////////
// declarations section
%left ','
%right DIVIDEASSIGN MULTIPLYASSIGN MODASSIGN ADDASSIGN ABTRACTASSIGN
%right CONDITIONALOPERATOR
%left OR
%left AND
%left '|'
%left '&'
%left EQ NE
%left '<' LE '>' GE
%left '+' '-'
%left '/' '*' '%'
%right '^'
%nonassoc UMINUS POINT AUTODECRE AUTOINCRE ADDRESS
%nonassoc BRACKET
%token IF THEN ELSE RELOP VOID '(' ')' LBRACE RBRACE '[' ']' '!' INT DEFINE STRING INCLUDE WHILE FOR RETURN GOTO GETCHAR STRUCT LONGINT DOUBLE LONGLONGINT FLOAT BOOL SHORT BYTE SCAN PRINT
%union {
	double dval;
	struct symtable *symp;
	class ParseTreeNode *node;
	class RootNode *rootnode;
	class FunctionNode *functionnode;
	class VarNode *varnode;
	class ParamNode *paramnode;
	class TypeNode *typenode;
	class CompoundStatementNode *compoundstatementnode;
	class StatementNode *statementnode;
	class WhileLoopStatementNode *whileloopstatementnode;
	class ForLoopStatementNode *forloopstatementnode;
	class OperatorNode *operatornode;
	class SelectionStatementNode *selectionstatementnode;
}
%token <symp> ID
%token <dval> NUMBER
%type <rootnode> prog // <top_level_definition, top_level_definition, ...>, just everything [RootNode]
%type <node> top_level_definition_list // [VarNode] / [FunctionNode]
%type <node> top_level_definition // [VarNode] / [FunctionNode]
%type <varnode> top_level_declarator_list // [VarNode]
%type <varnode> var_declarator // [VarNode]
%type <functionnode> function_declarator // [FunctionNode]
%type <paramnode> param_list // <param, param, ...>, for function params [ParamNode]
%type <paramnode> param // <type ID>, for function params [ParamNode]
%type <typenode> type // Just type [TypeNode]
%type <compoundstatementnode> code_block // Compound statements [CompoundStatementNode]
%type <statementnode> statement_list // <statement, statement, ...>, just statement [StatementNode]
%type <statementnode> statement // For all statements [StatementNode]
%type <statementnode> io_statement // Scan/print statement [StatementNode]
%type <whileloopstatementnode> while_loop_statement // While statement [WhileLoopStatementNode]
%type <forloopstatementnode> for_front // Front of for-loop statement [ForLoopStatementNode]
%type <forloopstatementnode> for_loop_statement // For-loop statement [ForLoopStatementNode]
%type <statementnode> var_definition // <type (ID/assignment_expression)+ ;>, to be fixed [StatementNode]
%type <varnode> var_declaration_list // [VarNode]
%type <varnode> var_declaration // [VarNode]
%type <operatornode> assignment_expression // <ID = expression>, whose value is right-hand expression [OperatorNode]
%type <node> expression // Expression that has a value [OperatorNode] / [VarNode]
%type <selectionstatementnode> selection_statement // Selection statement [SelectionStatementNode]
// parser name
%name myparser
// attribute type
%include {
#ifndef YYSTYPE
#define YYSTYPE int
#endif
}
// place any declarations here
%{
	RootNode *root = NULL;
%}
%%
/////////////////////////////////////////////////////////////////////////////
// rules section
prog: top_level_definition_list {
		root = new RootNode();
		root->addChildNode($1);
		$$ = root;
		$$->print();
	};
top_level_definition_list: top_level_definition top_level_definition_list {
		if($2 != NULL)$1->addPeerNode($2);
		$$ = $1;
	} | {
		$$ = NULL;
	};
top_level_definition: type top_level_declarator_list ';' {
		$$ = $2; // assert $2 is a VarNode
		VarNode *cur = (VarNode*)$$;
		cur->setType($1);
		while(cur->getNextPeerNode() != NULL) {
			cur = (VarNode*)cur->getNextPeerNode();
			cur->setType($1);
		}
		$$->print();
	} | type function_declarator code_block {
		$$ = $2; // assert $2 is a FunctionNode
		$2->setReturnType($1);
		$2->setBody($3);
		$$->print();
	} | type ';'
	;
top_level_declarator_list: var_declarator {
		$$ = $1; // anyway, $1 is a VarNode
	} | var_declarator ',' top_level_declarator_list {
		$$ = $1;
		$1->addPeerNode($3);
	};
var_declarator: ID {
		VarNode *cur = new VarNode(string($1->name));
		$$ = cur;
		/* Add checking symtable for value and type. */
	} | ID '[' NUMBER ']'
	;
function_declarator: ID '(' param_list ')' {
		FunctionNode *cur = new FunctionNode(string($1->name));
		// assert $3 is a ParamNode
		cur->setParam($3);
		$$ = cur;
	} | ID '(' ')' {
		FunctionNode *cur = new FunctionNode(string($1->name));
		$$ = cur;
	};
param_list: param {
		$$ = $1; // assert $1 is a ParamNode
	} | param ',' param_list {
		$$ = $1;
		$1->addPeerNode($3);
	};
param: type var_declarator {
		// assert $1 is a TypeNode, $2 is a VarNode
		ParamNode *cur = new ParamNode($1, $2);
		$$ = cur;
	};
type: DOUBLE {
		TypeNode *cur = new TypeNode("double");
		$$ = cur;
	} | FLOAT {
		TypeNode *cur = new TypeNode("float");
		$$ = cur;
	} | BOOL {
		TypeNode *cur = new TypeNode("bool");
		$$ = cur;
	} | LONGINT {
		TypeNode *cur = new TypeNode("long int");
		$$ = cur;
	} | LONGLONGINT {
		TypeNode *cur = new TypeNode("long long int");
		$$ = cur;
	} | BYTE {
		TypeNode *cur = new TypeNode("byte");
		$$ = cur;
	} | STRUCT					
	| INT {
		TypeNode *cur = new TypeNode("int");
		$$ = cur;
	} | VOID {
		TypeNode *cur = new TypeNode("void");
		$$ = cur;
	};
code_block: LBRACE statement_list RBRACE {
		CompoundStatementNode *cur = new CompoundStatementNode();
		cur->addChildNode($2);
		$$ = cur;
	};
statement_list: statement {$$ = $1;}
	| statement_list statement {
		$1->addPeerNode($2);
		$$ = $1;
	};
statement: expression ';' {
		StatementNode *cur = new StatementNode(1);
		cur->addChildNode($1);
		$$ = cur;
	} | while_loop_statement {
		$$ = $1;
	} | for_loop_statement {
		$$ = $1;
	} | selection_statement {
		$$ = $1;
	} | var_definition {
		$$ = $1;
	} | io_statement ';' {
		$$ = $1;
	};
io_statement: SCAN '(' expression ')' {
		StatementNode *cur = new StatementNode(6);
		cur->addChildNode($3);
		$$ = cur;
	} | PRINT '(' expression ')' {
		StatementNode *cur = new StatementNode(6);
		cur->addChildNode($3);
		$$ = cur;
	};

while_loop_statement: WHILE '(' expression ')' code_block {
		WhileLoopStatementNode *cur = new WhileLoopStatementNode($3, $5);
		$$ = cur;
	} | WHILE '(' expression ')' statement {
		WhileLoopStatementNode *cur = new WhileLoopStatementNode($3, $5);
		$$ = cur;
	};
for_loop_statement: for_front code_block {
		$1->setBlock($2);
		$$ = $1;
	} | for_front statement {
		$1->setBlock($2);
		$$ = $1;
	};
for_front: FOR '(' expression ';' expression ';' expression ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode($3, $5, $7);
		$$ = cur;
	} | FOR '(' type assignment_expression ';' expression ';' expression ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode($4, $6, $8);
		$$ = cur;
	} | FOR '(' expression ';' expression ';' ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode($3, $5, NULL);
		$$ = cur;
	} | FOR '(' type assignment_expression ';' expression ';' ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode($4, $6, NULL);
		$$ = cur;
	} | FOR '(' expression ';' ';' expression ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode($3, NULL, $6);
		$$ = cur;
	} | FOR '(' type assignment_expression ';' ';' expression ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode($4, NULL, $7);
		$$ = cur;
	} | FOR '(' ';' expression ';' expression ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, $4, $6);
		$$ = cur;
	} | FOR '(' expression ';' ';' ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode($3, NULL, NULL);
		$$ = cur;
	} | FOR '(' type assignment_expression ';' ';' ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode($4, NULL, NULL);
		$$ = cur;
	} | FOR '(' ';' expression ';' ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, $4, NULL);
		$$ = cur;
	} | FOR '(' ';' ';' expression ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, NULL, $5);
		$$ = cur;
	} | FOR '(' ';' ';' ')' {
		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, NULL, NULL);
		$$ = cur;
	};

var_definition: type var_declaration_list ';' {
		StatementNode *cu = new StatementNode(5);
		cu->addChildNode($2);
		$$ = cu;
		// assert $2 is a VarNode
		VarNode *cur = $2;
		cur->setType($1);
		while(cur->getNextPeerNode() != NULL) {
			cur = (VarNode*)cur->getNextPeerNode();
			cur->setType($1);
		}
	};
var_declaration_list: var_declaration {
		// assert $1 is a VarNode
		$$ = $1;
	} | var_declaration ',' var_declaration_list {
		// assert $1 is a VarNode
		$$ = $1;
		$1->addPeerNode($3);
	};
var_declaration: var_declarator {
		// assert $1 is a VarNode
		$$ = $1;
	} | var_declarator '=' expression {
		// assert $1 is a VarNode, and $$ is a VarNode
		$$ = $1;
		$$->setValue($3->getValue());
	};
assignment_expression: expression '=' expression {
		// special for ForLoopStatement
		// assert $1 is a VarNode or an OperatorNode, instead of a ConstNode
		OperatorNode *cur = new OperatorNode($3->getValue(), 1);
		$1->setValue($3->getValue());
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	};
expression: assignment_expression {
		$$ = $1;
	} | expression '+' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() + $3->getValue(), 2);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression '-' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() - $3->getValue(), 3);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression '*' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() * $3->getValue(), 4);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression '/' expression {
		ParseTreeNode *cur;
		if($3->getValue() != 0.0)cur = new OperatorNode($1->getValue() / $3->getValue(), 5);
		else {
			yyerror("Divide by zero.\n");
			cur = new OperatorNode(0, 0);
		}
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression '%' expression {
		ParseTreeNode *cur;
		if($3->getValue() != 0.0)cur = new OperatorNode((int)$1->getValue() % (int)$3->getValue(), 6);
		else {
			yyerror("Mod by zero.\n");
			cur = new OperatorNode(0, 0);
		}
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression '<' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() < $3->getValue(), 7);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression '>' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() > $3->getValue(), 8);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression EQ expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() == $3->getValue(), 9);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression LE expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() <= $3->getValue(), 10);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression GE expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() >= $3->getValue(), 11);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression NE expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() != $3->getValue(), 12);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression AND expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() && $3->getValue(), 13);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression OR expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() || $3->getValue(), 14);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | expression '^' expression {
		ParseTreeNode *cur = new OperatorNode(pow($1->getValue(), $3->getValue()), 15);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	} | '-' expression %prec UMINUS {
		ParseTreeNode *cur = new OperatorNode(-$2->getValue(), 16);
		cur->addChildNode($2);
		$$ = cur;
	} | '(' expression ')' {
		$$ = $2;
	} | NUMBER {
		ParseTreeNode *cur = new ConstNode($1);
		$$ = cur;
	} | var_declarator {
		// assert $1 is a VarNode
		$$ = $1;
	};
selection_statement: IF '(' expression ')' code_block {
		SelectionStatementNode *cur = new SelectionStatementNode($3, $5);
		$$ = cur;
	} | IF '(' expression ')' statement {
		SelectionStatementNode *cur = new SelectionStatementNode($3, $5);
		$$ = cur;
	} | IF '(' expression ')' code_block ELSE code_block {
		SelectionStatementNode *cur = new SelectionStatementNode($3, $5, $7);
		$$ = cur;
	} | IF '(' expression ')' code_block ELSE statement {
		SelectionStatementNode *cur = new SelectionStatementNode($3, $5, $7);
		$$ = cur;
	} | IF '(' expression ')' statement ELSE code_block {
		SelectionStatementNode *cur = new SelectionStatementNode($3, $5, $7);
		$$ = cur;
	} | IF '(' expression ')' statement ELSE statement {
		SelectionStatementNode *cur = new SelectionStatementNode($3, $5, $7);
		$$ = cur;
	};

%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	getchar();
	return n;
}

