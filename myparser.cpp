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
* Date: 11/08/19
* Time: 21:51:29
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
#line 49 ".\\myparser.y"

	// place any extra initialisation code here

#line 75 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 54 ".\\myparser.y"

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
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 77 ".\\myparser.y"
yyattribute(1 - 4).symp->value = yyattribute(3 - 4).dval;
#line 199 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 78 ".\\myparser.y"
printf("Expression.\n");
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
#line 79 ".\\myparser.y"
printf("Repeat Statement, while\n");
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
#line 80 ".\\myparser.y"
printf("Repeat Statement, for\n");
#line 238 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 83 ".\\myparser.y"
printf("Type Specifier, int\n");
#line 251 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 111 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 3).dval + yyattribute(3 - 3).dval;
#line 264 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 112 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 3).dval - yyattribute(3 - 3).dval;
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
#line 113 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 3).dval * yyattribute(3 - 3).dval;
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
#line 114 ".\\myparser.y"

												if(yyattribute(3 - 3).dval != 0.0)(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 3).dval / yyattribute(3 - 3).dval;
												else yyerror("Divide by zero.\n");
											
#line 306 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 118 ".\\myparser.y"

												if(yyattribute(3 - 3).dval != 0.0)(*(YYSTYPE YYFAR*)yyvalptr).dval = (int)yyattribute(1 - 3).dval % (int)yyattribute(3 - 3).dval;
												else yyerror("Mod by zero.\n");
											
