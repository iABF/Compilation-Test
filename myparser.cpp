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
* Time: 11:11:50
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
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 195 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).compoundstatementnode;
	
#line 607 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 197 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new FunctionStatement(string(yyattribute(1 - 4).symp->name), NULL);
#line 620 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 198 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new FunctionStatement(string(yyattribute(1 - 5).symp->name), yyattribute(3 - 5).expressionnode);
	
#line 634 "myparser.cpp"
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
#line 202 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).whileloopstatementnode = new WhileLoopStatementNode(yyattribute(3 - 5).expressionnode, yyattribute(5 - 5).statementnode);
	
#line 649 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 205 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 9).expressionnode, yyattribute(5 - 9).expressionnode, yyattribute(7 - 9).expressionnode, yyattribute(9 - 9).statementnode);
	
#line 664 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 207 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).statementnode, yyattribute(4 - 8).expressionnode, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 679 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 209 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).expressionnode, yyattribute(5 - 8).expressionnode, NULL, yyattribute(8 - 8).statementnode);
	
#line 694 "myparser.cpp"
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
#line 211 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).statementnode, yyattribute(4 - 7).expressionnode, NULL, yyattribute(7 - 7).statementnode);
	
#line 709 "myparser.cpp"
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
#line 213 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).expressionnode, NULL, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 724 "myparser.cpp"
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
#line 215 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).statementnode, NULL, yyattribute(5 - 7).expressionnode, yyattribute(7 - 7).statementnode);
	
#line 739 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 217 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, yyattribute(4 - 8).expressionnode, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 754 "myparser.cpp"
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
#line 219 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).expressionnode, NULL, NULL, yyattribute(7 - 7).statementnode);
	
#line 769 "myparser.cpp"
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
#line 221 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 6).statementnode, NULL, NULL, yyattribute(6 - 6).statementnode);
	
#line 784 "myparser.cpp"
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
#line 223 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, yyattribute(4 - 7).expressionnode, NULL, yyattribute(7 - 7).statementnode);
	
#line 799 "myparser.cpp"
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
#line 225 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, NULL, yyattribute(5 - 7).expressionnode, yyattribute(7 - 7).statementnode);
	
#line 814 "myparser.cpp"
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
#line 227 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, NULL, NULL, yyattribute(6 - 6).statementnode);
	
#line 829 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 230 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = new SelectionStatementNode(yyattribute(3 - 5).expressionnode, yyattribute(5 - 5).statementnode);
	
#line 844 "myparser.cpp"
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
#line 232 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = new SelectionStatementNode(yyattribute(3 - 7).expressionnode, yyattribute(5 - 7).statementnode, yyattribute(7 - 7).statementnode);
	
#line 859 "myparser.cpp"
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
#line 235 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new StatementNode(5);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).varnode);
	
#line 876 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 240 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 892 "myparser.cpp"
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
#line 243 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		yyattribute(1 - 3).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 909 "myparser.cpp"
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
#line 248 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 925 "myparser.cpp"
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
#line 251 ".\\myparser.y"

		// assert $1 is a VarNode, and $$ is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->addChildNode(yyattribute(3 - 3).expressionnode);
	
#line 942 "myparser.cpp"
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
#line 256 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).operatornode = new OperatorNode(1, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
	
