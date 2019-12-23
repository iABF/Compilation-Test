%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2019��9��16��
****************************************************************************/
#include "mylexer.h"
#include "symtable.h"
#include "./ParseTree/ParseTree.h"
#include "InterCodeGenerator.h"
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
%token IF THEN ELSE RELOP VOID '(' ')' LBRACE RBRACE '[' ']' '!' INT DEFINE STRING INCLUDE WHILE FOR RETURN STRUCT BOOL
%union {
	int dval;
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
	class ExpressionNode *expressionnode;
}
%token <symp> ID
%token <dval> NUMBER
%type <rootnode> prog // <top_level_definition, top_level_definition, ...>, just everything [RootNode]
%type <node> top_level_definition_list // [ParseTreeNode]
%type <node> top_level_definition // [ParseTreeNode]
%type <varnode> top_level_declarator_list // [VarNode]
%type <varnode> var_declarator // [VarNode]
%type <functionnode> function_declarator // [FunctionNode]
%type <paramnode> param_list // <param, param, ...>, for function params [ParamNode]
%type <paramnode> param // <type ID>, for function params [ParamNode]
%type <typenode> type // Just type [TypeNode] / [ArrayNode]
%type <compoundstatementnode> code_block // Compound statements [CompoundStatementNode]
%type <statementnode> statement_list // <statement, statement, ...>, just statement [StatementNode]
%type <statementnode> statement // For all statements [StatementNode]
%type <statementnode> io_statement // Scan/print statement [StatementNode]
%type <whileloopstatementnode> while_loop_statement // While statement [WhileLoopStatementNode]
%type <forloopstatementnode> for_loop_statement // For-loop statement [ForLoopStatementNode]
%type <statementnode> var_definition // <type (ID/assignment_expression)+ ;>, to be fixed [StatementNode]
%type <varnode> var_declaration_list // [VarNode]
%type <varnode> var_declaration // [VarNode]
%type <operatornode> assignment_expression // <ID = expression>, whose value is right-hand expression [OperatorNode]
%type <expressionnode> expression // Expression that has a value [OperatorNode] / [VarNode]
%type <selectionstatementnode> selection_statement // Selection statement [SelectionStatementNode]
%type <expressionnode> expression_id_dec
%type <expressionnode> argument_list
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
	StatementNode *StatementNode::Null = new StatementNode();
	ConstNode *ConstNode::True = new ConstNode("true", new TypeNode("bool"));
	ConstNode *ConstNode::False = new ConstNode("false", new TypeNode("bool"));
	int TempNode::tempCount = 0;
	RootNode *root = new RootNode();
	int offset = 0; // total offset in memory
	int labelCount = 0; // count of labels
	int variCount = 0; // count of variables
	InterCodeGenerator *generator = new InterCodeGenerator(root);
	int funccount = 1;
%}
%%
/////////////////////////////////////////////////////////////////////////////
// rules section
prog: top_level_definition_list {
		root->addChildNode($1);
		$$ = root;
	};
top_level_definition_list: top_level_definition_list top_level_definition {
		if($1 != NULL)
		{
			$1->addPeerNode($2);
			$$ = $1;
			generator = new InterCodeGenerator(root);
			if(++funccount == 2)generator->generate();
			generator->functionTable.clear();
			generator->envStack.clear();
		} else {
			$$ = $2;
			root->addChildNode($$);
			generator = new InterCodeGenerator(root);
			//generator->generate();
			generator->functionTable.clear();
			generator->envStack.clear();
		}
	} | {
		$$ = NULL;
	};
top_level_definition:
	type top_level_declarator_list ';' {
		$$ = new TopLevelDefinitionNode();
		$$->addChildNode($1);
		$1->addPeerNode($2);
		//$$->print();
	} | type function_declarator code_block {
		$$ = new TopLevelDefinitionNode();
		$$->addChildNode($1);
		$1->addPeerNode($2);
		$2->addPeerNode($3);
		//$$->print();
	} | type ';'
	;
top_level_declarator_list: var_declarator {$$ = $1;}
	| var_declarator ',' top_level_declarator_list {
		$$ = $1;
		$$->addPeerNode($3);
	};
var_declarator: ID {
		VarNode *cur = new VarNode(string($1->name));
		cur->nodeType = 2;
		$$ = cur;
	} | var_declarator '[' NUMBER ']' {
		$$ = $1;
		ArrayNode *curtyp = new ArrayNode($3);
		$$->setType(curtyp);
		$$->nodeType = 3;
	};
function_declarator: ID '(' ')' {
		$$ = new FunctionNode(string($1->name));
	} | ID '(' param_list ')' {
		$$ = new FunctionNode(string($1->name));
		$$->setParam($3);
	};
param_list: param {$$ = $1;}
	| param ',' param_list {
		$$ = $1;
		$1->addPeerNode($3);
	};
param: type var_declarator {
		// assert $1 is a TypeNode, $2 is a VarNode
		$$ = new ParamNode($1, $2);
	};
type: BOOL {
		$$ = new TypeNode("bool");
	} | INT {
		$$ = new TypeNode("int");
	} | VOID {
		$$ = new TypeNode("void");
	};
code_block: LBRACE statement_list RBRACE {
		$$ = new CompoundStatementNode();
		$$->addChildNode($2);
	};
statement_list: statement {$$ = $1;}
	| statement_list statement {
		$1->addPeerNode($2);
		$$ = $1;
	};
