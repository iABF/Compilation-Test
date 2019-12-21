/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 97 of your 30 day trial period.
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
* Date: 12/21/19
* Time: 20:39:30
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
#include "InterCodeGenerator.h"
struct symtable symtable[MAXSYM];
class ParseTreeNode;

#line 53 "myparser.cpp"
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

#line 82 ".\\myparser.y"

	void call();
	StatementNode *StatementNode::Null = new StatementNode();
	ConstNode *ConstNode::True = new ConstNode("true", new TypeNode("bool"));
	ConstNode *ConstNode::False = new ConstNode("false", new TypeNode("bool"));
	int TempNode::tempCount = 0;
	RootNode *root = new RootNode();
	int offset = 0; // total offset in memory
	int labelCount = 0; // count of labels
	InterCodeGenerator *generator = new InterCodeGenerator(root);

#line 96 "myparser.cpp"
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
#line 96 ".\\myparser.y"

		root->addChildNode(yyattribute(1 - 1).node);
		(*(YYSTYPE YYFAR*)yyvalptr).rootnode = root;
	
#line 207 "myparser.cpp"
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
#line 100 ".\\myparser.y"

		if(yyattribute(2 - 2).node != NULL)yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
		(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
	
#line 223 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#line 103 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = NULL;
	
#line 233 "myparser.cpp"
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 107 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = new TopLevelDefinitionNode();
		(*(YYSTYPE YYFAR*)yyvalptr).node->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).varnode);
		//$$->print();
	
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
#line 112 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = new TopLevelDefinitionNode();
		(*(YYSTYPE YYFAR*)yyvalptr).node->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).functionnode);
		yyattribute(2 - 3).functionnode->addPeerNode(yyattribute(3 - 3).compoundstatementnode);
		root->addChildNode((*(YYSTYPE YYFAR*)yyvalptr).node);
		InterCodeGenerator *generator = new InterCodeGenerator(root);
		generator->generate();
		(*(YYSTYPE YYFAR*)yyvalptr).node->print();
	
#line 272 "myparser.cpp"
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
#line 123 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
#line 285 "myparser.cpp"
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
#line 124 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 301 "myparser.cpp"
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
#line 128 ".\\myparser.y"

		VarNode *cur = new VarNode(string(yyattribute(1 - 1).symp->name));
		cur->nodeType = 2;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = cur;
	