#line 322 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 122 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = -yyattribute(2 - 2).dval;
#line 335 "myparser.cpp"
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
#line 123 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(2 - 3).dval;
#line 348 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 125 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).dval = yyattribute(1 - 1).symp->value;
#line 361 "myparser.cpp"
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
		"statement: ID \'=\' expression \';\'",
		"statement: expression \';\'",
		"statement: while_stat",
		"statement: for_stat",
		"statement: ifelse_stat",
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
		{ 2, 4, 0 },
		{ 2, 2, 1 },
		{ 2, 1, 2 },
		{ 2, 1, 3 },
		{ 2, 1, -1 },
		{ 3, 1, 4 },
		{ 3, 1, -1 },
		{ 3, 1, -1 },
		{ 3, 1, -1 },
		{ 3, 1, -1 },
		{ 3, 1, -1 },
		{ 3, 1, -1 },
		{ 3, 1, -1 },
		{ 3, 1, -1 },
		{ 3, 1, -1 },
		{ 4, 3, -1 },
		{ 5, 5, -1 },
		{ 5, 5, -1 },
		{ 6, 2, -1 },
		{ 6, 2, -1 },
		{ 7, 8, -1 },
		{ 7, 7, -1 },
		{ 7, 7, -1 },
		{ 7, 7, -1 },
		{ 7, 6, -1 },
		{ 7, 6, -1 },
		{ 7, 6, -1 },
		{ 7, 5, -1 },
		{ 8, 3, 5 },
		{ 8, 3, 6 },
		{ 8, 3, 7 },
		{ 8, 3, 8 },
		{ 8, 3, 9 },
		{ 8, 2, 10 },
		{ 8, 3, 11 },
		{ 8, 1, -1 },
		{ 8, 1, 12 },
		{ 9, 5, -1 },
		{ 9, 5, -1 },
		{ 9, 7, -1 },
		{ 9, 7, -1 },
		{ 9, 7, -1 },
		{ 9, 7, -1 }
	};
	yyreduction = reduction;

	yytokenaction_size = 267;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 67, YYAT_SHIFT, 1 },
		{ 67, YYAT_SHIFT, 74 },
		{ 61, YYAT_SHIFT, 29 },
		{ 75, YYAT_SHIFT, 23 },
		{ 59, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 2 },
		{ 66, YYAT_SHIFT, 73 },
		{ 75, YYAT_SHIFT, 76 },
		{ 75, YYAT_SHIFT, 24 },
		{ 75, YYAT_SHIFT, 25 },
		{ 41, YYAT_SHIFT, 23 },
		{ 75, YYAT_SHIFT, 26 },
		{ 64, YYAT_SHIFT, 72 },
		{ 75, YYAT_SHIFT, 27 },
		{ 40, YYAT_SHIFT, 23 },
		{ 41, YYAT_SHIFT, 24 },
		{ 58, YYAT_SHIFT, 65 },
		{ 57, YYAT_SHIFT, 63 },
		{ 56, YYAT_SHIFT, 62 },
		{ 40, YYAT_SHIFT, 24 },
		{ 41, YYAT_SHIFT, 27 },
		{ 52, YYAT_SHIFT, 61 },
		{ 59, YYAT_SHIFT, 67 },
		{ 51, YYAT_SHIFT, 60 },
		{ 40, YYAT_SHIFT, 27 },
		{ 48, YYAT_SHIFT, 58 },
		{ 47, YYAT_SHIFT, 57 },
		{ 46, YYAT_SHIFT, 55 },
		{ 43, YYAT_SHIFT, 50 },
		{ 37, YYAT_SHIFT, 49 },
		{ 36, YYAT_SHIFT, 48 },
		{ 35, YYAT_SHIFT, 46 },
		{ 34, YYAT_SHIFT, 45 },
		{ 33, YYAT_SHIFT, 44 },
		{ 29, YYAT_ERROR, 0 },
		{ 27, YYAT_ERROR, 0 },
		{ 20, YYAT_SHIFT, 35 },
		{ 16, YYAT_SHIFT, 32 },
		{ 9, YYAT_SHIFT, 28 },
		{ 8, YYAT_ACCEPT, 0 },
		{ 6, YYAT_SHIFT, 21 },
		{ 5, YYAT_SHIFT, 20 },
		{ 4, YYAT_SHIFT, 19 },
		{ 3, YYAT_SHIFT, 18 },
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
		{ 61, YYAT_SHIFT, 3 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 61, YYAT_SHIFT, 4 },
		{ 61, YYAT_SHIFT, 5 },
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
		{ 61, YYAT_SHIFT, 6 },
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
		{ 67, YYAT_SHIFT, 15 },
		{ 67, YYAT_SHIFT, 7 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_DEFAULT, 29 },
		{ 0, 0, YYAT_DEFAULT, 27 },
		{ 0, 0, YYAT_DEFAULT, 27 },
		{ 3, 1, YYAT_ERROR, 0 },
		{ 2, 1, YYAT_ERROR, 0 },
		{ 1, 1, YYAT_ERROR, 0 },
		{ -21, 1, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 39, 1, YYAT_DEFAULT, 29 },
		{ -21, 1, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_DEFAULT, 61 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ -4, 1, YYAT_DEFAULT, 75 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_DEFAULT, 27 },
		{ 0, 0, YYAT_DEFAULT, 27 },
		{ -23, 1, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_DEFAULT, 27 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_DEFAULT, 27 },
		{ 0, 0, YYAT_DEFAULT, 27 },
		{ 0, 0, YYAT_DEFAULT, 27 },
		{ 0, 0, YYAT_DEFAULT, 27 },
		{ -6, 1, YYAT_DEFAULT, 67 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ -89, 1, YYAT_DEFAULT, 61 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ -8, 1, YYAT_DEFAULT, 75 },
		{ -9, 1, YYAT_DEFAULT, 75 },
		{ -28, 1, YYAT_DEFAULT, 48 },
		{ -29, 1, YYAT_DEFAULT, 59 },
		{ -30, 1, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ -23, 1, YYAT_REDUCE, 31 },
		{ -27, 1, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ -97, 1, YYAT_DEFAULT, 29 },
		{ 0, 0, YYAT_DEFAULT, 61 },
		{ 0, 0, YYAT_DEFAULT, 61 },
		{ -14, 1, YYAT_DEFAULT, 67 },
		{ -33, 1, YYAT_DEFAULT, 59 },
		{ -34, 1, YYAT_DEFAULT, 27 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ -259, 1, YYAT_REDUCE, 40 },
		{ -261, 1, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ -23, 1, YYAT_DEFAULT, 75 },
		{ -24, 1, YYAT_DEFAULT, 67 },
		{ -25, 1, YYAT_DEFAULT, 67 },
		{ -37, 1, YYAT_DEFAULT, 75 },
		{ 0, 0, YYAT_DEFAULT, 61 },
		{ -121, 1, YYAT_DEFAULT, 27 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ -29, 1, YYAT_DEFAULT, 75 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ -35, 1, YYAT_DEFAULT, 75 },
		{ -40, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ -34, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 23 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 37;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 61, 71 },
		{ 67, 75 },
		{ 61, 70 },
		{ 61, 13 },
		{ 61, 10 },
		{ 61, 11 },
		{ 61, 9 },
		{ 61, 14 },
		{ 60, 69 },
		{ 45, 54 },
		{ 60, 68 },
		{ 45, 53 },
		{ 44, 52 },
		{ 43, 22 },
		{ 44, 51 },
		{ 43, -1 },
		{ 11, 31 },
		{ 58, 66 },
		{ 11, 30 },
		{ 29, 43 },
		{ 29, 12 },
		{ 57, 64 },
		{ 48, 59 },
		{ 46, 56 },
		{ 35, 47 },
		{ 27, 42 },
		{ 26, 41 },
		{ 25, 40 },
		{ 24, 39 },
		{ 23, 38 },
		{ 21, 37 },
		{ 20, 36 },
		{ 19, 34 },
		{ 18, 33 },
		{ 2, 17 },
		{ 1, 16 },
		{ 0, 8 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 35, 29 },
		{ 27, -1 },
		{ 26, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 43 },
		{ 0, -1 },
		{ 0, -1 },
		{ 14, 61 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 25, -1 },
		{ 24, -1 },
		{ 23, -1 },
		{ 22, -1 },
		{ 0, -1 },
		{ 21, -1 },
		{ 20, -1 },
		{ 19, -1 },
		{ 18, -1 },
		{ 17, -1 },
		{ 0, -1 },
		{ 18, 43 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 16, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 11, 61 },
		{ 10, 61 },
		{ 7, 61 },
		{ 15, -1 },
		{ 0, -1 },
		{ 14, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 13, -1 },
		{ 9, -1 },
		{ 0, -1 },
		{ 6, 61 },
		{ -2, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -7, -1 },
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
#line 135 ".\\myparser.y"


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