statement: assignment_expression ';' {
		ExpressionNode* lvalue = $1->left;
		if(lvalue->nodeId == NodeId::varnode)$$ = new AssignNode((VarNode*)lvalue, $1->right);
		else if(lvalue->nodeId == NodeId::accessnode)$$ = new AssignArrayNode((AccessNode*)lvalue, $1->right);
		else yyerror("wrong left value! UniqueID=162");
	} | while_loop_statement {
		$$ = $1;
	} | for_loop_statement {
		$$ = $1;
	} | selection_statement {
		$$ = $1;
	} | var_definition {
		$$ = $1;
	} | code_block {
		$$ = $1;
	} | ID '(' ')' ';' {$$ = new FunctionStatement(string($1->name), NULL);}
	| ID '(' argument_list ')' ';' {$$ = new FunctionStatement(string($1->name), $3);
	} | RETURN expression ';' {$$ = new ReturnStatement($2);}
	;


while_loop_statement: WHILE '(' expression ')' statement {
		$$ = new WhileLoopStatementNode($3, $5);
	};
for_loop_statement: FOR '(' expression ';' expression ';' expression ')' statement {
		$$ = new ForLoopStatementNode($3, $5, $7, $9);
	} | FOR '(' var_definition expression ';' expression ')' statement {
		$$ = new ForLoopStatementNode($3, $4, $6, $8);
	} | FOR '(' expression ';' expression ';' ')' statement {
		$$ = new ForLoopStatementNode($3, $5, NULL, $8);
	} | FOR '(' var_definition expression ';' ')' statement {
		$$ = new ForLoopStatementNode($3, $4, NULL, $7);
	} | FOR '(' expression ';' ';' expression ')' statement {
		$$ = new ForLoopStatementNode($3, NULL, $6, $8);
	} | FOR '(' var_definition ';' expression ')' statement {
		$$ = new ForLoopStatementNode($3, NULL, $5, $7);
	} | FOR '(' ';' expression ';' expression ')' statement {
		$$ = new ForLoopStatementNode(NULL, $4, $6, $8);
	} | FOR '(' expression ';' ';' ')' statement {
		$$ = new ForLoopStatementNode($3, NULL, NULL, $7);
	} | FOR '(' var_definition ';' ')' statement {
		$$ = new ForLoopStatementNode($3, NULL, NULL, $6);
	} | FOR '(' ';' expression ';' ')' statement {
		$$ = new ForLoopStatementNode(NULL, $4, NULL, $7);
	} | FOR '(' ';' ';' expression ')' statement {
		$$ = new ForLoopStatementNode(NULL, NULL, $5, $7);
	} | FOR '(' ';' ';' ')' statement {
		$$ = new ForLoopStatementNode(NULL, NULL, NULL, $6);
	};
selection_statement: IF '(' expression ')' statement {
		$$ = new SelectionStatementNode($3, $5);
	} | IF '(' expression ')' statement ELSE statement {
		$$ = new SelectionStatementNode($3, $5, $7);
	};
var_definition: type var_declaration_list ';' {
		$$ = new StatementNode(5);
		$$->addChildNode($1);
		$1->addPeerNode($2);
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
		$$->addChildNode($3);
	};
assignment_expression: expression '=' expression {
		$$ = new OperatorNode(1, $1, $3);
	};
expression: assignment_expression {$$ = $1;}
	| expression '+' expression {$$ = new OperatorNode(2, $1, $3);}
	| expression '-' expression {$$ = new OperatorNode(3, $1, $3);}
	| expression '*' expression {$$ = new OperatorNode(4, $1, $3);}
	| expression '/' expression {$$ = new OperatorNode(5, $1, $3);}
	| expression '%' expression {$$ = new OperatorNode(6, $1, $3);}
	| expression '<' expression {$$ = new RelNode("<", $1, $3);}
	| expression '>' expression {$$ = new RelNode(">", $1, $3);}
	| expression EQ expression {$$ = new RelNode("==", $1, $3);}
	| expression LE expression {$$ = new RelNode("<=", $1, $3);}
	| expression GE expression {$$ = new RelNode(">=", $1, $3);}
	| expression NE expression {$$ = new RelNode("!=", $1, $3);}
	| expression AND expression {$$ = new AndNode($1, $3);}
	| expression OR expression {$$ = new OrNode($1, $3);}
	| expression '^' NUMBER {
		$$ = $1;
		for(int i = 1; i < $3; i++)$$ = new OperatorNode(4, $1, $$);
	}
	| '-' expression %prec UMINUS {$$ = new UnaryNode(16, $2);}
	| '(' expression ')' {$$ = $2;}
	| ID '(' ')' {$$ = new FunctionCallNode(string($1->name), NULL);}
	| ID '(' argument_list ')' {$$ = new FunctionCallNode(string($1->name), $3);}
	| NUMBER {$$ = new ConstNode($1);} 
	| expression_id_dec {$$ = $1;};
expression_id_dec: ID {
		$$ = new VarNode(string($1->name));
	} | expression_id_dec '[' expression ']' {
		if ($1->nodeId == NodeId::varnode)$$ = new AccessNode((VarNode*)$1, $3, NULL);
		else {$$ = $1; ((AccessNode*)$$)->index->addPeerNode($3);}
	};
argument_list: expression {$$ = $1;}
	| expression ',' argument_list {$$ = $1; $1->addPeerNode($3);}
	;

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

