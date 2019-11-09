/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 54 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 11/09/19
* Time: 12:43:40
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2019��9��16��
****************************************************************************/

#include "mylexer.h"
#include "symtable.h"
struct symtable symtable[MAXSYM];

#line 51 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 50 ".\\myparser.y"

	// place any extra initialisation code here

#line 75 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 55 ".\\myparser.y"

	// place any extra cleanup code here

#line 89 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 78 ".\\myparser.y"
printf("Expression.\n");
#line 199 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 79 ".\\myparser.y"
printf("Repeat Statement, while\n");
#line 212 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 80 ".\\myparser.y"
printf("Repeat Statement, for\n");
#line 225 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 81 ".\\myparser.y"
printf("Condition Statement, if\n");
#line 238 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 82 ".\\myparser.y"
printf("Var Declaration\n");
#line 251 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 84 ".\\myparser.y"
printf("Expr, op:=\n");
#line 264 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 85 ".\\myparser.y"
printf("ID Declaration, symbol: %s\n", yyattribute(2 - 2).symp->name);
#line 277 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 86 ".\\myparser.y"
printf("ID Declaration, symbol: %s\n", yyattribute(3 - 3).symp->name);
#line 290 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 87 ".\\myparser.y"
printf("Expr, op:=\n");
#line 303 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 89 ".\\myparser.y"
printf("Type Specifier, int\n");
#line 316 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 117 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 3).dval + yyattribute(3 - 3).dval;
#line 329 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 118 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 3).dval - yyattribute(3 - 3).dval;
#line 342 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 119 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 3).dval * yyattribute(3 - 3).dval;
#line 355 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 120 ".\\myparser.y"

												if(yyattribute(3 - 3).dval != 0.0)(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 3).dval / yyattribute(3 - 3).dval;
												else yyerror("Divide by zero.\n");
											
#line 371 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 124 ".\\myparser.y"

												if(yyattribute(3 - 3).dval != 0.0)(*(YYSTYPE YYFAR*)yyvalptr).dval = (int)yyattribute(1 - 3).dval % (int)yyattribute(3 - 3).dval;
												else yyerror("Mod by zero.\n");
											
#line 387 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 128 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = -yyattribute(2 - 2).dval;
#line 400 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 129 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(2 - 3).dval;
#line 413 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 130 ".\\myparser.y"
printf("Const Declaration, %g\n", yyattribute(1 - 1).dval);
#line 426 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 131 ".\\myparser.y"

												(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 1).symp->value;
												printf("ID Declaration, symbol: %s\n", yyattribute(1 - 1).symp->name);
											
