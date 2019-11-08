%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2019��9��16��
****************************************************************************/

#include "mylexer.h"
#include "symtable.h"
struct symtable symtable[MAXSYM];
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
%token IF THEN ELSE RELOP VOID MAIN '(' ')' '{' '}' '[' ']' '!' INT DEFINE STRING INCLUDE WHILE FOR RETURN GOTO GETCHAR STRUCT LONGINT DOUBLE LONGLONGINT FLOAT BOOL SHORT BYTE SCANF PRINTF
%union {
	double dval;
	struct symtable *symp;
}
%token <symp> ID
%token <dval> NUMBER
%type <dval> expression
// parser name
%name myparser

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

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

// place your YACC rules here (there must be at least one)

statement_list:	statement
	|			statement_list statement
	;
statement:		ID '=' expression ';'	{$1->value = $3;}
	|			expression ';'			{printf("Expression.\n");}
	|			while_stat				{printf("Repeat Statement, while\n");}
	|			for_stat				{printf("Repeat Statement, for\n");}
	|			ifelse_stat
	;			
type:			INT						{printf("Type Specifier, int\n");}
	|			DOUBLE
	|			FLOAT
	|			BOOL
	|			LONGINT
	|			LONGLONGINT
	|			BYTE
	|			STRUCT
	|			VOID
	|			BYTE
	;
code_block:		'{' statement_list '}'
	;
while_stat:		WHILE '(' expression ')' code_block
	|			WHILE '(' expression ')' statement
	;
for_stat:		for_front code_block
	|			for_front statement
	;
for_front:		FOR '(' expression ';' expression ';' expression ')'
	|			FOR '(' expression ';' expression ';' ')'
	|			FOR '(' expression ';' ';' expression ')'
	|			FOR '(' ';' expression ';' expression ')'
	|			FOR '(' expression ';' ';' ')'
	|			FOR '(' ';' expression ';' ')'
	|			FOR '(' ';' ';' expression ')'
	|			FOR '(' ';' ';' ')'
	;
expression:		expression '+' expression	{$$ = $1 + $3;}
	|			expression '-' expression	{$$ = $1 - $3;}
	|			expression '*' expression	{$$ = $1 * $3;}
	|			expression '/' expression	{
												if($3 != 0.0)$$ = $1 / $3;
												else yyerror("Divide by zero.\n");
											}
	|			expression '%' expression	{
												if($3 != 0.0)$$ = (int)$1 % (int)$3;
												else yyerror("Mod by zero.\n");
											}
	|			'-' expression %prec UMINUS	{$$ = -$2;}
	|			'(' expression ')'			{$$ = $2;}
	|			NUMBER
	|			ID							{$$ = $1->value;}
	;
ifelse_stat:	IF '(' expression ')' code_block
	|			IF '(' expression ')' statement
	|			IF '(' expression ')' code_block ELSE code_block
	|			IF '(' expression ')' code_block ELSE statement
	|			IF '(' expression ')' statement ELSE code_block
	|			IF '(' expression ')' statement ELSE statement
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

