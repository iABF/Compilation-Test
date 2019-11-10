/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 56 of your 30 day trial period.
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
* Date: 11/11/19
* Time: 02:25:54
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
#include "ParseTreeNode.h"

struct symtable symtable[MAXSYM];
class ParseTreeNode;

#line 54 "myparser.cpp"
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
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
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
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 65 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
#line 192 "myparser.cpp"
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
#line 66 ".\\myparser.y"

		printf("This is a statement list.\n");
		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
	
#line 208 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 71 ".\\myparser.y"

		printf("Expression statement\n");
		ParseTreeNode *cur = new ParseTreeNode("Expression statement", "");
		cur->addChildNode(yyattribute(1 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 226 "myparser.cpp"
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
#line 77 ".\\myparser.y"

		printf("Repeat Statement, while\n");
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 242 "myparser.cpp"
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
#line 81 ".\\myparser.y"

		printf("Repeat Statement, for\n");
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 258 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 85 ".\\myparser.y"

		printf("Condition Statement, if\n");
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 274 "myparser.cpp"
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
#line 89 ".\\myparser.y"

		printf("Var Declaration\n");
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 290 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 94 ".\\myparser.y"

		printf("Expr, op: =\n");
		ParseTreeNode *cur = new ParseTreeNode("Var Declaration", "");
		cur->addChildNode(yyattribute(1 - 2).node);
		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 309 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 101 ".\\myparser.y"

		printf("ID Declaration, symbol: %s\n", yyattribute(2 - 2).node->getText());
		ParseTreeNode *cur = new ParseTreeNode("Var Declaration", "");
		cur->addChildNode(yyattribute(1 - 2).node);
		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 328 "myparser.cpp"
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
#line 108 ".\\myparser.y"

		printf("ID Declaration, symbol: %s\n", yyattribute(3 - 3).node->getText());
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
	
#line 344 "myparser.cpp"
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
#line 112 ".\\myparser.y"

		printf("Expr, op: =\n");
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
	
#line 360 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 118 ".\\myparser.y"

		printf("Type Specifier, double\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "double");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 377 "myparser.cpp"
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
#line 123 ".\\myparser.y"

		printf("Type Specifier, float\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "float");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 394 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 128 ".\\myparser.y"

		printf("Type Specifier, bool\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "bool");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 411 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 133 ".\\myparser.y"

		printf("Type Specifier, long int\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "long int");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 428 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 138 ".\\myparser.y"

		printf("Type Specifier, long long int\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "long long int");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 445 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 143 ".\\myparser.y"

		printf("Type Specifier, byte\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "byte");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 462 "myparser.cpp"
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
#line 149 ".\\myparser.y"

		printf("Type Specifier, int\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "int");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 479 "myparser.cpp"
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
#line 154 ".\\myparser.y"

		printf("Type Specifier, void\n");
		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "void");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 496 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 160 ".\\myparser.y"

		printf("Code Block.\n");
		ParseTreeNode *cur = new ParseTreeNode("Compound Statement", "");
		cur->addChildNode(yyattribute(2 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
		cur->print();
	
#line 515 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 168 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "while");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 533 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 174 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "while");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 551 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 181 ".\\myparser.y"

		yyattribute(1 - 2).node->getChildNode()->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 567 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 185 ".\\myparser.y"

		yyattribute(1 - 2).node->getChildNode()->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 583 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 190 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 8).node);
		yyattribute(3 - 8).node->addPeerNode(yyattribute(5 - 8).node);
		yyattribute(5 - 8).node->addPeerNode(yyattribute(7 - 8).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 602 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 197 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(5 - 7).node->addPeerNode(holder);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 622 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 205 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 7).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(3 - 7).node->addPeerNode(holder);
		holder->addPeerNode(yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 642 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 213 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode(yyattribute(4 - 7).node);
		yyattribute(4 - 7).node->addPeerNode(yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 662 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 221 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 6).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(3 - 6).node->addPeerNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 683 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 230 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode(yyattribute(4 - 6).node);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		yyattribute(4 - 6).node->addPeerNode(holder2);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 704 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 239 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		holder2->addPeerNode(yyattribute(5 - 6).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 725 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 248 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		ParseTreeNode *holder3 = new ParseTreeNode("Empty Expression", "");
		holder2->addPeerNode(holder3);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 747 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 259 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: +", yyattribute(1 - 3).node->getValue() + yyattribute(3 - 3).node->getValue());
		printf("Expr, op: +\n");
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 766 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 266 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: -", yyattribute(1 - 3).node->getValue() - yyattribute(3 - 3).node->getValue());
		printf("Expr, op: -\n");
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 785 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 273 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: *", yyattribute(1 - 3).node->getValue() * yyattribute(3 - 3).node->getValue());
		printf("Expr, op: *\n");
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 804 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 280 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: /", yyattribute(1 - 3).node->getValue() / yyattribute(3 - 3).node->getValue());
		else {
			yyerror("Divide by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: /", 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		printf("Expr, op: /\n");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 828 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 292 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: %", (int)yyattribute(1 - 3).node->getValue() % (int)yyattribute(3 - 3).node->getValue());
		else {
			yyerror("Mod by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: %", 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		printf("Expr, op: %s\n", "%");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 852 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 304 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <", yyattribute(1 - 3).node->getValue() < yyattribute(3 - 3).node->getValue());
		printf("Expr, op: <\n");
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 871 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 311 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >", yyattribute(1 - 3).node->getValue() > yyattribute(3 - 3).node->getValue());
		printf("Expr, op: >\n");
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 890 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 318 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: ==", yyattribute(1 - 3).node->getValue() == yyattribute(3 - 3).node->getValue());
		printf("Expr, op: ==\n");
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 909 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 325 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <=", yyattribute(1 - 3).node->getValue() <= yyattribute(3 - 3).node->getValue());
		printf("Expr, op: <=\n");
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 928 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 332 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >=", yyattribute(1 - 3).node->getValue() >= yyattribute(3 - 3).node->getValue());
		printf("Expr, op: >=\n");
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 947 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 339 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: !=", yyattribute(1 - 3).node->getValue() != yyattribute(3 - 3).node->getValue());
		printf("Expr, op: !=\n");
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 966 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 347 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: unary -", -yyattribute(2 - 2).node->getValue());
		printf("Expr, op: unary -\n");
		cur->addChildNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 984 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 353 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).node;
	
#line 999 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 356 ".\\myparser.y"

		printf("Const Declaration, %g\n", yyattribute(1 - 1).dval);
		std::ostringstream os;
		os << yyattribute(1 - 1).dval;
		ParseTreeNode *cur = new ParseTreeNode("Const Declaration", os.str(), yyattribute(1 - 1).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1018 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 363 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 1033 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 366 ".\\myparser.y"
printf("Expr, op: =\n");
#line 1046 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 368 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("ID Declaration", string("symbol: ") + string(yyattribute(1 - 1).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
		printf("ID Declaration, symbol: %s\n", yyattribute(1 - 1).symp->name);
	
#line 1063 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 373 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: =", yyattribute(3 - 3).node->getValue());
		yyattribute(1 - 3).node->setValue(yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
		printf("ID Declaration, symbol: %s\n", yyattribute(1 - 3).node->getText());
	
#line 1083 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 382 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1101 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 388 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1119 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 394 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1138 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 401 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1157 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 408 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1176 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 415 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1195 "myparser.cpp"
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
		{ "\'<\'", 60 },
		{ "\'=\'", 61 },
		{ "\'>\'", 62 },
		{ "error", 256 },
		{ "EQ", 268 },
		{ "NE", 269 },
		{ "LE", 270 },
		{ "GE", 271 },
		{ "UMINUS", 274 },
		{ "IF", 280 },
		{ "ELSE", 282 },
		{ "VOID", 284 },
		{ "LBRACE", 286 },
		{ "RBRACE", 287 },
		{ "INT", 288 },
		{ "WHILE", 292 },
		{ "FOR", 293 },
		{ "STRUCT", 297 },
		{ "LONGINT", 298 },
		{ "DOUBLE", 299 },
		{ "LONGLONGINT", 300 },
		{ "FLOAT", 301 },
		{ "BOOL", 302 },
		{ "BYTE", 304 },
		{ "ID", 307 },
		{ "NUMBER", 308 },
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
		"var_declaration_front: type id_expr",
		"var_declaration_front: var_declaration_front \',\' id_expr",
		"var_declaration_front: var_declaration_front \',\' assign_expr",
		"type:",
		"type: DOUBLE",
		"type: FLOAT",
		"type: BOOL",
		"type: LONGINT",
		"type: LONGLONGINT",
		"type: BYTE",
		"type: STRUCT",
		"type: INT",
		"type: VOID",
		"code_block: LBRACE statement_list RBRACE",
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
		"expression: expression \'<\' expression",
		"expression: expression \'>\' expression",
		"expression: expression EQ expression",
		"expression: expression LE expression",
		"expression: expression GE expression",
		"expression: expression NE expression",
		"expression: \'-\' expression",
		"expression: \'(\' expression \')\'",
		"expression: NUMBER",
		"expression: id_expr",
		"expression: assign_expr",
		"id_expr: ID",
		"assign_expr: id_expr \'=\' expression",
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
		{ 1, 1, 0 },
		{ 1, 2, 1 },
		{ 2, 2, 2 },
		{ 2, 1, 3 },
		{ 2, 1, 4 },
		{ 2, 1, 5 },
		{ 2, 2, 6 },
		{ 3, 2, 7 },
		{ 3, 2, 8 },
		{ 3, 3, 9 },
		{ 3, 3, 10 },
		{ 4, 0, -1 },
		{ 4, 1, 11 },
		{ 4, 1, 12 },
		{ 4, 1, 13 },
		{ 4, 1, 14 },
		{ 4, 1, 15 },
		{ 4, 1, 16 },
		{ 4, 1, -1 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 5, 3, 19 },
		{ 6, 5, 20 },
		{ 6, 5, 21 },
		{ 7, 2, 22 },
		{ 7, 2, 23 },
		{ 8, 8, 24 },
		{ 8, 7, 25 },
		{ 8, 7, 26 },
		{ 8, 7, 27 },
		{ 8, 6, 28 },
		{ 8, 6, 29 },
		{ 8, 6, 30 },
		{ 8, 5, 31 },
		{ 9, 3, 32 },
		{ 9, 3, 33 },
		{ 9, 3, 34 },
		{ 9, 3, 35 },
		{ 9, 3, 36 },
		{ 9, 3, 37 },
		{ 9, 3, 38 },
		{ 9, 3, 39 },
		{ 9, 3, 40 },
		{ 9, 3, 41 },
		{ 9, 3, 42 },
		{ 9, 2, 43 },
		{ 9, 3, 44 },
		{ 9, 1, 45 },
		{ 9, 1, 46 },
		{ 9, 1, 47 },
		{ 10, 1, 48 },
		{ 11, 3, 49 },
		{ 12, 5, 50 },
		{ 12, 5, 51 },
		{ 12, 7, 52 },
		{ 12, 7, 53 },
		{ 12, 7, 54 },
		{ 12, 7, 55 }
	};
	yyreduction = reduction;

	yytokenaction_size = 288;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 104, YYAT_SHIFT, 42 },
		{ 19, YYAT_SHIFT, 37 },
		{ 95, YYAT_SHIFT, 102 },
		{ 93, YYAT_SHIFT, 101 },
		{ 104, YYAT_SHIFT, 105 },
		{ 104, YYAT_SHIFT, 43 },
		{ 104, YYAT_SHIFT, 44 },
		{ 60, YYAT_SHIFT, 42 },
		{ 104, YYAT_SHIFT, 45 },
		{ 87, YYAT_SHIFT, 94 },
		{ 104, YYAT_SHIFT, 46 },
		{ 86, YYAT_SHIFT, 92 },
		{ 60, YYAT_SHIFT, 43 },
		{ 60, YYAT_SHIFT, 44 },
		{ 85, YYAT_SHIFT, 91 },
		{ 60, YYAT_SHIFT, 45 },
		{ 19, YYAT_SHIFT, 38 },
		{ 60, YYAT_SHIFT, 46 },
		{ 81, YYAT_SHIFT, 90 },
		{ 96, YYAT_SHIFT, 1 },
		{ 96, YYAT_SHIFT, 103 },
		{ 71, YYAT_SHIFT, 42 },
		{ 88, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 48 },
		{ 96, YYAT_SHIFT, 2 },
		{ 104, YYAT_SHIFT, 49 },
		{ 71, YYAT_SHIFT, 43 },
		{ 71, YYAT_SHIFT, 44 },
		{ 70, YYAT_SHIFT, 42 },
		{ 71, YYAT_SHIFT, 45 },
		{ 60, YYAT_SHIFT, 48 },
		{ 71, YYAT_SHIFT, 46 },
		{ 60, YYAT_SHIFT, 49 },
		{ 70, YYAT_SHIFT, 43 },
		{ 70, YYAT_SHIFT, 44 },
		{ 80, YYAT_SHIFT, 89 },
		{ 70, YYAT_SHIFT, 45 },
		{ 90, YYAT_SHIFT, 3 },
		{ 70, YYAT_SHIFT, 46 },
		{ 78, YYAT_SHIFT, 87 },
		{ 88, YYAT_SHIFT, 96 },
		{ 90, YYAT_SHIFT, 4 },
		{ 66, YYAT_SHIFT, 42 },
		{ 90, YYAT_SHIFT, 33 },
		{ 71, YYAT_SHIFT, 48 },
		{ 90, YYAT_SHIFT, 5 },
		{ 71, YYAT_SHIFT, 49 },
		{ 66, YYAT_SHIFT, 43 },
		{ 77, YYAT_SHIFT, 86 },
		{ 90, YYAT_SHIFT, 6 },
		{ 90, YYAT_SHIFT, 7 },
		{ 70, YYAT_SHIFT, 48 },
		{ 66, YYAT_SHIFT, 46 },
		{ 70, YYAT_SHIFT, 49 },
		{ 90, YYAT_SHIFT, 8 },
		{ 90, YYAT_SHIFT, 9 },
		{ 90, YYAT_SHIFT, 10 },
		{ 90, YYAT_SHIFT, 11 },
		{ 90, YYAT_SHIFT, 12 },
		{ 90, YYAT_SHIFT, 13 },
		{ 73, YYAT_SHIFT, 42 },
		{ 90, YYAT_SHIFT, 14 },
		{ 76, YYAT_SHIFT, 84 },
		{ 61, YYAT_SHIFT, 36 },
		{ 59, YYAT_SHIFT, 79 },
		{ 73, YYAT_SHIFT, 43 },
		{ 73, YYAT_SHIFT, 44 },
		{ 72, YYAT_SHIFT, 42 },
		{ 73, YYAT_SHIFT, 45 },
		{ 58, YYAT_SHIFT, 78 },
		{ 73, YYAT_SHIFT, 46 },
		{ 57, YYAT_SHIFT, 76 },
		{ 72, YYAT_SHIFT, 43 },
		{ 72, YYAT_SHIFT, 44 },
		{ 69, YYAT_SHIFT, 42 },
		{ 72, YYAT_SHIFT, 45 },
		{ 56, YYAT_SHIFT, 75 },
		{ 72, YYAT_SHIFT, 46 },
		{ 65, YYAT_SHIFT, 42 },
		{ 69, YYAT_SHIFT, 43 },
		{ 69, YYAT_SHIFT, 44 },
		{ 68, YYAT_SHIFT, 42 },
		{ 69, YYAT_SHIFT, 45 },
		{ 65, YYAT_SHIFT, 43 },
		{ 69, YYAT_SHIFT, 46 },
		{ 55, YYAT_SHIFT, 74 },
		{ 68, YYAT_SHIFT, 43 },
		{ 68, YYAT_SHIFT, 44 },
		{ 65, YYAT_SHIFT, 46 },
		{ 68, YYAT_SHIFT, 45 },
		{ 53, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 46 },
		{ 40, YYAT_SHIFT, 36 },
		{ 37, YYAT_SHIFT, 15 },
		{ 33, YYAT_ERROR, 0 },
		{ 32, YYAT_SHIFT, 57 },
		{ 28, YYAT_SHIFT, 54 },
		{ 26, YYAT_SHIFT, 47 },
		{ 22, YYAT_ACCEPT, 0 },
		{ 18, YYAT_SHIFT, 36 },
		{ 7, YYAT_SHIFT, 32 },
		{ 6, YYAT_SHIFT, 31 },
		{ 3, YYAT_SHIFT, 30 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 50 },
		{ 104, YYAT_SHIFT, 51 },
		{ 104, YYAT_SHIFT, 52 },
		{ 104, YYAT_SHIFT, 53 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 60, YYAT_SHIFT, 50 },
		{ 60, YYAT_SHIFT, 51 },
		{ 60, YYAT_SHIFT, 52 },
		{ 60, YYAT_SHIFT, 53 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 71, YYAT_SHIFT, 52 },
		{ 71, YYAT_SHIFT, 53 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 70, YYAT_SHIFT, 52 },
		{ 70, YYAT_SHIFT, 53 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 96, YYAT_SHIFT, 16 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_DEFAULT, 33 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 62, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 61, 1, YYAT_ERROR, 0 },
		{ 60, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 38, 1, YYAT_REDUCE, 49 },
		{ -43, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 98, 1, YYAT_DEFAULT, 33 },
		{ 0, 0, YYAT_DEFAULT, 37 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 38, 1, YYAT_DEFAULT, 88 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 55, 1, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 36, 1, YYAT_DEFAULT, 78 },
		{ -192, 1, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ -214, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 31, 1, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_DEFAULT, 53 },
		{ 49, 1, YYAT_DEFAULT, 96 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 44, 1, YYAT_DEFAULT, 104 },
		{ 35, 1, YYAT_DEFAULT, 104 },
		{ 12, 1, YYAT_DEFAULT, 78 },
		{ 10, 1, YYAT_DEFAULT, 88 },
		{ -223, 1, YYAT_DEFAULT, 33 },
		{ -30, 1, YYAT_REDUCE, 52 },
		{ 2, 1, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 41, 1, YYAT_REDUCE, 35 },
		{ 5, 1, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 44, 1, YYAT_REDUCE, 40 },
		{ 37, 1, YYAT_REDUCE, 41 },
		{ -9, 1, YYAT_REDUCE, 42 },
		{ -16, 1, YYAT_REDUCE, 45 },
		{ 30, 1, YYAT_REDUCE, 43 },
		{ 23, 1, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 21, 1, YYAT_DEFAULT, 96 },
		{ -11, 1, YYAT_DEFAULT, 88 },
		{ -20, 1, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ -247, 1, YYAT_REDUCE, 54 },
		{ -264, 1, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ -27, 1, YYAT_DEFAULT, 104 },
		{ -30, 1, YYAT_DEFAULT, 96 },
		{ -32, 1, YYAT_DEFAULT, 96 },
		{ -19, 1, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ -243, 1, YYAT_DEFAULT, 53 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ -38, 1, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ -39, 1, YYAT_DEFAULT, 104 },
		{ -21, 1, YYAT_DEFAULT, 37 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ -37, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 27 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 51;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 90, 99 },
		{ 90, 19 },
		{ 90, 23 },
		{ 90, 100 },
		{ 90, 24 },
		{ 90, 25 },
		{ 90, 17 },
		{ 90, 26 },
		{ 37, 61 },
		{ 37, 62 },
		{ 90, 20 },
		{ 96, 104 },
		{ 96, 18 },
		{ 96, 27 },
		{ 89, 97 },
		{ 75, 82 },
		{ 74, 80 },
		{ 89, 98 },
		{ 75, 83 },
		{ 74, 81 },
		{ 59, 39 },
		{ 17, 34 },
		{ 87, 95 },
		{ 59, -1 },
		{ 17, 35 },
		{ 33, 59 },
		{ 33, 21 },
		{ 23, 40 },
		{ 23, 41 },
		{ 86, 93 },
		{ 78, 88 },
		{ 76, 85 },
		{ 57, 77 },
		{ 53, 73 },
		{ 52, 72 },
		{ 51, 71 },
		{ 50, 70 },
		{ 49, 69 },
		{ 48, 68 },
		{ 46, 67 },
		{ 45, 66 },
		{ 44, 65 },
		{ 43, 64 },
		{ 42, 63 },
		{ 36, 60 },
		{ 32, 58 },
		{ 31, 56 },
		{ 30, 55 },
		{ 2, 29 },
		{ 1, 28 },
		{ 0, 22 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 49, 33 },
		{ 40, 96 },
		{ 39, 96 },
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
		{ 19, 90 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 59 },
		{ 17, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 38, 96 },
		{ 37, 96 },
		{ 36, 96 },
		{ 24, 59 },
		{ 0, -1 },
		{ 0, -1 },
		{ 35, 96 },
		{ -2, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 34, 96 },
		{ 33, 96 },
		{ 32, 96 },
		{ 31, 96 },
		{ 30, 96 },
		{ 0, -1 },
		{ 29, 96 },
		{ 28, 96 },
		{ 27, 96 },
		{ 26, 96 },
		{ 25, 96 },
		{ 24, 96 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 23, 96 },
		{ 0, -1 },
		{ 18, 90 },
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
		{ 14, 90 },
		{ 13, 90 },
		{ 22, 96 },
		{ 0, -1 },
		{ 21, 96 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, 96 },
		{ 13, 96 },
		{ 0, -1 },
		{ 12, 90 },
		{ -2, 96 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 2, -1 },
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
#line 424 ".\\myparser.y"


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


