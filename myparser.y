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
%right DIVIDEASSIGN MULTIPLYASSIGN MODASSIGN ADDASSIGN ABTRACTASSIGN BITANDASSIGN XORASSIGN BITORASSIGN
%right CONDITIONALOPERATOR
%left OR
%left AND
%left '|'
//%left '^'
%left '&'
%left EQ NE
%left '<' LE '>' GE
%left LBITMOVE RBITMOVE
%left '+' '-'
%left '/' '*' '%'
%right '^'
%nonassoc UMINUS POINT AUTODECRE AUTOINCRE ADDRESS '~'
%nonassoc BRACKET
%token IF THEN ELSE RELOP VOID MAIN '(' ')' LBRACE RBRACE '[' ']' '!' INT DEFINE STRING INCLUDE WHILE FOR RETURN GOTO GETCHAR STRUCT LONGINT DOUBLE LONGLONGINT FLOAT BOOL SHORT BYTE SCAN PRINT
%union {
	double dval;
	struct symtable *symp;
	class ParseTreeNode *node;
}
%token <symp> ID
%token <dval> NUMBER
%type <node> expression // Expression that has a value [ExpressionNode]
%type <node> id_expr // An expression that only contains an ID [ExpressionNode]
%type <node> assign_expr // <ID = expression>, whose value is right-hand expression [ExpressionNode]

%type <node> param_list // <param, param, ...>, for function params [ParamNode]
%type <node> param // <type ID>, for function params [ParamNode]

%type <node> type // Just type [TypeNode]
%type <node> var_declaration_front // <type (id_expr/assign_expr)+>, to be fixed [VarNode]
%type <node> statement // For all statements [StatementNode]
%type <node> statement_list // <statement, statement, ...>, just statement [StatementNode]
%type <node> while_stat // While statement [StatementNode]
%type <node> ifelse_stat // Selection statement [StatementNode]
%type <node> for_front // Front of for-loop statement [StatementNode]
%type <node> for_stat // For-loop statement [StatementNode]
%type <node> io_stat // Scan/print statement [StatementNode]
%type <node> code_block // Combined statements [StatementNode]
%type <node> main_func // Main function [FunctionNode]
%type <node> individual // Function or external statements [ParseTreeNode](father of FunctionNode and StatementNode)
%type <node> prog // <individual, individual, ...>, just everything [ParseTreeNode]


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
	ParseTreeNode *root = new RootNode();
	int inFunc = 0;
%}


%%

/////////////////////////////////////////////////////////////////////////////
// rules section
prog: main_func {
		root->addChildNode($1);
		$$ = root;
	}
	| prog statement_list {
		$1->getChildNode()->addPeerNode($2);
		$$ = $1;
	}
	| statement_list prog {
		$1->addPeerNode($2->getChildNode());
		root->addChildNode($1);
		$$ = root;
	};
main_func: VOID Main '(' ')' code_block {
		ParseTreeNode *cur = new MainNode();
		cur->addChildNode($5);
		$$ = cur;
		inFunc = 0;
		$$->print();
	}
	| INT Main '(' ')' code_block {
		ParseTreeNode *cur = new MainNode();
		cur->addChildNode($5);
		$$ = cur;
		inFunc = 0;
		$$->print();
	};

code_block: LBRACE statement_list RBRACE {
		ParseTreeNode *cur = new CompoundStatementNode();
		cur->addChildNode($2);
		$$ = cur;
	};
Main: MAIN {
		inFunc = 1;
	};
statement_list: statement {$$ = $1;}
	| statement_list statement {
		$1->addPeerNode($2);
		$$ = $1;
	};
statement: expression ';' {
		ParseTreeNode *cur = new StatementNode(1);
		cur->addChildNode($1);
		$$ = cur;
		if(!inFunc)$$->print();
	}
	| while_stat {
		$$ = $1;
		if(!inFunc)$$->print();
	}
	| for_stat {
		$$ = $1;
		if(!inFunc)$$->print();
	}
	| ifelse_stat {
		$$ = $1;
		if(!inFunc)$$->print();
	}
	| var_declaration_front ';' {
		$$ = $1;
		if(!inFunc)$$->print();
	}
	| io_stat ';' {
		$$ = $1;
		if(!inFunc)$$->print();
	}
	;