#line 318 "myparser.cpp"
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
#line 132 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 4).varnode;
		ArrayNode *curtyp = new ArrayNode(yyattribute(3 - 4).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->setType(curtyp);
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->nodeType = 3;
	
#line 336 "myparser.cpp"
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
#line 138 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = new FunctionNode(string(yyattribute(1 - 3).symp->name));
	
#line 351 "myparser.cpp"
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
#line 140 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = new FunctionNode(string(yyattribute(1 - 4).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).functionnode->setParam(yyattribute(3 - 4).paramnode);
	
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
#line 144 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 1).paramnode;
#line 380 "myparser.cpp"
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
#line 145 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 3).paramnode;
		yyattribute(1 - 3).paramnode->addPeerNode(yyattribute(3 - 3).paramnode);
	
#line 396 "myparser.cpp"
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
#line 149 ".\\myparser.y"

		// assert $1 is a TypeNode, $2 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = new ParamNode(yyattribute(1 - 2).typenode, yyattribute(2 - 2).varnode);
	
#line 412 "myparser.cpp"
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
#line 153 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).typenode = new TypeNode("bool");
	
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
#line 155 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).typenode = new TypeNode("int");
	
#line 442 "myparser.cpp"
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
#line 157 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).typenode = new TypeNode("void");
	
#line 457 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 160 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).compoundstatementnode = new CompoundStatementNode();
		(*(YYSTYPE YYFAR*)yyvalptr).compoundstatementnode->addChildNode(yyattribute(2 - 3).statementnode);
	
#line 473 "myparser.cpp"
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
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
#line 486 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 165 ".\\myparser.y"

		yyattribute(1 - 2).statementnode->addPeerNode(yyattribute(2 - 2).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 502 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 169 ".\\myparser.y"

		ExpressionNode* lvalue = yyattribute(1 - 2).operatornode->left;
		if(lvalue->nodeId == NodeId::varnode)(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new AssignNode((VarNode*)lvalue, yyattribute(1 - 2).operatornode->right);
		else if(lvalue->nodeId == NodeId::accessnode) {
			(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new AssignArrayNode((AccessNode*)lvalue, yyattribute(1 - 2).operatornode->right);
		}
		else yyerror("wrong left value! UniqueID=162");
	
#line 522 "myparser.cpp"
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
#line 176 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).whileloopstatementnode;
	
#line 537 "myparser.cpp"
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
#line 178 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).forloopstatementnode;
	
#line 552 "myparser.cpp"
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
#line 180 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).selectionstatementnode;
	
#line 567 "myparser.cpp"
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
#line 182 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
	
#line 582 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 184 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 597 "myparser.cpp"
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

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).compoundstatementnode;
	
#line 612 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 189 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).expressionnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 629 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 193 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).expressionnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 646 "myparser.cpp"
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
#line 199 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).whileloopstatementnode = new WhileLoopStatementNode(yyattribute(3 - 5).expressionnode, yyattribute(5 - 5).statementnode);
	
#line 661 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 202 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 9).expressionnode, yyattribute(5 - 9).expressionnode, yyattribute(7 - 9).expressionnode, yyattribute(9 - 9).statementnode);
	
#line 676 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[11];
			yyinitdebug((void YYFAR**)yya, 11);
#endif
			{
#line 204 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(4 - 10).operatornode, yyattribute(6 - 10).expressionnode, yyattribute(8 - 10).expressionnode, yyattribute(10 - 10).statementnode);
	
#line 691 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 206 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).expressionnode, yyattribute(5 - 8).expressionnode, NULL, yyattribute(8 - 8).statementnode);
	
#line 706 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 208 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(4 - 9).operatornode, yyattribute(6 - 9).expressionnode, NULL, yyattribute(9 - 9).statementnode);
	
#line 721 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 210 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).expressionnode, NULL, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 736 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 212 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(4 - 9).operatornode, NULL, yyattribute(7 - 9).expressionnode, yyattribute(9 - 9).statementnode);
	
#line 751 "myparser.cpp"
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
#line 214 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, yyattribute(4 - 8).expressionnode, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 766 "myparser.cpp"
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
#line 216 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).expressionnode, NULL, NULL, yyattribute(7 - 7).statementnode);
	
#line 781 "myparser.cpp"
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
#line 218 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(4 - 8).operatornode, NULL, NULL, yyattribute(8 - 8).statementnode);
	
#line 796 "myparser.cpp"
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
#line 220 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, yyattribute(4 - 7).expressionnode, NULL, yyattribute(7 - 7).statementnode);
	
#line 811 "myparser.cpp"
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
#line 222 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, NULL, yyattribute(5 - 7).expressionnode, yyattribute(7 - 7).statementnode);
	
#line 826 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 224 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, NULL, NULL, yyattribute(6 - 6).statementnode);
	
#line 841 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 227 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = new SelectionStatementNode(yyattribute(3 - 5).expressionnode, yyattribute(5 - 5).statementnode);
	
#line 856 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 229 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = new SelectionStatementNode(yyattribute(3 - 7).expressionnode, yyattribute(5 - 7).statementnode, yyattribute(7 - 7).statementnode);
	
#line 871 "myparser.cpp"
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
#line 232 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new StatementNode(5);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).varnode);
	
#line 888 "myparser.cpp"
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
#line 237 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 904 "myparser.cpp"
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
#line 240 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		yyattribute(1 - 3).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 921 "myparser.cpp"
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
#line 245 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 937 "myparser.cpp"
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
#line 248 ".\\myparser.y"

		// assert $1 is a VarNode, and $$ is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->addChildNode(yyattribute(3 - 3).expressionnode);
	
#line 954 "myparser.cpp"
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
#line 253 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).operatornode = new OperatorNode(1, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
	
#line 969 "myparser.cpp"
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
#line 256 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).operatornode;
#line 982 "myparser.cpp"
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
#line 257 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(2, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 995 "myparser.cpp"
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
#line 258 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(3, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1008 "myparser.cpp"
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
#line 259 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(4, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1021 "myparser.cpp"
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
#line 260 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(5, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1034 "myparser.cpp"
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
#line 261 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(6, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1047 "myparser.cpp"
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
#line 262 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("<", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1060 "myparser.cpp"
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
#line 263 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode(">", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1073 "myparser.cpp"
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
#line 264 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("==", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1086 "myparser.cpp"
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
#line 265 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("<=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1099 "myparser.cpp"
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
#line 266 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode(">=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1112 "myparser.cpp"
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
#line 267 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("!=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1125 "myparser.cpp"
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
#line 268 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new AndNode(yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1138 "myparser.cpp"
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
#line 269 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OrNode(yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1151 "myparser.cpp"
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
#line 270 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(15, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1164 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 271 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new UnaryNode(16, yyattribute(2 - 2).expressionnode);
#line 1177 "myparser.cpp"
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
#line 272 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(2 - 3).expressionnode;
#line 1190 "myparser.cpp"
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
#line 273 ".\\myparser.y"

		// *****************************************************************************************************
	
#line 1205 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 275 ".\\myparser.y"

		// *****************************************************************************************************
	
#line 1220 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 277 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new ConstNode(yyattribute(1 - 1).dval);
	
#line 1235 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 279 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).expressionnode;
	
#line 1251 "myparser.cpp"
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
#line 283 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new VarNode(string(yyattribute(1 - 1).symp->name));
	
#line 1266 "myparser.cpp"
			}
		}
		break;
	case 72:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 285 ".\\myparser.y"

		
	
#line 1281 "myparser.cpp"
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
		{ "BOOL", 290 },
		{ "SCAN", 291 },
		{ "PRINT", 292 },
		{ "ID", 293 },
		{ "NUMBER", 294 },
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
		"var_declarator: var_declarator \'[\' NUMBER \']\'",
		"function_declarator: ID \'(\' \')\'",
		"function_declarator: ID \'(\' param_list \')\'",
		"param_list: param",
		"param_list: param \',\' param_list",
		"param: type var_declarator",
		"type: BOOL",
		"type: INT",
		"type: VOID",
		"code_block: LBRACE statement_list RBRACE",
		"statement_list: statement",
		"statement_list: statement_list statement",
		"statement: assignment_expression \';\'",
		"statement: while_loop_statement",
		"statement: for_loop_statement",
		"statement: selection_statement",
		"statement: var_definition",
		"statement: io_statement \';\'",
		"statement: code_block",
		"io_statement: SCAN \'(\' expression \')\'",
		"io_statement: PRINT \'(\' expression \')\'",
		"while_loop_statement: WHILE \'(\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' expression \';\' expression \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' type assignment_expression \';\' expression \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' expression \';\' expression \';\' \')\' statement",
		"for_loop_statement: FOR \'(\' type assignment_expression \';\' expression \';\' \')\' statement",
		"for_loop_statement: FOR \'(\' expression \';\' \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' type assignment_expression \';\' \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' \';\' expression \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' expression \';\' \';\' \')\' statement",
		"for_loop_statement: FOR \'(\' type assignment_expression \';\' \';\' \')\' statement",
		"for_loop_statement: FOR \'(\' \';\' expression \';\' \')\' statement",
		"for_loop_statement: FOR \'(\' \';\' \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' \';\' \';\' \')\' statement",
		"selection_statement: IF \'(\' expression \')\' statement",
		"selection_statement: IF \'(\' expression \')\' statement ELSE statement",
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
		"expression: ID \'(\' \')\'",
		"expression: ID \'(\' argument_list \')\'",
		"expression: NUMBER",
		"expression: expression_id_dec",
		"expression_id_dec: ID",
		"expression_id_dec: expression_id_dec \'[\' expression \']\'",
		"argument_list: expression",
		"argument_list: expression \',\' argument_list"
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
		{ 5, 4, 8 },
		{ 6, 3, 9 },
		{ 6, 4, 10 },
		{ 7, 1, 11 },
		{ 7, 3, 12 },
		{ 8, 2, 13 },
		{ 9, 1, 14 },
		{ 9, 1, 15 },
		{ 9, 1, 16 },
		{ 10, 3, 17 },
		{ 11, 1, 18 },
		{ 11, 2, 19 },
		{ 12, 2, 20 },
		{ 12, 1, 21 },
		{ 12, 1, 22 },
		{ 12, 1, 23 },
		{ 12, 1, 24 },
		{ 12, 2, 25 },
		{ 12, 1, 26 },
		{ 13, 4, 27 },
		{ 13, 4, 28 },
		{ 14, 5, 29 },
		{ 15, 9, 30 },
		{ 15, 10, 31 },
		{ 15, 8, 32 },
		{ 15, 9, 33 },
		{ 15, 8, 34 },
		{ 15, 9, 35 },
		{ 15, 8, 36 },
		{ 15, 7, 37 },
		{ 15, 8, 38 },
		{ 15, 7, 39 },
		{ 15, 7, 40 },
		{ 15, 6, 41 },
		{ 16, 5, 42 },
		{ 16, 7, 43 },
		{ 17, 3, 44 },
		{ 18, 1, 45 },
		{ 18, 3, 46 },
		{ 19, 1, 47 },
		{ 19, 3, 48 },
		{ 20, 3, 49 },
		{ 21, 1, 50 },
		{ 21, 3, 51 },
		{ 21, 3, 52 },
		{ 21, 3, 53 },
		{ 21, 3, 54 },
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
		{ 21, 2, 65 },
		{ 21, 3, 66 },
		{ 21, 3, 67 },
		{ 21, 4, 68 },
		{ 21, 1, 69 },
		{ 21, 1, 70 },
		{ 22, 1, 71 },
		{ 22, 4, 72 },
		{ 23, 1, -1 },
		{ 23, 3, -1 }
	};
	yyreduction = reduction;

	yytokenaction_size = 330;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 165, YYAT_SHIFT, 62 },
		{ 56, YYAT_SHIFT, 88 },
		{ 13, YYAT_SHIFT, 18 },
		{ 156, YYAT_SHIFT, 163 },
		{ 165, YYAT_SHIFT, 169 },
		{ 165, YYAT_SHIFT, 63 },
		{ 165, YYAT_SHIFT, 64 },
		{ 94, YYAT_SHIFT, 62 },
		{ 165, YYAT_SHIFT, 65 },
		{ 7, YYAT_SHIFT, 9 },
		{ 165, YYAT_SHIFT, 66 },
		{ 105, YYAT_SHIFT, 68 },
		{ 94, YYAT_SHIFT, 63 },
		{ 94, YYAT_SHIFT, 64 },
		{ 94, YYAT_SHIFT, 123 },
		{ 94, YYAT_SHIFT, 65 },
		{ 48, YYAT_SHIFT, 1 },
		{ 94, YYAT_SHIFT, 66 },
		{ 79, YYAT_SHIFT, 114 },
		{ 48, YYAT_SHIFT, 2 },
		{ 154, YYAT_SHIFT, 161 },
		{ 157, YYAT_SHIFT, 24 },
		{ 157, YYAT_SHIFT, 164 },
		{ 165, YYAT_SHIFT, 67 },
		{ 165, YYAT_SHIFT, 68 },
		{ 165, YYAT_SHIFT, 69 },
		{ 157, YYAT_SHIFT, 25 },
		{ 48, YYAT_SHIFT, 3 },
		{ 127, YYAT_SHIFT, 62 },
		{ 101, YYAT_SHIFT, 68 },
		{ 94, YYAT_SHIFT, 67 },
		{ 94, YYAT_SHIFT, 68 },
		{ 94, YYAT_SHIFT, 69 },
		{ 127, YYAT_SHIFT, 63 },
		{ 127, YYAT_SHIFT, 64 },
		{ 103, YYAT_SHIFT, 62 },
		{ 127, YYAT_SHIFT, 65 },
		{ 146, YYAT_SHIFT, 157 },
		{ 127, YYAT_SHIFT, 66 },
		{ 98, YYAT_SHIFT, 68 },
		{ 103, YYAT_SHIFT, 63 },
		{ 103, YYAT_SHIFT, 64 },
		{ 145, YYAT_SHIFT, 155 },
		{ 103, YYAT_SHIFT, 65 },
		{ 105, YYAT_SHIFT, 70 },
		{ 103, YYAT_SHIFT, 66 },
		{ 97, YYAT_SHIFT, 68 },
		{ 144, YYAT_SHIFT, 153 },
		{ 79, YYAT_SHIFT, 19 },
		{ 13, YYAT_SHIFT, 19 },
		{ 143, YYAT_SHIFT, 152 },
		{ 127, YYAT_SHIFT, 67 },
		{ 127, YYAT_SHIFT, 68 },
		{ 127, YYAT_SHIFT, 69 },
		{ 141, YYAT_SHIFT, 150 },
		{ 169, YYAT_ERROR, 0 },
		{ 135, YYAT_SHIFT, 145 },
		{ 165, YYAT_SHIFT, 70 },
		{ 103, YYAT_SHIFT, 67 },
		{ 103, YYAT_SHIFT, 68 },
		{ 103, YYAT_SHIFT, 69 },
		{ 134, YYAT_SHIFT, 144 },
		{ 101, YYAT_SHIFT, 70 },
		{ 106, YYAT_SHIFT, 62 },
		{ 94, YYAT_SHIFT, 70 },
		{ 133, YYAT_SHIFT, 142 },
		{ 132, YYAT_SHIFT, 140 },
		{ 131, YYAT_SHIFT, 139 },
		{ 106, YYAT_SHIFT, 63 },
		{ 106, YYAT_SHIFT, 64 },
		{ 107, YYAT_SHIFT, 62 },
		{ 106, YYAT_SHIFT, 65 },
		{ 98, YYAT_SHIFT, 70 },
		{ 106, YYAT_SHIFT, 66 },
		{ 128, YYAT_SHIFT, 137 },
		{ 107, YYAT_SHIFT, 63 },
		{ 107, YYAT_SHIFT, 64 },
		{ 123, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 65 },
		{ 97, YYAT_SHIFT, 70 },
		{ 107, YYAT_SHIFT, 66 },
		{ 120, YYAT_SHIFT, 135 },
		{ 119, YYAT_SHIFT, 133 },
		{ 118, YYAT_SHIFT, 132 },
		{ 117, YYAT_SHIFT, 130 },
		{ 127, YYAT_SHIFT, 70 },
		{ 106, YYAT_SHIFT, 67 },
		{ 106, YYAT_SHIFT, 68 },
		{ 106, YYAT_SHIFT, 69 },
		{ 112, YYAT_SHIFT, 45 },
		{ 96, YYAT_SHIFT, 125 },
		{ 109, YYAT_SHIFT, 62 },
		{ 103, YYAT_SHIFT, 70 },
		{ 107, YYAT_SHIFT, 67 },
		{ 107, YYAT_SHIFT, 68 },
		{ 107, YYAT_SHIFT, 69 },
		{ 109, YYAT_SHIFT, 63 },
		{ 109, YYAT_SHIFT, 64 },
		{ 108, YYAT_SHIFT, 62 },
		{ 109, YYAT_SHIFT, 65 },
		{ 95, YYAT_SHIFT, 124 },
		{ 109, YYAT_SHIFT, 66 },
		{ 5, YYAT_SHIFT, 1 },
		{ 108, YYAT_SHIFT, 63 },
		{ 108, YYAT_SHIFT, 64 },
		{ 5, YYAT_SHIFT, 2 },
		{ 108, YYAT_SHIFT, 65 },
		{ 0, YYAT_SHIFT, 1 },
		{ 108, YYAT_SHIFT, 66 },
		{ 92, YYAT_SHIFT, 122 },
		{ 0, YYAT_SHIFT, 2 },
		{ 91, YYAT_SHIFT, 121 },
		{ 89, YYAT_SHIFT, 119 },
		{ 5, YYAT_SHIFT, 3 },
		{ 109, YYAT_SHIFT, 67 },
		{ 109, YYAT_SHIFT, 68 },
		{ 109, YYAT_SHIFT, 69 },
		{ 88, YYAT_SHIFT, 117 },
		{ 0, YYAT_SHIFT, 3 },
		{ 87, YYAT_SHIFT, 116 },
		{ 106, YYAT_SHIFT, 70 },
		{ 108, YYAT_SHIFT, 67 },
		{ 108, YYAT_SHIFT, 68 },
		{ 108, YYAT_SHIFT, 69 },
		{ 86, YYAT_SHIFT, 115 },
		{ 111, YYAT_SHIFT, 62 },
		{ 78, YYAT_SHIFT, 113 },
		{ 107, YYAT_SHIFT, 70 },
		{ 77, YYAT_SHIFT, 112 },
		{ 100, YYAT_SHIFT, 62 },
		{ 111, YYAT_SHIFT, 63 },
		{ 111, YYAT_SHIFT, 64 },
		{ 110, YYAT_SHIFT, 62 },
		{ 111, YYAT_SHIFT, 65 },
		{ 100, YYAT_SHIFT, 63 },
		{ 111, YYAT_SHIFT, 66 },
		{ 59, YYAT_SHIFT, 93 },
		{ 110, YYAT_SHIFT, 63 },
		{ 110, YYAT_SHIFT, 64 },
		{ 100, YYAT_SHIFT, 66 },
		{ 110, YYAT_SHIFT, 65 },
		{ 53, YYAT_SHIFT, 68 },
		{ 110, YYAT_SHIFT, 66 },
		{ 52, YYAT_SHIFT, 85 },
		{ 49, YYAT_SHIFT, 19 },
		{ 47, YYAT_SHIFT, 83 },
		{ 44, YYAT_SHIFT, 82 },
		{ 43, YYAT_SHIFT, 80 },
		{ 109, YYAT_SHIFT, 70 },
		{ 111, YYAT_SHIFT, 68 },
		{ 36, YYAT_ERROR, 0 },
		{ 35, YYAT_SHIFT, 61 },
		{ 104, YYAT_SHIFT, 62 },
		{ 100, YYAT_SHIFT, 68 },
		{ 34, YYAT_SHIFT, 60 },
		{ 108, YYAT_SHIFT, 70 },
		{ 110, YYAT_SHIFT, 68 },
		{ 104, YYAT_SHIFT, 63 },
		{ 104, YYAT_SHIFT, 64 },
		{ 102, YYAT_SHIFT, 62 },
		{ 104, YYAT_SHIFT, 65 },
		{ 99, YYAT_SHIFT, 62 },
		{ 104, YYAT_SHIFT, 66 },
		{ 31, YYAT_SHIFT, 59 },
		{ 102, YYAT_SHIFT, 63 },
		{ 102, YYAT_SHIFT, 64 },
		{ 99, YYAT_SHIFT, 63 },
		{ 102, YYAT_SHIFT, 65 },
		{ 30, YYAT_SHIFT, 58 },
		{ 102, YYAT_SHIFT, 66 },
		{ 29, YYAT_SHIFT, 57 },
		{ 99, YYAT_SHIFT, 66 },
		{ 28, YYAT_SHIFT, 56 },
		{ 27, YYAT_SHIFT, 55 },
		{ 26, YYAT_SHIFT, 54 },
		{ 23, YYAT_SHIFT, 50 },
		{ 104, YYAT_SHIFT, 68 },
		{ 21, YYAT_SHIFT, 48 },
		{ 19, YYAT_SHIFT, 47 },
		{ 14, YYAT_SHIFT, 20 },
		{ 12, YYAT_SHIFT, 16 },
		{ 11, YYAT_SHIFT, 15 },
		{ 111, YYAT_SHIFT, 70 },
		{ 102, YYAT_SHIFT, 68 },
		{ 10, YYAT_SHIFT, 14 },
		{ 99, YYAT_SHIFT, 68 },
		{ 100, YYAT_SHIFT, 70 },
		{ 6, YYAT_ACCEPT, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 70 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 70 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 102, YYAT_SHIFT, 70 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 70 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 56, YYAT_SHIFT, 1 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 56, YYAT_SHIFT, 2 },
		{ -1, YYAT_ERROR, 0 },
		{ 165, YYAT_SHIFT, 71 },
		{ 165, YYAT_SHIFT, 72 },
		{ 165, YYAT_SHIFT, 73 },
		{ 165, YYAT_SHIFT, 74 },
		{ 165, YYAT_SHIFT, 75 },
		{ 165, YYAT_SHIFT, 76 },
		{ 56, YYAT_SHIFT, 3 },
		{ 94, YYAT_SHIFT, 71 },
		{ 94, YYAT_SHIFT, 72 },
		{ 94, YYAT_SHIFT, 73 },
		{ 94, YYAT_SHIFT, 74 },
		{ 94, YYAT_SHIFT, 75 },
		{ 94, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 7, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 127, YYAT_SHIFT, 71 },
		{ 127, YYAT_SHIFT, 72 },
		{ 127, YYAT_SHIFT, 73 },
		{ 127, YYAT_SHIFT, 74 },
		{ 127, YYAT_SHIFT, 75 },
		{ 127, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ 103, YYAT_SHIFT, 71 },
		{ 103, YYAT_SHIFT, 72 },
		{ 103, YYAT_SHIFT, 73 },
		{ 103, YYAT_SHIFT, 74 },
		{ 103, YYAT_SHIFT, 75 },
		{ 103, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 169, YYAT_SHIFT, 26 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 157, YYAT_SHIFT, 31 },
		{ 157, YYAT_SHIFT, 32 },
		{ 169, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 169, YYAT_SHIFT, 27 },
		{ 169, YYAT_SHIFT, 28 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 169, YYAT_SHIFT, 29 },
		{ 169, YYAT_SHIFT, 30 },
		{ -1, YYAT_ERROR, 0 },
		{ 106, YYAT_SHIFT, 72 },
		{ 106, YYAT_SHIFT, 73 },
		{ 106, YYAT_SHIFT, 74 },
		{ 106, YYAT_SHIFT, 75 },
		{ 106, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 73 },
		{ 107, YYAT_SHIFT, 74 },
		{ 107, YYAT_SHIFT, 75 },
		{ 107, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 75 },
		{ 109, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 75 },
		{ 108, YYAT_SHIFT, 76 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -172, 1, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ -177, 1, YYAT_REDUCE, 3 },
		{ 187, 1, YYAT_ERROR, 0 },
		{ -50, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 144, 1, YYAT_REDUCE, 9 },
		{ 122, 1, YYAT_ERROR, 0 },
		{ -100, 1, YYAT_ERROR, 0 },
		{ -42, 1, YYAT_REDUCE, 7 },
		{ 138, 1, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_DEFAULT, 112 },
		{ -116, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 133, 1, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_DEFAULT, 112 },
		{ 134, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 134, 1, YYAT_ERROR, 0 },
		{ 133, 1, YYAT_ERROR, 0 },
		{ 132, 1, YYAT_ERROR, 0 },
		{ 130, 1, YYAT_ERROR, 0 },
		{ 128, 1, YYAT_ERROR, 0 },
		{ 123, 1, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 95, 1, YYAT_REDUCE, 52 },
		{ 60, 1, YYAT_REDUCE, 72 },
		{ 109, 1, YYAT_DEFAULT, 165 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_DEFAULT, 112 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ -134, 1, YYAT_DEFAULT, 169 },
		{ 87, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 52, 1, YYAT_ERROR, 0 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ 53, 1, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 102, 1, YYAT_DEFAULT, 165 },
		{ 80, 1, YYAT_REDUCE, 67 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ -58, 1, YYAT_DEFAULT, 135 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 95, 1, YYAT_DEFAULT, 157 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 84, 1, YYAT_REDUCE, 47 },
		{ 67, 1, YYAT_ERROR, 0 },
		{ -43, 1, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 68 },
		{ 83, 1, YYAT_DEFAULT, 165 },
		{ 78, 1, YYAT_DEFAULT, 165 },
		{ 58, 1, YYAT_DEFAULT, 135 },
		{ 53, 1, YYAT_DEFAULT, 146 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 70, 1, YYAT_DEFAULT, 165 },
		{ 68, 1, YYAT_DEFAULT, 165 },
		{ 0, 0, YYAT_REDUCE, 69 },
		{ -30, 1, YYAT_REDUCE, 75 },
		{ 59, 1, YYAT_ERROR, 0 },
		{ -3, 1, YYAT_DEFAULT, 36 },
		{ -15, 1, YYAT_REDUCE, 57 },
		{ -22, 1, YYAT_REDUCE, 55 },
		{ 124, 1, YYAT_REDUCE, 53 },
		{ 92, 1, YYAT_REDUCE, 54 },
		{ -32, 1, YYAT_REDUCE, 56 },
		{ 122, 1, YYAT_REDUCE, 58 },
		{ -2, 1, YYAT_REDUCE, 51 },
		{ 115, 1, YYAT_REDUCE, 59 },
		{ -50, 1, YYAT_REDUCE, 66 },
		{ 26, 1, YYAT_REDUCE, 65 },
		{ 33, 1, YYAT_REDUCE, 64 },
		{ 61, 1, YYAT_REDUCE, 60 },
		{ 54, 1, YYAT_REDUCE, 63 },
		{ 95, 1, YYAT_REDUCE, 61 },
		{ 88, 1, YYAT_REDUCE, 62 },
		{ -204, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 43, 1, YYAT_DEFAULT, 157 },
		{ 24, 1, YYAT_DEFAULT, 146 },
		{ 23, 1, YYAT_DEFAULT, 135 },
		{ 22, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 36, 1, YYAT_DEFAULT, 157 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ -9, 1, YYAT_REDUCE, 50 },
		{ -203, 1, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 26, 1, YYAT_DEFAULT, 165 },
		{ 25, 1, YYAT_DEFAULT, 157 },
		{ 24, 1, YYAT_DEFAULT, 157 },
		{ 2, 1, YYAT_DEFAULT, 146 },
		{ -3, 1, YYAT_DEFAULT, 123 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 13, 1, YYAT_DEFAULT, 165 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 9, 1, YYAT_DEFAULT, 165 },
		{ 6, 1, YYAT_DEFAULT, 157 },
		{ 1, 1, YYAT_DEFAULT, 157 },
		{ -22, 1, YYAT_DEFAULT, 36 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ -21, 1, YYAT_DEFAULT, 165 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ -38, 1, YYAT_DEFAULT, 165 },
		{ -19, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ 0, 0, YYAT_DEFAULT, 169 },
		{ -37, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ -4, 1, YYAT_DEFAULT, 56 },
		{ 0, 0, YYAT_REDUCE, 33 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 86;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 169, 40 },
		{ 169, 42 },
		{ 112, 79 },
		{ 169, 170 },
		{ 169, 44 },
		{ 169, 38 },
		{ 169, 39 },
		{ 169, 37 },
		{ 169, 33 },
		{ 56, 90 },
		{ 164, 168 },
		{ 169, 34 },
		{ 5, 8 },
		{ 5, 5 },
		{ 163, 167 },
		{ 112, 126 },
		{ 112, 77 },
		{ 161, 166 },
		{ 123, 94 },
		{ 5, 7 },
		{ 123, 136 },
		{ 56, 89 },
		{ 157, 51 },
		{ 157, 165 },
		{ 157, 35 },
		{ 48, 84 },
		{ 48, 21 },
		{ 48, 22 },
		{ 7, 11 },
		{ 155, 162 },
		{ 7, 12 },
		{ 90, 120 },
		{ 90, 36 },
		{ 18, 46 },
		{ 18, 13 },
		{ 16, 43 },
		{ 16, 41 },
		{ 0, 6 },
		{ 0, 4 },
		{ 153, 160 },
		{ 152, 159 },
		{ 150, 158 },
		{ 145, 156 },
		{ 144, 154 },
		{ 142, 151 },
		{ 140, 149 },
		{ 139, 148 },
		{ 137, 147 },
		{ 135, 146 },
		{ 133, 143 },
		{ 132, 141 },
		{ 130, 138 },
		{ 119, 134 },
		{ 117, 131 },
		{ 116, 129 },
		{ 115, 128 },
		{ 114, 127 },
		{ 88, 118 },
		{ 76, 111 },
		{ 75, 110 },
		{ 74, 109 },
		{ 73, 108 },
		{ 72, 107 },
		{ 71, 106 },
		{ 70, 105 },
		{ 69, 104 },
		{ 68, 103 },
		{ 67, 102 },
		{ 66, 101 },
		{ 65, 100 },
		{ 64, 99 },
		{ 63, 98 },
		{ 62, 97 },
		{ 61, 96 },
		{ 59, 95 },
		{ 58, 92 },
		{ 57, 91 },
		{ 55, 87 },
		{ 54, 86 },
		{ 43, 81 },
		{ 40, 78 },
		{ 25, 53 },
		{ 24, 52 },
		{ 22, 49 },
		{ 14, 23 },
		{ 12, 17 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 36, 5 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 10, -1 },
		{ 0, -1 },
		{ 24, 18 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 75, -1 },
		{ 0, -1 },
		{ 77, 48 },
		{ 0, -1 },
		{ 24, 169 },
		{ 0, -1 },
		{ 29, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 78, -1 },
		{ 0, -1 },
		{ 61, 157 },
		{ 60, 157 },
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
		{ 62, 112 },
		{ 0, -1 },
		{ 0, -1 },
		{ 67, 169 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 57, 157 },
		{ 56, 157 },
		{ 0, 157 },
		{ 55, 157 },
		{ 54, 157 },
		{ 51, 123 },
		{ 0, -1 },
		{ 52, 157 },
		{ 51, 157 },
		{ 50, 157 },
		{ 49, 157 },
		{ 48, 157 },
		{ 47, 157 },
		{ 46, 157 },
		{ 45, 157 },
		{ 44, 157 },
		{ 43, 157 },
		{ 42, 157 },
		{ 41, 157 },
		{ 40, 157 },
		{ 39, 157 },
		{ 38, 157 },
		{ 37, 157 },
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
		{ 36, 157 },
		{ 0, -1 },
		{ 11, 157 },
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
		{ -3, -1 },
		{ 0, -1 },
		{ 35, 157 },
		{ 43, 169 },
		{ 42, 169 },
		{ 32, 157 },
		{ 0, -1 },
		{ 31, 157 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -3, 157 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 39, 169 },
		{ 0, -1 },
		{ 29, 157 },
		{ 28, 157 },
		{ 0, -1 },
		{ 27, 157 },
		{ 0, -1 },
		{ 35, 169 },
		{ 0, -1 },
		{ 34, 169 },
		{ 33, 169 },
		{ 0, -1 },
		{ 32, 169 },
		{ 0, -1 },
		{ 22, 157 },
		{ 21, 157 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 29, 169 },
		{ 0, -1 },
		{ 28, 169 },
		{ 27, 169 },
		{ 0, -1 },
		{ 17, 169 },
		{ 0, -1 },
		{ 2, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 5, 169 },
		{ 0, -1 },
		{ 2, 169 },
		{ -2, 169 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -9, 90 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 292 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

void call() {
	printf("before");
	generator->generate();
}

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


