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
* Time: 14:50:46
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

#line 58 ".\\myparser.y"

	ParseTreeNode *root = new ParseTreeNode("Source Code", "");
	int inFunc = 0;
	FILE *fpp;

#line 91 "myparser.cpp"
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
	
#line 202 "myparser.cpp"
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
	
#line 218 "myparser.cpp"
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
	
#line 235 "myparser.cpp"
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
	
#line 254 "myparser.cpp"
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
	
#line 273 "myparser.cpp"
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
	
#line 290 "myparser.cpp"
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
	
#line 305 "myparser.cpp"
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
#line 318 "myparser.cpp"
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
	
#line 334 "myparser.cpp"
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
	
#line 352 "myparser.cpp"
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
	
#line 368 "myparser.cpp"
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
	
#line 384 "myparser.cpp"
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
	
#line 400 "myparser.cpp"
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
	
#line 416 "myparser.cpp"
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
	
#line 432 "myparser.cpp"
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
	
#line 449 "myparser.cpp"
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
	
#line 466 "myparser.cpp"
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
	
#line 484 "myparser.cpp"
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
	
#line 502 "myparser.cpp"
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
	
#line 517 "myparser.cpp"
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
	
#line 532 "myparser.cpp"
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
	
#line 548 "myparser.cpp"
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
	
#line 564 "myparser.cpp"
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
	
#line 580 "myparser.cpp"
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
	
#line 596 "myparser.cpp"
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
	
#line 612 "myparser.cpp"
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
	
#line 628 "myparser.cpp"
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
	
#line 644 "myparser.cpp"
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
	
#line 660 "myparser.cpp"
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
	
#line 678 "myparser.cpp"
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
	
#line 696 "myparser.cpp"
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
	
#line 712 "myparser.cpp"
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
	
#line 728 "myparser.cpp"
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
	
#line 747 "myparser.cpp"
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
	
#line 767 "myparser.cpp"
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
	
#line 787 "myparser.cpp"
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
	
#line 807 "myparser.cpp"
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
	
#line 828 "myparser.cpp"
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
	
#line 849 "myparser.cpp"
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
	
#line 870 "myparser.cpp"
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
	
#line 892 "myparser.cpp"
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
#line 298 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: -", yyattribute(1 - 3).node->getValue() - yyattribute(3 - 3).node->getValue());
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
#line 304 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: *", yyattribute(1 - 3).node->getValue() * yyattribute(3 - 3).node->getValue());
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
	
#line 969 "myparser.cpp"
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
	
#line 992 "myparser.cpp"
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
	
#line 1010 "myparser.cpp"
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
	
#line 1028 "myparser.cpp"
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
	
#line 1046 "myparser.cpp"
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
	
#line 1064 "myparser.cpp"
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
	
#line 1082 "myparser.cpp"
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
	
#line 1100 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 369 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: unary -", -yyattribute(2 - 2).node->getValue());
		cur->addChildNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1117 "myparser.cpp"
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
#line 374 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).node;
	