io_stat: SCAN '(' id_expr ')' {
		ParseTreeNode *cur = new StatementNode(6);
		cur->addChildNode($3);
		$$ = cur;
	}
	| PRINT '(' expression ')' {
		ParseTreeNode *cur = new StatementNode(6);
		cur->addChildNode($3);
		$$ = cur;
	};
var_declaration_front: type assign_expr {
		ParseTreeNode *cur = new StatementNode(5);
		cur->addChildNode($1);
		$1->addPeerNode($2);
		$$ = cur;
	}
	| type id_expr {
		ParseTreeNode *cur = new StatementNode(5);
		cur->addChildNode($1);
		$1->addPeerNode($2);
		$$ = cur;
	}
	| var_declaration_front ',' id_expr {
		$1->addPeerNode($3);
	}
	| var_declaration_front ',' assign_expr {
		$1->addPeerNode($3);
	}
	;
type:			
	| DOUBLE {
		ParseTreeNode *cur = new TypeNode("double");
		$$ = cur;
	}
	| FLOAT {
		ParseTreeNode *cur = new TypeNode("float");
		$$ = cur;
	}
	| BOOL {
		ParseTreeNode *cur = new TypeNode("bool");
		$$ = cur;
	}
	| LONGINT {
		ParseTreeNode *cur = new TypeNode("long int");
		$$ = cur;
	}
	| LONGLONGINT {
		ParseTreeNode *cur = new TypeNode("long long int");
		$$ = cur;
	}
	| BYTE {
		ParseTreeNode *cur = new TypeNode("byte");
		$$ = cur;
	}
	| STRUCT					
	| INT {
		ParseTreeNode *cur = new TypeNode("int");
		$$ = cur;
	}
	| VOID {
		ParseTreeNode *cur = new TypeNode("void");
		$$ = cur;
	};

while_stat: WHILE '(' expression ')' code_block {
		ParseTreeNode *cur = new WhileLoopStatementNode($3, $5);
		$$ = cur;
	}
	| WHILE '(' expression ')' statement {
		ParseTreeNode *cur = new WhileLoopStatementNode($3, $5);
		$$ = cur;
	};
for_stat: for_front code_block {
		$1->setBlock($2);
		$$ = $1;
	}
	| for_front statement {
		$1->setBlock($2);
		$$ = $1;
	};
for_front: FOR '(' expression ';' expression ';' expression ')' {
		ParseTreeNode *cur = new ForLoopStatementNode($3, $5, $7);
		$$ = cur;
	}
	| FOR '(' type assign_expr ';' expression ';' expression ')' {
		ParseTreeNode *cur = new ForLoopStatementNode($4, $6, $8);
		$$ = cur;
	}
	| FOR '(' expression ';' expression ';' ')' {
		ParseTreeNode *cur = new ForLoopStatementNode($3, $5, NULL);
		$$ = cur;
	}
	| FOR '(' type assign_expr ';' expression ';' ')' {
		ParseTreeNode *cur = new ForLoopStatementNode($4, $6, NULL);
		$$ = cur;
	}
	| FOR '(' expression ';' ';' expression ')' {
		ParseTreeNode *cur = new ForLoopStatementNode($3, NULL, $6);
		$$ = cur;
	}
	| FOR '(' type assign_expr ';' ';' expression ')' {
		ParseTreeNode *cur = new ForLoopStatementNode($4, NULL, $7);
		$$ = cur;
	}
	| FOR '(' ';' expression ';' expression ')' {
		ParseTreeNode *cur = new ForLoopStatementNode(NULL, $4, $6);
		$$ = cur;
	}
	| FOR '(' expression ';' ';' ')' {
		ParseTreeNode *cur = new ForLoopStatementNode($3, NULL, NULL);
		$$ = cur;
	}
	| FOR '(' type assign_expr ';' ';' ')' {
		ParseTreeNode *cur = new ForLoopStatementNode($4, NULL, NULL);
		$$ = cur;
	}
	| FOR '(' ';' expression ';' ')' {
		ParseTreeNode *cur = new ForLoopStatementNode(NULL, $4, NULL);
		$$ = cur;
	}
	| FOR '(' ';' ';' expression ')' {
		ParseTreeNode *cur = new ForLoopStatementNode(NULL, NULL, $5);
		$$ = cur;
	}
	| FOR '(' ';' ';' ')' {
		ParseTreeNode *cur = new ForLoopStatementNode(NULL, NULL, NULL);
		$$ = cur;
	};
