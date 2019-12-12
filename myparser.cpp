/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 88 of your 30 day trial period.
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
* Date: 12/13/19
* Time: 01:24:03
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
#include "./ParseTree/ParseTree.h"
struct symtable symtable[MAXSYM];
class ParseTreeNode;

#line 52 "myparser.cpp"
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

#line 80 ".\\myparser.y"

	RootNode *root = NULL;

#line 87 "myparser.cpp"
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
#line 86 ".\\myparser.y"

		root = new RootNode();
		root->addChildNode(yyattribute(1 - 1).node);
		(*(YYSTYPE YYFAR*)yyvalptr).rootnode = root;
		(*(YYSTYPE YYFAR*)yyvalptr).rootnode->print();
	
#line 200 "myparser.cpp"
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
#line 92 ".\\myparser.y"

		if(yyattribute(2 - 2).node != NULL) {
			yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
			(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
		} else {
			(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
		}
	
#line 220 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#line 99 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = NULL;
	
#line 230 "myparser.cpp"
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 102 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).varnode; // assert $2 is a VarNode
		VarNode *cur = (VarNode*)(*(YYSTYPE YYFAR*)yyvalptr).node;
		cur->setType(yyattribute(1 - 3).typenode);
		while(cur->getNextPeerNode() != NULL) {
			cur = (VarNode*)cur->getNextPeerNode();
			cur->setType(yyattribute(1 - 3).typenode);
		}
	
#line 250 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 110 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).functionnode; // assert $2 is a FunctionNode
		yyattribute(2 - 3).functionnode->setReturnType(yyattribute(1 - 3).typenode);
		yyattribute(2 - 3).functionnode->setBody(yyattribute(3 - 3).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 268 "myparser.cpp"
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
#line 117 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode; // anyway, $1 is a VarNode
	
#line 283 "myparser.cpp"
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
#line 119 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		yyattribute(1 - 3).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 299 "myparser.cpp"
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
#line 123 ".\\myparser.y"

		VarNode *cur = new VarNode(string(yyattribute(1 - 1).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = cur;
		/* Add checking symtable for value and type. */
	
#line 316 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 129 ".\\myparser.y"

		FunctionNode *cur = new FunctionNode(string(yyattribute(1 - 4).symp->name));
		// assert $3 is a ParamNode
		cur->setParam(yyattribute(3 - 4).paramnode);
		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = cur;
	
#line 334 "myparser.cpp"
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
#line 134 ".\\myparser.y"

		FunctionNode *cur = new FunctionNode(string(yyattribute(1 - 3).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = cur;
	
#line 350 "myparser.cpp"
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
#line 138 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 1).paramnode; // assert $1 is a ParamNode
	
#line 365 "myparser.cpp"
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
#line 140 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 3).paramnode;
		yyattribute(1 - 3).paramnode->addPeerNode(yyattribute(3 - 3).paramnode);
	
#line 381 "myparser.cpp"
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
#line 144 ".\\myparser.y"

		// assert $1 is a TypeNode, $2 is a VarNode
		ParamNode *cur = new ParamNode(yyattribute(1 - 2).typenode, yyattribute(2 - 2).varnode);
		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = cur;
	
#line 398 "myparser.cpp"
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
#line 149 ".\\myparser.y"

		TypeNode *cur = new TypeNode("double");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 414 "myparser.cpp"
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
#line 152 ".\\myparser.y"

		TypeNode *cur = new TypeNode("float");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 430 "myparser.cpp"
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
#line 155 ".\\myparser.y"

		TypeNode *cur = new TypeNode("bool");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 446 "myparser.cpp"
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
#line 158 ".\\myparser.y"

		TypeNode *cur = new TypeNode("long int");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
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
#line 161 ".\\myparser.y"

		TypeNode *cur = new TypeNode("long long int");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 478 "myparser.cpp"
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
#line 164 ".\\myparser.y"

		TypeNode *cur = new TypeNode("byte");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 494 "myparser.cpp"
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
#line 168 ".\\myparser.y"

		TypeNode *cur = new TypeNode("int");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 510 "myparser.cpp"
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
#line 171 ".\\myparser.y"

		TypeNode *cur = new TypeNode("void");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 526 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 175 ".\\myparser.y"

		CompoundStatementNode *cur = new CompoundStatementNode();
		cur->addChildNode(yyattribute(2 - 3).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).compoundstatementnode = cur;
	
#line 543 "myparser.cpp"
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
#line 180 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
#line 556 "myparser.cpp"
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
#line 181 ".\\myparser.y"

		yyattribute(1 - 2).statementnode->addPeerNode(yyattribute(2 - 2).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 572 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 185 ".\\myparser.y"

		StatementNode *cur = new StatementNode(1);
		cur->addChildNode(yyattribute(1 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 589 "myparser.cpp"
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
#line 189 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).whileloopstatementnode;
	
#line 604 "myparser.cpp"
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
#line 191 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).forloopstatementnode;
	
#line 619 "myparser.cpp"
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
#line 193 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).selectionstatementnode;
	
#line 634 "myparser.cpp"
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

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
	
#line 649 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 197 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 664 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 200 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).node);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 681 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 204 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).node);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 698 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 210 ".\\myparser.y"

		WhileLoopStatementNode *cur = new WhileLoopStatementNode(yyattribute(3 - 5).node, yyattribute(5 - 5).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).whileloopstatementnode = cur;
	
#line 714 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 213 ".\\myparser.y"

		WhileLoopStatementNode *cur = new WhileLoopStatementNode(yyattribute(3 - 5).node, yyattribute(5 - 5).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).whileloopstatementnode = cur;
	
#line 730 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 217 ".\\myparser.y"

		yyattribute(1 - 2).forloopstatementnode->setBlock(yyattribute(2 - 2).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = yyattribute(1 - 2).forloopstatementnode;
	
#line 746 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 220 ".\\myparser.y"

		yyattribute(1 - 2).forloopstatementnode->setBlock(yyattribute(2 - 2).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = yyattribute(1 - 2).forloopstatementnode;
	
#line 762 "myparser.cpp"
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
#line 224 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(3 - 8).node, yyattribute(5 - 8).node, yyattribute(7 - 8).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 778 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 227 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(4 - 9).operatornode, yyattribute(6 - 9).node, yyattribute(8 - 9).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 794 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 230 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).node, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 810 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 233 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(4 - 8).operatornode, yyattribute(6 - 8).node, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 826 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 236 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(3 - 7).node, NULL, yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 842 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 239 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(4 - 8).operatornode, NULL, yyattribute(7 - 8).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 858 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 242 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, yyattribute(4 - 7).node, yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 874 "myparser.cpp"
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
#line 245 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(3 - 6).node, NULL, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 890 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 248 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(4 - 7).operatornode, NULL, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 906 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 251 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, yyattribute(4 - 6).node, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 922 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 254 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, NULL, yyattribute(5 - 6).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 938 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 257 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, NULL, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 954 "myparser.cpp"
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
#line 262 ".\\myparser.y"

		StatementNode *cu = new StatementNode(5);
		cu->addChildNode(yyattribute(2 - 3).varnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cu;
		// assert $2 is a VarNode
		VarNode *cur = yyattribute(2 - 3).varnode;
		cur->setType(yyattribute(1 - 3).typenode);
		while(cur->getNextPeerNode() != NULL) {
			cur = (VarNode*)cur->getNextPeerNode();
			cur->setType(yyattribute(1 - 3).typenode);
		}
	
#line 978 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 274 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 994 "myparser.cpp"
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
#line 277 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		yyattribute(1 - 3).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 1011 "myparser.cpp"
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
#line 282 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 1027 "myparser.cpp"
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
#line 285 ".\\myparser.y"

		// assert $1 is a VarNode, and $$ is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->setValue(yyattribute(3 - 3).node->getValue());
	
#line 1044 "myparser.cpp"
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
#line 290 ".\\myparser.y"

		// special for ForLoopStatement
		// assert $1 is a VarNode or an OperatorNode, instead of a ConstNode
		OperatorNode *cur = new OperatorNode(yyattribute(3 - 3).node->getValue(), 1);
		yyattribute(1 - 3).node->setValue(yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).operatornode = cur;
	
#line 1065 "myparser.cpp"
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
#line 299 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).operatornode;
	
#line 1080 "myparser.cpp"
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
#line 301 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() + yyattribute(3 - 3).node->getValue(), 2);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1098 "myparser.cpp"
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
#line 306 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() - yyattribute(3 - 3).node->getValue(), 3);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1116 "myparser.cpp"
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
#line 311 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() * yyattribute(3 - 3).node->getValue(), 4);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1134 "myparser.cpp"
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
#line 316 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new OperatorNode(yyattribute(1 - 3).node->getValue() / yyattribute(3 - 3).node->getValue(), 5);
		else {
			yyerror("Divide by zero.\n");
			cur = new OperatorNode(0, 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1157 "myparser.cpp"
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
#line 326 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new OperatorNode((int)yyattribute(1 - 3).node->getValue() % (int)yyattribute(3 - 3).node->getValue(), 6);
		else {
			yyerror("Mod by zero.\n");
			cur = new OperatorNode(0, 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1180 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 336 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() < yyattribute(3 - 3).node->getValue(), 7);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1198 "myparser.cpp"
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
#line 341 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() > yyattribute(3 - 3).node->getValue(), 8);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1216 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 346 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() == yyattribute(3 - 3).node->getValue(), 9);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1234 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 351 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() <= yyattribute(3 - 3).node->getValue(), 10);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1252 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 356 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() >= yyattribute(3 - 3).node->getValue(), 11);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1270 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 361 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() != yyattribute(3 - 3).node->getValue(), 12);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1288 "myparser.cpp"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 366 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() && yyattribute(3 - 3).node->getValue(), 13);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1306 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 371 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() || yyattribute(3 - 3).node->getValue(), 14);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1324 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 376 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(pow(yyattribute(1 - 3).node->getValue(), yyattribute(3 - 3).node->getValue()), 15);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1342 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 381 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(-yyattribute(2 - 2).node->getValue(), 16);
		cur->addChildNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1359 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 385 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).node;
	
#line 1374 "myparser.cpp"
			}
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 387 ".\\myparser.y"

		ParseTreeNode *cur = new ConstNode(yyattribute(1 - 1).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1390 "myparser.cpp"
			}
		}
		break;
	case 72:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 390 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).varnode;
	
#line 1406 "myparser.cpp"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 394 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 5).node, yyattribute(5 - 5).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1422 "myparser.cpp"
			}
		}
		break;
	case 74:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 397 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 5).node, yyattribute(5 - 5).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1438 "myparser.cpp"
			}
		}
		break;
	case 75:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 400 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).compoundstatementnode, yyattribute(7 - 7).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1454 "myparser.cpp"
			}
		}
		break;
	case 76:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 403 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).compoundstatementnode, yyattribute(7 - 7).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1470 "myparser.cpp"
			}
		}
		break;
	case 77:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 406 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).statementnode, yyattribute(7 - 7).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1486 "myparser.cpp"
			}
		}
		break;
	case 78:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 409 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).statementnode, yyattribute(7 - 7).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1502 "myparser.cpp"
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
		{ "\'[\'", 91 },
		{ "\']\'", 93 },
		{ "\'^\'", 94 },
		{ "error", 256 },
		{ "OR", 263 },
		{ "AND", 264 },
		{ "EQ", 265 },
		{ "NE", 266 },
		{ "LE", 267 },
		{ "GE", 268 },
		{ "UMINUS", 269 },
		{ "IF", 275 },
		{ "ELSE", 277 },
		{ "VOID", 279 },
		{ "LBRACE", 280 },
		{ "RBRACE", 281 },
		{ "INT", 282 },
		{ "WHILE", 286 },
		{ "FOR", 287 },
		{ "STRUCT", 291 },
		{ "LONGINT", 292 },
		{ "DOUBLE", 293 },
		{ "LONGLONGINT", 294 },
		{ "FLOAT", 295 },
		{ "BOOL", 296 },
		{ "BYTE", 298 },
		{ "SCAN", 299 },
		{ "PRINT", 300 },
		{ "ID", 301 },
		{ "NUMBER", 302 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: prog",
		"prog: top_level_definition_list",
		"top_level_definition_list: top_level_definition top_level_definition_list",
		"top_level_definition_list:",
		"top_level_definition: type top_level_declarator_list \';\'",
		"top_level_definition: type function_declarator code_block",
		"top_level_definition: type \';\'",
		"top_level_declarator_list: var_declarator",
		"top_level_declarator_list: var_declarator \',\' top_level_declarator_list",
		"var_declarator: ID",
		"var_declarator: ID \'[\' NUMBER \']\'",
		"function_declarator: ID \'(\' param_list \')\'",
		"function_declarator: ID \'(\' \')\'",
		"param_list: param",
		"param_list: param \',\' param_list",
		"param: type var_declarator",
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
		"statement_list: statement",
		"statement_list: statement_list statement",
		"statement: expression \';\'",
		"statement: while_loop_statement",
		"statement: for_loop_statement",
		"statement: selection_statement",
		"statement: var_definition",
		"statement: io_statement \';\'",
		"io_statement: SCAN \'(\' expression \')\'",
		"io_statement: PRINT \'(\' expression \')\'",
		"while_loop_statement: WHILE \'(\' expression \')\' code_block",
		"while_loop_statement: WHILE \'(\' expression \')\' statement",
		"for_loop_statement: for_front code_block",
		"for_loop_statement: for_front statement",
		"for_front: FOR \'(\' expression \';\' expression \';\' expression \')\'",
		"for_front: FOR \'(\' type assignment_expression \';\' expression \';\' expression \')\'",
		"for_front: FOR \'(\' expression \';\' expression \';\' \')\'",
		"for_front: FOR \'(\' type assignment_expression \';\' expression \';\' \')\'",
		"for_front: FOR \'(\' expression \';\' \';\' expression \')\'",
		"for_front: FOR \'(\' type assignment_expression \';\' \';\' expression \')\'",
		"for_front: FOR \'(\' \';\' expression \';\' expression \')\'",
		"for_front: FOR \'(\' expression \';\' \';\' \')\'",
		"for_front: FOR \'(\' type assignment_expression \';\' \';\' \')\'",
		"for_front: FOR \'(\' \';\' expression \';\' \')\'",
		"for_front: FOR \'(\' \';\' \';\' expression \')\'",
		"for_front: FOR \'(\' \';\' \';\' \')\'",
		"var_definition: type var_declaration_list \';\'",
		"var_declaration_list: var_declaration",
		"var_declaration_list: var_declaration \',\' var_declaration_list",
		"var_declaration: var_declarator",
		"var_declaration: var_declarator \'=\' expression",
		"assignment_expression: expression \'=\' expression",
		"expression: assignment_expression",
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
		"expression: var_declarator",
		"selection_statement: IF \'(\' expression \')\' code_block",
		"selection_statement: IF \'(\' expression \')\' statement",
		"selection_statement: IF \'(\' expression \')\' code_block ELSE code_block",
		"selection_statement: IF \'(\' expression \')\' code_block ELSE statement",
		"selection_statement: IF \'(\' expression \')\' statement ELSE code_block",
		"selection_statement: IF \'(\' expression \')\' statement ELSE statement"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 1, 0 },
		{ 2, 2, 1 },
		{ 2, 0, 2 },
		{ 3, 3, 3 },
		{ 3, 3, 4 },
		{ 3, 2, -1 },
		{ 4, 1, 5 },
		{ 4, 3, 6 },
		{ 5, 1, 7 },
		{ 5, 4, -1 },
		{ 6, 4, 8 },
		{ 6, 3, 9 },
		{ 7, 1, 10 },
		{ 7, 3, 11 },
		{ 8, 2, 12 },
		{ 9, 1, 13 },
		{ 9, 1, 14 },
		{ 9, 1, 15 },
		{ 9, 1, 16 },
		{ 9, 1, 17 },
		{ 9, 1, 18 },
		{ 9, 1, -1 },
		{ 9, 1, 19 },
		{ 9, 1, 20 },
		{ 10, 3, 21 },
		{ 11, 1, 22 },
		{ 11, 2, 23 },
		{ 12, 2, 24 },
		{ 12, 1, 25 },
		{ 12, 1, 26 },
		{ 12, 1, 27 },
		{ 12, 1, 28 },
		{ 12, 2, 29 },
		{ 13, 4, 30 },
		{ 13, 4, 31 },
		{ 14, 5, 32 },
		{ 14, 5, 33 },
		{ 15, 2, 34 },
		{ 15, 2, 35 },
		{ 16, 8, 36 },
		{ 16, 9, 37 },
		{ 16, 7, 38 },
		{ 16, 8, 39 },
		{ 16, 7, 40 },
		{ 16, 8, 41 },
		{ 16, 7, 42 },
		{ 16, 6, 43 },
		{ 16, 7, 44 },
		{ 16, 6, 45 },
		{ 16, 6, 46 },
		{ 16, 5, 47 },
		{ 17, 3, 48 },
		{ 18, 1, 49 },
		{ 18, 3, 50 },
		{ 19, 1, 51 },
		{ 19, 3, 52 },
		{ 20, 3, 53 },
		{ 21, 1, 54 },
		{ 21, 3, 55 },
		{ 21, 3, 56 },
		{ 21, 3, 57 },
		{ 21, 3, 58 },
		{ 21, 3, 59 },
		{ 21, 3, 60 },
		{ 21, 3, 61 },
		{ 21, 3, 62 },
		{ 21, 3, 63 },
		{ 21, 3, 64 },
		{ 21, 3, 65 },
		{ 21, 3, 66 },
		{ 21, 3, 67 },
		{ 21, 3, 68 },
		{ 21, 2, 69 },
		{ 21, 3, 70 },
		{ 21, 1, 71 },
		{ 21, 1, 72 },
		{ 22, 5, 73 },
		{ 22, 5, 74 },
		{ 22, 7, 75 },
		{ 22, 7, 76 },
		{ 22, 7, 77 },
		{ 22, 7, 78 }
	};
	yyreduction = reduction;

	yytokenaction_size = 323;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 159, YYAT_SHIFT, 72 },
		{ 11, YYAT_SHIFT, 15 },
		{ 156, YYAT_SHIFT, 160 },
		{ 16, YYAT_SHIFT, 20 },
		{ 159, YYAT_SHIFT, 161 },
		{ 159, YYAT_SHIFT, 73 },
		{ 159, YYAT_SHIFT, 74 },
		{ 125, YYAT_SHIFT, 72 },
		{ 159, YYAT_SHIFT, 75 },
		{ 152, YYAT_SHIFT, 157 },
		{ 159, YYAT_SHIFT, 76 },
		{ 145, YYAT_SHIFT, 155 },
		{ 125, YYAT_SHIFT, 73 },
		{ 125, YYAT_SHIFT, 74 },
		{ 108, YYAT_SHIFT, 79 },
		{ 125, YYAT_SHIFT, 75 },
		{ 104, YYAT_SHIFT, 79 },
		{ 125, YYAT_SHIFT, 76 },
		{ 144, YYAT_SHIFT, 154 },
		{ 142, YYAT_SHIFT, 153 },
		{ 141, YYAT_SHIFT, 151 },
		{ 153, YYAT_SHIFT, 31 },
		{ 153, YYAT_SHIFT, 158 },
		{ 159, YYAT_SHIFT, 78 },
		{ 159, YYAT_SHIFT, 79 },
		{ 159, YYAT_SHIFT, 80 },
		{ 153, YYAT_SHIFT, 32 },
		{ 140, YYAT_SHIFT, 150 },
		{ 106, YYAT_SHIFT, 72 },
		{ 101, YYAT_SHIFT, 79 },
		{ 125, YYAT_SHIFT, 78 },
		{ 125, YYAT_SHIFT, 79 },
		{ 125, YYAT_SHIFT, 80 },
		{ 106, YYAT_SHIFT, 73 },
		{ 106, YYAT_SHIFT, 74 },
		{ 109, YYAT_SHIFT, 72 },
		{ 106, YYAT_SHIFT, 75 },
		{ 55, YYAT_ERROR, 0 },
		{ 106, YYAT_SHIFT, 76 },
		{ 100, YYAT_SHIFT, 79 },
		{ 109, YYAT_SHIFT, 73 },
		{ 109, YYAT_SHIFT, 74 },
		{ 55, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 75 },
		{ 61, YYAT_SHIFT, 92 },
		{ 109, YYAT_SHIFT, 76 },
		{ 135, YYAT_SHIFT, 145 },
		{ 108, YYAT_SHIFT, 81 },
		{ 134, YYAT_SHIFT, 143 },
		{ 104, YYAT_SHIFT, 81 },
		{ 133, YYAT_SHIFT, 141 },
		{ 106, YYAT_SHIFT, 78 },
		{ 106, YYAT_SHIFT, 79 },
		{ 106, YYAT_SHIFT, 80 },
		{ 16, YYAT_SHIFT, 21 },
		{ 132, YYAT_SHIFT, 139 },
		{ 55, YYAT_ERROR, 0 },
		{ 159, YYAT_SHIFT, 81 },
		{ 109, YYAT_SHIFT, 78 },
		{ 109, YYAT_SHIFT, 79 },
		{ 109, YYAT_SHIFT, 80 },
		{ 131, YYAT_SHIFT, 138 },
		{ 101, YYAT_SHIFT, 81 },
		{ 110, YYAT_SHIFT, 72 },
		{ 125, YYAT_SHIFT, 81 },
		{ 127, YYAT_SHIFT, 137 },
		{ 126, YYAT_SHIFT, 136 },
		{ 121, YYAT_SHIFT, 134 },
		{ 110, YYAT_SHIFT, 73 },
		{ 110, YYAT_SHIFT, 74 },
		{ 112, YYAT_SHIFT, 72 },
		{ 110, YYAT_SHIFT, 75 },
		{ 100, YYAT_SHIFT, 81 },
		{ 110, YYAT_SHIFT, 76 },
		{ 103, YYAT_SHIFT, 72 },
		{ 112, YYAT_SHIFT, 73 },
		{ 112, YYAT_SHIFT, 74 },
		{ 120, YYAT_ERROR, 0 },
		{ 112, YYAT_SHIFT, 75 },
		{ 103, YYAT_SHIFT, 73 },
		{ 112, YYAT_SHIFT, 76 },
		{ 119, YYAT_SHIFT, 133 },
		{ 118, YYAT_SHIFT, 132 },
		{ 117, YYAT_SHIFT, 130 },
		{ 103, YYAT_SHIFT, 76 },
		{ 106, YYAT_SHIFT, 81 },
		{ 110, YYAT_SHIFT, 78 },
		{ 110, YYAT_SHIFT, 79 },
		{ 110, YYAT_SHIFT, 80 },
		{ 99, YYAT_ERROR, 0 },
		{ 97, YYAT_SHIFT, 38 },
		{ 111, YYAT_SHIFT, 72 },
		{ 109, YYAT_SHIFT, 81 },
		{ 112, YYAT_SHIFT, 78 },
		{ 112, YYAT_SHIFT, 79 },
		{ 112, YYAT_SHIFT, 80 },
		{ 111, YYAT_SHIFT, 73 },
		{ 111, YYAT_SHIFT, 74 },
		{ 103, YYAT_SHIFT, 79 },
		{ 111, YYAT_SHIFT, 75 },
		{ 96, YYAT_SHIFT, 123 },
		{ 111, YYAT_SHIFT, 76 },
		{ 114, YYAT_SHIFT, 72 },
		{ 95, YYAT_SHIFT, 122 },
		{ 94, YYAT_SHIFT, 121 },
		{ 92, YYAT_SHIFT, 117 },
		{ 91, YYAT_SHIFT, 116 },
		{ 114, YYAT_SHIFT, 73 },
		{ 114, YYAT_SHIFT, 74 },
		{ 90, YYAT_SHIFT, 115 },
		{ 114, YYAT_SHIFT, 75 },
		{ 68, YYAT_SHIFT, 99 },
		{ 114, YYAT_SHIFT, 76 },
		{ 67, YYAT_SHIFT, 98 },
		{ 111, YYAT_SHIFT, 78 },
		{ 111, YYAT_SHIFT, 79 },
		{ 111, YYAT_SHIFT, 80 },
		{ 137, YYAT_SHIFT, 33 },
		{ 66, YYAT_SHIFT, 97 },
		{ 58, YYAT_SHIFT, 79 },
		{ 110, YYAT_SHIFT, 81 },
		{ 137, YYAT_SHIFT, 1 },
		{ 137, YYAT_SHIFT, 22 },
		{ 57, YYAT_SHIFT, 89 },
		{ 137, YYAT_SHIFT, 2 },
		{ 50, YYAT_SHIFT, 77 },
		{ 114, YYAT_SHIFT, 79 },
		{ 112, YYAT_SHIFT, 81 },
		{ 137, YYAT_SHIFT, 34 },
		{ 137, YYAT_SHIFT, 35 },
		{ 47, YYAT_SHIFT, 71 },
		{ 103, YYAT_SHIFT, 81 },
		{ 45, YYAT_SHIFT, 69 },
		{ 137, YYAT_SHIFT, 3 },
		{ 137, YYAT_SHIFT, 4 },
		{ 137, YYAT_SHIFT, 5 },
		{ 137, YYAT_SHIFT, 6 },
		{ 137, YYAT_SHIFT, 7 },
		{ 137, YYAT_SHIFT, 8 },
		{ 113, YYAT_SHIFT, 72 },
		{ 137, YYAT_SHIFT, 9 },
		{ 137, YYAT_SHIFT, 36 },
		{ 137, YYAT_SHIFT, 37 },
		{ 38, YYAT_SHIFT, 21 },
		{ 113, YYAT_SHIFT, 73 },
		{ 113, YYAT_SHIFT, 74 },
		{ 107, YYAT_SHIFT, 72 },
		{ 113, YYAT_SHIFT, 75 },
		{ 111, YYAT_SHIFT, 81 },
		{ 113, YYAT_SHIFT, 76 },
		{ 102, YYAT_SHIFT, 72 },
		{ 107, YYAT_SHIFT, 73 },
		{ 107, YYAT_SHIFT, 74 },
		{ 37, YYAT_SHIFT, 63 },
		{ 107, YYAT_SHIFT, 75 },
		{ 102, YYAT_SHIFT, 73 },
		{ 107, YYAT_SHIFT, 76 },
		{ 36, YYAT_SHIFT, 62 },
		{ 35, YYAT_SHIFT, 61 },
		{ 114, YYAT_SHIFT, 81 },
		{ 102, YYAT_SHIFT, 76 },
		{ 105, YYAT_SHIFT, 72 },
		{ 34, YYAT_SHIFT, 60 },
		{ 113, YYAT_SHIFT, 79 },
		{ 33, YYAT_SHIFT, 59 },
		{ 10, YYAT_SHIFT, 1 },
		{ 105, YYAT_SHIFT, 73 },
		{ 105, YYAT_SHIFT, 74 },
		{ 10, YYAT_SHIFT, 2 },
		{ 105, YYAT_SHIFT, 75 },
		{ 107, YYAT_SHIFT, 79 },
		{ 105, YYAT_SHIFT, 76 },
		{ 30, YYAT_SHIFT, 56 },
		{ 29, YYAT_SHIFT, 55 },
		{ 102, YYAT_SHIFT, 79 },
		{ 28, YYAT_SHIFT, 54 },
		{ 22, YYAT_ERROR, 0 },
		{ 10, YYAT_SHIFT, 3 },
		{ 10, YYAT_SHIFT, 4 },
		{ 10, YYAT_SHIFT, 5 },
		{ 10, YYAT_SHIFT, 6 },
		{ 10, YYAT_SHIFT, 7 },
		{ 10, YYAT_SHIFT, 8 },
		{ 21, YYAT_SHIFT, 30 },
		{ 10, YYAT_SHIFT, 9 },
		{ 105, YYAT_SHIFT, 79 },
		{ 20, YYAT_SHIFT, 26 },
		{ 19, YYAT_SHIFT, 25 },
		{ 18, YYAT_SHIFT, 24 },
		{ 17, YYAT_SHIFT, 22 },
		{ 12, YYAT_ACCEPT, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 81 },
		{ 0, YYAT_SHIFT, 1 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 0, YYAT_SHIFT, 2 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 102, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ 0, YYAT_SHIFT, 3 },
		{ 0, YYAT_SHIFT, 4 },
		{ 0, YYAT_SHIFT, 5 },
		{ 0, YYAT_SHIFT, 6 },
		{ 0, YYAT_SHIFT, 7 },
		{ 0, YYAT_SHIFT, 8 },
		{ -1, YYAT_ERROR, 0 },
		{ 0, YYAT_SHIFT, 9 },
		{ -1, YYAT_ERROR, 0 },
		{ 105, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 159, YYAT_SHIFT, 82 },
		{ 159, YYAT_SHIFT, 83 },
		{ 159, YYAT_SHIFT, 84 },
		{ 159, YYAT_SHIFT, 85 },
		{ 159, YYAT_SHIFT, 86 },
		{ 159, YYAT_SHIFT, 87 },
		{ -1, YYAT_ERROR, 0 },
		{ 125, YYAT_SHIFT, 82 },
		{ 125, YYAT_SHIFT, 83 },
		{ 125, YYAT_SHIFT, 84 },
		{ 125, YYAT_SHIFT, 85 },
		{ 125, YYAT_SHIFT, 86 },
		{ 125, YYAT_SHIFT, 87 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 11, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 106, YYAT_SHIFT, 82 },
		{ 106, YYAT_SHIFT, 83 },
		{ 106, YYAT_SHIFT, 84 },
		{ 106, YYAT_SHIFT, 85 },
		{ 106, YYAT_SHIFT, 86 },
		{ 106, YYAT_SHIFT, 87 },
		{ 61, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 83 },
		{ 109, YYAT_SHIFT, 84 },
		{ 109, YYAT_SHIFT, 85 },
		{ 109, YYAT_SHIFT, 86 },
		{ 109, YYAT_SHIFT, 87 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 61, YYAT_ERROR, 0 },
		{ 61, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 153, YYAT_SHIFT, 39 },
		{ 61, YYAT_ERROR, 0 },
		{ 61, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 84 },
		{ 110, YYAT_SHIFT, 85 },
		{ 110, YYAT_SHIFT, 86 },
		{ 110, YYAT_SHIFT, 87 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 55, YYAT_ERROR, 0 },
		{ 55, YYAT_ERROR, 0 },
		{ 112, YYAT_SHIFT, 86 },
		{ 112, YYAT_SHIFT, 87 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 86 },
		{ 111, YYAT_SHIFT, 87 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -82, 1, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ -114, 1, YYAT_REDUCE, 3 },
		{ -58, 1, YYAT_ERROR, 0 },
		{ 190, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ -37, 1, YYAT_REDUCE, 9 },
		{ -91, 1, YYAT_ERROR, 0 },
		{ 144, 1, YYAT_REDUCE, 7 },
		{ 128, 1, YYAT_ERROR, 0 },
		{ 145, 1, YYAT_DEFAULT, 55 },
		{ -119, 1, YYAT_ERROR, 0 },
		{ -104, 1, YYAT_DEFAULT, 137 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_DEFAULT, 97 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_DEFAULT, 97 },
		{ 134, 1, YYAT_ERROR, 0 },
		{ 129, 1, YYAT_REDUCE, 13 },
		{ 79, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 124, 1, YYAT_ERROR, 0 },
		{ 122, 1, YYAT_ERROR, 0 },
		{ 118, 1, YYAT_ERROR, 0 },
		{ 117, 1, YYAT_ERROR, 0 },
		{ 113, 1, YYAT_ERROR, 0 },
		{ 52, 1, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_DEFAULT, 137 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_DEFAULT, 97 },
		{ -149, 1, YYAT_DEFAULT, 22 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 71, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 66, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ -3, 1, YYAT_DEFAULT, 61 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 82, 1, YYAT_DEFAULT, 159 },
		{ 58, 1, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ -15, 1, YYAT_DEFAULT, 22 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 74, 1, YYAT_REDUCE, 53 },
		{ 54, 1, YYAT_ERROR, 0 },
		{ 50, 1, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ 68, 1, YYAT_DEFAULT, 159 },
		{ 65, 1, YYAT_DEFAULT, 159 },
		{ 46, 1, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_DEFAULT, 99 },
		{ 45, 1, YYAT_DEFAULT, 142 },
		{ 62, 1, YYAT_DEFAULT, 159 },
		{ 59, 1, YYAT_DEFAULT, 159 },
		{ -211, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 48, 1, YYAT_DEFAULT, 153 },
		{ -22, 1, YYAT_REDUCE, 63 },
		{ -32, 1, YYAT_REDUCE, 61 },
		{ 113, 1, YYAT_REDUCE, 59 },
		{ 37, 1, YYAT_REDUCE, 60 },
		{ -45, 1, YYAT_REDUCE, 62 },
		{ 124, 1, YYAT_REDUCE, 64 },
		{ -9, 1, YYAT_REDUCE, 57 },
		{ 109, 1, YYAT_REDUCE, 65 },
		{ -47, 1, YYAT_REDUCE, 72 },
		{ -2, 1, YYAT_REDUCE, 71 },
		{ 26, 1, YYAT_REDUCE, 70 },
		{ 54, 1, YYAT_REDUCE, 66 },
		{ 33, 1, YYAT_REDUCE, 69 },
		{ 102, 1, YYAT_REDUCE, 67 },
		{ 65, 1, YYAT_REDUCE, 68 },
		{ 0, 0, YYAT_DEFAULT, 137 },
		{ 0, 0, YYAT_DEFAULT, 137 },
		{ 42, 1, YYAT_DEFAULT, 153 },
		{ 23, 1, YYAT_DEFAULT, 142 },
		{ 22, 1, YYAT_REDUCE, 58 },
		{ 36, 1, YYAT_DEFAULT, 159 },
		{ 8, 1, YYAT_DEFAULT, 133 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ -30, 1, YYAT_REDUCE, 56 },
		{ -211, 1, YYAT_REDUCE, 78 },
		{ -212, 1, YYAT_REDUCE, 77 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 20, 1, YYAT_DEFAULT, 159 },
		{ 14, 1, YYAT_DEFAULT, 153 },
		{ -9, 1, YYAT_DEFAULT, 99 },
		{ 7, 1, YYAT_DEFAULT, 153 },
		{ -13, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 137 },
		{ -158, 1, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ -14, 1, YYAT_DEFAULT, 159 },
		{ -21, 1, YYAT_DEFAULT, 153 },
		{ -40, 1, YYAT_DEFAULT, 120 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ -23, 1, YYAT_DEFAULT, 159 },
		{ -30, 1, YYAT_DEFAULT, 153 },
		{ 0, 0, YYAT_REDUCE, 82 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ 0, 0, YYAT_REDUCE, 80 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ -32, 1, YYAT_DEFAULT, 159 },
		{ -19, 1, YYAT_DEFAULT, 97 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ -39, 1, YYAT_DEFAULT, 159 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ -37, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 41 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 78;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 137, 44 },
		{ 137, 149 },
		{ 153, 48 },
		{ 137, 148 },
		{ 137, 47 },
		{ 137, 49 },
		{ 137, 41 },
		{ 137, 40 },
		{ 137, 46 },
		{ 97, 68 },
		{ 93, 119 },
		{ 93, 120 },
		{ 137, 50 },
		{ 137, 51 },
		{ 61, 93 },
		{ 24, 52 },
		{ 24, 18 },
		{ 153, 43 },
		{ 153, 159 },
		{ 145, 156 },
		{ 10, 14 },
		{ 10, 10 },
		{ 97, 124 },
		{ 97, 66 },
		{ 22, 45 },
		{ 22, 42 },
		{ 61, 94 },
		{ 10, 11 },
		{ 55, 88 },
		{ 55, 29 },
		{ 55, 27 },
		{ 136, 147 },
		{ 116, 129 },
		{ 136, 146 },
		{ 116, 128 },
		{ 115, 127 },
		{ 45, -1 },
		{ 115, 126 },
		{ 45, 70 },
		{ 40, 65 },
		{ 11, 19 },
		{ 40, 64 },
		{ 11, 17 },
		{ 0, 12 },
		{ 0, 13 },
		{ 141, 152 },
		{ 134, 144 },
		{ 133, 142 },
		{ 132, 140 },
		{ 121, 135 },
		{ 117, 131 },
		{ 99, 125 },
		{ 92, 118 },
		{ 87, 114 },
		{ 86, 113 },
		{ 85, 112 },
		{ 84, 111 },
		{ 83, 110 },
		{ 82, 109 },
		{ 81, 108 },
		{ 80, 107 },
		{ 79, 106 },
		{ 78, 105 },
		{ 76, 104 },
		{ 75, 103 },
		{ 74, 102 },
		{ 73, 101 },
		{ 72, 100 },
		{ 63, 96 },
		{ 62, 95 },
		{ 60, 91 },
		{ 59, 90 },
		{ 44, 67 },
		{ 32, 58 },
		{ 31, 57 },
		{ 27, 53 },
		{ 20, 28 },
		{ 17, 23 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 42, 10 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, -1 },
		{ 36, 24 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 67, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 69, 55 },
		{ 0, -1 },
		{ 13, 45 },
		{ 0, -1 },
		{ 11, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 70, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 53, 153 },
		{ 52, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 29, 137 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 54, 97 },
		{ 26, 137 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 21, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 50, 153 },
		{ 49, 153 },
		{ 5, 153 },
		{ 48, 153 },
		{ 47, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 46, 153 },
		{ 45, 153 },
		{ 44, 153 },
		{ 43, 153 },
		{ 42, 153 },
		{ 0, -1 },
		{ 41, 153 },
		{ 40, 153 },
		{ 39, 153 },
		{ 38, 153 },
		{ 37, 153 },
		{ 36, 153 },
		{ 35, 153 },
		{ 34, 153 },
		{ 33, 153 },
		{ 32, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 31, 153 },
		{ -10, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 4, -1 },
		{ 0, -1 },
		{ 30, 153 },
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
		{ 25, 137 },
		{ 22, 137 },
		{ 29, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, 153 },
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
		{ 27, 153 },
		{ 26, 153 },
		{ 25, 153 },
		{ 0, -1 },
		{ 21, 137 },
		{ -9, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -2, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
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
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	getchar();
	return n;
}


