/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 98 of your 30 day trial period.
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
* Date: 12/23/19
* Time: 02:22:18
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

#line 83 ".\\myparser.y"

	StatementNode *StatementNode::Null = new StatementNode();
	ConstNode *ConstNode::True = new ConstNode("true", new TypeNode("bool"));
	ConstNode *ConstNode::False = new ConstNode("false", new TypeNode("bool"));
	int TempNode::tempCount = 0;
	RootNode *root = new RootNode();
	int offset = 0; // total offset in memory
	int labelCount = 0; // count of labels
	int variCount = 0; // count of variables
	InterCodeGenerator *generator = new InterCodeGenerator(root);
	int funccount = 1;

#line 97 "myparser.cpp"
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
#line 98 ".\\myparser.y"

		root->addChildNode(yyattribute(1 - 1).node);
		(*(YYSTYPE YYFAR*)yyvalptr).rootnode = root;
	
#line 208 "myparser.cpp"
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
#line 102 ".\\myparser.y"

		if(yyattribute(1 - 2).node != NULL)
		{
			yyattribute(1 - 2).node->addPeerNode(yyattribute(2 - 2).node);
			(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(1 - 2).node;
			generator = new InterCodeGenerator(root);
			if(++funccount == 2)generator->generate();
			generator->functionTable.clear();
			generator->envStack.clear();
		} else {
			(*(YYSTYPE YYFAR*)yyvalptr).node = yyattribute(2 - 2).node;
			root->addChildNode((*(YYSTYPE YYFAR*)yyvalptr).node);
			generator = new InterCodeGenerator(root);
			//generator->generate();
			generator->functionTable.clear();
			generator->envStack.clear();
		}
	
#line 238 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#line 119 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = NULL;
	
#line 248 "myparser.cpp"
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 123 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = new TopLevelDefinitionNode();
		(*(YYSTYPE YYFAR*)yyvalptr).node->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).varnode);
		//$$->print();
	
#line 265 "myparser.cpp"
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
#line 128 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = new TopLevelDefinitionNode();
		(*(YYSTYPE YYFAR*)yyvalptr).node->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).functionnode);
		yyattribute(2 - 3).functionnode->addPeerNode(yyattribute(3 - 3).compoundstatementnode);
		//$$->print();
	
#line 284 "myparser.cpp"
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
#line 136 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
#line 297 "myparser.cpp"
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
#line 137 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 313 "myparser.cpp"
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
#line 141 ".\\myparser.y"

		VarNode *cur = new VarNode(string(yyattribute(1 - 1).symp->name));
		cur->nodeType = 2;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = cur;
	
