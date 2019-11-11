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
* Time: 15:21:30
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
#line 96 ".\\myparser.y"

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
#line 101 ".\\myparser.y"

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
#line 104 ".\\myparser.y"
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
#line 105 ".\\myparser.y"

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
#line 109 ".\\myparser.y"

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
#line 115 ".\\myparser.y"

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
#line 119 ".\\myparser.y"

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
#line 123 ".\\myparser.y"

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
#line 127 ".\\myparser.y"

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
#line 131 ".\\myparser.y"

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
#line 136 ".\\myparser.y"

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
#line 141 ".\\myparser.y"

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
#line 146 ".\\myparser.y"

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
#line 152 ".\\myparser.y"

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
#line 158 ".\\myparser.y"

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
#line 161 ".\\myparser.y"

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
#line 166 ".\\myparser.y"

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
#line 170 ".\\myparser.y"

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
#line 174 ".\\myparser.y"

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
#line 178 ".\\myparser.y"

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
#line 182 ".\\myparser.y"

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
#line 186 ".\\myparser.y"

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
#line 191 ".\\myparser.y"

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
#line 195 ".\\myparser.y"

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
#line 201 ".\\myparser.y"

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
#line 207 ".\\myparser.y"

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
#line 214 ".\\myparser.y"

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
#line 218 ".\\myparser.y"

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
#line 223 ".\\myparser.y"

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
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 230 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(5 - 7).node->addPeerNode(holder);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 766 "myparser.cpp"
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
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(3 - 7).node->addPeerNode(holder);
		holder->addPeerNode(yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 786 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 246 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode(yyattribute(4 - 7).node);
		yyattribute(4 - 7).node->addPeerNode(yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 806 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 254 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		cur->addChildNode(yyattribute(3 - 6).node);
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		yyattribute(3 - 6).node->addPeerNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 827 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 263 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		holder->addPeerNode(yyattribute(4 - 6).node);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		yyattribute(4 - 6).node->addPeerNode(holder2);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 848 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 272 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		holder2->addPeerNode(yyattribute(5 - 6).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 869 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 281 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Repeat Statement", "for");
		ParseTreeNode *holder = new ParseTreeNode("Empty Expression", "");
		cur->addChildNode(holder);
		ParseTreeNode *holder2 = new ParseTreeNode("Empty Expression", "");
		holder->addPeerNode(holder2);
		ParseTreeNode *holder3 = new ParseTreeNode("Empty Expression", "");
		holder2->addPeerNode(holder3);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 891 "myparser.cpp"
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
#line 292 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: +", yyattribute(1 - 3).node->getValue() + yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 909 "myparser.cpp"
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
#line 298 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: -", yyattribute(1 - 3).node->getValue() - yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 927 "myparser.cpp"
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
#line 304 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: *", yyattribute(1 - 3).node->getValue() * yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 945 "myparser.cpp"
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
#line 310 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: /", yyattribute(1 - 3).node->getValue() / yyattribute(3 - 3).node->getValue());
		else {
			yyerror("Divide by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: /", 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 968 "myparser.cpp"
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
#line 321 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new ParseTreeNode("Expr", "op: %", (int)yyattribute(1 - 3).node->getValue() % (int)yyattribute(3 - 3).node->getValue());
		else {
			yyerror("Mod by zero.\n");
			cur = new ParseTreeNode("Error Expr", "op: %", 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 991 "myparser.cpp"
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
#line 332 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <", yyattribute(1 - 3).node->getValue() < yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1009 "myparser.cpp"
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
#line 338 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >", yyattribute(1 - 3).node->getValue() > yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1027 "myparser.cpp"
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
#line 344 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: ==", yyattribute(1 - 3).node->getValue() == yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1045 "myparser.cpp"
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
#line 350 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: <=", yyattribute(1 - 3).node->getValue() <= yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1063 "myparser.cpp"
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
#line 356 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: >=", yyattribute(1 - 3).node->getValue() >= yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1081 "myparser.cpp"
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
#line 362 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: !=", yyattribute(1 - 3).node->getValue() != yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1099 "myparser.cpp"
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
#line 368 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: ^", pow(yyattribute(1 - 3).node->getValue(), yyattribute(3 - 3).node->getValue()));
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1117 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 375 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: unary -", -yyattribute(2 - 2).node->getValue());
		cur->addChildNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1134 "myparser.cpp"
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
#line 380 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).node;
	
#line 1149 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 383 ".\\myparser.y"

		std::ostringstream os;
		os << yyattribute(1 - 1).dval;
		ParseTreeNode *cur = new ParseTreeNode("Const Declaration", os.str(), yyattribute(1 - 1).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1167 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 389 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 1182 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 392 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 1197 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 396 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("ID Declaration", string("symbol: ") + string(yyattribute(1 - 1).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1213 "myparser.cpp"
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
#line 400 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: =", yyattribute(3 - 3).node->getValue());
		yyattribute(1 - 3).node->setValue(yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1232 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 408 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1250 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 414 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1268 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 420 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1287 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 427 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1306 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 434 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1325 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 441 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1344 "myparser.cpp"
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
		"expression: expression \'^\' expression",
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
		{ 12, 7, 34 },
		{ 12, 7, 35 },
		{ 12, 7, 36 },
		{ 12, 6, 37 },
		{ 12, 6, 38 },
		{ 12, 6, 39 },
		{ 12, 5, 40 },
		{ 13, 3, 41 },
		{ 13, 3, 42 },
		{ 13, 3, 43 },
		{ 13, 3, 44 },
		{ 13, 3, 45 },
		{ 13, 3, 46 },
		{ 13, 3, 47 },
		{ 13, 3, 48 },
		{ 13, 3, 49 },
		{ 13, 3, 50 },
		{ 13, 3, 51 },
		{ 13, 3, 52 },
		{ 13, 2, 53 },
		{ 13, 3, 54 },
		{ 13, 1, 55 },
		{ 13, 1, 56 },
		{ 13, 1, 57 },
		{ 14, 1, 58 },
		{ 15, 3, 59 },
		{ 16, 5, 60 },
		{ 16, 5, 61 },
		{ 16, 7, 62 },
		{ 16, 7, 63 },
		{ 16, 7, 64 },
		{ 16, 7, 65 }
	};
	yyreduction = reduction;

	yytokenaction_size = 302;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 66, YYAT_SHIFT, 1 },
		{ 123, YYAT_SHIFT, 130 },
		{ 132, YYAT_SHIFT, 53 },
		{ 121, YYAT_SHIFT, 129 },
		{ 87, YYAT_SHIFT, 53 },
		{ 66, YYAT_SHIFT, 2 },
		{ 132, YYAT_SHIFT, 133 },
		{ 132, YYAT_SHIFT, 54 },
		{ 132, YYAT_SHIFT, 55 },
		{ 87, YYAT_SHIFT, 54 },
		{ 132, YYAT_SHIFT, 56 },
		{ 25, YYAT_SHIFT, 51 },
		{ 132, YYAT_SHIFT, 57 },
		{ 93, YYAT_SHIFT, 53 },
		{ 87, YYAT_SHIFT, 57 },
		{ 124, YYAT_SHIFT, 1 },
		{ 124, YYAT_SHIFT, 131 },
		{ 116, YYAT_ERROR, 0 },
		{ 93, YYAT_SHIFT, 54 },
		{ 93, YYAT_SHIFT, 55 },
		{ 124, YYAT_SHIFT, 2 },
		{ 93, YYAT_SHIFT, 56 },
		{ 115, YYAT_SHIFT, 122 },
		{ 93, YYAT_SHIFT, 57 },
		{ 29, YYAT_SHIFT, 4 },
		{ 132, YYAT_SHIFT, 59 },
		{ 25, YYAT_SHIFT, 52 },
		{ 132, YYAT_SHIFT, 60 },
		{ 29, YYAT_SHIFT, 5 },
		{ 45, YYAT_SHIFT, 1 },
		{ 114, YYAT_SHIFT, 120 },
		{ 113, YYAT_SHIFT, 119 },
		{ 107, YYAT_SHIFT, 118 },
		{ 106, YYAT_SHIFT, 117 },
		{ 45, YYAT_SHIFT, 2 },
		{ 116, YYAT_SHIFT, 124 },
		{ 93, YYAT_SHIFT, 59 },
		{ 92, YYAT_SHIFT, 53 },
		{ 93, YYAT_SHIFT, 60 },
		{ 102, YYAT_SHIFT, 115 },
		{ 101, YYAT_SHIFT, 114 },
		{ 86, YYAT_SHIFT, 53 },
		{ 92, YYAT_SHIFT, 54 },
		{ 92, YYAT_SHIFT, 55 },
		{ 100, YYAT_SHIFT, 112 },
		{ 92, YYAT_SHIFT, 56 },
		{ 86, YYAT_SHIFT, 54 },
		{ 92, YYAT_SHIFT, 57 },
		{ 98, YYAT_SHIFT, 48 },
		{ 91, YYAT_SHIFT, 61 },
		{ 88, YYAT_SHIFT, 61 },
		{ 86, YYAT_SHIFT, 57 },
		{ 85, YYAT_SHIFT, 61 },
		{ 84, YYAT_SHIFT, 61 },
		{ 82, YYAT_SHIFT, 47 },
		{ 81, YYAT_SHIFT, 105 },
		{ 78, YYAT_SHIFT, 104 },
		{ 77, YYAT_SHIFT, 103 },
		{ 95, YYAT_SHIFT, 53 },
		{ 132, YYAT_SHIFT, 61 },
		{ 92, YYAT_SHIFT, 59 },
		{ 87, YYAT_SHIFT, 61 },
		{ 92, YYAT_SHIFT, 60 },
		{ 95, YYAT_SHIFT, 54 },
		{ 95, YYAT_SHIFT, 55 },
		{ 76, YYAT_SHIFT, 102 },
		{ 95, YYAT_SHIFT, 56 },
		{ 80, YYAT_SHIFT, 53 },
		{ 95, YYAT_SHIFT, 57 },
		{ 75, YYAT_SHIFT, 100 },
		{ 93, YYAT_SHIFT, 61 },
		{ 74, YYAT_SHIFT, 99 },
		{ 80, YYAT_SHIFT, 54 },
		{ 80, YYAT_SHIFT, 55 },
		{ 94, YYAT_SHIFT, 53 },
		{ 80, YYAT_SHIFT, 56 },
		{ 73, YYAT_SHIFT, 98 },
		{ 80, YYAT_SHIFT, 57 },
		{ 72, YYAT_SHIFT, 97 },
		{ 94, YYAT_SHIFT, 54 },
		{ 94, YYAT_SHIFT, 55 },
		{ 71, YYAT_SHIFT, 96 },
		{ 94, YYAT_SHIFT, 56 },
		{ 118, YYAT_SHIFT, 3 },
		{ 94, YYAT_SHIFT, 57 },
		{ 68, YYAT_SHIFT, 47 },
		{ 65, YYAT_ERROR, 0 },
		{ 118, YYAT_SHIFT, 43 },
		{ 51, YYAT_SHIFT, 17 },
		{ 118, YYAT_SHIFT, 48 },
		{ 80, YYAT_SHIFT, 59 },
		{ 118, YYAT_SHIFT, 44 },
		{ 80, YYAT_SHIFT, 60 },
		{ 48, YYAT_ERROR, 0 },
		{ 92, YYAT_SHIFT, 61 },
		{ 118, YYAT_SHIFT, 6 },
		{ 118, YYAT_SHIFT, 7 },
		{ 40, YYAT_SHIFT, 75 },
		{ 86, YYAT_SHIFT, 61 },
		{ 38, YYAT_SHIFT, 73 },
		{ 118, YYAT_SHIFT, 8 },
		{ 118, YYAT_SHIFT, 9 },
		{ 118, YYAT_SHIFT, 10 },
		{ 118, YYAT_SHIFT, 11 },
		{ 118, YYAT_SHIFT, 12 },
		{ 118, YYAT_SHIFT, 13 },
		{ 90, YYAT_SHIFT, 53 },
		{ 118, YYAT_SHIFT, 14 },
		{ 118, YYAT_SHIFT, 15 },
		{ 118, YYAT_SHIFT, 16 },
		{ 37, YYAT_SHIFT, 72 },
		{ 90, YYAT_SHIFT, 54 },
		{ 90, YYAT_SHIFT, 55 },
		{ 89, YYAT_SHIFT, 53 },
		{ 90, YYAT_SHIFT, 56 },
		{ 95, YYAT_SHIFT, 61 },
		{ 90, YYAT_SHIFT, 57 },
		{ 33, YYAT_SHIFT, 70 },
		{ 89, YYAT_SHIFT, 54 },
		{ 89, YYAT_SHIFT, 55 },
		{ 26, YYAT_SHIFT, 58 },
		{ 89, YYAT_SHIFT, 56 },
		{ 22, YYAT_SHIFT, 47 },
		{ 89, YYAT_SHIFT, 57 },
		{ 80, YYAT_SHIFT, 61 },
		{ 20, YYAT_SHIFT, 46 },
		{ 19, YYAT_ACCEPT, 0 },
		{ 16, YYAT_SHIFT, 42 },
		{ 15, YYAT_SHIFT, 41 },
		{ 7, YYAT_SHIFT, 40 },
		{ 6, YYAT_SHIFT, 39 },
		{ 94, YYAT_SHIFT, 61 },
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
		{ 90, YYAT_SHIFT, 61 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 89, YYAT_SHIFT, 61 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 132, YYAT_SHIFT, 62 },
		{ 132, YYAT_SHIFT, 63 },
		{ 132, YYAT_SHIFT, 64 },
		{ 132, YYAT_SHIFT, 65 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 3 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 43 },
		{ -1, YYAT_ERROR, 0 },
		{ 93, YYAT_SHIFT, 64 },
		{ 93, YYAT_SHIFT, 65 },
		{ 66, YYAT_SHIFT, 44 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 6 },
		{ 66, YYAT_SHIFT, 7 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 8 },
		{ 66, YYAT_SHIFT, 9 },
		{ 66, YYAT_SHIFT, 10 },
		{ 66, YYAT_SHIFT, 11 },
		{ 66, YYAT_SHIFT, 12 },
		{ 66, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 14 },
		{ 66, YYAT_SHIFT, 15 },
		{ 66, YYAT_SHIFT, 16 },
		{ 66, YYAT_SHIFT, 17 },
		{ 66, YYAT_SHIFT, 18 },
		{ 45, YYAT_SHIFT, 3 },
		{ 92, YYAT_SHIFT, 64 },
		{ 92, YYAT_SHIFT, 65 },
		{ -1, YYAT_ERROR, 0 },
		{ 45, YYAT_SHIFT, 43 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 45, YYAT_SHIFT, 44 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 45, YYAT_SHIFT, 6 },
		{ 45, YYAT_SHIFT, 7 },
		{ 124, YYAT_SHIFT, 18 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 45, YYAT_SHIFT, 8 },
		{ 45, YYAT_SHIFT, 9 },
		{ 45, YYAT_SHIFT, 10 },
		{ 45, YYAT_SHIFT, 11 },
		{ 45, YYAT_SHIFT, 12 },
		{ 45, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 45, YYAT_SHIFT, 14 },
		{ 45, YYAT_SHIFT, 15 },
		{ 45, YYAT_SHIFT, 16 },
		{ 45, YYAT_SHIFT, 17 },
		{ 45, YYAT_SHIFT, 18 },
		{ 80, YYAT_SHIFT, 62 },
		{ 80, YYAT_SHIFT, 63 },
		{ 80, YYAT_SHIFT, 64 },
		{ 80, YYAT_SHIFT, 65 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_DEFAULT, 29 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 94, 1, YYAT_ERROR, 0 },
		{ -152, 1, YYAT_REDUCE, 31 },
		{ -153, 1, YYAT_REDUCE, 30 },
		{ 90, 1, YYAT_ERROR, 0 },
		{ 89, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 88, 1, YYAT_ERROR, 0 },
		{ 87, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 126, 1, YYAT_DEFAULT, 48 },
		{ 66, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 61, 1, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ -33, 1, YYAT_ERROR, 0 },
		{ 61, 1, YYAT_DEFAULT, 116 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ -260, 1, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_DEFAULT, 51 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 76, 1, YYAT_DEFAULT, 132 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 70, 1, YYAT_ERROR, 0 },
		{ 59, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 38, 1, YYAT_DEFAULT, 102 },
		{ 0, 0, YYAT_DEFAULT, 51 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ -11, 1, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ -193, 1, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ -219, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_DEFAULT, 65 },
		{ 45, 1, YYAT_DEFAULT, 124 },
		{ -40, 1, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 24, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 40, 1, YYAT_DEFAULT, 132 },
		{ 37, 1, YYAT_ERROR, 0 },
		{ 35, 1, YYAT_ERROR, 0 },
		{ 30, 1, YYAT_DEFAULT, 132 },
		{ 10, 1, YYAT_DEFAULT, 102 },
		{ 6, 1, YYAT_DEFAULT, 116 },
		{ 16, 1, YYAT_ERROR, 0 },
		{ 15, 1, YYAT_DEFAULT, 132 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 30, 1, YYAT_REDUCE, 62 },
		{ -232, 1, YYAT_DEFAULT, 48 },
		{ -7, 1, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ -41, 1, YYAT_REDUCE, 48 },
		{ -42, 1, YYAT_REDUCE, 46 },
		{ 4, 1, YYAT_REDUCE, 44 },
		{ -33, 1, YYAT_REDUCE, 45 },
		{ -44, 1, YYAT_REDUCE, 47 },
		{ 76, 1, YYAT_REDUCE, 49 },
		{ 69, 1, YYAT_REDUCE, 50 },
		{ -45, 1, YYAT_REDUCE, 55 },
		{ 0, 1, YYAT_REDUCE, 51 },
		{ -24, 1, YYAT_REDUCE, 54 },
		{ 37, 1, YYAT_REDUCE, 52 },
		{ 21, 1, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 98 },
		{ -238, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 3, 1, YYAT_DEFAULT, 124 },
		{ -19, 1, YYAT_DEFAULT, 116 },
		{ -20, 1, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ -249, 1, YYAT_REDUCE, 64 },
		{ -250, 1, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ -10, 1, YYAT_DEFAULT, 132 },
		{ -11, 1, YYAT_DEFAULT, 124 },
		{ -19, 1, YYAT_DEFAULT, 124 },
		{ -24, 1, YYAT_DEFAULT, 132 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ -197, 1, YYAT_DEFAULT, 65 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ -38, 1, YYAT_DEFAULT, 132 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ -40, 1, YYAT_DEFAULT, 132 },
		{ -25, 1, YYAT_DEFAULT, 51 },
		{ 0, 0, YYAT_REDUCE, 68 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ 0, 0, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ -35, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 36 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 65;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 118, 128 },
		{ 66, 45 },
		{ 66, 28 },
		{ 118, 127 },
		{ 118, 20 },
		{ 118, 25 },
		{ 118, 30 },
		{ 118, 32 },
		{ 118, 31 },
		{ 118, 23 },
		{ 118, 26 },
		{ 29, 66 },
		{ 29, 24 },
		{ 118, 21 },
		{ 0, 19 },
		{ 29, 29 },
		{ 29, 67 },
		{ 51, 82 },
		{ 51, 83 },
		{ 0, 28 },
		{ 124, 132 },
		{ 124, 22 },
		{ 124, 27 },
		{ 117, 126 },
		{ 99, 111 },
		{ 96, 107 },
		{ 117, 125 },
		{ 99, 110 },
		{ 96, 106 },
		{ 81, -1 },
		{ 23, 50 },
		{ 115, 123 },
		{ 81, 79 },
		{ 23, 49 },
		{ 30, 68 },
		{ 30, 69 },
		{ 114, 121 },
		{ 102, 116 },
		{ 100, 113 },
		{ 98, 109 },
		{ 97, 108 },
		{ 75, 101 },
		{ 65, 95 },
		{ 64, 94 },
		{ 63, 93 },
		{ 62, 92 },
		{ 61, 91 },
		{ 60, 90 },
		{ 59, 89 },
		{ 57, 88 },
		{ 56, 87 },
		{ 55, 86 },
		{ 54, 85 },
		{ 53, 84 },
		{ 48, 81 },
		{ 47, 80 },
		{ 42, 78 },
		{ 41, 77 },
		{ 40, 76 },
		{ 39, 74 },
		{ 35, 71 },
		{ 5, 38 },
		{ 4, 37 },
		{ 2, 34 },
		{ 1, 33 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 13, 29 },
		{ 51, 124 },
		{ 50, 124 },
		{ 0, -1 },
		{ 58, -1 },
		{ 57, -1 },
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
		{ 0, 66 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 27, 118 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 10, 81 },
		{ 20, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 47, 124 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 46, 124 },
		{ 45, 124 },
		{ 43, -1 },
		{ 43, 124 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 81 },
		{ 0, -1 },
		{ 42, 124 },
		{ 49, 66 },
		{ 0, -1 },
		{ 0, -1 },
		{ 3, -1 },
		{ 0, -1 },
		{ 40, 124 },
		{ 39, 124 },
		{ 38, 124 },
		{ 37, 124 },
		{ 36, 124 },
		{ 0, -1 },
		{ 35, 124 },
		{ 34, 124 },
		{ 33, 124 },
		{ 32, 124 },
		{ 31, 124 },
		{ 30, 124 },
		{ 29, 124 },
		{ -4, 81 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, 124 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, 118 },
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
		{ 22, 118 },
		{ 37, -1 },
		{ 36, -1 },
		{ 21, 118 },
		{ 25, 124 },
		{ 0, -1 },
		{ 24, 124 },
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
		{ 23, 124 },
		{ 18, 124 },
		{ 0, -1 },
		{ 20, 118 },
		{ -3, 124 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 7, -1 },
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
#line 450 ".\\myparser.y"


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


