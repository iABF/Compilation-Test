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
* Time: 03:01:40
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
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 64 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Main Function", "");
		cur->addChildNode(yyattribute(5 - 5).node);
		cur->print();
	
#line 196 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 69 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Main Function", "");
		cur->addChildNode(yyattribute(5 - 5).node);
		cur->print();
	
#line 213 "myparser.cpp"
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
#line 75 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
#line 226 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 76 ".\\myparser.y"

		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
	
#line 241 "myparser.cpp"
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
#line 80 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expression statement", "");
		cur->addChildNode(yyattribute(1 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
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

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 273 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 88 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 288 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 91 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 303 "myparser.cpp"
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
#line 94 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 318 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 97 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 333 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 101 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Scan Statement", "");
		cur->addChildNode(yyattribute(3 - 4).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 350 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 106 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Print Statement", "");
		cur->addChildNode(yyattribute(3 - 4).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 367 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 111 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Var Declaration", "");
		cur->addChildNode(yyattribute(1 - 2).node);
		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 385 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 117 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Var Declaration", "");
		cur->addChildNode(yyattribute(1 - 2).node);
		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 403 "myparser.cpp"
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
#line 123 ".\\myparser.y"

		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
	
#line 418 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 126 ".\\myparser.y"

		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
	
#line 433 "myparser.cpp"
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
#line 131 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "double");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 449 "myparser.cpp"
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
#line 135 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "float");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 465 "myparser.cpp"
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
#line 139 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "bool");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 481 "myparser.cpp"
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
#line 143 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "long int");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 497 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 147 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "long long int");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 513 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 151 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "byte");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 529 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 156 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "int");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 545 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 160 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "void");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 561 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 165 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Compound Statement", "");
		cur->addChildNode(yyattribute(2 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 578 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 171 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "while");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 596 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 177 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "while");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 614 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 184 ".\\myparser.y"

		yyattribute(1 - 2).node->getChildNode()->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 630 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 188 ".\\myparser.y"

		yyattribute(1 - 2).node->getChildNode()->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 646 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 193 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 8).node);
		yyattribute(3 - 8).node->addPeerNode(yyattribute(5 - 8).node);
		yyattribute(5 - 8).node->addPeerNode(yyattribute(7 - 8).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 665 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 200 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(5 - 7).node->addPeerNode(holder);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 685 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 208 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 7).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(3 - 7).node->addPeerNode(holder);
		holder->addPeerNode(yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 705 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 216 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode(yyattribute(4 - 7).node);
		yyattribute(4 - 7).node->addPeerNode(yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 725 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 224 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 6).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(3 - 6).node->addPeerNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 746 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 233 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode(yyattribute(4 - 6).node);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		yyattribute(4 - 6).node->addPeerNode(holder2);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 767 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 242 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		holder2->addPeerNode(yyattribute(5 - 6).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 788 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 251 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		ParseTreeNode *holder3 = new ParseTreeNode("Empty Expression", "");
		holder2->addPeerNode(holder3);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 810 "myparser.cpp"
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
#line 262 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: +", yyattribute(1 - 3).node->getValue() + yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 828 "myparser.cpp"
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
#line 268 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: -", yyattribute(1 - 3).node->getValue() - yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 846 "myparser.cpp"
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
#line 274 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: *", yyattribute(1 - 3).node->getValue() * yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 864 "myparser.cpp"
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
#line 280 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: /", yyattribute(1 - 3).node->getValue() / yyattribute(3 - 3).node->getValue());
		else {
			yyerror("Divide by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: /", 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 887 "myparser.cpp"
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
#line 291 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: %", (int)yyattribute(1 - 3).node->getValue() % (int)yyattribute(3 - 3).node->getValue());
		else {
			yyerror("Mod by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: %", 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 910 "myparser.cpp"
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
#line 302 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <", yyattribute(1 - 3).node->getValue() < yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 928 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 308 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >", yyattribute(1 - 3).node->getValue() > yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 946 "myparser.cpp"
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
#line 314 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: ==", yyattribute(1 - 3).node->getValue() == yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 964 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 320 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <=", yyattribute(1 - 3).node->getValue() <= yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 982 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 326 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >=", yyattribute(1 - 3).node->getValue() >= yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1000 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 332 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: !=", yyattribute(1 - 3).node->getValue() != yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1018 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 339 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: unary -", -yyattribute(2 - 2).node->getValue());
		cur->addChildNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1035 "myparser.cpp"
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
#line 344 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).node;
	
#line 1050 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 347 ".\\myparser.y"

		std::ostringstream os;
		os << yyattribute(1 - 1).dval;
		ParseTreeNode *cur = new ParseTreeNode("Const Declaration", os.str(), yyattribute(1 - 1).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1068 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 353 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 1083 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 356 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 1098 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 360 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("ID Declaration", string("symbol: ") + string(yyattribute(1 - 1).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1114 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 364 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: =", yyattribute(3 - 3).node->getValue());
		yyattribute(1 - 3).node->setValue(yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1133 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 372 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1151 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 378 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1169 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 384 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1188 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 391 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1207 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 398 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1226 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 405 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1245 "myparser.cpp"
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
		{ "MAIN", 285 },
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
		{ "SCAN", 305 },
		{ "PRINT", 306 },
		{ "ID", 307 },
		{ "NUMBER", 308 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: prog",
		"prog: VOID MAIN \'(\' \')\' code_block",
		"prog: INT MAIN \'(\' \')\' code_block",
		"statement_list: statement",
		"statement_list: statement_list statement",
		"statement: expression \';\'",
		"statement: while_stat",
		"statement: for_stat",
		"statement: ifelse_stat",
		"statement: var_declaration_front \';\'",
		"statement: io_stat \';\'",
		"io_stat: SCAN \'(\' id_expr \')\'",
		"io_stat: PRINT \'(\' expression \')\'",
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
		{ 1, 5, 0 },
		{ 1, 5, 1 },
		{ 2, 1, 2 },
		{ 2, 2, 3 },
		{ 3, 2, 4 },
		{ 3, 1, 5 },
		{ 3, 1, 6 },
		{ 3, 1, 7 },
		{ 3, 2, 8 },
		{ 3, 2, 9 },
		{ 4, 4, 10 },
		{ 4, 4, 11 },
		{ 5, 2, 12 },
		{ 5, 2, 13 },
		{ 5, 3, 14 },
		{ 5, 3, 15 },
		{ 6, 0, -1 },
		{ 6, 1, 16 },
		{ 6, 1, 17 },
		{ 6, 1, 18 },
		{ 6, 1, 19 },
		{ 6, 1, 20 },
		{ 6, 1, 21 },
		{ 6, 1, -1 },
		{ 6, 1, 22 },
		{ 6, 1, 23 },
		{ 7, 3, 24 },
		{ 8, 5, 25 },
		{ 8, 5, 26 },
		{ 9, 2, 27 },
		{ 9, 2, 28 },
		{ 10, 8, 29 },
		{ 10, 7, 30 },
		{ 10, 7, 31 },
		{ 10, 7, 32 },
		{ 10, 6, 33 },
		{ 10, 6, 34 },
		{ 10, 6, 35 },
		{ 10, 5, 36 },
		{ 11, 3, 37 },
		{ 11, 3, 38 },
		{ 11, 3, 39 },
		{ 11, 3, 40 },
		{ 11, 3, 41 },
		{ 11, 3, 42 },
		{ 11, 3, 43 },
		{ 11, 3, 44 },
		{ 11, 3, 45 },
		{ 11, 3, 46 },
		{ 11, 3, 47 },
		{ 11, 2, 48 },
		{ 11, 3, 49 },
		{ 11, 1, 50 },
		{ 11, 1, 51 },
		{ 11, 1, 52 },
		{ 12, 1, 53 },
		{ 13, 3, 54 },
		{ 14, 5, 55 },
		{ 14, 5, 56 },
		{ 14, 7, 57 },
		{ 14, 7, 58 },
		{ 14, 7, 59 },
		{ 14, 7, 60 }
	};
	yyreduction = reduction;

	yytokenaction_size = 288;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 124, YYAT_SHIFT, 52 },
		{ 37, YYAT_SHIFT, 66 },
		{ 115, YYAT_SHIFT, 122 },
		{ 113, YYAT_SHIFT, 121 },
		{ 124, YYAT_SHIFT, 125 },
		{ 124, YYAT_SHIFT, 53 },
		{ 124, YYAT_SHIFT, 54 },
		{ 79, YYAT_SHIFT, 52 },
		{ 124, YYAT_SHIFT, 55 },
		{ 107, YYAT_SHIFT, 114 },
		{ 124, YYAT_SHIFT, 56 },
		{ 106, YYAT_SHIFT, 112 },
		{ 79, YYAT_SHIFT, 53 },
		{ 79, YYAT_SHIFT, 54 },
		{ 0, YYAT_SHIFT, 1 },
		{ 79, YYAT_SHIFT, 55 },
		{ 37, YYAT_SHIFT, 67 },
		{ 79, YYAT_SHIFT, 56 },
		{ 0, YYAT_SHIFT, 2 },
		{ 116, YYAT_SHIFT, 13 },
		{ 116, YYAT_SHIFT, 123 },
		{ 88, YYAT_SHIFT, 52 },
		{ 108, YYAT_ERROR, 0 },
		{ 124, YYAT_SHIFT, 58 },
		{ 116, YYAT_SHIFT, 14 },
		{ 124, YYAT_SHIFT, 59 },
		{ 88, YYAT_SHIFT, 53 },
		{ 88, YYAT_SHIFT, 54 },
		{ 87, YYAT_SHIFT, 52 },
		{ 88, YYAT_SHIFT, 55 },
		{ 79, YYAT_SHIFT, 58 },
		{ 88, YYAT_SHIFT, 56 },
		{ 79, YYAT_SHIFT, 59 },
		{ 87, YYAT_SHIFT, 53 },
		{ 87, YYAT_SHIFT, 54 },
		{ 105, YYAT_SHIFT, 111 },
		{ 87, YYAT_SHIFT, 55 },
		{ 110, YYAT_SHIFT, 15 },
		{ 87, YYAT_SHIFT, 56 },
		{ 101, YYAT_SHIFT, 110 },
		{ 108, YYAT_SHIFT, 116 },
		{ 110, YYAT_SHIFT, 16 },
		{ 83, YYAT_SHIFT, 52 },
		{ 110, YYAT_SHIFT, 10 },
		{ 88, YYAT_SHIFT, 58 },
		{ 110, YYAT_SHIFT, 17 },
		{ 88, YYAT_SHIFT, 59 },
		{ 83, YYAT_SHIFT, 53 },
		{ 100, YYAT_SHIFT, 109 },
		{ 110, YYAT_SHIFT, 18 },
		{ 110, YYAT_SHIFT, 19 },
		{ 87, YYAT_SHIFT, 58 },
		{ 83, YYAT_SHIFT, 56 },
		{ 87, YYAT_SHIFT, 59 },
		{ 110, YYAT_SHIFT, 20 },
		{ 110, YYAT_SHIFT, 21 },
		{ 110, YYAT_SHIFT, 22 },
		{ 110, YYAT_SHIFT, 23 },
		{ 110, YYAT_SHIFT, 24 },
		{ 110, YYAT_SHIFT, 25 },
		{ 90, YYAT_SHIFT, 52 },
		{ 110, YYAT_SHIFT, 26 },
		{ 110, YYAT_SHIFT, 27 },
		{ 110, YYAT_SHIFT, 28 },
		{ 97, YYAT_SHIFT, 107 },
		{ 90, YYAT_SHIFT, 53 },
		{ 90, YYAT_SHIFT, 54 },
		{ 89, YYAT_SHIFT, 52 },
		{ 90, YYAT_SHIFT, 55 },
		{ 96, YYAT_SHIFT, 106 },
		{ 90, YYAT_SHIFT, 56 },
		{ 95, YYAT_SHIFT, 104 },
		{ 89, YYAT_SHIFT, 53 },
		{ 89, YYAT_SHIFT, 54 },
		{ 86, YYAT_SHIFT, 52 },
		{ 89, YYAT_SHIFT, 55 },
		{ 91, YYAT_SHIFT, 50 },
		{ 89, YYAT_SHIFT, 56 },
		{ 82, YYAT_SHIFT, 52 },
		{ 86, YYAT_SHIFT, 53 },
		{ 86, YYAT_SHIFT, 54 },
		{ 85, YYAT_SHIFT, 52 },
		{ 86, YYAT_SHIFT, 55 },
		{ 82, YYAT_SHIFT, 53 },
		{ 86, YYAT_SHIFT, 56 },
		{ 78, YYAT_SHIFT, 99 },
		{ 85, YYAT_SHIFT, 53 },
		{ 85, YYAT_SHIFT, 54 },
		{ 82, YYAT_SHIFT, 56 },
		{ 85, YYAT_SHIFT, 55 },
		{ 77, YYAT_SHIFT, 98 },
		{ 85, YYAT_SHIFT, 56 },
		{ 76, YYAT_SHIFT, 97 },
		{ 75, YYAT_SHIFT, 95 },
		{ 74, YYAT_SHIFT, 94 },
		{ 73, YYAT_SHIFT, 93 },
		{ 66, YYAT_SHIFT, 29 },
		{ 64, YYAT_SHIFT, 50 },
		{ 63, YYAT_ERROR, 0 },
		{ 47, YYAT_SHIFT, 75 },
		{ 43, YYAT_SHIFT, 72 },
		{ 40, YYAT_SHIFT, 70 },
		{ 35, YYAT_SHIFT, 57 },
		{ 33, YYAT_SHIFT, 51 },
		{ 32, YYAT_SHIFT, 50 },
		{ 28, YYAT_SHIFT, 49 },
		{ 27, YYAT_SHIFT, 48 },
		{ 19, YYAT_SHIFT, 47 },
		{ 18, YYAT_SHIFT, 46 },
		{ 15, YYAT_SHIFT, 45 },
		{ 10, YYAT_ERROR, 0 },
		{ 9, YYAT_SHIFT, 10 },
		{ 7, YYAT_SHIFT, 9 },
		{ 6, YYAT_SHIFT, 8 },
		{ 5, YYAT_SHIFT, 7 },
		{ 4, YYAT_SHIFT, 6 },
		{ 3, YYAT_ACCEPT, 0 },
		{ 2, YYAT_SHIFT, 5 },
		{ 1, YYAT_SHIFT, 4 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 124, YYAT_SHIFT, 60 },
		{ 124, YYAT_SHIFT, 61 },
		{ 124, YYAT_SHIFT, 62 },
		{ 124, YYAT_SHIFT, 63 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 79, YYAT_SHIFT, 60 },
		{ 79, YYAT_SHIFT, 61 },
		{ 79, YYAT_SHIFT, 62 },
		{ 79, YYAT_SHIFT, 63 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 88, YYAT_SHIFT, 62 },
		{ 88, YYAT_SHIFT, 63 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 87, YYAT_SHIFT, 62 },
		{ 87, YYAT_SHIFT, 63 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 116, YYAT_SHIFT, 30 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -270, 1, YYAT_ERROR, 0 },
		{ -167, 1, YYAT_ERROR, 0 },
		{ -168, 1, YYAT_ERROR, 0 },
		{ 116, 1, YYAT_ERROR, 0 },
		{ 75, 1, YYAT_ERROR, 0 },
		{ 74, 1, YYAT_ERROR, 0 },
		{ 72, 1, YYAT_ERROR, 0 },
		{ 71, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 9 },
		{ -175, 1, YYAT_ERROR, 0 },
		{ -176, 1, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 69, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 68, 1, YYAT_ERROR, 0 },
		{ 67, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 66, 1, YYAT_ERROR, 0 },
		{ 65, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 43, 1, YYAT_REDUCE, 54 },
		{ 44, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 43, 1, YYAT_DEFAULT, 108 },
		{ 0, 0, YYAT_DEFAULT, 66 },
		{ -43, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ -186, 1, YYAT_DEFAULT, 10 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 59, 1, YYAT_DEFAULT, 124 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 40, 1, YYAT_DEFAULT, 97 },
		{ 0, 0, YYAT_DEFAULT, 66 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_DEFAULT, 63 },
		{ 57, 1, YYAT_DEFAULT, 116 },
		{ 36, 1, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ -211, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 54, 1, YYAT_DEFAULT, 124 },
		{ 53, 1, YYAT_DEFAULT, 124 },
		{ 34, 1, YYAT_DEFAULT, 97 },
		{ 33, 1, YYAT_DEFAULT, 108 },
		{ 49, 1, YYAT_ERROR, 0 },
		{ 44, 1, YYAT_DEFAULT, 124 },
		{ -30, 1, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 41, 1, YYAT_REDUCE, 40 },
		{ 5, 1, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 44, 1, YYAT_REDUCE, 45 },
		{ 37, 1, YYAT_REDUCE, 46 },
		{ -9, 1, YYAT_REDUCE, 47 },
		{ -16, 1, YYAT_REDUCE, 50 },
		{ 30, 1, YYAT_REDUCE, 48 },
		{ 23, 1, YYAT_REDUCE, 49 },
		{ 15, 1, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 30, 1, YYAT_DEFAULT, 116 },
		{ 10, 1, YYAT_DEFAULT, 108 },
		{ 5, 1, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -234, 1, YYAT_REDUCE, 59 },
		{ -243, 1, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ -6, 1, YYAT_DEFAULT, 124 },
		{ -30, 1, YYAT_DEFAULT, 116 },
		{ -32, 1, YYAT_DEFAULT, 116 },
		{ -19, 1, YYAT_DEFAULT, 124 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ -243, 1, YYAT_DEFAULT, 63 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ -38, 1, YYAT_DEFAULT, 124 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ -39, 1, YYAT_DEFAULT, 124 },
		{ -21, 1, YYAT_DEFAULT, 66 },
		{ 0, 0, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ -37, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 32 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 56;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 110, 119 },
		{ 110, 33 },
		{ 110, 37 },
		{ 110, 36 },
		{ 110, 120 },
		{ 110, 31 },
		{ 110, 41 },
		{ 110, 38 },
		{ 110, 35 },
		{ 66, 91 },
		{ 66, 92 },
		{ 110, 42 },
		{ 116, 124 },
		{ 116, 32 },
		{ 116, 39 },
		{ 109, 117 },
		{ 94, 102 },
		{ 93, 100 },
		{ 40, 71 },
		{ 109, 118 },
		{ 94, 103 },
		{ 93, 101 },
		{ 40, -1 },
		{ 38, 68 },
		{ 36, 64 },
		{ 36, 65 },
		{ 107, 115 },
		{ 38, 69 },
		{ 10, 40 },
		{ 10, 34 },
		{ 106, 113 },
		{ 97, 108 },
		{ 95, 105 },
		{ 75, 96 },
		{ 63, 90 },
		{ 62, 89 },
		{ 61, 88 },
		{ 60, 87 },
		{ 59, 86 },
		{ 58, 85 },
		{ 56, 84 },
		{ 55, 83 },
		{ 54, 82 },
		{ 53, 81 },
		{ 52, 80 },
		{ 50, 79 },
		{ 49, 78 },
		{ 48, 77 },
		{ 47, 76 },
		{ 46, 74 },
		{ 45, 73 },
		{ 14, 44 },
		{ 13, 43 },
		{ 9, 12 },
		{ 8, 11 },
		{ 0, 3 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 54, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 47, -1 },
		{ 46, -1 },
		{ 26, 40 },
		{ 0, -1 },
		{ 0, -1 },
		{ 41, 116 },
		{ 40, 116 },
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
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 12, -1 },
		{ 0, -1 },
		{ 20, 110 },
		{ 0, -1 },
		{ 15, 110 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 39, 116 },
		{ 38, 116 },
		{ 37, 116 },
		{ 35, -1 },
		{ 35, 116 },
		{ 34, 116 },
		{ 0, -1 },
		{ 33, 116 },
		{ 32, 116 },
		{ 31, 116 },
		{ 30, 116 },
		{ 29, 116 },
		{ 0, -1 },
		{ 28, 116 },
		{ 27, 116 },
		{ 26, 116 },
		{ 25, 116 },
		{ 24, 116 },
		{ 23, 116 },
		{ 0, -1 },
		{ 0, -1 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 116 },
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
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 14, 110 },
		{ 13, 110 },
		{ 21, 116 },
		{ 0, -1 },
		{ 20, 116 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 19, 116 },
		{ 15, 116 },
		{ 0, -1 },
		{ 12, 110 },
		{ -3, 116 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 1, -1 },
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
#line 414 ".\\myparser.y"


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


