/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 57 of your 30 day trial period.
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
* Time: 16:43:52
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

#line 59 ".\\myparser.y"

	ParseTreeNode *root = new ParseTreeNode("Source Code", "");
	int inFunc = 0;

#line 90 "myparser.cpp"
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
#line 69 ".\\myparser.y"

		root->addChildNode(yyattribute(1 - 1).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = root;
	
#line 201 "myparser.cpp"
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
#line 73 ".\\myparser.y"

		yyattribute(1 - 2).node->getChildNode()->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 217 "myparser.cpp"
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
#line 77 ".\\myparser.y"

		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node->getChildNode());
		root->addChildNode(yyattribute(1 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = root;
	
#line 234 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 82 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Main Function", "");
		cur->addChildNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
		inFunc = 0;
		(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 253 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 89 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Main Function", "");
		cur->addChildNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
		inFunc = 0;
		(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 272 "myparser.cpp"
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
#line 97 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Compound Statement", "");
		cur->addChildNode(yyattribute(2 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 289 "myparser.cpp"
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
#line 102 ".\\myparser.y"

		inFunc = 1;
	
#line 304 "myparser.cpp"
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
#line 105 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
#line 317 "myparser.cpp"
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
#line 106 ".\\myparser.y"

		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 333 "myparser.cpp"
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
#line 110 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expression statement", "");
		cur->addChildNode(yyattribute(1 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
		if(!inFunc)(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 351 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 116 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
		if(!inFunc)(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 367 "myparser.cpp"
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
#line 120 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
		if(!inFunc)(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 383 "myparser.cpp"
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
#line 124 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
		if(!inFunc)(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 399 "myparser.cpp"
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
#line 128 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
		if(!inFunc)(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 415 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 132 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
		if(!inFunc)(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 431 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 137 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Scan Statement", "");
		cur->addChildNode(yyattribute(3 - 4).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 448 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 142 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Print Statement", "");
		cur->addChildNode(yyattribute(3 - 4).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 465 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 147 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Var Declaration", "");
		cur->addChildNode(yyattribute(1 - 2).node);
		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 483 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 153 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Var Declaration", "");
		cur->addChildNode(yyattribute(1 - 2).node);
		yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 501 "myparser.cpp"
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
#line 159 ".\\myparser.y"

		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
	
#line 516 "myparser.cpp"
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
#line 162 ".\\myparser.y"

		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
	
#line 531 "myparser.cpp"
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
#line 167 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "double");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 547 "myparser.cpp"
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
#line 171 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "float");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 563 "myparser.cpp"
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
#line 175 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "bool");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 579 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 179 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "long int");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 595 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 183 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "long long int");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 611 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 187 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "byte");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 627 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 192 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "int");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 643 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 196 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Type Specifier", "void");
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 659 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 202 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "while");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 677 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 208 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "while");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 695 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 215 ".\\myparser.y"

		yyattribute(1 - 2).node->getChildNode()->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 711 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 219 ".\\myparser.y"

		yyattribute(1 - 2).node->getChildNode()->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 727 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 224 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 8).node);
		yyattribute(3 - 8).node->addPeerNode(yyattribute(5 - 8).node);
		yyattribute(5 - 8).node->addPeerNode(yyattribute(7 - 8).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 746 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 231 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(4 - 9).node);
		yyattribute(4 - 9).node->addPeerNode(yyattribute(6 - 9).node);
		yyattribute(6 - 9).node->addPeerNode(yyattribute(8 - 9).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 765 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 238 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(5 - 7).node->addPeerNode(holder);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 785 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 246 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(4 - 8).node);
		yyattribute(4 - 8).node->addPeerNode(yyattribute(6 - 8).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(6 - 8).node->addPeerNode(holder);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 805 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 254 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 7).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(3 - 7).node->addPeerNode(holder);
		holder->addPeerNode(yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 825 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 262 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(4 - 8).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(4 - 8).node->addPeerNode(holder);
		holder->addPeerNode(yyattribute(7 - 8).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 845 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 270 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode(yyattribute(4 - 7).node);
		yyattribute(4 - 7).node->addPeerNode(yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 865 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 278 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 6).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(3 - 6).node->addPeerNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 886 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 287 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(4 - 7).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(4 - 7).node->addPeerNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 907 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 296 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode(yyattribute(4 - 6).node);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		yyattribute(4 - 6).node->addPeerNode(holder2);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 928 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 305 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		holder2->addPeerNode(yyattribute(5 - 6).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 949 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 314 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		ParseTreeNode *holder3 = new ParseTreeNode("Empty Expression", "");
		holder2->addPeerNode(holder3);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 971 "myparser.cpp"
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
#line 325 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: =", yyattribute(3 - 3).node->getValue());
		yyattribute(1 - 3).node->setValue(yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 990 "myparser.cpp"
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
#line 333 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: +", yyattribute(1 - 3).node->getValue() + yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1008 "myparser.cpp"
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
#line 339 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: -", yyattribute(1 - 3).node->getValue() - yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1026 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 345 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: *", yyattribute(1 - 3).node->getValue() * yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1044 "myparser.cpp"
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
#line 351 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: /", yyattribute(1 - 3).node->getValue() / yyattribute(3 - 3).node->getValue());
		else {
			yyerror("Divide by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: /", 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1067 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 362 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: %", (int)yyattribute(1 - 3).node->getValue() % (int)yyattribute(3 - 3).node->getValue());
		else {
			yyerror("Mod by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: %", 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1090 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 373 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <", yyattribute(1 - 3).node->getValue() < yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1108 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 379 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >", yyattribute(1 - 3).node->getValue() > yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1126 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 385 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: ==", yyattribute(1 - 3).node->getValue() == yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1144 "myparser.cpp"
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
#line 391 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <=", yyattribute(1 - 3).node->getValue() <= yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1162 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 397 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >=", yyattribute(1 - 3).node->getValue() >= yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1180 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 403 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: !=", yyattribute(1 - 3).node->getValue() != yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1198 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 409 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: &&", yyattribute(1 - 3).node->getValue() && yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1216 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 415 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: ||", yyattribute(1 - 3).node->getValue() || yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1234 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 421 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: ^", pow(yyattribute(1 - 3).node->getValue(), yyattribute(3 - 3).node->getValue()));
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1252 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 428 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: unary -", -yyattribute(2 - 2).node->getValue());
		cur->addChildNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1269 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 433 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).node;
	
#line 1284 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 436 ".\\myparser.y"

		std::ostringstream os;
		os << yyattribute(1 - 1).dval;
		ParseTreeNode *cur = new ParseTreeNode("Const Declaration", os.str(), yyattribute(1 - 1).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1302 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 442 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 1317 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 445 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 1332 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 449 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("ID Declaration", string("symbol: ") + string(yyattribute(1 - 1).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1348 "myparser.cpp"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 454 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1366 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 460 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1384 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 466 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1403 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 473 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1422 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 480 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1441 "myparser.cpp"
			}
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 487 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1460 "myparser.cpp"
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
		{ "\'^\'", 94 },
		{ "error", 256 },
		{ "OR", 266 },
		{ "AND", 267 },
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
		"prog: main_func",
		"prog: prog statement_list",
		"prog: statement_list prog",
		"main_func: VOID Main \'(\' \')\' code_block",
		"main_func: INT Main \'(\' \')\' code_block",
		"code_block: LBRACE statement_list RBRACE",
		"Main: MAIN",
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
		"while_stat: WHILE \'(\' expression \')\' code_block",
		"while_stat: WHILE \'(\' expression \')\' statement",
		"for_stat: for_front code_block",
		"for_stat: for_front statement",
		"for_front: FOR \'(\' expression \';\' expression \';\' expression \')\'",
		"for_front: FOR \'(\' type assign_expr \';\' expression \';\' expression \')\'",
		"for_front: FOR \'(\' expression \';\' expression \';\' \')\'",
		"for_front: FOR \'(\' type assign_expr \';\' expression \';\' \')\'",
		"for_front: FOR \'(\' expression \';\' \';\' expression \')\'",
		"for_front: FOR \'(\' type assign_expr \';\' \';\' expression \')\'",
		"for_front: FOR \'(\' \';\' expression \';\' expression \')\'",
		"for_front: FOR \'(\' expression \';\' \';\' \')\'",
		"for_front: FOR \'(\' type assign_expr \';\' \';\' \')\'",
		"for_front: FOR \'(\' \';\' expression \';\' \')\'",
		"for_front: FOR \'(\' \';\' \';\' expression \')\'",
		"for_front: FOR \'(\' \';\' \';\' \')\'",
		"assign_expr: id_expr \'=\' expression",
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
		"expression: expression AND expression",
		"expression: expression OR expression",
		"expression: expression \'^\' expression",
		"expression: \'-\' expression",
		"expression: \'(\' expression \')\'",
		"expression: NUMBER",
		"expression: id_expr",
		"expression: assign_expr",
		"id_expr: ID",
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
		{ 1, 2, 2 },
		{ 2, 5, 3 },
		{ 2, 5, 4 },
		{ 3, 3, 5 },
		{ 4, 1, 6 },
		{ 5, 1, 7 },
		{ 5, 2, 8 },
		{ 6, 2, 9 },
		{ 6, 1, 10 },
		{ 6, 1, 11 },
		{ 6, 1, 12 },
		{ 6, 2, 13 },
		{ 6, 2, 14 },
		{ 7, 4, 15 },
		{ 7, 4, 16 },
		{ 8, 2, 17 },
		{ 8, 2, 18 },
		{ 8, 3, 19 },
		{ 8, 3, 20 },
		{ 9, 0, -1 },
		{ 9, 1, 21 },
		{ 9, 1, 22 },
		{ 9, 1, 23 },
		{ 9, 1, 24 },
		{ 9, 1, 25 },
		{ 9, 1, 26 },
		{ 9, 1, -1 },
		{ 9, 1, 27 },
		{ 9, 1, 28 },
		{ 10, 5, 29 },
		{ 10, 5, 30 },
		{ 11, 2, 31 },
		{ 11, 2, 32 },
		{ 12, 8, 33 },
		{ 12, 9, 34 },
		{ 12, 7, 35 },
		{ 12, 8, 36 },
		{ 12, 7, 37 },
		{ 12, 8, 38 },
		{ 12, 7, 39 },
		{ 12, 6, 40 },
		{ 12, 7, 41 },
		{ 12, 6, 42 },
		{ 12, 6, 43 },
		{ 12, 5, 44 },
		{ 13, 3, 45 },
		{ 14, 3, 46 },
		{ 14, 3, 47 },
		{ 14, 3, 48 },
		{ 14, 3, 49 },
		{ 14, 3, 50 },
		{ 14, 3, 51 },
		{ 14, 3, 52 },
		{ 14, 3, 53 },
		{ 14, 3, 54 },
		{ 14, 3, 55 },
		{ 14, 3, 56 },
		{ 14, 3, 57 },
		{ 14, 3, 58 },
		{ 14, 3, 59 },
		{ 14, 2, 60 },
		{ 14, 3, 61 },
		{ 14, 1, 62 },
		{ 14, 1, 63 },
		{ 14, 1, 64 },
		{ 15, 1, 65 },
		{ 16, 5, 66 },
		{ 16, 5, 67 },
		{ 16, 7, 68 },
		{ 16, 7, 69 },
		{ 16, 7, 70 },
		{ 16, 7, 71 }
	};
	yyreduction = reduction;

	yytokenaction_size = 318;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 67, YYAT_SHIFT, 1 },
		{ 144, YYAT_SHIFT, 147 },
		{ 149, YYAT_SHIFT, 45 },
		{ 142, YYAT_SHIFT, 146 },
		{ 40, YYAT_SHIFT, 77 },
		{ 67, YYAT_SHIFT, 2 },
		{ 149, YYAT_SHIFT, 150 },
		{ 149, YYAT_SHIFT, 46 },
		{ 149, YYAT_SHIFT, 47 },
		{ 26, YYAT_SHIFT, 63 },
		{ 149, YYAT_SHIFT, 48 },
		{ 133, YYAT_SHIFT, 143 },
		{ 149, YYAT_SHIFT, 49 },
		{ 94, YYAT_SHIFT, 45 },
		{ 134, YYAT_ERROR, 0 },
		{ 145, YYAT_SHIFT, 1 },
		{ 145, YYAT_SHIFT, 148 },
		{ 132, YYAT_SHIFT, 141 },
		{ 94, YYAT_SHIFT, 46 },
		{ 94, YYAT_SHIFT, 47 },
		{ 145, YYAT_SHIFT, 2 },
		{ 94, YYAT_SHIFT, 48 },
		{ 31, YYAT_SHIFT, 4 },
		{ 94, YYAT_SHIFT, 49 },
		{ 26, YYAT_SHIFT, 64 },
		{ 149, YYAT_SHIFT, 51 },
		{ 31, YYAT_SHIFT, 5 },
		{ 149, YYAT_SHIFT, 52 },
		{ 131, YYAT_SHIFT, 140 },
		{ 62, YYAT_SHIFT, 1 },
		{ 86, YYAT_SHIFT, 45 },
		{ 129, YYAT_SHIFT, 139 },
		{ 134, YYAT_SHIFT, 145 },
		{ 124, YYAT_SHIFT, 133 },
		{ 62, YYAT_SHIFT, 2 },
		{ 86, YYAT_SHIFT, 46 },
		{ 94, YYAT_SHIFT, 51 },
		{ 123, YYAT_SHIFT, 132 },
		{ 94, YYAT_SHIFT, 52 },
		{ 122, YYAT_SHIFT, 130 },
		{ 86, YYAT_SHIFT, 49 },
		{ 93, YYAT_SHIFT, 45 },
		{ 121, YYAT_SHIFT, 128 },
		{ 120, YYAT_SHIFT, 127 },
		{ 114, YYAT_SHIFT, 126 },
		{ 113, YYAT_SHIFT, 125 },
		{ 93, YYAT_SHIFT, 46 },
		{ 93, YYAT_SHIFT, 47 },
		{ 96, YYAT_SHIFT, 45 },
		{ 93, YYAT_SHIFT, 48 },
		{ 109, YYAT_SHIFT, 124 },
		{ 93, YYAT_SHIFT, 49 },
		{ 108, YYAT_SHIFT, 43 },
		{ 96, YYAT_SHIFT, 46 },
		{ 96, YYAT_SHIFT, 47 },
		{ 95, YYAT_SHIFT, 45 },
		{ 96, YYAT_SHIFT, 48 },
		{ 85, YYAT_SHIFT, 45 },
		{ 96, YYAT_SHIFT, 49 },
		{ 149, YYAT_SHIFT, 53 },
		{ 95, YYAT_SHIFT, 46 },
		{ 95, YYAT_SHIFT, 47 },
		{ 85, YYAT_SHIFT, 46 },
		{ 95, YYAT_SHIFT, 48 },
		{ 93, YYAT_SHIFT, 51 },
		{ 95, YYAT_SHIFT, 49 },
		{ 93, YYAT_SHIFT, 52 },
		{ 85, YYAT_SHIFT, 49 },
		{ 107, YYAT_SHIFT, 122 },
		{ 82, YYAT_SHIFT, 45 },
		{ 94, YYAT_SHIFT, 53 },
		{ 106, YYAT_SHIFT, 121 },
		{ 105, YYAT_SHIFT, 119 },
		{ 103, YYAT_SHIFT, 69 },
		{ 82, YYAT_SHIFT, 46 },
		{ 82, YYAT_SHIFT, 47 },
		{ 91, YYAT_SHIFT, 45 },
		{ 82, YYAT_SHIFT, 48 },
		{ 100, YYAT_SHIFT, 112 },
		{ 82, YYAT_SHIFT, 49 },
		{ 98, YYAT_SHIFT, 43 },
		{ 91, YYAT_SHIFT, 46 },
		{ 91, YYAT_SHIFT, 47 },
		{ 92, YYAT_SHIFT, 45 },
		{ 91, YYAT_SHIFT, 48 },
		{ 90, YYAT_SHIFT, 53 },
		{ 91, YYAT_SHIFT, 49 },
		{ 86, YYAT_SHIFT, 53 },
		{ 92, YYAT_SHIFT, 46 },
		{ 92, YYAT_SHIFT, 47 },
		{ 87, YYAT_SHIFT, 53 },
		{ 92, YYAT_SHIFT, 48 },
		{ 82, YYAT_SHIFT, 51 },
		{ 92, YYAT_SHIFT, 49 },
		{ 82, YYAT_SHIFT, 52 },
		{ 84, YYAT_SHIFT, 53 },
		{ 83, YYAT_SHIFT, 53 },
		{ 81, YYAT_SHIFT, 111 },
		{ 93, YYAT_SHIFT, 53 },
		{ 91, YYAT_SHIFT, 51 },
		{ 80, YYAT_SHIFT, 110 },
		{ 91, YYAT_SHIFT, 52 },
		{ 79, YYAT_SHIFT, 17 },
		{ 126, YYAT_SHIFT, 3 },
		{ 78, YYAT_SHIFT, 107 },
		{ 96, YYAT_SHIFT, 53 },
		{ 92, YYAT_SHIFT, 51 },
		{ 126, YYAT_SHIFT, 60 },
		{ 92, YYAT_SHIFT, 52 },
		{ 126, YYAT_SHIFT, 69 },
		{ 77, YYAT_SHIFT, 105 },
		{ 126, YYAT_SHIFT, 61 },
		{ 95, YYAT_SHIFT, 53 },
		{ 76, YYAT_SHIFT, 104 },
		{ 85, YYAT_SHIFT, 53 },
		{ 126, YYAT_SHIFT, 6 },
		{ 126, YYAT_SHIFT, 7 },
		{ 75, YYAT_SHIFT, 103 },
		{ 74, YYAT_SHIFT, 102 },
		{ 73, YYAT_SHIFT, 101 },
		{ 126, YYAT_SHIFT, 8 },
		{ 126, YYAT_SHIFT, 9 },
		{ 126, YYAT_SHIFT, 10 },
		{ 126, YYAT_SHIFT, 11 },
		{ 126, YYAT_SHIFT, 12 },
		{ 126, YYAT_SHIFT, 13 },
		{ 82, YYAT_SHIFT, 53 },
		{ 126, YYAT_SHIFT, 14 },
		{ 126, YYAT_SHIFT, 15 },
		{ 126, YYAT_SHIFT, 16 },
		{ 69, YYAT_ERROR, 0 },
		{ 89, YYAT_SHIFT, 45 },
		{ 65, YYAT_SHIFT, 43 },
		{ 91, YYAT_SHIFT, 53 },
		{ 59, YYAT_ERROR, 0 },
		{ 38, YYAT_SHIFT, 75 },
		{ 89, YYAT_SHIFT, 46 },
		{ 89, YYAT_SHIFT, 47 },
		{ 88, YYAT_SHIFT, 45 },
		{ 89, YYAT_SHIFT, 48 },
		{ 92, YYAT_SHIFT, 53 },
		{ 89, YYAT_SHIFT, 49 },
		{ 37, YYAT_SHIFT, 74 },
		{ 88, YYAT_SHIFT, 46 },
		{ 88, YYAT_SHIFT, 47 },
		{ 33, YYAT_SHIFT, 72 },
		{ 88, YYAT_SHIFT, 48 },
		{ 22, YYAT_ACCEPT, 0 },
		{ 88, YYAT_SHIFT, 49 },
		{ 21, YYAT_SHIFT, 50 },
		{ 20, YYAT_SHIFT, 44 },
		{ 19, YYAT_SHIFT, 43 },
		{ 16, YYAT_SHIFT, 42 },
		{ 15, YYAT_SHIFT, 41 },
		{ 7, YYAT_SHIFT, 40 },
		{ 6, YYAT_SHIFT, 39 },
		{ 5, YYAT_SHIFT, 36 },
		{ 4, YYAT_SHIFT, 36 },
		{ 3, YYAT_SHIFT, 35 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 89, YYAT_SHIFT, 53 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 88, YYAT_SHIFT, 53 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 40, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 149, YYAT_SHIFT, 54 },
		{ 149, YYAT_SHIFT, 55 },
		{ 149, YYAT_SHIFT, 56 },
		{ 149, YYAT_SHIFT, 57 },
		{ 149, YYAT_SHIFT, 58 },
		{ 149, YYAT_SHIFT, 59 },
		{ 40, YYAT_ERROR, 0 },
		{ 40, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 3 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 60 },
		{ -1, YYAT_ERROR, 0 },
		{ 94, YYAT_SHIFT, 58 },
		{ 94, YYAT_SHIFT, 59 },
		{ 67, YYAT_SHIFT, 61 },
		{ -1, YYAT_ERROR, 0 },
		{ 40, YYAT_ERROR, 0 },
		{ 40, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 6 },
		{ 67, YYAT_SHIFT, 7 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 8 },
		{ 67, YYAT_SHIFT, 9 },
		{ 67, YYAT_SHIFT, 10 },
		{ 67, YYAT_SHIFT, 11 },
		{ 67, YYAT_SHIFT, 12 },
		{ 67, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 14 },
		{ 67, YYAT_SHIFT, 15 },
		{ 67, YYAT_SHIFT, 16 },
		{ 67, YYAT_SHIFT, 17 },
		{ 67, YYAT_SHIFT, 18 },
		{ 62, YYAT_SHIFT, 3 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 62, YYAT_SHIFT, 60 },
		{ 93, YYAT_SHIFT, 58 },
		{ 93, YYAT_SHIFT, 59 },
		{ -1, YYAT_ERROR, 0 },
		{ 62, YYAT_SHIFT, 61 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 62, YYAT_SHIFT, 6 },
		{ 62, YYAT_SHIFT, 7 },
		{ 145, YYAT_SHIFT, 18 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 62, YYAT_SHIFT, 8 },
		{ 62, YYAT_SHIFT, 9 },
		{ 62, YYAT_SHIFT, 10 },
		{ 62, YYAT_SHIFT, 11 },
		{ 62, YYAT_SHIFT, 12 },
		{ 62, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 62, YYAT_SHIFT, 14 },
		{ 62, YYAT_SHIFT, 15 },
		{ 62, YYAT_SHIFT, 16 },
		{ 62, YYAT_SHIFT, 17 },
		{ 62, YYAT_SHIFT, 18 },
		{ 82, YYAT_SHIFT, 54 },
		{ 82, YYAT_SHIFT, 55 },
		{ 82, YYAT_SHIFT, 56 },
		{ 82, YYAT_SHIFT, 57 },
		{ 82, YYAT_SHIFT, 58 },
		{ 82, YYAT_SHIFT, 59 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 91, YYAT_SHIFT, 55 },
		{ 91, YYAT_SHIFT, 56 },
		{ 91, YYAT_SHIFT, 57 },
		{ 91, YYAT_SHIFT, 58 },
		{ 91, YYAT_SHIFT, 59 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 92, YYAT_SHIFT, 56 },
		{ 92, YYAT_SHIFT, 57 },
		{ 92, YYAT_SHIFT, 58 },
		{ 92, YYAT_SHIFT, 59 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_DEFAULT, 31 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 118, 1, YYAT_ERROR, 0 },
		{ -128, 1, YYAT_REDUCE, 31 },
		{ -129, 1, YYAT_REDUCE, 30 },
		{ 115, 1, YYAT_ERROR, 0 },
		{ 114, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 113, 1, YYAT_ERROR, 0 },
		{ 112, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 68 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 90, 1, YYAT_REDUCE, 66 },
		{ 91, 1, YYAT_ERROR, 0 },
		{ 90, 1, YYAT_DEFAULT, 134 },
		{ 147, 1, YYAT_DEFAULT, 69 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -35, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 79 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ -262, 1, YYAT_DEFAULT, 69 },
		{ 0, 0, YYAT_DEFAULT, 126 },
		{ 104, 1, YYAT_DEFAULT, 149 },
		{ 0, 0, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 102, 1, YYAT_ERROR, 0 },
		{ 95, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ -55, 1, YYAT_DEFAULT, 69 },
		{ 0, 0, YYAT_DEFAULT, 79 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ 93, 1, YYAT_DEFAULT, 145 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ -11, 1, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_DEFAULT, 79 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 71, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ -40, 1, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ -156, 1, YYAT_DEFAULT, 126 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 78, 1, YYAT_DEFAULT, 149 },
		{ 77, 1, YYAT_ERROR, 0 },
		{ 76, 1, YYAT_ERROR, 0 },
		{ 72, 1, YYAT_DEFAULT, 149 },
		{ 51, 1, YYAT_DEFAULT, 124 },
		{ 45, 1, YYAT_DEFAULT, 134 },
		{ -205, 1, YYAT_ERROR, 0 },
		{ 59, 1, YYAT_ERROR, 0 },
		{ 56, 1, YYAT_DEFAULT, 149 },
		{ 32, 1, YYAT_REDUCE, 48 },
		{ 2, 1, YYAT_REDUCE, 53 },
		{ 1, 1, YYAT_REDUCE, 51 },
		{ 20, 1, YYAT_REDUCE, 49 },
		{ -7, 1, YYAT_REDUCE, 50 },
		{ -4, 1, YYAT_REDUCE, 52 },
		{ 101, 1, YYAT_REDUCE, 54 },
		{ 94, 1, YYAT_REDUCE, 55 },
		{ -9, 1, YYAT_REDUCE, 62 },
		{ 39, 1, YYAT_REDUCE, 61 },
		{ 46, 1, YYAT_REDUCE, 60 },
		{ 4, 1, YYAT_REDUCE, 56 },
		{ -24, 1, YYAT_REDUCE, 59 },
		{ 18, 1, YYAT_REDUCE, 57 },
		{ 11, 1, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 19, 1, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ -209, 1, YYAT_DEFAULT, 69 },
		{ 0, 0, YYAT_DEFAULT, 126 },
		{ 0, 0, YYAT_DEFAULT, 103 },
		{ -213, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 126 },
		{ 31, 1, YYAT_DEFAULT, 145 },
		{ 12, 1, YYAT_DEFAULT, 134 },
		{ 9, 1, YYAT_DEFAULT, 124 },
		{ -9, 1, YYAT_ERROR, 0 },
		{ -9, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ -237, 1, YYAT_REDUCE, 70 },
		{ -238, 1, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 2, 1, YYAT_DEFAULT, 149 },
		{ 1, 1, YYAT_DEFAULT, 145 },
		{ -2, 1, YYAT_DEFAULT, 145 },
		{ -22, 1, YYAT_DEFAULT, 134 },
		{ -26, 1, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_DEFAULT, 126 },
		{ -177, 1, YYAT_DEFAULT, 59 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ -10, 1, YYAT_DEFAULT, 149 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ -13, 1, YYAT_DEFAULT, 149 },
		{ -24, 1, YYAT_DEFAULT, 145 },
		{ -30, 1, YYAT_DEFAULT, 145 },
		{ -27, 1, YYAT_DEFAULT, 149 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ -38, 1, YYAT_DEFAULT, 149 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ -40, 1, YYAT_DEFAULT, 149 },
		{ -25, 1, YYAT_DEFAULT, 79 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ -35, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 37 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 73;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 126, 138 },
		{ 69, 100 },
		{ 69, 24 },
		{ 126, 137 },
		{ 126, 20 },
		{ 126, 26 },
		{ 126, 29 },
		{ 126, 28 },
		{ 126, 25 },
		{ 126, 32 },
		{ 133, 144 },
		{ 126, 21 },
		{ 40, 79 },
		{ 126, 30 },
		{ 31, 67 },
		{ 31, 27 },
		{ 0, 22 },
		{ 40, 78 },
		{ 31, 31 },
		{ 31, 68 },
		{ 132, 142 },
		{ 0, 24 },
		{ 145, 23 },
		{ 145, 149 },
		{ 145, 19 },
		{ 125, 136 },
		{ 104, 118 },
		{ 101, 114 },
		{ 125, 135 },
		{ 104, 117 },
		{ 101, 113 },
		{ 100, -1 },
		{ 32, 71 },
		{ 124, 134 },
		{ 100, 97 },
		{ 32, 70 },
		{ 79, 109 },
		{ 63, 99 },
		{ 79, 108 },
		{ 63, 98 },
		{ 29, 66 },
		{ 122, 131 },
		{ 29, 65 },
		{ 121, 129 },
		{ 107, 123 },
		{ 105, 120 },
		{ 103, 116 },
		{ 102, 115 },
		{ 77, 106 },
		{ 67, 62 },
		{ 59, 96 },
		{ 58, 95 },
		{ 57, 94 },
		{ 56, 93 },
		{ 55, 92 },
		{ 54, 91 },
		{ 53, 90 },
		{ 52, 89 },
		{ 51, 88 },
		{ 49, 87 },
		{ 48, 86 },
		{ 47, 85 },
		{ 46, 84 },
		{ 45, 83 },
		{ 43, 82 },
		{ 42, 81 },
		{ 41, 80 },
		{ 39, 76 },
		{ 35, 73 },
		{ 5, 38 },
		{ 4, 37 },
		{ 2, 34 },
		{ 1, 33 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 15, 31 },
		{ 58, 145 },
		{ 57, 145 },
		{ 0, -1 },
		{ 66, -1 },
		{ 65, -1 },
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
		{ 0, 67 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 27, -1 },
		{ 0, -1 },
		{ 13, 100 },
		{ 29, 126 },
		{ 0, -1 },
		{ 0, -1 },
		{ 54, 145 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 53, 145 },
		{ 3, 145 },
		{ 51, -1 },
		{ 51, 145 },
		{ 50, 145 },
		{ 0, -1 },
		{ 49, 145 },
		{ 48, 145 },
		{ 47, 145 },
		{ 46, 145 },
		{ 45, 145 },
		{ 0, -1 },
		{ 44, 145 },
		{ 43, 145 },
		{ 42, 145 },
		{ 41, 145 },
		{ 40, 145 },
		{ 39, 145 },
		{ 38, 145 },
		{ 37, 145 },
		{ 36, 145 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 100 },
		{ 24, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 44, 69 },
		{ 0, -1 },
		{ -4, 100 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 34, 145 },
		{ 0, -1 },
		{ 23, -1 },
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
		{ 28, 126 },
		{ 24, 126 },
		{ 44, -1 },
		{ 43, -1 },
		{ 23, 126 },
		{ 31, 145 },
		{ 0, -1 },
		{ 30, 145 },
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
		{ 29, 145 },
		{ 27, 145 },
		{ 0, -1 },
		{ 19, 145 },
		{ 22, 126 },
		{ -3, 145 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 6, 145 },
		{ -4, 145 },
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
		{ 9, -1 },
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
#line 496 ".\\myparser.y"


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


