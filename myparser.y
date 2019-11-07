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
%token LT LE EQ NE GT GE IF THEN ELSE ID NUMBER RELOP VOID MAIN LP RP LBRACE RBRACE SEMICOLON LNOT INT ASSIGN AND OR
%union {
	double dval;
	struct symtable *symp;
}
%token <symp> ID
%token <dval> NUMBER
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

Grammar
	: /* empty */
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

