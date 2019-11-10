%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2019��9��16��
****************************************************************************/

#include "mylexer.h"
#include "symtable.h"
#include "ParseTreeNode.h"

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
%left '^'
%left '&'
%left EQ NE
%left '<' LE '>' GE
%left LBITMOVE RBITMOVE
%left '+' '-'
%left '/' '*' '%'
%nonassoc UMINUS POINT AUTODECRE AUTOINCRE ADDRESS '~'
%nonassoc BRACKET
%token IF THEN ELSE RELOP VOID MAIN '(' ')' LBRACE RBRACE '[' ']' '!' INT DEFINE STRING INCLUDE WHILE FOR RETURN GOTO GETCHAR STRUCT LONGINT DOUBLE LONGLONGINT FLOAT BOOL SHORT BYTE SCANF PRINTF
%union {
	double dval;
	struct symtable *symp;
	class ParseTreeNode *node;
}
%token <symp> ID
%token <dval> NUMBER
%type <node> expression
%type <node> assign_expr
%type <node> statement statement_list type code_block while_stat for_stat ifelse_stat var_declaration_front for_front id_expr
// parser name
%name myparser


// attribute type
%include {
#ifndef YYSTYPE
#define YYSTYPE int
#endif
}

// place any declarations here

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

prog:	VOID MAIN '(' ')' code_block {
		ParseTreeNode *cur = new ParseTreeNode("Main Function", "");
		cur->addChildNode($5);
		cur->print();
	}
	|	INT MAIN '(' ')' code_block {
		ParseTreeNode *cur = new ParseTreeNode("Main Function", "");
		cur->addChildNode($5);
		cur->print();
	};

statement_list:	statement {$$ = $1;}
	|			statement_list statement	{
		printf("This is a statement list.\n");
		$1->addPeerNode($2);
	}
	;
statement:		expression ';' {
		printf("Expression statement\n");
		ParseTreeNode *cur = new ParseTreeNode("Expression statement", "");
		cur->addChildNode($1);
		$$ = cur;
	}
	|			while_stat {
		printf("Repeat Statement, while\n");
		$$ = $1;
	}
	|			for_stat {
		printf("Repeat Statement, for\n");
		$$ = $1;
	}
	|			ifelse_stat {
		printf("Condition Statement, if\n");
		$$ = $1;
	}
	|			var_declaration_front ';' {
		printf("Var Declaration\n");
		$$ = $1;
	}
	;
var_declaration_front:	type assign_expr {
		printf("Expr, op: =\n");
		ParseTreeNode *cur = new ParseTreeNode("Var Declaration", "");
		cur->addChildNode($1);
		$1->addPeerNode($2);
		$$ = cur;
	}
	|					type id_expr {
		printf("ID Declaration, symbol: %s\n", $2->getText());
		ParseTreeNode *cur = new ParseTreeNode("Var Declaration", "");
		cur->addChildNode($1);
		$1->addPeerNode($2);
		$$ = cur;
	}
	|					var_declaration_front ',' id_expr {
		printf("ID Declaration, symbol: %s\n", $3->getText());
		$1->addPeerNode($3);
	}
	|					var_declaration_front ',' assign_expr {
		printf("Expr, op: =\n");
		$1->addPeerNode($3);
	}
	;