#line 442 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 135 ".\\myparser.y"
printf("Expr, op:=\n");
#line 455 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 137 ".\\myparser.y"

												yyattribute(1 - 3).symp->value = yyattribute(3 - 3).dval;
												(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(3 - 3).dval;
												printf("ID Declaration, symbol: %s\n", yyattribute(1 - 3).symp->name);
											
#line 472 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "\'%\'", 37 },
		{ "\'(\'", 40 },
		{ "\')\'", 41 },
		{ "\'*\'", 42 },
		{ "\'+\'", 43 },
		{ "\',\'", 44 },
		{ "\'-\'", 45 },
		{ "\'/\'", 47 },
		{ "\';\'", 59 },
		{ "\'=\'", 61 },
		{ "\'{\'", 123 },
		{ "\'}\'", 125 },
		{ "error", 256 },
		{ "UMINUS", 274 },
		{ "IF", 280 },
		{ "ELSE", 282 },
		{ "VOID", 284 },
		{ "INT", 286 },
		{ "WHILE", 290 },
		{ "FOR", 291 },
		{ "STRUCT", 295 },
		{ "LONGINT", 296 },
		{ "DOUBLE", 297 },
		{ "LONGLONGINT", 298 },
		{ "FLOAT", 299 },
		{ "BOOL", 300 },
		{ "BYTE", 302 },
		{ "ID", 305 },
		{ "NUMBER", 306 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: statement_list",
		"statement_list: statement",
		"statement_list: statement_list statement",
		"statement: expression \';\'",
		"statement: while_stat",
		"statement: for_stat",
		"statement: ifelse_stat",
		"statement: var_declaration_front \';\'",
		"var_declaration_front: type assign_expr",
		"var_declaration_front: type ID",
		"var_declaration_front: var_declaration_front \',\' ID",
		"var_declaration_front: var_declaration_front \',\' assign_expr",
		"type: INT",
		"type: DOUBLE",
		"type: FLOAT",
		"type: BOOL",
		"type: LONGINT",
		"type: LONGLONGINT",
		"type: BYTE",
		"type: STRUCT",
		"type: VOID",
		"type: BYTE",
		"code_block: \'{\' statement_list \'}\'",
		"while_stat: WHILE \'(\' expression \')\' code_block",
		"while_stat: WHILE \'(\' expression \')\' statement",
		"for_stat: for_front code_block",
		"for_stat: for_front statement",
		"for_front: FOR \'(\' expression \';\' expression \';\' expression \')\'",
		"for_front: FOR \'(\' expression \';\' expression \';\' \')\'",
		"for_front: FOR \'(\' expression \';\' \';\' expression \')\'",
		"for_front: FOR \'(\' \';\' expression \';\' expression \')\'",
		"for_front: FOR \'(\' expression \';\' \';\' \')\'",
		"for_front: FOR \'(\' \';\' expression \';\' \')\'",
		"for_front: FOR \'(\' \';\' \';\' expression \')\'",
		"for_front: FOR \'(\' \';\' \';\' \')\'",
		"expression: expression \'+\' expression",
		"expression: expression \'-\' expression",
		"expression: expression \'*\' expression",
		"expression: expression \'/\' expression",
		"expression: expression \'%\' expression",
		"expression: \'-\' expression",
		"expression: \'(\' expression \')\'",
		"expression: NUMBER",
		"expression: ID",
		"expression: assign_expr",
		"assign_expr: ID \'=\' expression",
		"ifelse_stat: IF \'(\' expression \')\' code_block",
		"ifelse_stat: IF \'(\' expression \')\' statement",
		"ifelse_stat: IF \'(\' expression \')\' code_block ELSE code_block",
		"ifelse_stat: IF \'(\' expression \')\' code_block ELSE statement",
		"ifelse_stat: IF \'(\' expression \')\' statement ELSE code_block",
		"ifelse_stat: IF \'(\' expression \')\' statement ELSE statement"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 1, -1 },
		{ 1, 2, -1 },
		{ 2, 2, 0 },
		{ 2, 1, 1 },
		{ 2, 1, 2 },
		{ 2, 1, 3 },
		{ 2, 2, 4 },
		{ 3, 2, 5 },
		{ 3, 2, 6 },
		{ 3, 3, 7 },
		{ 3, 3, 8 },
		{ 4, 1, 9 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 4, 1, -1 },
		{ 5, 3, -1 },
		{ 6, 5, -1 },
		{ 6, 5, -1 },
		{ 7, 2, -1 },
		{ 7, 2, -1 },
		{ 8, 8, -1 },
		{ 8, 7, -1 },
		{ 8, 7, -1 },
		{ 8, 7, -1 },
		{ 8, 6, -1 },
		{ 8, 6, -1 },
		{ 8, 6, -1 },
		{ 8, 5, -1 },
		{ 9, 3, 10 },
		{ 9, 3, 11 },
		{ 9, 3, 12 },
		{ 9, 3, 13 },
		{ 9, 3, 14 },
		{ 9, 2, 15 },
		{ 9, 3, 16 },
		{ 9, 1, 17 },
		{ 9, 1, 18 },
		{ 9, 1, 19 },
		{ 10, 3, 20 },
		{ 11, 5, -1 },
		{ 11, 5, -1 },
		{ 11, 7, -1 },
		{ 11, 7, -1 },
		{ 11, 7, -1 },
		{ 11, 7, -1 }
	};
	yyreduction = reduction;

	yytokenaction_size = 267;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 83, YYAT_SHIFT, 1 },
		{ 83, YYAT_SHIFT, 90 },
		{ 77, YYAT_SHIFT, 34 },
		{ 91, YYAT_SHIFT, 37 },
		{ 75, YYAT_ERROR, 0 },
		{ 83, YYAT_SHIFT, 2 },
		{ 26, YYAT_SHIFT, 45 },
		{ 91, YYAT_SHIFT, 92 },
		{ 91, YYAT_SHIFT, 38 },
		{ 91, YYAT_SHIFT, 39 },
		{ 52, YYAT_SHIFT, 37 },
		{ 91, YYAT_SHIFT, 40 },
		{ 82, YYAT_SHIFT, 89 },
		{ 91, YYAT_SHIFT, 41 },
		{ 57, YYAT_SHIFT, 37 },
		{ 52, YYAT_SHIFT, 38 },
		{ 52, YYAT_SHIFT, 39 },
		{ 80, YYAT_SHIFT, 88 },
		{ 52, YYAT_SHIFT, 40 },
		{ 57, YYAT_SHIFT, 38 },
		{ 52, YYAT_SHIFT, 41 },
		{ 26, YYAT_SHIFT, 46 },
		{ 75, YYAT_SHIFT, 83 },
		{ 56, YYAT_SHIFT, 37 },
		{ 57, YYAT_SHIFT, 41 },
		{ 74, YYAT_SHIFT, 81 },
		{ 73, YYAT_SHIFT, 79 },
		{ 72, YYAT_SHIFT, 78 },
		{ 56, YYAT_SHIFT, 38 },
		{ 68, YYAT_SHIFT, 77 },
		{ 67, YYAT_SHIFT, 76 },
		{ 65, YYAT_SHIFT, 74 },
		{ 64, YYAT_SHIFT, 73 },
		{ 56, YYAT_SHIFT, 41 },
		{ 63, YYAT_SHIFT, 71 },
		{ 59, YYAT_SHIFT, 32 },
		{ 53, YYAT_SHIFT, 66 },
		{ 51, YYAT_SHIFT, 65 },
		{ 50, YYAT_SHIFT, 63 },
		{ 49, YYAT_SHIFT, 62 },
		{ 48, YYAT_SHIFT, 61 },
		{ 45, YYAT_SHIFT, 59 },
		{ 43, YYAT_SHIFT, 32 },
		{ 41, YYAT_ERROR, 0 },
		{ 34, YYAT_ERROR, 0 },
		{ 31, YYAT_SHIFT, 50 },
		{ 27, YYAT_SHIFT, 47 },
		{ 24, YYAT_SHIFT, 43 },
		{ 23, YYAT_SHIFT, 42 },
		{ 17, YYAT_ACCEPT, 0 },
		{ 15, YYAT_SHIFT, 32 },
		{ 7, YYAT_SHIFT, 31 },
		{ 6, YYAT_SHIFT, 30 },
		{ 3, YYAT_SHIFT, 29 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 77, YYAT_SHIFT, 3 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 77, YYAT_SHIFT, 4 },
		{ -1, YYAT_ERROR, 0 },
		{ 77, YYAT_SHIFT, 5 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 77, YYAT_SHIFT, 6 },
		{ 77, YYAT_SHIFT, 7 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 77, YYAT_SHIFT, 8 },
		{ 77, YYAT_SHIFT, 9 },
		{ 77, YYAT_SHIFT, 10 },
		{ 77, YYAT_SHIFT, 11 },
		{ 77, YYAT_SHIFT, 12 },
		{ 77, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 77, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 83, YYAT_SHIFT, 15 },
		{ 83, YYAT_SHIFT, 16 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_DEFAULT, 34 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ 13, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 12, 1, YYAT_ERROR, 0 },
		{ 11, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ -11, 1, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 49, 1, YYAT_DEFAULT, 34 },
		{ 0, 0, YYAT_DEFAULT, 77 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ -11, 1, YYAT_DEFAULT, 75 },
		{ -258, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -38, 1, YYAT_ERROR, 0 },
		{ 5, 1, YYAT_DEFAULT, 91 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ -14, 1, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -79, 1, YYAT_DEFAULT, 77 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ 0, 0, YYAT_DEFAULT, 41 },
		{ 2, 1, YYAT_DEFAULT, 83 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ -19, 1, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ -264, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ -1, 1, YYAT_DEFAULT, 91 },
		{ -2, 1, YYAT_DEFAULT, 91 },
		{ -21, 1, YYAT_DEFAULT, 65 },
		{ -22, 1, YYAT_DEFAULT, 75 },
		{ -27, 1, YYAT_REDUCE, 45 },
		{ -89, 1, YYAT_DEFAULT, 34 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ -14, 1, YYAT_REDUCE, 35 },
		{ -23, 1, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ -26, 1, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 77 },
		{ 0, 0, YYAT_DEFAULT, 77 },
		{ -7, 1, YYAT_DEFAULT, 83 },
		{ -27, 1, YYAT_DEFAULT, 75 },
		{ -28, 1, YYAT_DEFAULT, 41 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ -252, 1, YYAT_REDUCE, 46 },
		{ -253, 1, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ -14, 1, YYAT_DEFAULT, 91 },
		{ -15, 1, YYAT_DEFAULT, 83 },
		{ -16, 1, YYAT_DEFAULT, 83 },
		{ -37, 1, YYAT_DEFAULT, 91 },
		{ 0, 0, YYAT_DEFAULT, 77 },
		{ -121, 1, YYAT_DEFAULT, 41 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ -24, 1, YYAT_DEFAULT, 91 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ -29, 1, YYAT_DEFAULT, 91 },
		{ -40, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ -34, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 27 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 42;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 77, 87 },
		{ 77, 26 },
		{ 77, 24 },
		{ 77, 86 },
		{ 77, 20 },
		{ 77, 25 },
		{ 77, 18 },
		{ 77, 23 },
		{ 76, 85 },
		{ 77, 21 },
		{ 62, 70 },
		{ 76, 84 },
		{ 61, 68 },
		{ 62, 69 },
		{ 53, 33 },
		{ 61, 67 },
		{ 18, 36 },
		{ 53, -1 },
		{ 74, 82 },
		{ 18, 35 },
		{ 83, 91 },
		{ 83, 19 },
		{ 34, 53 },
		{ 34, 22 },
		{ 73, 80 },
		{ 65, 75 },
		{ 63, 72 },
		{ 50, 64 },
		{ 45, 60 },
		{ 41, 58 },
		{ 40, 57 },
		{ 39, 56 },
		{ 38, 55 },
		{ 37, 54 },
		{ 32, 52 },
		{ 31, 51 },
		{ 30, 49 },
		{ 29, 48 },
		{ 24, 44 },
		{ 2, 28 },
		{ 1, 27 },
		{ 0, 17 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 40, 34 },
		{ 31, 83 },
		{ 30, 83 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 53 },
		{ 14, 77 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, 83 },
		{ 27, 83 },
		{ 26, 83 },
		{ 25, 83 },
		{ 0, -1 },
		{ 21, 53 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, 83 },
		{ 23, 83 },
		{ 22, 83 },
		{ 21, 83 },
		{ 20, 83 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, 83 },
		{ 0, -1 },
		{ 0, -1 },
		{ 12, 77 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 10, 77 },
		{ 8, 77 },
		{ 17, 83 },
		{ 0, -1 },
		{ 16, 83 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 15, 83 },
		{ 9, 83 },
		{ 0, -1 },
		{ 6, 77 },
		{ -2, 83 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 11, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 151 ".\\myparser.y"


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


