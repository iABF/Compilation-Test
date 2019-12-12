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
* Time: 01:42:53
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

		if(yyattribute(2 - 2).node != NULL)yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 216 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#line 95 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = NULL;
	
#line 226 "myparser.cpp"
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 98 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).varnode; // assert $2 is a VarNode
		VarNode *cur = (VarNode*)(*(YYSTYPE YYFAR*)yyvalptr).node;
		cur->setType(yyattribute(1 - 3).typenode);
		while(cur->getNextPeerNode() != NULL) {
			cur = (VarNode*)cur->getNextPeerNode();
			cur->setType(yyattribute(1 - 3).typenode);
		}
		(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 247 "myparser.cpp"
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
#line 107 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).functionnode; // assert $2 is a FunctionNode
		yyattribute(2 - 3).functionnode->setReturnType(yyattribute(1 - 3).typenode);
		yyattribute(2 - 3).functionnode->setBody(yyattribute(3 - 3).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 265 "myparser.cpp"
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
#line 114 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode; // anyway, $1 is a VarNode
	
#line 280 "myparser.cpp"
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
#line 116 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		yyattribute(1 - 3).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 296 "myparser.cpp"
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
#line 120 ".\\myparser.y"

		VarNode *cur = new VarNode(string(yyattribute(1 - 1).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = cur;
		/* Add checking symtable for value and type. */
	
#line 313 "myparser.cpp"
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
#line 126 ".\\myparser.y"

		FunctionNode *cur = new FunctionNode(string(yyattribute(1 - 4).symp->name));
		// assert $3 is a ParamNode
		cur->setParam(yyattribute(3 - 4).paramnode);
		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = cur;
	
#line 331 "myparser.cpp"
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
#line 131 ".\\myparser.y"

		FunctionNode *cur = new FunctionNode(string(yyattribute(1 - 3).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = cur;
	
#line 347 "myparser.cpp"
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
#line 135 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 1).paramnode; // assert $1 is a ParamNode
	
#line 362 "myparser.cpp"
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
#line 137 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 3).paramnode;
		yyattribute(1 - 3).paramnode->addPeerNode(yyattribute(3 - 3).paramnode);
	
#line 378 "myparser.cpp"
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
#line 141 ".\\myparser.y"

		// assert $1 is a TypeNode, $2 is a VarNode
		ParamNode *cur = new ParamNode(yyattribute(1 - 2).typenode, yyattribute(2 - 2).varnode);
		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = cur;
	
#line 395 "myparser.cpp"
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
#line 146 ".\\myparser.y"

		TypeNode *cur = new TypeNode("double");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
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
#line 149 ".\\myparser.y"

		TypeNode *cur = new TypeNode("float");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 427 "myparser.cpp"
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
#line 152 ".\\myparser.y"

		TypeNode *cur = new TypeNode("bool");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 443 "myparser.cpp"
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
#line 155 ".\\myparser.y"

		TypeNode *cur = new TypeNode("long int");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 459 "myparser.cpp"
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
#line 158 ".\\myparser.y"

		TypeNode *cur = new TypeNode("long long int");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 475 "myparser.cpp"
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
#line 161 ".\\myparser.y"

		TypeNode *cur = new TypeNode("byte");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 491 "myparser.cpp"
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
#line 165 ".\\myparser.y"

		TypeNode *cur = new TypeNode("int");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 507 "myparser.cpp"
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
#line 168 ".\\myparser.y"

		TypeNode *cur = new TypeNode("void");
		(*(YYSTYPE YYFAR*)yyvalptr).typenode = cur;
	
#line 523 "myparser.cpp"
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
#line 172 ".\\myparser.y"

		CompoundStatementNode *cur = new CompoundStatementNode();
		cur->addChildNode(yyattribute(2 - 3).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).compoundstatementnode = cur;
	
#line 540 "myparser.cpp"
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
#line 177 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
#line 553 "myparser.cpp"
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
#line 178 ".\\myparser.y"

		yyattribute(1 - 2).statementnode->addPeerNode(yyattribute(2 - 2).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 569 "myparser.cpp"
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
#line 182 ".\\myparser.y"

		StatementNode *cur = new StatementNode(1);
		cur->addChildNode(yyattribute(1 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 586 "myparser.cpp"
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
#line 186 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).whileloopstatementnode;
	
#line 601 "myparser.cpp"
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
#line 188 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).forloopstatementnode;
	
#line 616 "myparser.cpp"
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
#line 190 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).selectionstatementnode;
	
#line 631 "myparser.cpp"
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
#line 192 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
	
#line 646 "myparser.cpp"
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
#line 194 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 661 "myparser.cpp"
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
#line 197 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).node);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 678 "myparser.cpp"
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
#line 201 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).node);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 695 "myparser.cpp"
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
#line 207 ".\\myparser.y"

		WhileLoopStatementNode *cur = new WhileLoopStatementNode(yyattribute(3 - 5).node, yyattribute(5 - 5).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).whileloopstatementnode = cur;
	
#line 711 "myparser.cpp"
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
#line 210 ".\\myparser.y"

		WhileLoopStatementNode *cur = new WhileLoopStatementNode(yyattribute(3 - 5).node, yyattribute(5 - 5).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).whileloopstatementnode = cur;
	
#line 727 "myparser.cpp"
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
#line 214 ".\\myparser.y"

		yyattribute(1 - 2).forloopstatementnode->setBlock(yyattribute(2 - 2).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = yyattribute(1 - 2).forloopstatementnode;
	
#line 743 "myparser.cpp"
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
#line 217 ".\\myparser.y"

		yyattribute(1 - 2).forloopstatementnode->setBlock(yyattribute(2 - 2).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = yyattribute(1 - 2).forloopstatementnode;
	
#line 759 "myparser.cpp"
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
#line 221 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(3 - 8).node, yyattribute(5 - 8).node, yyattribute(7 - 8).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 775 "myparser.cpp"
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
#line 224 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(4 - 9).operatornode, yyattribute(6 - 9).node, yyattribute(8 - 9).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 791 "myparser.cpp"
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
#line 227 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).node, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 807 "myparser.cpp"
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
#line 230 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(4 - 8).operatornode, yyattribute(6 - 8).node, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 823 "myparser.cpp"
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
#line 233 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(3 - 7).node, NULL, yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 839 "myparser.cpp"
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
#line 236 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(4 - 8).operatornode, NULL, yyattribute(7 - 8).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 855 "myparser.cpp"
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
#line 239 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, yyattribute(4 - 7).node, yyattribute(6 - 7).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 871 "myparser.cpp"
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
#line 242 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(3 - 6).node, NULL, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 887 "myparser.cpp"
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
#line 245 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(yyattribute(4 - 7).operatornode, NULL, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 903 "myparser.cpp"
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
#line 248 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, yyattribute(4 - 6).node, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 919 "myparser.cpp"
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
#line 251 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, NULL, yyattribute(5 - 6).node);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 935 "myparser.cpp"
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
#line 254 ".\\myparser.y"

		ForLoopStatementNode *cur = new ForLoopStatementNode(NULL, NULL, NULL);
		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = cur;
	
#line 951 "myparser.cpp"
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
#line 259 ".\\myparser.y"

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
	
#line 975 "myparser.cpp"
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
#line 271 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 991 "myparser.cpp"
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
#line 274 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		yyattribute(1 - 3).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 1008 "myparser.cpp"
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
#line 279 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 1024 "myparser.cpp"
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
#line 282 ".\\myparser.y"

		// assert $1 is a VarNode, and $$ is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->setValue(yyattribute(3 - 3).node->getValue());
	
#line 1041 "myparser.cpp"
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
#line 287 ".\\myparser.y"

		// special for ForLoopStatement
		// assert $1 is a VarNode or an OperatorNode, instead of a ConstNode
		OperatorNode *cur = new OperatorNode(yyattribute(3 - 3).node->getValue(), 1);
		yyattribute(1 - 3).node->setValue(yyattribute(3 - 3).node->getValue());
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).operatornode = cur;
	
#line 1062 "myparser.cpp"
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
#line 296 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).operatornode;
	
#line 1077 "myparser.cpp"
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
#line 298 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() + yyattribute(3 - 3).node->getValue(), 2);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1095 "myparser.cpp"
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
#line 303 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() - yyattribute(3 - 3).node->getValue(), 3);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1113 "myparser.cpp"
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
#line 308 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() * yyattribute(3 - 3).node->getValue(), 4);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1131 "myparser.cpp"
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
#line 313 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new OperatorNode(yyattribute(1 - 3).node->getValue() / yyattribute(3 - 3).node->getValue(), 5);
		else {
			yyerror("Divide by zero.\n");
			cur = new OperatorNode(0, 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1154 "myparser.cpp"
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
#line 323 ".\\myparser.y"

		ParseTreeNode *cur;
		if(yyattribute(3 - 3).node->getValue() != 0.0)cur = new OperatorNode((int)yyattribute(1 - 3).node->getValue() % (int)yyattribute(3 - 3).node->getValue(), 6);
		else {
			yyerror("Mod by zero.\n");
			cur = new OperatorNode(0, 0);
		}
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1177 "myparser.cpp"
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
#line 333 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() < yyattribute(3 - 3).node->getValue(), 7);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1195 "myparser.cpp"
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
#line 338 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() > yyattribute(3 - 3).node->getValue(), 8);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1213 "myparser.cpp"
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
#line 343 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() == yyattribute(3 - 3).node->getValue(), 9);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1231 "myparser.cpp"
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
#line 348 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() <= yyattribute(3 - 3).node->getValue(), 10);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1249 "myparser.cpp"
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
#line 353 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() >= yyattribute(3 - 3).node->getValue(), 11);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1267 "myparser.cpp"
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
#line 358 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() != yyattribute(3 - 3).node->getValue(), 12);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1285 "myparser.cpp"
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
#line 363 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() && yyattribute(3 - 3).node->getValue(), 13);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1303 "myparser.cpp"
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
#line 368 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(yyattribute(1 - 3).node->getValue() || yyattribute(3 - 3).node->getValue(), 14);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1321 "myparser.cpp"
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
#line 373 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(pow(yyattribute(1 - 3).node->getValue(), yyattribute(3 - 3).node->getValue()), 15);
		cur->addChildNode(yyattribute(1 - 3).node);
		yyattribute(1 - 3).node->addPeerNode(yyattribute(3 - 3).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1339 "myparser.cpp"
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
#line 378 ".\\myparser.y"

		ParseTreeNode *cur = new OperatorNode(-yyattribute(2 - 2).node->getValue(), 16);
		cur->addChildNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1356 "myparser.cpp"
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
#line 382 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 3).node;
	
#line 1371 "myparser.cpp"
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
#line 384 ".\\myparser.y"

		ParseTreeNode *cur = new ConstNode(yyattribute(1 - 1).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).node = cur;
	
#line 1387 "myparser.cpp"
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
#line 387 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 1).varnode;
	
#line 1403 "myparser.cpp"
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
#line 391 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 5).node, yyattribute(5 - 5).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1419 "myparser.cpp"
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
#line 394 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 5).node, yyattribute(5 - 5).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1435 "myparser.cpp"
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
#line 397 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).compoundstatementnode, yyattribute(7 - 7).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1451 "myparser.cpp"
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
#line 400 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).compoundstatementnode, yyattribute(7 - 7).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1467 "myparser.cpp"
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
#line 403 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).statementnode, yyattribute(7 - 7).compoundstatementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1483 "myparser.cpp"
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
#line 406 ".\\myparser.y"

		SelectionStatementNode *cur = new SelectionStatementNode(yyattribute(3 - 7).node, yyattribute(5 - 7).statementnode, yyattribute(7 - 7).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = cur;
	
#line 1499 "myparser.cpp"
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
		{ 160, YYAT_SHIFT, 66 },
		{ 11, YYAT_SHIFT, 14 },
		{ 155, YYAT_SHIFT, 158 },
		{ 15, YYAT_SHIFT, 20 },
		{ 160, YYAT_SHIFT, 161 },
		{ 160, YYAT_SHIFT, 67 },
		{ 160, YYAT_SHIFT, 68 },
		{ 125, YYAT_SHIFT, 66 },
		{ 160, YYAT_SHIFT, 69 },
		{ 153, YYAT_SHIFT, 157 },
		{ 160, YYAT_SHIFT, 70 },
		{ 145, YYAT_SHIFT, 156 },
		{ 125, YYAT_SHIFT, 67 },
		{ 125, YYAT_SHIFT, 68 },
		{ 105, YYAT_SHIFT, 73 },
		{ 125, YYAT_SHIFT, 69 },
		{ 101, YYAT_SHIFT, 73 },
		{ 125, YYAT_SHIFT, 70 },
		{ 144, YYAT_SHIFT, 154 },
		{ 143, YYAT_SHIFT, 152 },
		{ 142, YYAT_SHIFT, 151 },
		{ 156, YYAT_SHIFT, 33 },
		{ 156, YYAT_SHIFT, 159 },
		{ 160, YYAT_SHIFT, 72 },
		{ 160, YYAT_SHIFT, 73 },
		{ 160, YYAT_SHIFT, 74 },
		{ 156, YYAT_SHIFT, 34 },
		{ 140, YYAT_SHIFT, 150 },
		{ 103, YYAT_SHIFT, 66 },
		{ 98, YYAT_SHIFT, 73 },
		{ 125, YYAT_SHIFT, 72 },
		{ 125, YYAT_SHIFT, 73 },
		{ 125, YYAT_SHIFT, 74 },
		{ 103, YYAT_SHIFT, 67 },
		{ 103, YYAT_SHIFT, 68 },
		{ 106, YYAT_SHIFT, 66 },
		{ 103, YYAT_SHIFT, 69 },
		{ 55, YYAT_ERROR, 0 },
		{ 103, YYAT_SHIFT, 70 },
		{ 97, YYAT_SHIFT, 73 },
		{ 106, YYAT_SHIFT, 67 },
		{ 106, YYAT_SHIFT, 68 },
		{ 55, YYAT_ERROR, 0 },
		{ 106, YYAT_SHIFT, 69 },
		{ 61, YYAT_SHIFT, 92 },
		{ 106, YYAT_SHIFT, 70 },
		{ 135, YYAT_SHIFT, 144 },
		{ 105, YYAT_SHIFT, 75 },
		{ 134, YYAT_SHIFT, 143 },
		{ 101, YYAT_SHIFT, 75 },
		{ 133, YYAT_SHIFT, 141 },
		{ 103, YYAT_SHIFT, 72 },
		{ 103, YYAT_SHIFT, 73 },
		{ 103, YYAT_SHIFT, 74 },
		{ 15, YYAT_SHIFT, 21 },
		{ 132, YYAT_SHIFT, 139 },
		{ 55, YYAT_ERROR, 0 },
		{ 160, YYAT_SHIFT, 75 },
		{ 106, YYAT_SHIFT, 72 },
		{ 106, YYAT_SHIFT, 73 },
		{ 106, YYAT_SHIFT, 74 },
		{ 131, YYAT_SHIFT, 138 },
		{ 98, YYAT_SHIFT, 75 },
		{ 107, YYAT_SHIFT, 66 },
		{ 125, YYAT_SHIFT, 75 },
		{ 127, YYAT_SHIFT, 137 },
		{ 126, YYAT_SHIFT, 136 },
		{ 121, YYAT_SHIFT, 135 },
		{ 107, YYAT_SHIFT, 67 },
		{ 107, YYAT_SHIFT, 68 },
		{ 109, YYAT_SHIFT, 66 },
		{ 107, YYAT_SHIFT, 69 },
		{ 97, YYAT_SHIFT, 75 },
		{ 107, YYAT_SHIFT, 70 },
		{ 100, YYAT_SHIFT, 66 },
		{ 109, YYAT_SHIFT, 67 },
		{ 109, YYAT_SHIFT, 68 },
		{ 120, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 69 },
		{ 100, YYAT_SHIFT, 67 },
		{ 109, YYAT_SHIFT, 70 },
		{ 119, YYAT_SHIFT, 133 },
		{ 118, YYAT_SHIFT, 132 },
		{ 117, YYAT_SHIFT, 130 },
		{ 100, YYAT_SHIFT, 70 },
		{ 103, YYAT_SHIFT, 75 },
		{ 107, YYAT_SHIFT, 72 },
		{ 107, YYAT_SHIFT, 73 },
		{ 107, YYAT_SHIFT, 74 },
		{ 114, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 31 },
		{ 108, YYAT_SHIFT, 66 },
		{ 106, YYAT_SHIFT, 75 },
		{ 109, YYAT_SHIFT, 72 },
		{ 109, YYAT_SHIFT, 73 },
		{ 109, YYAT_SHIFT, 74 },
		{ 108, YYAT_SHIFT, 67 },
		{ 108, YYAT_SHIFT, 68 },
		{ 100, YYAT_SHIFT, 73 },
		{ 108, YYAT_SHIFT, 69 },
		{ 96, YYAT_SHIFT, 123 },
		{ 108, YYAT_SHIFT, 70 },
		{ 111, YYAT_SHIFT, 66 },
		{ 95, YYAT_SHIFT, 122 },
		{ 93, YYAT_SHIFT, 119 },
		{ 92, YYAT_SHIFT, 117 },
		{ 91, YYAT_SHIFT, 116 },
		{ 111, YYAT_SHIFT, 67 },
		{ 111, YYAT_SHIFT, 68 },
		{ 90, YYAT_SHIFT, 115 },
		{ 111, YYAT_SHIFT, 69 },
		{ 87, YYAT_SHIFT, 114 },
		{ 111, YYAT_SHIFT, 70 },
		{ 86, YYAT_SHIFT, 113 },
		{ 108, YYAT_SHIFT, 72 },
		{ 108, YYAT_SHIFT, 73 },
		{ 108, YYAT_SHIFT, 74 },
		{ 137, YYAT_SHIFT, 35 },
		{ 85, YYAT_SHIFT, 112 },
		{ 58, YYAT_SHIFT, 73 },
		{ 107, YYAT_SHIFT, 75 },
		{ 137, YYAT_SHIFT, 1 },
		{ 137, YYAT_SHIFT, 23 },
		{ 57, YYAT_SHIFT, 89 },
		{ 137, YYAT_SHIFT, 2 },
		{ 49, YYAT_SHIFT, 82 },
		{ 111, YYAT_SHIFT, 73 },
		{ 109, YYAT_SHIFT, 75 },
		{ 137, YYAT_SHIFT, 36 },
		{ 137, YYAT_SHIFT, 37 },
		{ 45, YYAT_SHIFT, 71 },
		{ 100, YYAT_SHIFT, 75 },
		{ 41, YYAT_SHIFT, 64 },
		{ 137, YYAT_SHIFT, 3 },
		{ 137, YYAT_SHIFT, 4 },
		{ 137, YYAT_SHIFT, 5 },
		{ 137, YYAT_SHIFT, 6 },
		{ 137, YYAT_SHIFT, 7 },
		{ 137, YYAT_SHIFT, 8 },
		{ 110, YYAT_SHIFT, 66 },
		{ 137, YYAT_SHIFT, 9 },
		{ 137, YYAT_SHIFT, 38 },
		{ 137, YYAT_SHIFT, 39 },
		{ 39, YYAT_SHIFT, 63 },
		{ 110, YYAT_SHIFT, 67 },
		{ 110, YYAT_SHIFT, 68 },
		{ 104, YYAT_SHIFT, 66 },
		{ 110, YYAT_SHIFT, 69 },
		{ 108, YYAT_SHIFT, 75 },
		{ 110, YYAT_SHIFT, 70 },
		{ 99, YYAT_SHIFT, 66 },
		{ 104, YYAT_SHIFT, 67 },
		{ 104, YYAT_SHIFT, 68 },
		{ 38, YYAT_SHIFT, 62 },
		{ 104, YYAT_SHIFT, 69 },
		{ 99, YYAT_SHIFT, 67 },
		{ 104, YYAT_SHIFT, 70 },
		{ 37, YYAT_SHIFT, 61 },
		{ 36, YYAT_SHIFT, 60 },
		{ 111, YYAT_SHIFT, 75 },
		{ 99, YYAT_SHIFT, 70 },
		{ 102, YYAT_SHIFT, 66 },
		{ 35, YYAT_SHIFT, 59 },
		{ 110, YYAT_SHIFT, 73 },
		{ 31, YYAT_SHIFT, 21 },
		{ 13, YYAT_SHIFT, 1 },
		{ 102, YYAT_SHIFT, 67 },
		{ 102, YYAT_SHIFT, 68 },
		{ 13, YYAT_SHIFT, 2 },
		{ 102, YYAT_SHIFT, 69 },
		{ 104, YYAT_SHIFT, 73 },
		{ 102, YYAT_SHIFT, 70 },
		{ 30, YYAT_SHIFT, 56 },
		{ 29, YYAT_SHIFT, 55 },
		{ 99, YYAT_SHIFT, 73 },
		{ 27, YYAT_SHIFT, 53 },
		{ 23, YYAT_ERROR, 0 },
		{ 13, YYAT_SHIFT, 3 },
		{ 13, YYAT_SHIFT, 4 },
		{ 13, YYAT_SHIFT, 5 },
		{ 13, YYAT_SHIFT, 6 },
		{ 13, YYAT_SHIFT, 7 },
		{ 13, YYAT_SHIFT, 8 },
		{ 21, YYAT_SHIFT, 30 },
		{ 13, YYAT_SHIFT, 9 },
		{ 102, YYAT_SHIFT, 73 },
		{ 20, YYAT_SHIFT, 26 },
		{ 18, YYAT_SHIFT, 25 },
		{ 17, YYAT_SHIFT, 23 },
		{ 16, YYAT_SHIFT, 22 },
		{ 10, YYAT_ACCEPT, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 75 },
		{ 0, YYAT_SHIFT, 1 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 0, YYAT_SHIFT, 2 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 75 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 75 },
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
		{ 102, YYAT_SHIFT, 75 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 160, YYAT_SHIFT, 76 },
		{ 160, YYAT_SHIFT, 77 },
		{ 160, YYAT_SHIFT, 78 },
		{ 160, YYAT_SHIFT, 79 },
		{ 160, YYAT_SHIFT, 80 },
		{ 160, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ 125, YYAT_SHIFT, 76 },
		{ 125, YYAT_SHIFT, 77 },
		{ 125, YYAT_SHIFT, 78 },
		{ 125, YYAT_SHIFT, 79 },
		{ 125, YYAT_SHIFT, 80 },
		{ 125, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 11, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 103, YYAT_SHIFT, 76 },
		{ 103, YYAT_SHIFT, 77 },
		{ 103, YYAT_SHIFT, 78 },
		{ 103, YYAT_SHIFT, 79 },
		{ 103, YYAT_SHIFT, 80 },
		{ 103, YYAT_SHIFT, 81 },
		{ 61, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 106, YYAT_SHIFT, 77 },
		{ 106, YYAT_SHIFT, 78 },
		{ 106, YYAT_SHIFT, 79 },
		{ 106, YYAT_SHIFT, 80 },
		{ 106, YYAT_SHIFT, 81 },
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
		{ 156, YYAT_SHIFT, 40 },
		{ 61, YYAT_ERROR, 0 },
		{ 61, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 78 },
		{ 107, YYAT_SHIFT, 79 },
		{ 107, YYAT_SHIFT, 80 },
		{ 107, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 55, YYAT_ERROR, 0 },
		{ 55, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 80 },
		{ 109, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 80 },
		{ 108, YYAT_SHIFT, 81 }
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
		{ 190, 1, YYAT_ERROR, 0 },
		{ -58, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ -114, 1, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ -37, 1, YYAT_REDUCE, 9 },
		{ 145, 1, YYAT_REDUCE, 7 },
		{ -92, 1, YYAT_ERROR, 0 },
		{ 128, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 145, 1, YYAT_DEFAULT, 55 },
		{ -119, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 113 },
		{ -104, 1, YYAT_DEFAULT, 137 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 134, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 113 },
		{ 129, 1, YYAT_REDUCE, 13 },
		{ 79, 1, YYAT_ERROR, 0 },
		{ 73, 1, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 122, 1, YYAT_ERROR, 0 },
		{ 118, 1, YYAT_ERROR, 0 },
		{ 117, 1, YYAT_ERROR, 0 },
		{ 113, 1, YYAT_ERROR, 0 },
		{ 103, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 75 },
		{ -149, 1, YYAT_DEFAULT, 23 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 71, 1, YYAT_DEFAULT, 145 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 66, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 137 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 0, 0, YYAT_DEFAULT, 113 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ -3, 1, YYAT_DEFAULT, 61 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 82, 1, YYAT_DEFAULT, 160 },
		{ 58, 1, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ -15, 1, YYAT_DEFAULT, 23 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 59, 1, YYAT_ERROR, 0 },
		{ 69, 1, YYAT_REDUCE, 53 },
		{ 50, 1, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ 68, 1, YYAT_DEFAULT, 160 },
		{ 65, 1, YYAT_DEFAULT, 160 },
		{ 46, 1, YYAT_DEFAULT, 135 },
		{ 45, 1, YYAT_DEFAULT, 145 },
		{ 0, 0, YYAT_DEFAULT, 114 },
		{ 62, 1, YYAT_DEFAULT, 160 },
		{ 59, 1, YYAT_DEFAULT, 160 },
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
		{ 0, 0, YYAT_REDUCE, 52 },
		{ -211, 1, YYAT_ERROR, 0 },
		{ 48, 1, YYAT_DEFAULT, 156 },
		{ 0, 0, YYAT_DEFAULT, 137 },
		{ 0, 0, YYAT_DEFAULT, 137 },
		{ 42, 1, YYAT_DEFAULT, 156 },
		{ 23, 1, YYAT_DEFAULT, 145 },
		{ 22, 1, YYAT_DEFAULT, 135 },
		{ 36, 1, YYAT_DEFAULT, 160 },
		{ 8, 1, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ -30, 1, YYAT_REDUCE, 56 },
		{ -211, 1, YYAT_REDUCE, 78 },
		{ -212, 1, YYAT_REDUCE, 77 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 20, 1, YYAT_DEFAULT, 160 },
		{ 14, 1, YYAT_DEFAULT, 156 },
		{ 9, 1, YYAT_DEFAULT, 156 },
		{ -11, 1, YYAT_DEFAULT, 145 },
		{ -13, 1, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_DEFAULT, 137 },
		{ -158, 1, YYAT_DEFAULT, 114 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ -14, 1, YYAT_DEFAULT, 160 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ -21, 1, YYAT_DEFAULT, 160 },
		{ -22, 1, YYAT_DEFAULT, 156 },
		{ -23, 1, YYAT_DEFAULT, 156 },
		{ -48, 1, YYAT_DEFAULT, 120 },
		{ 0, 0, YYAT_REDUCE, 82 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ 0, 0, YYAT_REDUCE, 80 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ -32, 1, YYAT_DEFAULT, 160 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ -39, 1, YYAT_DEFAULT, 160 },
		{ -19, 1, YYAT_DEFAULT, 113 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ -37, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 41 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 78;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 137, 52 },
		{ 137, 149 },
		{ 156, 51 },
		{ 137, 148 },
		{ 137, 49 },
		{ 137, 43 },
		{ 137, 44 },
		{ 137, 50 },
		{ 137, 46 },
		{ 113, 87 },
		{ 94, 121 },
		{ 94, 120 },
		{ 137, 45 },
		{ 137, 47 },
		{ 61, 94 },
		{ 23, 41 },
		{ 23, 42 },
		{ 156, 48 },
		{ 156, 160 },
		{ 144, 155 },
		{ 13, 19 },
		{ 13, 13 },
		{ 113, 124 },
		{ 113, 86 },
		{ 22, 32 },
		{ 22, 16 },
		{ 61, 93 },
		{ 13, 11 },
		{ 55, 88 },
		{ 55, 29 },
		{ 55, 28 },
		{ 136, 147 },
		{ 116, 129 },
		{ 136, 146 },
		{ 116, 128 },
		{ 115, 127 },
		{ 50, 84 },
		{ 115, 126 },
		{ 50, 83 },
		{ 41, -1 },
		{ 11, 18 },
		{ 41, 65 },
		{ 11, 17 },
		{ 0, 10 },
		{ 0, 12 },
		{ 143, 153 },
		{ 135, 145 },
		{ 133, 142 },
		{ 132, 140 },
		{ 119, 134 },
		{ 117, 131 },
		{ 114, 125 },
		{ 92, 118 },
		{ 81, 111 },
		{ 80, 110 },
		{ 79, 109 },
		{ 78, 108 },
		{ 77, 107 },
		{ 76, 106 },
		{ 75, 105 },
		{ 74, 104 },
		{ 73, 103 },
		{ 72, 102 },
		{ 70, 101 },
		{ 69, 100 },
		{ 68, 99 },
		{ 67, 98 },
		{ 66, 97 },
		{ 63, 96 },
		{ 62, 95 },
		{ 60, 91 },
		{ 59, 90 },
		{ 52, 85 },
		{ 34, 58 },
		{ 33, 57 },
		{ 28, 54 },
		{ 20, 27 },
		{ 17, 24 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 42, 13 },
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
		{ 36, 22 },
		{ 0, -1 },
		{ 18, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 67, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 69, 55 },
		{ 0, -1 },
		{ 20, -1 },
		{ 4, 41 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 70, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 53, 156 },
		{ 52, 156 },
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
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, 137 },
		{ 0, -1 },
		{ 54, 113 },
		{ 0, -1 },
		{ 0, -1 },
		{ 21, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 50, 156 },
		{ 49, 156 },
		{ 5, 156 },
		{ 48, 156 },
		{ 47, 156 },
		{ 0, -1 },
		{ 0, -1 },
		{ 46, 156 },
		{ 45, 156 },
		{ 44, 156 },
		{ 43, 156 },
		{ 42, 156 },
		{ 0, -1 },
		{ 41, 156 },
		{ 40, 156 },
		{ 39, 156 },
		{ 38, 156 },
		{ 37, 156 },
		{ 36, 156 },
		{ 35, 156 },
		{ 34, 156 },
		{ 33, 156 },
		{ 32, 156 },
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
		{ 31, 156 },
		{ 0, -1 },
		{ -10, 156 },
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
		{ 4, -1 },
		{ 30, 156 },
		{ 25, 137 },
		{ 22, 137 },
		{ 29, 156 },
		{ 0, -1 },
		{ 28, 156 },
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
		{ 27, 156 },
		{ 26, 156 },
		{ 0, -1 },
		{ 25, 156 },
		{ 21, 137 },
		{ -9, 156 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, 156 },
		{ -2, 156 },
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
		{ -3, -1 },
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
#line 411 ".\\myparser.y"


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