type:			
	|			DOUBLE {
		printf("Type Specifier, double\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "double");
		$$ = cur;
	}
	|			FLOAT {
		printf("Type Specifier, float\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "float");
		$$ = cur;
	}
	|			BOOL {
		printf("Type Specifier, bool\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "bool");
		$$ = cur;
	}
	|			LONGINT {
		printf("Type Specifier, long int\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "long int");
		$$ = cur;
	}
	|			LONGLONGINT {
		printf("Type Specifier, long long int\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "long long int");
		$$ = cur;
	}
	|			BYTE {
		printf("Type Specifier, byte\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "byte");
		$$ = cur;
	}
	|			STRUCT					
	|			INT {
		printf("Type Specifier, int\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "int");
		$$ = cur;
	}
	|			VOID {
		printf("Type Specifier, void\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "void");
		$$ = cur;
	}
	;
code_block:		LBRACE statement_list RBRACE {
		printf("Code Block.\n");
		ParseTreeNode *cur = new ParseTreeNode("Compound Statement", "");
		cur->addChildNode($2);
		$$ = cur;
	}
	;
while_stat:		WHILE '(' expression ')' code_block {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "while");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		$$ = cur;
	}
	|			WHILE '(' expression ')' statement {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "while");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		$$ = cur;
	}
	;
for_stat:		for_front code_block {
		$1->getChildNode()->addPeerNode($2);
		$$ = $1;
	}
	|			for_front statement {
		$1->getChildNode()->addPeerNode($2);
		$$ = $1;
	}
	;
for_front:		FOR '(' expression ';' expression ';' expression ')' {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		$5->addPeerNode($7);
		$$ = cur;
	}
	|			FOR '(' expression ';' expression ';' ')' {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		$5->addPeerNode(holder);
		$$ = cur;
	}
	|			FOR '(' expression ';' ';' expression ')' {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode($3);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		$3->addPeerNode(holder);
		holder->addPeerNode($6);
		$$ = cur;
	}
	|			FOR '(' ';' expression ';' expression ')' {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode($4);
		$4->addPeerNode($6);
		$$ = cur;
	}
	|			FOR '(' expression ';' ';' ')' {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode($3);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		$3->addPeerNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		$$ = cur;
	}
	|			FOR '(' ';' expression ';' ')' {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode($4);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		$4->addPeerNode(holder2);
		$$ = cur;
	}
	|			FOR '(' ';' ';' expression ')' {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		holder2->addPeerNode($5);
		$$ = cur;
	}
	|			FOR '(' ';' ';' ')' {
		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		ParseTreeNode *holder3 = new ParseTreeNode("Empty Expression", "");
		holder2->addPeerNode(holder3);
		$$ = cur;
	}
	;
expression:		expression '+' expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: +", $1->getValue() + $3->getValue());
		printf("Expr, op: +\n");
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	|			expression '-' expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: -", $1->getValue() - $3->getValue());
		printf("Expr, op: -\n");
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	|			expression '*' expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: *", $1->getValue() * $3->getValue());
		printf("Expr, op: *\n");
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	|			expression '/' expression {
		ParseTreeNode *cur;
		if($3->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: /", $1->getValue() / $3->getValue());
		else {
			yyerror("Divide by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: /", 0);
		}
		cur->addChildNode($1);
		$1->addPeerNode($3);
		printf("Expr, op: /\n");
		$$ = cur;
	}
	|			expression '%' expression {
		ParseTreeNode *cur;
		if($3->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: %", (int)$1->getValue() % (int)$3->getValue());
		else {
			yyerror("Mod by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: %", 0);
		}
		cur->addChildNode($1);
		$1->addPeerNode($3);
		printf("Expr, op: %s\n", "%");
		$$ = cur;
	}
	|			expression '<' expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <", $1->getValue() < $3->getValue());
		printf("Expr, op: <\n");
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	|			expression '>' expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >", $1->getValue() > $3->getValue());
		printf("Expr, op: >\n");
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	|			expression EQ expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: ==", $1->getValue() == $3->getValue());
		printf("Expr, op: ==\n");
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	|			expression LE expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <=", $1->getValue() <= $3->getValue());
		printf("Expr, op: <=\n");
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	|			expression GE expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >=", $1->getValue() >= $3->getValue());
		printf("Expr, op: >=\n");
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}
	|			expression NE expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: !=", $1->getValue() != $3->getValue());
		printf("Expr, op: !=\n");
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
	}

	|			'-' expression %prec UMINUS {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: unary -", -$2->getValue());
		printf("Expr, op: unary -\n");
		cur->addChildNode($2);
		$$ = cur;
	}
	|			'(' expression ')' {
		$$ = $2;
	}
	|			NUMBER {
		printf("Const Declaration, %g\n", $1);
		std::ostringstream os;
		os << $1;
		ParseTreeNode *cur = new ParseTreeNode("Const Declaration", os.str(), $1);
		$$ = cur;
	}
	|			id_expr {
		$$ = $1;
	}
	|			assign_expr {printf("Expr, op: =\n");}
	;
id_expr:		ID {
		ParseTreeNode *cur = new ParseTreeNode("ID Declaration", string("symbol: ") + string($1->name));
		$$ = cur;
		printf("ID Declaration, symbol: %s\n", $1->name);
	};
assign_expr:	id_expr '=' expression {
		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: =", $3->getValue());
		$1->setValue($3->getValue());
		cur->addChildNode($1);
		$1->addPeerNode($3);
		$$ = cur;
		printf("ID Declaration, symbol: %s\n", $1->getText());
	}
	;
ifelse_stat:	IF '(' expression ')' code_block {
		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		$$ = cur;
	}
	|			IF '(' expression ')' statement {
		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		$$ = cur;
	}
	|			IF '(' expression ')' code_block ELSE code_block {
		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		$5->addPeerNode($7);
		$$ = cur;
	}
	|			IF '(' expression ')' code_block ELSE statement {
		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		$5->addPeerNode($7);
		$$ = cur;
	}
	|			IF '(' expression ')' statement ELSE code_block {
		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		$5->addPeerNode($7);
		$$ = cur;
	}
	|			IF '(' expression ')' statement ELSE statement {
		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode($3);
		$3->addPeerNode($5);
		$5->addPeerNode($7);
		$$ = cur;
	}
	;

%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	FILE *fp = fopen("in_parser.txt", "r");
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	getchar();
	return n;
}