#line 330 "myparser.cpp"
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
#line 145 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 4).varnode;
		ArrayNode *curtyp = new ArrayNode(yyattribute(3 - 4).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->setType(curtyp);
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->nodeType = 3;
	
#line 348 "myparser.cpp"
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
#line 151 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = new FunctionNode(string(yyattribute(1 - 3).symp->name));
	
#line 363 "myparser.cpp"
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
#line 153 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = new FunctionNode(string(yyattribute(1 - 4).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).functionnode->setParam(yyattribute(3 - 4).paramnode);
	
#line 379 "myparser.cpp"
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
#line 157 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 1).paramnode;
#line 392 "myparser.cpp"
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
#line 158 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 3).paramnode;
		yyattribute(1 - 3).paramnode->addPeerNode(yyattribute(3 - 3).paramnode);
	
#line 408 "myparser.cpp"
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
#line 162 ".\\myparser.y"

		// assert $1 is a TypeNode, $2 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = new ParamNode(yyattribute(1 - 2).typenode, yyattribute(2 - 2).varnode);
	
#line 424 "myparser.cpp"
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
#line 166 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).typenode = new TypeNode("bool");
	
#line 439 "myparser.cpp"
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
#line 168 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).typenode = new TypeNode("int");
	
#line 454 "myparser.cpp"
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
#line 170 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).typenode = new TypeNode("void");
	
#line 469 "myparser.cpp"
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
#line 173 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).compoundstatementnode = new CompoundStatementNode();
		(*(YYSTYPE YYFAR*)yyvalptr).compoundstatementnode->addChildNode(yyattribute(2 - 3).statementnode);
	
#line 485 "myparser.cpp"
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
#line 177 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
#line 498 "myparser.cpp"
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
#line 178 ".\\myparser.y"

		yyattribute(1 - 2).statementnode->addPeerNode(yyattribute(2 - 2).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 514 "myparser.cpp"
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
#line 182 ".\\myparser.y"

		ExpressionNode* lvalue = yyattribute(1 - 2).operatornode->left;
		if(lvalue->nodeId == NodeId::varnode)(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new AssignNode((VarNode*)lvalue, yyattribute(1 - 2).operatornode->right);
		else if(lvalue->nodeId == NodeId::accessnode)(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new AssignArrayNode((AccessNode*)lvalue, yyattribute(1 - 2).operatornode->right);
		else yyerror("wrong left value! UniqueID=162");
	
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
#line 187 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).whileloopstatementnode;
	
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
#line 189 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).forloopstatementnode;
	
#line 562 "myparser.cpp"
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
#line 191 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).selectionstatementnode;
	
#line 577 "myparser.cpp"
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
#line 193 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
	
#line 592 "myparser.cpp"
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
#line 195 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 607 "myparser.cpp"
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
#line 197 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).compoundstatementnode;
	
#line 622 "myparser.cpp"
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
#line 199 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new FunctionStatement(string(yyattribute(1 - 4).symp->name), NULL);
#line 635 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 200 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new FunctionStatement(string(yyattribute(1 - 5).symp->name), yyattribute(3 - 5).expressionnode);
	
#line 649 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 202 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).expressionnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 666 "myparser.cpp"
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
#line 206 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).expressionnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 683 "myparser.cpp"
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
#line 212 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).whileloopstatementnode = new WhileLoopStatementNode(yyattribute(3 - 5).expressionnode, yyattribute(5 - 5).statementnode);
	
#line 698 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 215 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 9).expressionnode, yyattribute(5 - 9).expressionnode, yyattribute(7 - 9).expressionnode, yyattribute(9 - 9).statementnode);
	
#line 713 "myparser.cpp"
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
#line 217 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).statementnode, yyattribute(4 - 8).expressionnode, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 728 "myparser.cpp"
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
#line 219 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).expressionnode, yyattribute(5 - 8).expressionnode, NULL, yyattribute(8 - 8).statementnode);
	
#line 743 "myparser.cpp"
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
#line 221 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).statementnode, yyattribute(4 - 7).expressionnode, NULL, yyattribute(7 - 7).statementnode);
	
#line 758 "myparser.cpp"
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
#line 223 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).expressionnode, NULL, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 773 "myparser.cpp"
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
#line 225 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).statementnode, NULL, yyattribute(5 - 7).expressionnode, yyattribute(7 - 7).statementnode);
	
#line 788 "myparser.cpp"
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
#line 227 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, yyattribute(4 - 8).expressionnode, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 803 "myparser.cpp"
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
#line 229 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).expressionnode, NULL, NULL, yyattribute(7 - 7).statementnode);
	
#line 818 "myparser.cpp"
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
#line 231 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 6).statementnode, NULL, NULL, yyattribute(6 - 6).statementnode);
	
#line 833 "myparser.cpp"
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
#line 233 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, yyattribute(4 - 7).expressionnode, NULL, yyattribute(7 - 7).statementnode);
	
#line 848 "myparser.cpp"
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
#line 235 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, NULL, yyattribute(5 - 7).expressionnode, yyattribute(7 - 7).statementnode);
	
#line 863 "myparser.cpp"
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
#line 237 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, NULL, NULL, yyattribute(6 - 6).statementnode);
	
#line 878 "myparser.cpp"
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
#line 240 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = new SelectionStatementNode(yyattribute(3 - 5).expressionnode, yyattribute(5 - 5).statementnode);
	
#line 893 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 242 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = new SelectionStatementNode(yyattribute(3 - 7).expressionnode, yyattribute(5 - 7).statementnode, yyattribute(7 - 7).statementnode);
	
#line 908 "myparser.cpp"
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
#line 245 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new StatementNode(5);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).varnode);
	
#line 925 "myparser.cpp"
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
#line 250 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 941 "myparser.cpp"
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
#line 253 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		yyattribute(1 - 3).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 958 "myparser.cpp"
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
#line 258 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 974 "myparser.cpp"
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
#line 261 ".\\myparser.y"

		// assert $1 is a VarNode, and $$ is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->addChildNode(yyattribute(3 - 3).expressionnode);
	
#line 991 "myparser.cpp"
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
#line 266 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).operatornode = new OperatorNode(1, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
	
#line 1006 "myparser.cpp"
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
#line 269 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).operatornode;
#line 1019 "myparser.cpp"
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
#line 270 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(2, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1032 "myparser.cpp"
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
#line 271 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(3, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1045 "myparser.cpp"
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
#line 272 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(4, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1058 "myparser.cpp"
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
#line 273 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(5, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1071 "myparser.cpp"
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
#line 274 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(6, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1084 "myparser.cpp"
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
#line 275 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("<", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1097 "myparser.cpp"
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
#line 276 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode(">", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1110 "myparser.cpp"
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
#line 277 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("==", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1123 "myparser.cpp"
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
#line 278 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("<=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1136 "myparser.cpp"
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
#line 279 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode(">=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1149 "myparser.cpp"
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
#line 280 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("!=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1162 "myparser.cpp"
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
#line 281 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new AndNode(yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1175 "myparser.cpp"
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
#line 282 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OrNode(yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1188 "myparser.cpp"
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
#line 283 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 3).expressionnode;
		for(int i = 1; i < yyattribute(3 - 3).dval; i++)(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(4, yyattribute(1 - 3).expressionnode, (*(YYSTYPE YYFAR*)yyvalptr).expressionnode);
	
#line 1204 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 287 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new UnaryNode(16, yyattribute(2 - 2).expressionnode);
#line 1217 "myparser.cpp"
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
#line 288 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(2 - 3).expressionnode;
#line 1230 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 289 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new FunctionCallNode(string(yyattribute(1 - 3).symp->name), NULL);
#line 1243 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 290 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new FunctionCallNode(string(yyattribute(1 - 4).symp->name), yyattribute(3 - 4).expressionnode);
#line 1256 "myparser.cpp"
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
#line 291 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new ConstNode(yyattribute(1 - 1).dval);
#line 1269 "myparser.cpp"
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
#line 292 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).expressionnode;
#line 1282 "myparser.cpp"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 293 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new VarNode(string(yyattribute(1 - 1).symp->name));
	
#line 1297 "myparser.cpp"
			}
		}
		break;
	case 74:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 295 ".\\myparser.y"

		if (yyattribute(1 - 4).expressionnode->nodeId == NodeId::varnode)(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new AccessNode((VarNode*)yyattribute(1 - 4).expressionnode, yyattribute(3 - 4).expressionnode, NULL);
		else {(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 4).expressionnode; ((AccessNode*)(*(YYSTYPE YYFAR*)yyvalptr).expressionnode)->index->addPeerNode(yyattribute(3 - 4).expressionnode);}
	
#line 1313 "myparser.cpp"
			}
		}
		break;
	case 75:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 299 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).expressionnode;
#line 1326 "myparser.cpp"
			}
		}
		break;
	case 76:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 300 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 3).expressionnode; yyattribute(1 - 3).expressionnode->addPeerNode(yyattribute(3 - 3).expressionnode);