assign_expr: id_expr '=' expression {
		ParseTreeNode *cur = new OperatorNode($3->getValue(), 1);
		$1->setValue($3->getValue());
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	};
expression: expression '+' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() + $3->getValue(), 2);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression '-' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() - $3->getValue(), 3);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression '*' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() * $3->getValue(), 4);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression '/' expression {
		ParseTreeNode *cur;
		if($3->getValue() != 0.0)cur = new OperatorNode($1->getValue() / $3->getValue(), 5);
		else {
			yyerror("Divide by zero.\n");
			cur = new OperatorNode(0, 0);
		}
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression '%' expression {
		ParseTreeNode *cur;
		if($3->getValue() != 0.0)cur = new OperatorNode((int)$1->getValue() % (int)$3->getValue(), 6);
		else {
			yyerror("Mod by zero.\n");
			cur = new OperatorNode(0, 0);
		}
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression '<' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() < $3->getValue(), 7);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression '>' expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() > $3->getValue(), 8);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression EQ expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() == $3->getValue(), 9);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression LE expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() <= $3->getValue(), 10);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression GE expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() >= $3->getValue(), 11);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression NE expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() != $3->getValue(), 12);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression AND expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() && $3->getValue(), 13);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression OR expression {
		ParseTreeNode *cur = new OperatorNode($1->getValue() || $3->getValue(), 14);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	| expression '^' expression {
		ParseTreeNode *cur = new OperatorNode(pow($1->getValue(), $3->getValue()), 15);
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}

	| '-' expression %prec UMINUS {
		ParseTreeNode *cur = new OperatorNode(-$2->getValue(), 16);
		cur->addChildNode($2);
		$$ = cur;
	}
	| '(' expression ')' {
		$$ = $2;
	}
	| NUMBER {
		ParseTreeNode *cur = new ConstNode($1);
		$$ = cur;
	}
	| id_expr {
		$$ = $1;
	}
	| assign_expr {
		$$ = $1;
	};
id_expr: ID {
		ParseTreeNode *cur = new VarNode(string($1->name));
		$$ = cur;
	};

ifelse_stat: IF '(' expression ')' code_block {
		ParseTreeNode *cur = new SelectionStatementNode($3, $5);
		$$ = cur;
	}
	| IF '(' expression ')' statement {
		ParseTreeNode *cur = new SelectionStatementNode($3, $5);
		$$ = cur;
	}
	| IF '(' expression ')' code_block ELSE code_block {
		ParseTreeNode *cur = new SelectionStatementNode($3, $5, $7);
		$$ = cur;
	}
	| IF '(' expression ')' code_block ELSE statement {
		ParseTreeNode *cur = new SelectionStatementNode($3, $5, $7);
		$$ = cur;
	}
	| IF '(' expression ')' statement ELSE code_block {
		ParseTreeNode *cur = new SelectionStatementNode($3, $5, $7);
		$$ = cur;
	}
	| IF '(' expression ')' statement ELSE statement {
		ParseTreeNode *cur = new SelectionStatementNode($3, $5, $7);
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