#line 957 "myparser.cpp"
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
#line 259 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).operatornode;
#line 970 "myparser.cpp"
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
#line 260 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(2, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 983 "myparser.cpp"
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
#line 261 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(3, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 996 "myparser.cpp"
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
#line 262 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(4, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1009 "myparser.cpp"
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
#line 263 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(5, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1022 "myparser.cpp"
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
#line 264 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(6, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1035 "myparser.cpp"
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
#line 265 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("<", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1048 "myparser.cpp"
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
#line 266 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode(">", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1061 "myparser.cpp"
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
#line 267 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("==", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1074 "myparser.cpp"
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
#line 268 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("<=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1087 "myparser.cpp"
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
#line 269 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode(">=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1100 "myparser.cpp"
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
#line 270 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("!=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1113 "myparser.cpp"
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
#line 271 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new AndNode(yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1126 "myparser.cpp"
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
#line 272 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OrNode(yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1139 "myparser.cpp"
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
#line 273 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 3).expressionnode;
		for(int i = 1; i < yyattribute(3 - 3).dval; i++)(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(4, yyattribute(1 - 3).expressionnode, (*(YYSTYPE YYFAR*)yyvalptr).expressionnode);
	
#line 1155 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 277 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new UnaryNode(16, yyattribute(2 - 2).expressionnode);
#line 1168 "myparser.cpp"
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
#line 278 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(2 - 3).expressionnode;
#line 1181 "myparser.cpp"
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
#line 279 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new FunctionCallNode(string(yyattribute(1 - 3).symp->name), NULL);
#line 1194 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 280 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new FunctionCallNode(string(yyattribute(1 - 4).symp->name), yyattribute(3 - 4).expressionnode);
#line 1207 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 281 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new ConstNode(yyattribute(1 - 1).dval);
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
#line 282 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).expressionnode;
#line 1233 "myparser.cpp"
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
#line 283 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new VarNode(string(yyattribute(1 - 1).symp->name));
	
#line 1248 "myparser.cpp"
			}
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 285 ".\\myparser.y"

		if (yyattribute(1 - 4).expressionnode->nodeId == NodeId::varnode)(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new AccessNode((VarNode*)yyattribute(1 - 4).expressionnode, yyattribute(3 - 4).expressionnode, NULL);
		else {(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 4).expressionnode; ((AccessNode*)(*(YYSTYPE YYFAR*)yyvalptr).expressionnode)->index->addPeerNode(yyattribute(3 - 4).expressionnode);}
	
#line 1264 "myparser.cpp"
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
#line 289 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).expressionnode;
#line 1277 "myparser.cpp"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 290 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 3).expressionnode; yyattribute(1 - 3).expressionnode->addPeerNode(yyattribute(3 - 3).expressionnode);
#line 1290 "myparser.cpp"
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
		{ "ID", 291 },
		{ "NUMBER", 292 },
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
		"statement: code_block",
		"statement: ID \'(\' \')\' \';\'",
		"statement: ID \'(\' argument_list \')\' \';\'",
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
		{ 12, 1, 25 },
		{ 12, 4, 26 },
		{ 12, 5, 27 },
		{ 13, 5, 28 },
		{ 14, 9, 29 },
		{ 14, 8, 30 },
		{ 14, 8, 31 },
		{ 14, 7, 32 },
		{ 14, 8, 33 },
		{ 14, 7, 34 },
		{ 14, 8, 35 },
		{ 14, 7, 36 },
		{ 14, 6, 37 },
		{ 14, 7, 38 },
		{ 14, 7, 39 },
		{ 14, 6, 40 },
		{ 15, 5, 41 },
		{ 15, 7, 42 },
		{ 16, 3, 43 },
		{ 17, 1, 44 },
		{ 17, 3, 45 },
		{ 18, 1, 46 },
		{ 18, 3, 47 },
		{ 19, 3, 48 },
		{ 20, 1, 49 },
		{ 20, 3, 50 },
		{ 20, 3, 51 },
		{ 20, 3, 52 },
		{ 20, 3, 53 },
		{ 20, 3, 54 },
		{ 20, 3, 55 },
		{ 20, 3, 56 },
		{ 20, 3, 57 },
		{ 20, 3, 58 },
		{ 20, 3, 59 },
		{ 20, 3, 60 },
		{ 20, 3, 61 },
		{ 20, 3, 62 },
		{ 20, 3, 63 },
		{ 20, 2, 64 },
		{ 20, 3, 65 },
		{ 20, 3, 66 },
		{ 20, 4, 67 },
		{ 20, 1, 68 },
		{ 20, 1, 69 },
		{ 21, 1, 70 },
		{ 21, 4, 71 },
		{ 22, 1, 72 },
		{ 22, 3, 73 }
	};
	yyreduction = reduction;

	yytokenaction_size = 330;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 155, YYAT_SHIFT, 57 },
		{ 54, YYAT_SHIFT, 83 },
		{ 10, YYAT_SHIFT, 14 },
		{ 147, YYAT_SHIFT, 158 },
		{ 155, YYAT_SHIFT, 162 },
		{ 155, YYAT_SHIFT, 58 },
		{ 155, YYAT_SHIFT, 59 },
		{ 87, YYAT_SHIFT, 57 },
		{ 155, YYAT_SHIFT, 60 },
		{ 7, YYAT_SHIFT, 8 },
		{ 155, YYAT_SHIFT, 61 },
		{ 94, YYAT_SHIFT, 63 },
		{ 87, YYAT_SHIFT, 58 },
		{ 87, YYAT_SHIFT, 59 },
		{ 87, YYAT_SHIFT, 118 },
		{ 87, YYAT_SHIFT, 60 },
		{ 73, YYAT_SHIFT, 105 },
		{ 87, YYAT_SHIFT, 61 },
		{ 142, YYAT_SHIFT, 153 },
		{ 140, YYAT_SHIFT, 151 },
		{ 133, YYAT_SHIFT, 146 },
		{ 143, YYAT_SHIFT, 26 },
		{ 143, YYAT_SHIFT, 154 },
		{ 155, YYAT_SHIFT, 62 },
		{ 155, YYAT_SHIFT, 63 },
		{ 155, YYAT_SHIFT, 64 },
		{ 143, YYAT_SHIFT, 27 },
		{ 132, YYAT_SHIFT, 145 },
		{ 121, YYAT_SHIFT, 57 },
		{ 91, YYAT_SHIFT, 63 },
		{ 87, YYAT_SHIFT, 62 },
		{ 87, YYAT_SHIFT, 63 },
		{ 87, YYAT_SHIFT, 64 },
		{ 121, YYAT_SHIFT, 58 },
		{ 121, YYAT_SHIFT, 59 },
		{ 96, YYAT_SHIFT, 57 },
		{ 121, YYAT_SHIFT, 60 },
		{ 130, YYAT_SHIFT, 143 },
		{ 121, YYAT_SHIFT, 61 },
		{ 90, YYAT_SHIFT, 63 },
		{ 96, YYAT_SHIFT, 58 },
		{ 96, YYAT_SHIFT, 59 },
		{ 129, YYAT_SHIFT, 141 },
		{ 96, YYAT_SHIFT, 60 },
		{ 94, YYAT_SHIFT, 65 },
		{ 96, YYAT_SHIFT, 61 },
		{ 73, YYAT_SHIFT, 15 },
		{ 128, YYAT_SHIFT, 139 },
		{ 127, YYAT_SHIFT, 138 },
		{ 10, YYAT_SHIFT, 15 },
		{ 124, YYAT_SHIFT, 136 },
		{ 121, YYAT_SHIFT, 62 },
		{ 121, YYAT_SHIFT, 63 },
		{ 121, YYAT_SHIFT, 64 },
		{ 162, YYAT_ERROR, 0 },
		{ 119, YYAT_SHIFT, 135 },
		{ 118, YYAT_ERROR, 0 },
		{ 155, YYAT_SHIFT, 65 },
		{ 96, YYAT_SHIFT, 62 },
		{ 96, YYAT_SHIFT, 63 },
		{ 96, YYAT_SHIFT, 64 },
		{ 116, YYAT_SHIFT, 133 },
		{ 91, YYAT_SHIFT, 65 },
		{ 99, YYAT_SHIFT, 57 },
		{ 87, YYAT_SHIFT, 65 },
		{ 115, YYAT_SHIFT, 131 },
		{ 114, YYAT_SHIFT, 129 },
		{ 113, YYAT_SHIFT, 128 },
		{ 99, YYAT_SHIFT, 58 },
		{ 99, YYAT_SHIFT, 59 },
		{ 100, YYAT_SHIFT, 57 },
		{ 99, YYAT_SHIFT, 60 },
		{ 90, YYAT_SHIFT, 65 },
		{ 99, YYAT_SHIFT, 61 },
		{ 112, YYAT_SHIFT, 126 },
		{ 100, YYAT_SHIFT, 58 },
		{ 100, YYAT_SHIFT, 59 },
		{ 109, YYAT_SHIFT, 123 },
		{ 100, YYAT_SHIFT, 60 },
		{ 46, YYAT_SHIFT, 3 },
		{ 100, YYAT_SHIFT, 61 },
		{ 106, YYAT_SHIFT, 23 },
		{ 46, YYAT_SHIFT, 4 },
		{ 89, YYAT_SHIFT, 120 },
		{ 88, YYAT_SHIFT, 119 },
		{ 121, YYAT_SHIFT, 65 },
		{ 99, YYAT_SHIFT, 62 },
		{ 99, YYAT_SHIFT, 63 },
		{ 99, YYAT_SHIFT, 64 },
		{ 86, YYAT_SHIFT, 117 },
		{ 46, YYAT_SHIFT, 5 },
		{ 102, YYAT_SHIFT, 57 },
		{ 96, YYAT_SHIFT, 65 },
		{ 100, YYAT_SHIFT, 62 },
		{ 100, YYAT_SHIFT, 63 },
		{ 100, YYAT_SHIFT, 64 },
		{ 102, YYAT_SHIFT, 58 },
		{ 102, YYAT_SHIFT, 59 },
		{ 101, YYAT_SHIFT, 57 },
		{ 102, YYAT_SHIFT, 60 },
		{ 85, YYAT_SHIFT, 115 },
		{ 102, YYAT_SHIFT, 61 },
		{ 2, YYAT_SHIFT, 3 },
		{ 101, YYAT_SHIFT, 58 },
		{ 101, YYAT_SHIFT, 59 },
		{ 2, YYAT_SHIFT, 4 },
		{ 101, YYAT_SHIFT, 60 },
		{ 84, YYAT_SHIFT, 114 },
		{ 101, YYAT_SHIFT, 61 },
		{ 83, YYAT_SHIFT, 112 },
		{ 82, YYAT_SHIFT, 111 },
		{ 81, YYAT_SHIFT, 110 },
		{ 79, YYAT_SHIFT, 108 },
		{ 2, YYAT_SHIFT, 5 },
		{ 102, YYAT_SHIFT, 62 },
		{ 102, YYAT_SHIFT, 63 },
		{ 102, YYAT_SHIFT, 64 },
		{ 75, YYAT_SHIFT, 107 },
		{ 74, YYAT_SHIFT, 106 },
		{ 65, YYAT_SHIFT, 98 },
		{ 99, YYAT_SHIFT, 65 },
		{ 101, YYAT_SHIFT, 62 },
		{ 101, YYAT_SHIFT, 63 },
		{ 101, YYAT_SHIFT, 64 },
		{ 55, YYAT_SHIFT, 86 },
		{ 104, YYAT_SHIFT, 57 },
		{ 51, YYAT_SHIFT, 63 },
		{ 100, YYAT_SHIFT, 65 },
		{ 49, YYAT_SHIFT, 80 },
		{ 93, YYAT_SHIFT, 57 },
		{ 104, YYAT_SHIFT, 58 },
		{ 104, YYAT_SHIFT, 59 },
		{ 103, YYAT_SHIFT, 57 },
		{ 104, YYAT_SHIFT, 60 },
		{ 93, YYAT_SHIFT, 58 },
		{ 104, YYAT_SHIFT, 61 },
		{ 48, YYAT_SHIFT, 79 },
		{ 103, YYAT_SHIFT, 58 },
		{ 103, YYAT_SHIFT, 59 },
		{ 93, YYAT_SHIFT, 61 },
		{ 103, YYAT_SHIFT, 60 },
		{ 44, YYAT_SHIFT, 15 },
		{ 103, YYAT_SHIFT, 61 },
		{ 38, YYAT_SHIFT, 76 },
		{ 36, YYAT_SHIFT, 72 },
		{ 35, YYAT_ERROR, 0 },
		{ 33, YYAT_SHIFT, 56 },
		{ 31, YYAT_SHIFT, 55 },
		{ 102, YYAT_SHIFT, 65 },
		{ 104, YYAT_SHIFT, 63 },
		{ 30, YYAT_SHIFT, 54 },
		{ 29, YYAT_SHIFT, 53 },
		{ 97, YYAT_SHIFT, 57 },
		{ 93, YYAT_SHIFT, 63 },
		{ 28, YYAT_SHIFT, 52 },
		{ 101, YYAT_SHIFT, 65 },
		{ 103, YYAT_SHIFT, 63 },
		{ 97, YYAT_SHIFT, 58 },
		{ 97, YYAT_SHIFT, 59 },
		{ 95, YYAT_SHIFT, 57 },
		{ 97, YYAT_SHIFT, 60 },
		{ 92, YYAT_SHIFT, 57 },
		{ 97, YYAT_SHIFT, 61 },
		{ 25, YYAT_SHIFT, 47 },
		{ 95, YYAT_SHIFT, 58 },
		{ 95, YYAT_SHIFT, 59 },
		{ 92, YYAT_SHIFT, 58 },
		{ 95, YYAT_SHIFT, 60 },
		{ 22, YYAT_SHIFT, 46 },
		{ 95, YYAT_SHIFT, 61 },
		{ 21, YYAT_SHIFT, 45 },
		{ 92, YYAT_SHIFT, 61 },
		{ 15, YYAT_SHIFT, 25 },
		{ 13, YYAT_SHIFT, 19 },
		{ 12, YYAT_SHIFT, 17 },
		{ 11, YYAT_SHIFT, 16 },
		{ 97, YYAT_SHIFT, 63 },
		{ 9, YYAT_SHIFT, 13 },
		{ 1, YYAT_ACCEPT, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 65 },
		{ 95, YYAT_SHIFT, 63 },
		{ -1, YYAT_ERROR, 0 },
		{ 92, YYAT_SHIFT, 63 },
		{ 93, YYAT_SHIFT, 65 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 103, YYAT_SHIFT, 65 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 97, YYAT_SHIFT, 65 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 95, YYAT_SHIFT, 65 },
		{ -1, YYAT_ERROR, 0 },
		{ 92, YYAT_SHIFT, 65 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 54, YYAT_SHIFT, 3 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 54, YYAT_SHIFT, 4 },
		{ -1, YYAT_ERROR, 0 },
		{ 155, YYAT_SHIFT, 66 },
		{ 155, YYAT_SHIFT, 67 },
		{ 155, YYAT_SHIFT, 68 },
		{ 155, YYAT_SHIFT, 69 },
		{ 155, YYAT_SHIFT, 70 },
		{ 155, YYAT_SHIFT, 71 },
		{ 54, YYAT_SHIFT, 5 },
		{ 87, YYAT_SHIFT, 66 },
		{ 87, YYAT_SHIFT, 67 },
		{ 87, YYAT_SHIFT, 68 },
		{ 87, YYAT_SHIFT, 69 },
		{ 87, YYAT_SHIFT, 70 },
		{ 87, YYAT_SHIFT, 71 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 7, YYAT_SHIFT, 9 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 121, YYAT_SHIFT, 66 },
		{ 121, YYAT_SHIFT, 67 },
		{ 121, YYAT_SHIFT, 68 },
		{ 121, YYAT_SHIFT, 69 },
		{ 121, YYAT_SHIFT, 70 },
		{ 121, YYAT_SHIFT, 71 },
		{ -1, YYAT_ERROR, 0 },
		{ 96, YYAT_SHIFT, 66 },
		{ 96, YYAT_SHIFT, 67 },
		{ 96, YYAT_SHIFT, 68 },
		{ 96, YYAT_SHIFT, 69 },
		{ 96, YYAT_SHIFT, 70 },
		{ 96, YYAT_SHIFT, 71 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 162, YYAT_SHIFT, 28 },
		{ -1, YYAT_ERROR, 0 },
		{ 143, YYAT_SHIFT, 48 },
		{ 143, YYAT_SHIFT, 32 },
		{ -1, YYAT_ERROR, 0 },
		{ 162, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 162, YYAT_SHIFT, 29 },
		{ 162, YYAT_SHIFT, 30 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 162, YYAT_SHIFT, 31 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 67 },
		{ 99, YYAT_SHIFT, 68 },
		{ 99, YYAT_SHIFT, 69 },
		{ 99, YYAT_SHIFT, 70 },
		{ 99, YYAT_SHIFT, 71 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 100, YYAT_SHIFT, 68 },
		{ 100, YYAT_SHIFT, 69 },
		{ 100, YYAT_SHIFT, 70 },
		{ 100, YYAT_SHIFT, 71 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 102, YYAT_SHIFT, 70 },
		{ 102, YYAT_SHIFT, 71 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 101, YYAT_SHIFT, 70 },
		{ 101, YYAT_SHIFT, 71 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 178, 1, YYAT_ERROR, 0 },
		{ -177, 1, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -50, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 137, 1, YYAT_REDUCE, 9 },
		{ -42, 1, YYAT_REDUCE, 7 },
		{ 116, 1, YYAT_ERROR, 0 },
		{ -106, 1, YYAT_ERROR, 0 },
		{ 132, 1, YYAT_DEFAULT, 46 },
		{ 0, 0, YYAT_DEFAULT, 106 },
		{ -120, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_DEFAULT, 106 },
		{ 129, 1, YYAT_ERROR, 0 },
		{ 124, 1, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 70, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 114, 1, YYAT_ERROR, 0 },
		{ 111, 1, YYAT_ERROR, 0 },
		{ 110, 1, YYAT_ERROR, 0 },
		{ 107, 1, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 55, 1, YYAT_REDUCE, 71 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 104, 1, YYAT_DEFAULT, 155 },
		{ 85, 1, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_DEFAULT, 106 },
		{ -138, 1, YYAT_DEFAULT, 162 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 50, 1, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -200, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 96, 1, YYAT_REDUCE, 72 },
		{ 87, 1, YYAT_DEFAULT, 155 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 65, 1, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ -58, 1, YYAT_DEFAULT, 118 },
		{ 83, 1, YYAT_DEFAULT, 143 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ -173, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ -45, 1, YYAT_REDUCE, 48 },
		{ 74, 1, YYAT_REDUCE, 46 },
		{ 58, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 71, 1, YYAT_DEFAULT, 143 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ 70, 1, YYAT_DEFAULT, 155 },
		{ 69, 1, YYAT_DEFAULT, 155 },
		{ 50, 1, YYAT_DEFAULT, 118 },
		{ 48, 1, YYAT_DEFAULT, 130 },
		{ 41, 1, YYAT_DEFAULT, 118 },
		{ 30, 1, YYAT_REDUCE, 68 },
		{ -30, 1, YYAT_REDUCE, 74 },
		{ 43, 1, YYAT_ERROR, 0 },
		{ -10, 1, YYAT_DEFAULT, 35 },
		{ -22, 1, YYAT_REDUCE, 56 },
		{ -32, 1, YYAT_REDUCE, 54 },
		{ 124, 1, YYAT_REDUCE, 52 },
		{ 92, 1, YYAT_REDUCE, 53 },
		{ -50, 1, YYAT_REDUCE, 55 },
		{ 122, 1, YYAT_REDUCE, 57 },
		{ -2, 1, YYAT_REDUCE, 50 },
		{ 115, 1, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 26, 1, YYAT_REDUCE, 64 },
		{ 33, 1, YYAT_REDUCE, 63 },
		{ 61, 1, YYAT_REDUCE, 59 },
		{ 54, 1, YYAT_REDUCE, 62 },
		{ 95, 1, YYAT_REDUCE, 60 },
		{ 88, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ -210, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 68 },
		{ 36, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 33, 1, YYAT_DEFAULT, 143 },
		{ 8, 1, YYAT_DEFAULT, 130 },
		{ 7, 1, YYAT_DEFAULT, 118 },
		{ 24, 1, YYAT_DEFAULT, 143 },
		{ 2, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 15, 1, YYAT_DEFAULT, 143 },
		{ -4, 1, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ -9, 1, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 69 },
		{ -227, 1, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 7, 1, YYAT_DEFAULT, 155 },
		{ 6, 1, YYAT_DEFAULT, 143 },
		{ 1, 1, YYAT_DEFAULT, 143 },
		{ -22, 1, YYAT_DEFAULT, 35 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ -14, 1, YYAT_DEFAULT, 155 },
		{ -21, 1, YYAT_DEFAULT, 143 },
		{ 0, 0, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ -22, 1, YYAT_DEFAULT, 155 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ -23, 1, YYAT_DEFAULT, 155 },
		{ -19, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ -38, 1, YYAT_DEFAULT, 155 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ -37, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_DEFAULT, 162 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ -5, 1, YYAT_DEFAULT, 54 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 31 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 81;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 162, 39 },
		{ 106, 73 },
		{ 162, 164 },
		{ 162, 41 },
		{ 162, 42 },
		{ 162, 34 },
		{ 162, 43 },
		{ 158, 163 },
		{ 54, 37 },
		{ 162, 36 },
		{ 162, 35 },
		{ 2, 6 },
		{ 154, 161 },
		{ 106, 122 },
		{ 106, 74 },
		{ 54, 85 },
		{ 118, 87 },
		{ 2, 7 },
		{ 118, 134 },
		{ 54, 84 },
		{ 143, 50 },
		{ 143, 155 },
		{ 143, 33 },
		{ 46, 78 },
		{ 46, 22 },
		{ 46, 20 },
		{ 7, 11 },
		{ 153, 160 },
		{ 7, 12 },
		{ 17, 38 },
		{ 17, 40 },
		{ 14, 24 },
		{ 14, 10 },
		{ 0, 1 },
		{ 0, 2 },
		{ 151, 159 },
		{ 146, 157 },
		{ 145, 156 },
		{ 141, 152 },
		{ 139, 150 },
		{ 138, 149 },
		{ 136, 148 },
		{ 133, 147 },
		{ 131, 144 },
		{ 129, 142 },
		{ 128, 140 },
		{ 126, 137 },
		{ 115, 132 },
		{ 114, 130 },
		{ 112, 127 },
		{ 111, 125 },
		{ 110, 124 },
		{ 105, 121 },
		{ 85, 116 },
		{ 83, 113 },
		{ 79, 109 },
		{ 71, 104 },
		{ 70, 103 },
		{ 69, 102 },
		{ 68, 101 },
		{ 67, 100 },
		{ 66, 99 },
		{ 64, 97 },
		{ 63, 96 },
		{ 62, 95 },
		{ 61, 94 },
		{ 60, 93 },
		{ 59, 92 },
		{ 58, 91 },
		{ 57, 90 },
		{ 56, 89 },
		{ 55, 88 },
		{ 53, 82 },
		{ 52, 81 },
		{ 38, 77 },
		{ 37, 75 },
		{ 27, 51 },
		{ 26, 49 },
		{ 20, 44 },
		{ 13, 21 },
		{ 12, 18 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 32, -1 },
		{ 0, -1 },
		{ 8, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 14 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 70, -1 },
		{ 72, 46 },
		{ 27, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, 162 },
		{ 0, -1 },
		{ 0, -1 },
		{ 73, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 57, 143 },
		{ 56, 143 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 58, 106 },
		{ 62, 162 },
		{ 0, -1 },
		{ 0, -1 },
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
		{ 53, 143 },
		{ 52, 143 },
		{ -1, 143 },
		{ 49, 118 },
		{ 50, 143 },
		{ 49, 143 },
		{ 48, 143 },
		{ 47, 143 },
		{ 46, 143 },
		{ 45, 143 },
		{ 44, 143 },
		{ 43, 143 },
		{ 42, 143 },
		{ 0, -1 },
		{ 41, 143 },
		{ 40, 143 },
		{ 39, 143 },
		{ 38, 143 },
		{ 37, 143 },
		{ 36, 143 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 33, 118 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 34, 143 },
		{ 0, -1 },
		{ 33, 143 },
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
		{ 32, 143 },
		{ -4, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 39, 162 },
		{ 38, 162 },
		{ 29, 143 },
		{ 0, -1 },
		{ 28, 143 },
		{ 27, 143 },
		{ 0, -1 },
		{ 0, -1 },
		{ -4, 143 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 34, 162 },
		{ 0, -1 },
		{ 25, 143 },
		{ 24, 143 },
		{ 0, -1 },
		{ 31, 162 },
		{ 0, -1 },
		{ 22, 143 },
		{ 0, -1 },
		{ 0, -1 },
		{ 29, 162 },
		{ 0, -1 },
		{ 28, 162 },
		{ 27, 162 },
		{ 0, -1 },
		{ 26, 162 },
		{ 0, -1 },
		{ 1, -1 },
		{ 0, -1 },
		{ 25, 162 },
		{ 24, 162 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 23, 162 },
		{ 0, -1 },
		{ 15, 162 },
		{ 0, 162 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -5, 162 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -10, 54 },
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
#line 293 ".\\myparser.y"


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