#line 1339 "myparser.cpp"
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
		"top_level_definition_list: top_level_definition_list top_level_definition",
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
		"statement: ID \'(\' \')\' \';\'",
		"statement: ID \'(\' argument_list \')\' \';\'",
		"io_statement: SCAN \'(\' expression \')\'",
		"io_statement: PRINT \'(\' expression \')\'",
		"while_loop_statement: WHILE \'(\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' expression \';\' expression \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' var_definition expression \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' expression \';\' expression \';\' \')\' statement",
		"for_loop_statement: FOR \'(\' var_definition expression \';\' \')\' statement",
		"for_loop_statement: FOR \'(\' expression \';\' \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' var_definition \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' \';\' expression \';\' expression \')\' statement",
		"for_loop_statement: FOR \'(\' expression \';\' \';\' \')\' statement",
		"for_loop_statement: FOR \'(\' var_definition \';\' \')\' statement",
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
		"expression: expression \'^\' NUMBER",
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
		{ 12, 4, 27 },
		{ 12, 5, 28 },
		{ 13, 4, 29 },
		{ 13, 4, 30 },
		{ 14, 5, 31 },
		{ 15, 9, 32 },
		{ 15, 8, 33 },
		{ 15, 8, 34 },
		{ 15, 7, 35 },
		{ 15, 8, 36 },
		{ 15, 7, 37 },
		{ 15, 8, 38 },
		{ 15, 7, 39 },
		{ 15, 6, 40 },
		{ 15, 7, 41 },
		{ 15, 7, 42 },
		{ 15, 6, 43 },
		{ 16, 5, 44 },
		{ 16, 7, 45 },
		{ 17, 3, 46 },
		{ 18, 1, 47 },
		{ 18, 3, 48 },
		{ 19, 1, 49 },
		{ 19, 3, 50 },
		{ 20, 3, 51 },
		{ 21, 1, 52 },
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
		{ 21, 3, 65 },
		{ 21, 3, 66 },
		{ 21, 2, 67 },
		{ 21, 3, 68 },
		{ 21, 3, 69 },
		{ 21, 4, 70 },
		{ 21, 1, 71 },
		{ 21, 1, 72 },
		{ 22, 1, 73 },
		{ 22, 4, 74 },
		{ 23, 1, 75 },
		{ 23, 3, 76 }
	};
	yyreduction = reduction;

	yytokenaction_size = 330;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 165, YYAT_SHIFT, 67 },
		{ 57, YYAT_SHIFT, 89 },
		{ 10, YYAT_SHIFT, 14 },
		{ 157, YYAT_SHIFT, 168 },
		{ 165, YYAT_SHIFT, 172 },
		{ 165, YYAT_SHIFT, 68 },
		{ 165, YYAT_SHIFT, 69 },
		{ 96, YYAT_SHIFT, 67 },
		{ 165, YYAT_SHIFT, 70 },
		{ 6, YYAT_SHIFT, 8 },
		{ 165, YYAT_SHIFT, 71 },
		{ 105, YYAT_SHIFT, 73 },
		{ 96, YYAT_SHIFT, 68 },
		{ 96, YYAT_SHIFT, 69 },
		{ 96, YYAT_SHIFT, 129 },
		{ 96, YYAT_SHIFT, 70 },
		{ 65, YYAT_SHIFT, 99 },
		{ 96, YYAT_SHIFT, 71 },
		{ 152, YYAT_SHIFT, 163 },
		{ 150, YYAT_SHIFT, 161 },
		{ 143, YYAT_SHIFT, 156 },
		{ 153, YYAT_SHIFT, 26 },
		{ 153, YYAT_SHIFT, 164 },
		{ 165, YYAT_SHIFT, 72 },
		{ 165, YYAT_SHIFT, 73 },
		{ 165, YYAT_SHIFT, 74 },
		{ 153, YYAT_SHIFT, 27 },
		{ 142, YYAT_SHIFT, 155 },
		{ 132, YYAT_SHIFT, 67 },
		{ 102, YYAT_SHIFT, 73 },
		{ 96, YYAT_SHIFT, 72 },
		{ 96, YYAT_SHIFT, 73 },
		{ 96, YYAT_SHIFT, 74 },
		{ 132, YYAT_SHIFT, 68 },
		{ 132, YYAT_SHIFT, 69 },
		{ 107, YYAT_SHIFT, 67 },
		{ 132, YYAT_SHIFT, 70 },
		{ 140, YYAT_SHIFT, 153 },
		{ 132, YYAT_SHIFT, 71 },
		{ 101, YYAT_SHIFT, 73 },
		{ 107, YYAT_SHIFT, 68 },
		{ 107, YYAT_SHIFT, 69 },
		{ 139, YYAT_SHIFT, 151 },
		{ 107, YYAT_SHIFT, 70 },
		{ 105, YYAT_SHIFT, 75 },
		{ 107, YYAT_SHIFT, 71 },
		{ 65, YYAT_SHIFT, 15 },
		{ 138, YYAT_SHIFT, 149 },
		{ 137, YYAT_SHIFT, 148 },
		{ 10, YYAT_SHIFT, 15 },
		{ 134, YYAT_SHIFT, 146 },
		{ 132, YYAT_SHIFT, 72 },
		{ 132, YYAT_SHIFT, 73 },
		{ 132, YYAT_SHIFT, 74 },
		{ 129, YYAT_ERROR, 0 },
		{ 172, YYAT_ERROR, 0 },
		{ 128, YYAT_SHIFT, 144 },
		{ 165, YYAT_SHIFT, 75 },
		{ 107, YYAT_SHIFT, 72 },
		{ 107, YYAT_SHIFT, 73 },
		{ 107, YYAT_SHIFT, 74 },
		{ 124, YYAT_SHIFT, 143 },
		{ 102, YYAT_SHIFT, 75 },
		{ 110, YYAT_SHIFT, 67 },
		{ 96, YYAT_SHIFT, 75 },
		{ 123, YYAT_SHIFT, 141 },
		{ 122, YYAT_SHIFT, 139 },
		{ 121, YYAT_SHIFT, 138 },
		{ 110, YYAT_SHIFT, 68 },
		{ 110, YYAT_SHIFT, 69 },
		{ 111, YYAT_SHIFT, 67 },
		{ 110, YYAT_SHIFT, 70 },
		{ 101, YYAT_SHIFT, 75 },
		{ 110, YYAT_SHIFT, 71 },
		{ 120, YYAT_SHIFT, 136 },
		{ 111, YYAT_SHIFT, 68 },
		{ 111, YYAT_SHIFT, 69 },
		{ 117, YYAT_SHIFT, 133 },
		{ 111, YYAT_SHIFT, 70 },
		{ 48, YYAT_SHIFT, 3 },
		{ 111, YYAT_SHIFT, 71 },
		{ 98, YYAT_SHIFT, 23 },
		{ 48, YYAT_SHIFT, 4 },
		{ 97, YYAT_SHIFT, 130 },
		{ 95, YYAT_SHIFT, 128 },
		{ 132, YYAT_SHIFT, 75 },
		{ 110, YYAT_SHIFT, 72 },
		{ 110, YYAT_SHIFT, 73 },
		{ 110, YYAT_SHIFT, 74 },
		{ 94, YYAT_SHIFT, 127 },
		{ 48, YYAT_SHIFT, 5 },
		{ 113, YYAT_SHIFT, 67 },
		{ 107, YYAT_SHIFT, 75 },
		{ 111, YYAT_SHIFT, 72 },
		{ 111, YYAT_SHIFT, 73 },
		{ 111, YYAT_SHIFT, 74 },
		{ 113, YYAT_SHIFT, 68 },
		{ 113, YYAT_SHIFT, 69 },
		{ 112, YYAT_SHIFT, 67 },
		{ 113, YYAT_SHIFT, 70 },
		{ 93, YYAT_SHIFT, 126 },
		{ 113, YYAT_SHIFT, 71 },
		{ 1, YYAT_SHIFT, 3 },
		{ 112, YYAT_SHIFT, 68 },
		{ 112, YYAT_SHIFT, 69 },
		{ 1, YYAT_SHIFT, 4 },
		{ 112, YYAT_SHIFT, 70 },
		{ 92, YYAT_SHIFT, 125 },
		{ 112, YYAT_SHIFT, 71 },
		{ 91, YYAT_SHIFT, 123 },
		{ 90, YYAT_SHIFT, 122 },
		{ 89, YYAT_SHIFT, 120 },
		{ 88, YYAT_SHIFT, 119 },
		{ 1, YYAT_SHIFT, 5 },
		{ 113, YYAT_SHIFT, 72 },
		{ 113, YYAT_SHIFT, 73 },
		{ 113, YYAT_SHIFT, 74 },
		{ 87, YYAT_SHIFT, 118 },
		{ 85, YYAT_SHIFT, 116 },
		{ 75, YYAT_SHIFT, 109 },
		{ 110, YYAT_SHIFT, 75 },
		{ 112, YYAT_SHIFT, 72 },
		{ 112, YYAT_SHIFT, 73 },
		{ 112, YYAT_SHIFT, 74 },
		{ 66, YYAT_SHIFT, 100 },
		{ 115, YYAT_SHIFT, 67 },
		{ 64, YYAT_SHIFT, 98 },
		{ 111, YYAT_SHIFT, 75 },
		{ 60, YYAT_SHIFT, 94 },
		{ 104, YYAT_SHIFT, 67 },
		{ 115, YYAT_SHIFT, 68 },
		{ 115, YYAT_SHIFT, 69 },
		{ 114, YYAT_SHIFT, 67 },
		{ 115, YYAT_SHIFT, 70 },
		{ 104, YYAT_SHIFT, 68 },
		{ 115, YYAT_SHIFT, 71 },
		{ 54, YYAT_SHIFT, 73 },
		{ 114, YYAT_SHIFT, 68 },
		{ 114, YYAT_SHIFT, 69 },
		{ 104, YYAT_SHIFT, 71 },
		{ 114, YYAT_SHIFT, 70 },
		{ 53, YYAT_SHIFT, 86 },
		{ 114, YYAT_SHIFT, 71 },
		{ 51, YYAT_SHIFT, 85 },
		{ 47, YYAT_SHIFT, 15 },
		{ 40, YYAT_SHIFT, 82 },
		{ 39, YYAT_ERROR, 0 },
		{ 37, YYAT_SHIFT, 63 },
		{ 113, YYAT_SHIFT, 75 },
		{ 115, YYAT_SHIFT, 73 },
		{ 36, YYAT_SHIFT, 62 },
		{ 35, YYAT_SHIFT, 61 },
		{ 108, YYAT_SHIFT, 67 },
		{ 104, YYAT_SHIFT, 73 },
		{ 33, YYAT_SHIFT, 60 },
		{ 112, YYAT_SHIFT, 75 },
		{ 114, YYAT_SHIFT, 73 },
		{ 108, YYAT_SHIFT, 68 },
		{ 108, YYAT_SHIFT, 69 },
		{ 106, YYAT_SHIFT, 67 },
		{ 108, YYAT_SHIFT, 70 },
		{ 103, YYAT_SHIFT, 67 },
		{ 108, YYAT_SHIFT, 71 },
		{ 32, YYAT_SHIFT, 59 },
		{ 106, YYAT_SHIFT, 68 },
		{ 106, YYAT_SHIFT, 69 },
		{ 103, YYAT_SHIFT, 68 },
		{ 106, YYAT_SHIFT, 70 },
		{ 31, YYAT_SHIFT, 58 },
		{ 106, YYAT_SHIFT, 71 },
		{ 30, YYAT_SHIFT, 57 },
		{ 103, YYAT_SHIFT, 71 },
		{ 29, YYAT_SHIFT, 56 },
		{ 28, YYAT_SHIFT, 55 },
		{ 25, YYAT_SHIFT, 50 },
		{ 22, YYAT_SHIFT, 49 },
		{ 108, YYAT_SHIFT, 73 },
		{ 21, YYAT_SHIFT, 48 },
		{ 15, YYAT_SHIFT, 25 },
		{ 13, YYAT_SHIFT, 19 },
		{ 12, YYAT_SHIFT, 18 },
		{ 11, YYAT_SHIFT, 16 },
		{ 115, YYAT_SHIFT, 75 },
		{ 106, YYAT_SHIFT, 73 },
		{ 9, YYAT_SHIFT, 13 },
		{ 103, YYAT_SHIFT, 73 },
		{ 104, YYAT_SHIFT, 75 },
		{ 2, YYAT_ACCEPT, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 114, YYAT_SHIFT, 75 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 75 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 106, YYAT_SHIFT, 75 },
		{ -1, YYAT_ERROR, 0 },
		{ 103, YYAT_SHIFT, 75 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 57, YYAT_SHIFT, 3 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 57, YYAT_SHIFT, 4 },
		{ -1, YYAT_ERROR, 0 },
		{ 165, YYAT_SHIFT, 76 },
		{ 165, YYAT_SHIFT, 77 },
		{ 165, YYAT_SHIFT, 78 },
		{ 165, YYAT_SHIFT, 79 },
		{ 165, YYAT_SHIFT, 80 },
		{ 165, YYAT_SHIFT, 81 },
		{ 57, YYAT_SHIFT, 5 },
		{ 96, YYAT_SHIFT, 76 },
		{ 96, YYAT_SHIFT, 77 },
		{ 96, YYAT_SHIFT, 78 },
		{ 96, YYAT_SHIFT, 79 },
		{ 96, YYAT_SHIFT, 80 },
		{ 96, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 6, YYAT_SHIFT, 9 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 132, YYAT_SHIFT, 76 },
		{ 132, YYAT_SHIFT, 77 },
		{ 132, YYAT_SHIFT, 78 },
		{ 132, YYAT_SHIFT, 79 },
		{ 132, YYAT_SHIFT, 80 },
		{ 132, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 76 },
		{ 107, YYAT_SHIFT, 77 },
		{ 107, YYAT_SHIFT, 78 },
		{ 107, YYAT_SHIFT, 79 },
		{ 107, YYAT_SHIFT, 80 },
		{ 107, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 172, YYAT_SHIFT, 28 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 153, YYAT_SHIFT, 51 },
		{ 153, YYAT_SHIFT, 34 },
		{ 172, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 172, YYAT_SHIFT, 29 },
		{ 172, YYAT_SHIFT, 30 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 172, YYAT_SHIFT, 31 },
		{ 172, YYAT_SHIFT, 32 },
		{ 172, YYAT_SHIFT, 33 },
		{ 110, YYAT_SHIFT, 77 },
		{ 110, YYAT_SHIFT, 78 },
		{ 110, YYAT_SHIFT, 79 },
		{ 110, YYAT_SHIFT, 80 },
		{ 110, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 78 },
		{ 111, YYAT_SHIFT, 79 },
		{ 111, YYAT_SHIFT, 80 },
		{ 111, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 80 },
		{ 113, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 112, YYAT_SHIFT, 80 },
		{ 112, YYAT_SHIFT, 81 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_REDUCE, 3 },
		{ -177, 1, YYAT_REDUCE, 1 },
		{ 187, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ -50, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 144, 1, YYAT_REDUCE, 9 },
		{ -42, 1, YYAT_REDUCE, 7 },
		{ -99, 1, YYAT_ERROR, 0 },
		{ 121, 1, YYAT_ERROR, 0 },
		{ 138, 1, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_DEFAULT, 98 },
		{ -116, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 98 },
		{ 133, 1, YYAT_REDUCE, 13 },
		{ 134, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 81, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 133, 1, YYAT_ERROR, 0 },
		{ 132, 1, YYAT_ERROR, 0 },
		{ 130, 1, YYAT_ERROR, 0 },
		{ 128, 1, YYAT_ERROR, 0 },
		{ 123, 1, YYAT_ERROR, 0 },
		{ 114, 1, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ 92, 1, YYAT_REDUCE, 54 },
		{ 91, 1, YYAT_ERROR, 0 },
		{ 56, 1, YYAT_REDUCE, 74 },
		{ 0, 0, YYAT_DEFAULT, 98 },
		{ 105, 1, YYAT_DEFAULT, 165 },
		{ -136, 1, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 53, 1, YYAT_REDUCE, 15 },
		{ -200, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 103, 1, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 100, 1, YYAT_DEFAULT, 165 },
		{ 75, 1, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ -58, 1, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 87, 1, YYAT_DEFAULT, 153 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 82, 1, YYAT_REDUCE, 49 },
		{ -45, 1, YYAT_REDUCE, 51 },
		{ 65, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ -175, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 77, 1, YYAT_DEFAULT, 153 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 76, 1, YYAT_DEFAULT, 165 },
		{ 71, 1, YYAT_DEFAULT, 165 },
		{ 52, 1, YYAT_DEFAULT, 129 },
		{ 51, 1, YYAT_DEFAULT, 140 },
		{ 50, 1, YYAT_DEFAULT, 129 },
		{ 66, 1, YYAT_DEFAULT, 165 },
		{ 59, 1, YYAT_DEFAULT, 165 },
		{ 30, 1, YYAT_REDUCE, 71 },
		{ 43, 1, YYAT_ERROR, 0 },
		{ -30, 1, YYAT_REDUCE, 77 },
		{ -10, 1, YYAT_DEFAULT, 39 },
		{ -212, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 129 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ -22, 1, YYAT_REDUCE, 59 },
		{ -32, 1, YYAT_REDUCE, 57 },
		{ 124, 1, YYAT_REDUCE, 55 },
		{ 92, 1, YYAT_REDUCE, 56 },
		{ -50, 1, YYAT_REDUCE, 58 },
		{ 122, 1, YYAT_REDUCE, 60 },
		{ -2, 1, YYAT_REDUCE, 53 },
		{ 115, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 68 },
		{ 26, 1, YYAT_REDUCE, 67 },
		{ 33, 1, YYAT_REDUCE, 66 },
		{ 61, 1, YYAT_REDUCE, 62 },
		{ 54, 1, YYAT_REDUCE, 65 },
		{ 95, 1, YYAT_REDUCE, 63 },
		{ 88, 1, YYAT_REDUCE, 64 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 36, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 33, 1, YYAT_DEFAULT, 153 },
		{ 8, 1, YYAT_DEFAULT, 140 },
		{ 7, 1, YYAT_DEFAULT, 129 },
		{ 24, 1, YYAT_DEFAULT, 153 },
		{ 2, 1, YYAT_DEFAULT, 140 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ -3, 1, YYAT_REDUCE, 72 },
		{ 13, 1, YYAT_DEFAULT, 153 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ -9, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 72 },
		{ -227, 1, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 7, 1, YYAT_DEFAULT, 165 },
		{ 6, 1, YYAT_DEFAULT, 153 },
		{ 1, 1, YYAT_DEFAULT, 153 },
		{ -22, 1, YYAT_DEFAULT, 39 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ -14, 1, YYAT_DEFAULT, 165 },
		{ -21, 1, YYAT_DEFAULT, 153 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ -22, 1, YYAT_DEFAULT, 165 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ -23, 1, YYAT_DEFAULT, 165 },
		{ -19, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ -38, 1, YYAT_DEFAULT, 165 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ -37, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ -4, 1, YYAT_DEFAULT, 57 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 34 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 84;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 172, 43 },
		{ 98, 65 },
		{ 172, 174 },
		{ 172, 36 },
		{ 172, 46 },
		{ 172, 44 },
		{ 172, 42 },
		{ 172, 41 },
		{ 57, 38 },
		{ 168, 173 },
		{ 172, 35 },
		{ 172, 39 },
		{ 1, 7 },
		{ 164, 171 },
		{ 98, 131 },
		{ 98, 64 },
		{ 57, 91 },
		{ 129, 96 },
		{ 1, 6 },
		{ 129, 145 },
		{ 57, 90 },
		{ 153, 52 },
		{ 153, 165 },
		{ 153, 37 },
		{ 48, 84 },
		{ 48, 21 },
		{ 48, 20 },
		{ 6, 12 },
		{ 163, 170 },
		{ 6, 11 },
		{ 16, 40 },
		{ 16, 45 },
		{ 14, 24 },
		{ 14, 10 },
		{ 0, 2 },
		{ 0, 1 },
		{ 161, 169 },
		{ 156, 167 },
		{ 155, 166 },
		{ 151, 162 },
		{ 149, 160 },
		{ 148, 159 },
		{ 146, 158 },
		{ 143, 157 },
		{ 141, 154 },
		{ 139, 152 },
		{ 138, 150 },
		{ 136, 147 },
		{ 123, 142 },
		{ 122, 140 },
		{ 120, 137 },
		{ 119, 135 },
		{ 118, 134 },
		{ 99, 132 },
		{ 91, 124 },
		{ 89, 121 },
		{ 85, 117 },
		{ 81, 115 },
		{ 80, 114 },
		{ 79, 113 },
		{ 78, 112 },
		{ 77, 111 },
		{ 76, 110 },
		{ 74, 108 },
		{ 73, 107 },
		{ 72, 106 },
		{ 71, 105 },
		{ 70, 104 },
		{ 69, 103 },
		{ 68, 102 },
		{ 67, 101 },
		{ 63, 97 },
		{ 60, 95 },
		{ 59, 93 },
		{ 58, 92 },
		{ 56, 88 },
		{ 55, 87 },
		{ 40, 83 },
		{ 38, 66 },
		{ 27, 54 },
		{ 26, 53 },
		{ 20, 47 },
		{ 13, 22 },
		{ 11, 17 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 33, -1 },
		{ 9, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 23, 14 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 73, -1 },
		{ 0, -1 },
		{ 75, 48 },
		{ 28, -1 },
		{ 0, -1 },
		{ 19, 172 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 76, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 59, 153 },
		{ 58, 153 },
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
		{ 60, 98 },
		{ 0, -1 },
		{ 65, 172 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 17, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 55, 153 },
		{ 54, 153 },
		{ -1, 153 },
		{ 53, 153 },
		{ 52, 153 },
		{ 49, 129 },
		{ 0, -1 },
		{ 0, -1 },
		{ 50, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 49, 153 },
		{ 48, 153 },
		{ 47, 153 },
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
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 33, 129 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 34, 153 },
		{ 0, -1 },
		{ 33, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -4, -1 },
		{ 32, 153 },
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
		{ 40, 172 },
		{ 39, 172 },
		{ 29, 153 },
		{ 0, -1 },
		{ 28, 153 },
		{ 27, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -4, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 35, 172 },
		{ 0, -1 },
		{ 25, 153 },
		{ 24, 153 },
		{ 0, -1 },
		{ 32, 172 },
		{ 0, -1 },
		{ 22, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 30, 172 },
		{ 0, -1 },
		{ 29, 172 },
		{ 28, 172 },
		{ 0, -1 },
		{ 27, 172 },
		{ 0, -1 },
		{ 1, -1 },
		{ 0, -1 },
		{ 26, 172 },
		{ 25, 172 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, 172 },
		{ 0, -1 },
		{ 16, 172 },
		{ 1, 172 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -3, 172 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -10, 57 },
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
#line 303 ".\\myparser.y"


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