#line 1132 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 377 ".\\myparser.y"

		std::ostringstream os;
		os << yyattribute(1 - 1).dval;
		ParseTreeNode *cur = new ParseTreeNode("Const Declaration", os.str(), yyattribute(1 - 1).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1150 "myparser.cpp"
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

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 1165 "myparser.cpp"
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
#line 386 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).node;
	
#line 1180 "myparser.cpp"
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
#line 390 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("ID Declaration", string("symbol: ") + string(yyattribute(1 - 1).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1196 "myparser.cpp"
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
#line 394 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("Expr", "op: =", yyattribute(3 - 3).node->getValue());
		yyattribute(1 - 3).node->setValue(yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1215 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 402 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if");
		cur->addChildNode(yyattribute(3 - 5).node);
		yyattribute(3 - 5).node->addPeerNode(yyattribute(5 - 5).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1233 "myparser.cpp"
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
	
#line 1251 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 414 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1270 "myparser.cpp"
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
#line 421 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1289 "myparser.cpp"
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
#line 428 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1308 "myparser.cpp"
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
#line 435 ".\\myparser.y"

		ParseTreeNode *cur = new ParseTreeNode("if-else Statement", "if-else");
		cur->addChildNode(yyattribute(3 - 7).node);
		yyattribute(3 - 7).node->addPeerNode(yyattribute(5 - 7).node);
		yyattribute(5 - 7).node->addPeerNode(yyattribute(7 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1327 "myparser.cpp"
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
		{ 13, 2, 52 },
		{ 13, 3, 53 },
		{ 13, 1, 54 },
		{ 13, 1, 55 },
		{ 13, 1, 56 },
		{ 14, 1, 57 },
		{ 15, 3, 58 },
		{ 16, 5, 59 },
		{ 16, 5, 60 },
		{ 16, 7, 61 },
		{ 16, 7, 62 },
		{ 16, 7, 63 },
		{ 16, 7, 64 }
	};
	yyreduction = reduction;

	yytokenaction_size = 302;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 68, YYAT_SHIFT, 1 },
		{ 121, YYAT_SHIFT, 128 },
		{ 130, YYAT_SHIFT, 47 },
		{ 119, YYAT_SHIFT, 127 },
		{ 114, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 2 },
		{ 130, YYAT_SHIFT, 131 },
		{ 130, YYAT_SHIFT, 48 },
		{ 130, YYAT_SHIFT, 49 },
		{ 21, YYAT_SHIFT, 45 },
		{ 130, YYAT_SHIFT, 50 },
		{ 113, YYAT_SHIFT, 120 },
		{ 130, YYAT_SHIFT, 51 },
		{ 88, YYAT_SHIFT, 47 },
		{ 112, YYAT_SHIFT, 118 },
		{ 122, YYAT_SHIFT, 1 },
		{ 122, YYAT_SHIFT, 129 },
		{ 111, YYAT_SHIFT, 117 },
		{ 88, YYAT_SHIFT, 48 },
		{ 88, YYAT_SHIFT, 49 },
		{ 122, YYAT_SHIFT, 2 },
		{ 88, YYAT_SHIFT, 50 },
		{ 114, YYAT_SHIFT, 122 },
		{ 88, YYAT_SHIFT, 51 },
		{ 21, YYAT_SHIFT, 46 },
		{ 130, YYAT_SHIFT, 53 },
		{ 105, YYAT_SHIFT, 116 },
		{ 130, YYAT_SHIFT, 54 },
		{ 30, YYAT_SHIFT, 4 },
		{ 65, YYAT_SHIFT, 1 },
		{ 83, YYAT_SHIFT, 47 },
		{ 104, YYAT_SHIFT, 115 },
		{ 30, YYAT_SHIFT, 5 },
		{ 100, YYAT_SHIFT, 113 },
		{ 65, YYAT_SHIFT, 2 },
		{ 83, YYAT_SHIFT, 48 },
		{ 88, YYAT_SHIFT, 53 },
		{ 87, YYAT_SHIFT, 47 },
		{ 88, YYAT_SHIFT, 54 },
		{ 99, YYAT_SHIFT, 112 },
		{ 83, YYAT_SHIFT, 51 },
		{ 98, YYAT_SHIFT, 110 },
		{ 87, YYAT_SHIFT, 48 },
		{ 87, YYAT_SHIFT, 49 },
		{ 90, YYAT_SHIFT, 47 },
		{ 87, YYAT_SHIFT, 50 },
		{ 96, YYAT_SHIFT, 60 },
		{ 87, YYAT_SHIFT, 51 },
		{ 91, YYAT_SHIFT, 103 },
		{ 90, YYAT_SHIFT, 48 },
		{ 90, YYAT_SHIFT, 49 },
		{ 89, YYAT_SHIFT, 47 },
		{ 90, YYAT_SHIFT, 50 },
		{ 78, YYAT_SHIFT, 64 },
		{ 90, YYAT_SHIFT, 51 },
		{ 77, YYAT_SHIFT, 102 },
		{ 89, YYAT_SHIFT, 48 },
		{ 89, YYAT_SHIFT, 49 },
		{ 86, YYAT_SHIFT, 47 },
		{ 89, YYAT_SHIFT, 50 },
		{ 87, YYAT_SHIFT, 53 },
		{ 89, YYAT_SHIFT, 51 },
		{ 87, YYAT_SHIFT, 54 },
		{ 86, YYAT_SHIFT, 48 },
		{ 86, YYAT_SHIFT, 49 },
		{ 76, YYAT_SHIFT, 101 },
		{ 86, YYAT_SHIFT, 50 },
		{ 92, YYAT_SHIFT, 47 },
		{ 86, YYAT_SHIFT, 51 },
		{ 82, YYAT_SHIFT, 47 },
		{ 75, YYAT_SHIFT, 100 },
		{ 74, YYAT_SHIFT, 98 },
		{ 92, YYAT_SHIFT, 48 },
		{ 92, YYAT_SHIFT, 49 },
		{ 82, YYAT_SHIFT, 48 },
		{ 92, YYAT_SHIFT, 50 },
		{ 116, YYAT_SHIFT, 3 },
		{ 92, YYAT_SHIFT, 51 },
		{ 73, YYAT_SHIFT, 97 },
		{ 82, YYAT_SHIFT, 51 },
		{ 116, YYAT_SHIFT, 59 },
		{ 72, YYAT_SHIFT, 96 },
		{ 116, YYAT_SHIFT, 60 },
		{ 71, YYAT_SHIFT, 95 },
		{ 116, YYAT_SHIFT, 61 },
		{ 70, YYAT_SHIFT, 94 },
		{ 64, YYAT_ERROR, 0 },
		{ 60, YYAT_ERROR, 0 },
		{ 116, YYAT_SHIFT, 6 },
		{ 116, YYAT_SHIFT, 7 },
		{ 92, YYAT_SHIFT, 53 },
		{ 45, YYAT_SHIFT, 17 },
		{ 92, YYAT_SHIFT, 54 },
		{ 116, YYAT_SHIFT, 8 },
		{ 116, YYAT_SHIFT, 9 },
		{ 116, YYAT_SHIFT, 10 },
		{ 116, YYAT_SHIFT, 11 },
		{ 116, YYAT_SHIFT, 12 },
		{ 116, YYAT_SHIFT, 13 },
		{ 85, YYAT_SHIFT, 47 },
		{ 116, YYAT_SHIFT, 14 },
		{ 116, YYAT_SHIFT, 15 },
		{ 116, YYAT_SHIFT, 16 },
		{ 43, YYAT_SHIFT, 64 },
		{ 85, YYAT_SHIFT, 48 },
		{ 85, YYAT_SHIFT, 49 },
		{ 40, YYAT_SHIFT, 74 },
		{ 85, YYAT_SHIFT, 50 },
		{ 38, YYAT_SHIFT, 72 },
		{ 85, YYAT_SHIFT, 51 },
		{ 37, YYAT_SHIFT, 71 },
		{ 33, YYAT_SHIFT, 69 },
		{ 29, YYAT_SHIFT, 66 },
		{ 26, YYAT_ACCEPT, 0 },
		{ 25, YYAT_SHIFT, 64 },
		{ 22, YYAT_SHIFT, 52 },
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
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 130, YYAT_SHIFT, 55 },
		{ 130, YYAT_SHIFT, 56 },
		{ 130, YYAT_SHIFT, 57 },
		{ 130, YYAT_SHIFT, 58 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 3 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 59 },
		{ -1, YYAT_ERROR, 0 },
		{ 88, YYAT_SHIFT, 57 },
		{ 88, YYAT_SHIFT, 58 },
		{ 68, YYAT_SHIFT, 61 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 6 },
		{ 68, YYAT_SHIFT, 7 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 8 },
		{ 68, YYAT_SHIFT, 9 },
		{ 68, YYAT_SHIFT, 10 },
		{ 68, YYAT_SHIFT, 11 },
		{ 68, YYAT_SHIFT, 12 },
		{ 68, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 14 },
		{ 68, YYAT_SHIFT, 15 },
		{ 68, YYAT_SHIFT, 16 },
		{ 68, YYAT_SHIFT, 17 },
		{ 68, YYAT_SHIFT, 18 },
		{ 65, YYAT_SHIFT, 3 },
		{ 87, YYAT_SHIFT, 57 },
		{ 87, YYAT_SHIFT, 58 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 59 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 61 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 6 },
		{ 65, YYAT_SHIFT, 7 },
		{ 122, YYAT_SHIFT, 18 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 8 },
		{ 65, YYAT_SHIFT, 9 },
		{ 65, YYAT_SHIFT, 10 },
		{ 65, YYAT_SHIFT, 11 },
		{ 65, YYAT_SHIFT, 12 },
		{ 65, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 14 },
		{ 65, YYAT_SHIFT, 15 },
		{ 65, YYAT_SHIFT, 16 },
		{ 65, YYAT_SHIFT, 17 },
		{ 65, YYAT_SHIFT, 18 },
		{ 92, YYAT_SHIFT, 55 },
		{ 92, YYAT_SHIFT, 56 },
		{ 92, YYAT_SHIFT, 57 },
		{ 92, YYAT_SHIFT, 58 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_DEFAULT, 30 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 82, 1, YYAT_ERROR, 0 },
		{ -164, 1, YYAT_REDUCE, 31 },
		{ -165, 1, YYAT_REDUCE, 30 },
		{ 79, 1, YYAT_ERROR, 0 },
		{ 78, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 77, 1, YYAT_ERROR, 0 },
		{ 76, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 45 },
		{ -35, 1, YYAT_ERROR, 0 },
		{ 56, 1, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_DEFAULT, 116 },
		{ 53, 1, YYAT_REDUCE, 58 },
		{ 113, 1, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 53, 1, YYAT_ERROR, 0 },
		{ -256, 1, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 70, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 70, 1, YYAT_ERROR, 0 },
		{ 68, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 47, 1, YYAT_DEFAULT, 100 },
		{ 0, 0, YYAT_DEFAULT, 45 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 42, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ -216, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ -199, 1, YYAT_DEFAULT, 116 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 45, 1, YYAT_DEFAULT, 122 },
		{ -11, 1, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ -40, 1, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 44, 1, YYAT_DEFAULT, 130 },
		{ 42, 1, YYAT_ERROR, 0 },
		{ 40, 1, YYAT_ERROR, 0 },
		{ 37, 1, YYAT_DEFAULT, 130 },
		{ 12, 1, YYAT_DEFAULT, 100 },
		{ 11, 1, YYAT_DEFAULT, 114 },
		{ 24, 1, YYAT_ERROR, 0 },
		{ 14, 1, YYAT_DEFAULT, 130 },
		{ -8, 1, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 32, 1, YYAT_REDUCE, 44 },
		{ -7, 1, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 62, 1, YYAT_REDUCE, 49 },
		{ 21, 1, YYAT_REDUCE, 50 },
		{ 0, 1, YYAT_REDUCE, 51 },
		{ -24, 1, YYAT_REDUCE, 54 },
		{ 14, 1, YYAT_REDUCE, 52 },
		{ 7, 1, YYAT_REDUCE, 53 },
		{ -239, 1, YYAT_DEFAULT, 60 },
		{ 30, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_DEFAULT, 116 },
		{ 0, 0, YYAT_DEFAULT, 96 },
		{ -240, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 116 },
		{ 0, 1, YYAT_DEFAULT, 122 },
		{ -20, 1, YYAT_DEFAULT, 114 },
		{ -26, 1, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ -251, 1, YYAT_REDUCE, 63 },
		{ -256, 1, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ -24, 1, YYAT_DEFAULT, 130 },
		{ -27, 1, YYAT_DEFAULT, 122 },
		{ -30, 1, YYAT_DEFAULT, 122 },
		{ -37, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_DEFAULT, 116 },
		{ -204, 1, YYAT_DEFAULT, 64 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ -38, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ -40, 1, YYAT_DEFAULT, 130 },
		{ -25, 1, YYAT_DEFAULT, 45 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ 0, 0, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ -35, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 36 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 64;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 116, 126 },
		{ 68, 65 },
		{ 68, 23 },
		{ 116, 125 },
		{ 116, 29 },
		{ 116, 21 },
		{ 116, 20 },
		{ 116, 19 },
		{ 116, 27 },
		{ 116, 24 },
		{ 116, 22 },
		{ 30, 68 },
		{ 30, 32 },
		{ 116, 31 },
		{ 0, 26 },
		{ 30, 30 },
		{ 30, 67 },
		{ 45, 78 },
		{ 45, 79 },
		{ 0, 23 },
		{ 122, 130 },
		{ 122, 25 },
		{ 122, 28 },
		{ 115, 124 },
		{ 97, 109 },
		{ 94, 105 },
		{ 115, 123 },
		{ 97, 108 },
		{ 94, 104 },
		{ 91, -1 },
		{ 24, 63 },
		{ 113, 121 },
		{ 91, 93 },
		{ 24, 62 },
		{ 20, 43 },
		{ 20, 44 },
		{ 112, 119 },
		{ 100, 114 },
		{ 98, 111 },
		{ 96, 107 },
		{ 95, 106 },
		{ 74, 99 },
		{ 64, 92 },
		{ 60, 91 },
		{ 58, 90 },
		{ 57, 89 },
		{ 56, 88 },
		{ 55, 87 },
		{ 54, 86 },
		{ 53, 85 },
		{ 51, 84 },
		{ 50, 83 },
		{ 49, 82 },
		{ 48, 81 },
		{ 47, 80 },
		{ 42, 77 },
		{ 41, 76 },
		{ 40, 75 },
		{ 39, 73 },
		{ 35, 70 },
		{ 5, 38 },
		{ 4, 37 },
		{ 2, 34 },
		{ 1, 33 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 13, 30 },
		{ 50, 122 },
		{ 49, 122 },
		{ 0, -1 },
		{ 57, -1 },
		{ 56, -1 },
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
		{ 20, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 27, 116 },
		{ 0, -1 },
		{ 0, 68 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 10, 91 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 46, 122 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 45, 122 },
		{ 44, 122 },
		{ 42, -1 },
		{ 42, 122 },
		{ 0, -1 },
		{ 0, -1 },
		{ 3, -1 },
		{ 0, -1 },
		{ 41, 122 },
		{ 40, 122 },
		{ 39, 122 },
		{ 38, 122 },
		{ 37, 122 },
		{ 0, -1 },
		{ 36, 122 },
		{ 35, 122 },
		{ 34, 122 },
		{ 33, 122 },
		{ 32, 122 },
		{ 31, 122 },
		{ 0, -1 },
		{ 38, 68 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 29, 122 },
		{ 0, 91 },
		{ 0, -1 },
		{ 0, -1 },
		{ -4, 91 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, 122 },
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
		{ 26, 116 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 116 },
		{ 37, -1 },
		{ 36, -1 },
		{ 21, 116 },
		{ 25, 122 },
		{ 0, -1 },
		{ 24, 122 },
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
		{ 23, 122 },
		{ 18, 122 },
		{ 0, -1 },
		{ 20, 116 },
		{ -3, 122 },
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
#line 444 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	
	fpp = fopen("out_parser.txt", "a");
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	getchar();
	fclose(fpp);
	return n;
}


