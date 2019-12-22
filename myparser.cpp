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
* Date: 12/22/19
* Time: 22:48:29
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
	InterCodeGenerator *generator = new InterCodeGenerator(root);
	int funccount = 1;

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
#line 97 ".\\myparser.y"

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
#line 101 ".\\myparser.y"

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
	
#line 237 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#line 118 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = NULL;
	
#line 247 "myparser.cpp"
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 122 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = new TopLevelDefinitionNode();
		(*(YYSTYPE YYFAR*)yyvalptr).node->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).varnode);
		//$$->print();
	
#line 264 "myparser.cpp"
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
#line 127 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).node = new TopLevelDefinitionNode();
		(*(YYSTYPE YYFAR*)yyvalptr).node->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).functionnode);
		yyattribute(2 - 3).functionnode->addPeerNode(yyattribute(3 - 3).compoundstatementnode);
		//$$->print();
	
#line 283 "myparser.cpp"
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
#line 135 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
#line 296 "myparser.cpp"
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
#line 136 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
#line 312 "myparser.cpp"
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
#line 140 ".\\myparser.y"

		VarNode *cur = new VarNode(string(yyattribute(1 - 1).symp->name));
		cur->nodeType = 2;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = cur;
	
#line 329 "myparser.cpp"
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
#line 144 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 4).varnode;
		ArrayNode *curtyp = new ArrayNode(yyattribute(3 - 4).dval);
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->setType(curtyp);
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->nodeType = 3;
	
#line 347 "myparser.cpp"
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
#line 150 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = new FunctionNode(string(yyattribute(1 - 3).symp->name));
	
#line 362 "myparser.cpp"
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
#line 152 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).functionnode = new FunctionNode(string(yyattribute(1 - 4).symp->name));
		(*(YYSTYPE YYFAR*)yyvalptr).functionnode->setParam(yyattribute(3 - 4).paramnode);
	
#line 378 "myparser.cpp"
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
#line 156 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 1).paramnode;
#line 391 "myparser.cpp"
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
#line 157 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = yyattribute(1 - 3).paramnode;
		yyattribute(1 - 3).paramnode->addPeerNode(yyattribute(3 - 3).paramnode);
	
#line 407 "myparser.cpp"
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
#line 161 ".\\myparser.y"

		// assert $1 is a TypeNode, $2 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).paramnode = new ParamNode(yyattribute(1 - 2).typenode, yyattribute(2 - 2).varnode);
	
#line 423 "myparser.cpp"
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
#line 165 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).typenode = new TypeNode("bool");
	
#line 438 "myparser.cpp"
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
#line 167 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).typenode = new TypeNode("int");
	
#line 453 "myparser.cpp"
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
#line 169 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).typenode = new TypeNode("void");
	
#line 468 "myparser.cpp"
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
#line 172 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).compoundstatementnode = new CompoundStatementNode();
		(*(YYSTYPE YYFAR*)yyvalptr).compoundstatementnode->addChildNode(yyattribute(2 - 3).statementnode);
	
#line 484 "myparser.cpp"
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
#line 176 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
#line 497 "myparser.cpp"
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
#line 177 ".\\myparser.y"

		yyattribute(1 - 2).statementnode->addPeerNode(yyattribute(2 - 2).statementnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 513 "myparser.cpp"
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
#line 181 ".\\myparser.y"

		ExpressionNode* lvalue = yyattribute(1 - 2).operatornode->left;
		if(lvalue->nodeId == NodeId::varnode)(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new AssignNode((VarNode*)lvalue, yyattribute(1 - 2).operatornode->right);
		else if(lvalue->nodeId == NodeId::accessnode)(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new AssignArrayNode((AccessNode*)lvalue, yyattribute(1 - 2).operatornode->right);
		else yyerror("wrong left value! UniqueID=162");
	
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
#line 186 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).whileloopstatementnode;
	
#line 546 "myparser.cpp"
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
#line 188 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).forloopstatementnode;
	
#line 561 "myparser.cpp"
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
#line 190 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).selectionstatementnode;
	
#line 576 "myparser.cpp"
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
#line 192 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).statementnode;
	
#line 591 "myparser.cpp"
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
#line 194 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 2).statementnode;
	
#line 606 "myparser.cpp"
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
#line 196 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = yyattribute(1 - 1).compoundstatementnode;
	
#line 621 "myparser.cpp"
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
#line 198 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new FunctionStatement(string(yyattribute(1 - 4).symp->name), NULL);
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
#line 199 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new FunctionStatement(string(yyattribute(1 - 5).symp->name), yyattribute(3 - 5).expressionnode);
	
#line 648 "myparser.cpp"
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
#line 201 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).expressionnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 665 "myparser.cpp"
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
#line 205 ".\\myparser.y"

		StatementNode *cur = new StatementNode(6);
		cur->addChildNode(yyattribute(3 - 4).expressionnode);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = cur;
	
#line 682 "myparser.cpp"
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
#line 211 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).whileloopstatementnode = new WhileLoopStatementNode(yyattribute(3 - 5).expressionnode, yyattribute(5 - 5).statementnode);
	
#line 697 "myparser.cpp"
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
#line 214 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 9).expressionnode, yyattribute(5 - 9).expressionnode, yyattribute(7 - 9).expressionnode, yyattribute(9 - 9).statementnode);
	
#line 712 "myparser.cpp"
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
#line 216 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).statementnode, yyattribute(4 - 8).expressionnode, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 727 "myparser.cpp"
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
#line 218 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).expressionnode, yyattribute(5 - 8).expressionnode, NULL, yyattribute(8 - 8).statementnode);
	
#line 742 "myparser.cpp"
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
#line 220 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).statementnode, yyattribute(4 - 7).expressionnode, NULL, yyattribute(7 - 7).statementnode);
	
#line 757 "myparser.cpp"
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
#line 222 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 8).expressionnode, NULL, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 772 "myparser.cpp"
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
#line 224 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).statementnode, NULL, yyattribute(5 - 7).expressionnode, yyattribute(7 - 7).statementnode);
	
#line 787 "myparser.cpp"
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
#line 226 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, yyattribute(4 - 8).expressionnode, yyattribute(6 - 8).expressionnode, yyattribute(8 - 8).statementnode);
	
#line 802 "myparser.cpp"
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
#line 228 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 7).expressionnode, NULL, NULL, yyattribute(7 - 7).statementnode);
	
#line 817 "myparser.cpp"
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
#line 230 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(yyattribute(3 - 6).statementnode, NULL, NULL, yyattribute(6 - 6).statementnode);
	
#line 832 "myparser.cpp"
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
#line 232 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, yyattribute(4 - 7).expressionnode, NULL, yyattribute(7 - 7).statementnode);
	
#line 847 "myparser.cpp"
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
#line 234 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, NULL, yyattribute(5 - 7).expressionnode, yyattribute(7 - 7).statementnode);
	
#line 862 "myparser.cpp"
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
#line 236 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).forloopstatementnode = new ForLoopStatementNode(NULL, NULL, NULL, yyattribute(6 - 6).statementnode);
	
#line 877 "myparser.cpp"
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
#line 239 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = new SelectionStatementNode(yyattribute(3 - 5).expressionnode, yyattribute(5 - 5).statementnode);
	
#line 892 "myparser.cpp"
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
#line 241 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).selectionstatementnode = new SelectionStatementNode(yyattribute(3 - 7).expressionnode, yyattribute(5 - 7).statementnode, yyattribute(7 - 7).statementnode);
	
#line 907 "myparser.cpp"
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
#line 244 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).statementnode = new StatementNode(5);
		(*(YYSTYPE YYFAR*)yyvalptr).statementnode->addChildNode(yyattribute(1 - 3).typenode);
		yyattribute(1 - 3).typenode->addPeerNode(yyattribute(2 - 3).varnode);
	
#line 924 "myparser.cpp"
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
#line 249 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 940 "myparser.cpp"
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
#line 252 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		yyattribute(1 - 3).varnode->addPeerNode(yyattribute(3 - 3).varnode);
	
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
#line 257 ".\\myparser.y"

		// assert $1 is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 1).varnode;
	
#line 973 "myparser.cpp"
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

		// assert $1 is a VarNode, and $$ is a VarNode
		(*(YYSTYPE YYFAR*)yyvalptr).varnode = yyattribute(1 - 3).varnode;
		(*(YYSTYPE YYFAR*)yyvalptr).varnode->addChildNode(yyattribute(3 - 3).expressionnode);
	
#line 990 "myparser.cpp"
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
#line 265 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).operatornode = new OperatorNode(1, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
	
#line 1005 "myparser.cpp"
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
#line 268 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).operatornode;
#line 1018 "myparser.cpp"
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
#line 269 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(2, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1031 "myparser.cpp"
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
#line 270 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(3, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1044 "myparser.cpp"
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
#line 271 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(4, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1057 "myparser.cpp"
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
#line 272 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(5, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1070 "myparser.cpp"
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
#line 273 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(6, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1083 "myparser.cpp"
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
#line 274 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("<", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1096 "myparser.cpp"
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
#line 275 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode(">", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1109 "myparser.cpp"
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
#line 276 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("==", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1122 "myparser.cpp"
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
#line 277 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("<=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1135 "myparser.cpp"
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
#line 278 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode(">=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1148 "myparser.cpp"
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
#line 279 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new RelNode("!=", yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1161 "myparser.cpp"
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
#line 280 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new AndNode(yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1174 "myparser.cpp"
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
#line 281 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OrNode(yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1187 "myparser.cpp"
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
#line 282 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new OperatorNode(15, yyattribute(1 - 3).expressionnode, yyattribute(3 - 3).expressionnode);
#line 1200 "myparser.cpp"
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
#line 283 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new UnaryNode(16, yyattribute(2 - 2).expressionnode);
#line 1213 "myparser.cpp"
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
#line 284 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(2 - 3).expressionnode;
#line 1226 "myparser.cpp"
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
#line 285 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new FunctionCallNode(string(yyattribute(1 - 3).symp->name), NULL);
#line 1239 "myparser.cpp"
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
#line 286 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new FunctionCallNode(string(yyattribute(1 - 4).symp->name), yyattribute(3 - 4).expressionnode);
#line 1252 "myparser.cpp"
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
#line 287 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new ConstNode(yyattribute(1 - 1).dval);
#line 1265 "myparser.cpp"
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
#line 288 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).expressionnode;
#line 1278 "myparser.cpp"
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
#line 289 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new VarNode(string(yyattribute(1 - 1).symp->name));
	
#line 1293 "myparser.cpp"
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
#line 291 ".\\myparser.y"

		if (yyattribute(1 - 4).expressionnode->nodeId == NodeId::varnode)(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = new AccessNode((VarNode*)yyattribute(1 - 4).expressionnode, yyattribute(3 - 4).expressionnode, NULL);
		else {
			(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 4).expressionnode;
			((AccessNode*)(*(YYSTYPE YYFAR*)yyvalptr).expressionnode)->index->addPeerNode(yyattribute(3 - 4).expressionnode);
		}
	
#line 1312 "myparser.cpp"
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
#line 298 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 1).expressionnode;
#line 1325 "myparser.cpp"
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
#line 299 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr).expressionnode = yyattribute(1 - 3).expressionnode; yyattribute(1 - 3).expressionnode->addPeerNode(yyattribute(3 - 3).expressionnode);
#line 1338 "myparser.cpp"
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
		{ 168, YYAT_SHIFT, 68 },
		{ 57, YYAT_SHIFT, 89 },
		{ 11, YYAT_SHIFT, 15 },
		{ 156, YYAT_SHIFT, 166 },
		{ 168, YYAT_SHIFT, 173 },
		{ 168, YYAT_SHIFT, 69 },
		{ 168, YYAT_SHIFT, 70 },
		{ 95, YYAT_SHIFT, 68 },
		{ 168, YYAT_SHIFT, 71 },
		{ 7, YYAT_SHIFT, 8 },
		{ 168, YYAT_SHIFT, 72 },
		{ 108, YYAT_SHIFT, 74 },
		{ 95, YYAT_SHIFT, 69 },
		{ 95, YYAT_SHIFT, 70 },
		{ 95, YYAT_SHIFT, 128 },
		{ 95, YYAT_SHIFT, 71 },
		{ 47, YYAT_SHIFT, 3 },
		{ 95, YYAT_SHIFT, 72 },
		{ 61, YYAT_SHIFT, 97 },
		{ 47, YYAT_SHIFT, 4 },
		{ 154, YYAT_SHIFT, 164 },
		{ 157, YYAT_SHIFT, 26 },
		{ 157, YYAT_SHIFT, 167 },
		{ 168, YYAT_SHIFT, 73 },
		{ 168, YYAT_SHIFT, 74 },
		{ 168, YYAT_SHIFT, 75 },
		{ 157, YYAT_SHIFT, 27 },
		{ 47, YYAT_SHIFT, 5 },
		{ 130, YYAT_SHIFT, 68 },
		{ 104, YYAT_SHIFT, 74 },
		{ 95, YYAT_SHIFT, 73 },
		{ 95, YYAT_SHIFT, 74 },
		{ 95, YYAT_SHIFT, 75 },
		{ 130, YYAT_SHIFT, 69 },
		{ 130, YYAT_SHIFT, 70 },
		{ 106, YYAT_SHIFT, 68 },
		{ 130, YYAT_SHIFT, 71 },
		{ 150, YYAT_SHIFT, 161 },
		{ 130, YYAT_SHIFT, 72 },
		{ 101, YYAT_SHIFT, 74 },
		{ 106, YYAT_SHIFT, 69 },
		{ 106, YYAT_SHIFT, 70 },
		{ 143, YYAT_SHIFT, 157 },
		{ 106, YYAT_SHIFT, 71 },
		{ 108, YYAT_SHIFT, 76 },
		{ 106, YYAT_SHIFT, 72 },
		{ 100, YYAT_SHIFT, 74 },
		{ 142, YYAT_SHIFT, 155 },
		{ 61, YYAT_SHIFT, 16 },
		{ 11, YYAT_SHIFT, 16 },
		{ 141, YYAT_SHIFT, 153 },
		{ 130, YYAT_SHIFT, 73 },
		{ 130, YYAT_SHIFT, 74 },
		{ 130, YYAT_SHIFT, 75 },
		{ 140, YYAT_SHIFT, 152 },
		{ 173, YYAT_ERROR, 0 },
		{ 138, YYAT_SHIFT, 149 },
		{ 168, YYAT_SHIFT, 76 },
		{ 106, YYAT_SHIFT, 73 },
		{ 106, YYAT_SHIFT, 74 },
		{ 106, YYAT_SHIFT, 75 },
		{ 137, YYAT_SHIFT, 148 },
		{ 104, YYAT_SHIFT, 76 },
		{ 109, YYAT_SHIFT, 68 },
		{ 95, YYAT_SHIFT, 76 },
		{ 134, YYAT_SHIFT, 146 },
		{ 129, YYAT_SHIFT, 145 },
		{ 128, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 69 },
		{ 109, YYAT_SHIFT, 70 },
		{ 110, YYAT_SHIFT, 68 },
		{ 109, YYAT_SHIFT, 71 },
		{ 101, YYAT_SHIFT, 76 },
		{ 109, YYAT_SHIFT, 72 },
		{ 124, YYAT_SHIFT, 142 },
		{ 110, YYAT_SHIFT, 69 },
		{ 110, YYAT_SHIFT, 70 },
		{ 123, YYAT_SHIFT, 141 },
		{ 110, YYAT_SHIFT, 71 },
		{ 100, YYAT_SHIFT, 76 },
		{ 110, YYAT_SHIFT, 72 },
		{ 122, YYAT_SHIFT, 139 },
		{ 121, YYAT_SHIFT, 138 },
		{ 120, YYAT_SHIFT, 136 },
		{ 117, YYAT_SHIFT, 133 },
		{ 130, YYAT_SHIFT, 76 },
		{ 109, YYAT_SHIFT, 73 },
		{ 109, YYAT_SHIFT, 74 },
		{ 109, YYAT_SHIFT, 75 },
		{ 115, YYAT_SHIFT, 132 },
		{ 98, YYAT_SHIFT, 23 },
		{ 112, YYAT_SHIFT, 68 },
		{ 106, YYAT_SHIFT, 76 },
		{ 110, YYAT_SHIFT, 73 },
		{ 110, YYAT_SHIFT, 74 },
		{ 110, YYAT_SHIFT, 75 },
		{ 112, YYAT_SHIFT, 69 },
		{ 112, YYAT_SHIFT, 70 },
		{ 111, YYAT_SHIFT, 68 },
		{ 112, YYAT_SHIFT, 71 },
		{ 96, YYAT_SHIFT, 129 },
		{ 112, YYAT_SHIFT, 72 },
		{ 1, YYAT_SHIFT, 3 },
		{ 111, YYAT_SHIFT, 69 },
		{ 111, YYAT_SHIFT, 70 },
		{ 1, YYAT_SHIFT, 4 },
		{ 111, YYAT_SHIFT, 71 },
		{ 94, YYAT_SHIFT, 127 },
		{ 111, YYAT_SHIFT, 72 },
		{ 93, YYAT_SHIFT, 126 },
		{ 92, YYAT_SHIFT, 125 },
		{ 91, YYAT_SHIFT, 124 },
		{ 90, YYAT_SHIFT, 122 },
		{ 1, YYAT_SHIFT, 5 },
		{ 112, YYAT_SHIFT, 73 },
		{ 112, YYAT_SHIFT, 74 },
		{ 112, YYAT_SHIFT, 75 },
		{ 89, YYAT_SHIFT, 120 },
		{ 88, YYAT_SHIFT, 119 },
		{ 87, YYAT_SHIFT, 118 },
		{ 109, YYAT_SHIFT, 76 },
		{ 111, YYAT_SHIFT, 73 },
		{ 111, YYAT_SHIFT, 74 },
		{ 111, YYAT_SHIFT, 75 },
		{ 85, YYAT_SHIFT, 116 },
		{ 114, YYAT_SHIFT, 68 },
		{ 63, YYAT_SHIFT, 99 },
		{ 110, YYAT_SHIFT, 76 },
		{ 62, YYAT_SHIFT, 98 },
		{ 103, YYAT_SHIFT, 68 },
		{ 114, YYAT_SHIFT, 69 },
		{ 114, YYAT_SHIFT, 70 },
		{ 113, YYAT_SHIFT, 68 },
		{ 114, YYAT_SHIFT, 71 },
		{ 103, YYAT_SHIFT, 69 },
		{ 114, YYAT_SHIFT, 72 },
		{ 60, YYAT_SHIFT, 94 },
		{ 113, YYAT_SHIFT, 69 },
		{ 113, YYAT_SHIFT, 70 },
		{ 103, YYAT_SHIFT, 72 },
		{ 113, YYAT_SHIFT, 71 },
		{ 54, YYAT_SHIFT, 74 },
		{ 113, YYAT_SHIFT, 72 },
		{ 53, YYAT_SHIFT, 86 },
		{ 51, YYAT_SHIFT, 85 },
		{ 48, YYAT_SHIFT, 16 },
		{ 46, YYAT_SHIFT, 83 },
		{ 44, YYAT_ERROR, 0 },
		{ 112, YYAT_SHIFT, 76 },
		{ 114, YYAT_SHIFT, 74 },
		{ 43, YYAT_SHIFT, 67 },
		{ 39, YYAT_SHIFT, 65 },
		{ 107, YYAT_SHIFT, 68 },
		{ 103, YYAT_SHIFT, 74 },
		{ 37, YYAT_SHIFT, 64 },
		{ 111, YYAT_SHIFT, 76 },
		{ 113, YYAT_SHIFT, 74 },
		{ 107, YYAT_SHIFT, 69 },
		{ 107, YYAT_SHIFT, 70 },
		{ 105, YYAT_SHIFT, 68 },
		{ 107, YYAT_SHIFT, 71 },
		{ 102, YYAT_SHIFT, 68 },
		{ 107, YYAT_SHIFT, 72 },
		{ 33, YYAT_SHIFT, 60 },
		{ 105, YYAT_SHIFT, 69 },
		{ 105, YYAT_SHIFT, 70 },
		{ 102, YYAT_SHIFT, 69 },
		{ 105, YYAT_SHIFT, 71 },
		{ 32, YYAT_SHIFT, 59 },
		{ 105, YYAT_SHIFT, 72 },
		{ 31, YYAT_SHIFT, 58 },
		{ 102, YYAT_SHIFT, 72 },
		{ 30, YYAT_SHIFT, 57 },
		{ 29, YYAT_SHIFT, 56 },
		{ 28, YYAT_SHIFT, 55 },
		{ 25, YYAT_SHIFT, 50 },
		{ 107, YYAT_SHIFT, 74 },
		{ 22, YYAT_SHIFT, 49 },
		{ 20, YYAT_SHIFT, 47 },
		{ 16, YYAT_SHIFT, 25 },
		{ 13, YYAT_SHIFT, 19 },
		{ 12, YYAT_SHIFT, 17 },
		{ 114, YYAT_SHIFT, 76 },
		{ 105, YYAT_SHIFT, 74 },
		{ 10, YYAT_SHIFT, 14 },
		{ 102, YYAT_SHIFT, 74 },
		{ 103, YYAT_SHIFT, 76 },
		{ 9, YYAT_SHIFT, 13 },
		{ 2, YYAT_ACCEPT, 0 },
		{ 113, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 105, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ 102, YYAT_SHIFT, 76 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 57, YYAT_SHIFT, 3 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 57, YYAT_SHIFT, 4 },
		{ -1, YYAT_ERROR, 0 },
		{ 168, YYAT_SHIFT, 77 },
		{ 168, YYAT_SHIFT, 78 },
		{ 168, YYAT_SHIFT, 79 },
		{ 168, YYAT_SHIFT, 80 },
		{ 168, YYAT_SHIFT, 81 },
		{ 168, YYAT_SHIFT, 82 },
		{ 57, YYAT_SHIFT, 5 },
		{ 95, YYAT_SHIFT, 77 },
		{ 95, YYAT_SHIFT, 78 },
		{ 95, YYAT_SHIFT, 79 },
		{ 95, YYAT_SHIFT, 80 },
		{ 95, YYAT_SHIFT, 81 },
		{ 95, YYAT_SHIFT, 82 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
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
		{ 130, YYAT_SHIFT, 77 },
		{ 130, YYAT_SHIFT, 78 },
		{ 130, YYAT_SHIFT, 79 },
		{ 130, YYAT_SHIFT, 80 },
		{ 130, YYAT_SHIFT, 81 },
		{ 130, YYAT_SHIFT, 82 },
		{ -1, YYAT_ERROR, 0 },
		{ 106, YYAT_SHIFT, 77 },
		{ 106, YYAT_SHIFT, 78 },
		{ 106, YYAT_SHIFT, 79 },
		{ 106, YYAT_SHIFT, 80 },
		{ 106, YYAT_SHIFT, 81 },
		{ 106, YYAT_SHIFT, 82 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 173, YYAT_SHIFT, 28 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 157, YYAT_SHIFT, 51 },
		{ 157, YYAT_SHIFT, 34 },
		{ 173, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 173, YYAT_SHIFT, 29 },
		{ 173, YYAT_SHIFT, 30 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 173, YYAT_SHIFT, 31 },
		{ 173, YYAT_SHIFT, 32 },
		{ 173, YYAT_SHIFT, 33 },
		{ 109, YYAT_SHIFT, 78 },
		{ 109, YYAT_SHIFT, 79 },
		{ 109, YYAT_SHIFT, 80 },
		{ 109, YYAT_SHIFT, 81 },
		{ 109, YYAT_SHIFT, 82 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 79 },
		{ 110, YYAT_SHIFT, 80 },
		{ 110, YYAT_SHIFT, 81 },
		{ 110, YYAT_SHIFT, 82 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 112, YYAT_SHIFT, 81 },
		{ 112, YYAT_SHIFT, 82 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 81 },
		{ 111, YYAT_SHIFT, 82 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_REDUCE, 3 },
		{ -177, 1, YYAT_REDUCE, 1 },
		{ 188, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -50, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 147, 1, YYAT_REDUCE, 9 },
		{ 125, 1, YYAT_ERROR, 0 },
		{ -42, 1, YYAT_REDUCE, 7 },
		{ -99, 1, YYAT_ERROR, 0 },
		{ 139, 1, YYAT_DEFAULT, 47 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_DEFAULT, 98 },
		{ -115, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 134, 1, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_DEFAULT, 98 },
		{ 136, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 82, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 134, 1, YYAT_ERROR, 0 },
		{ 133, 1, YYAT_ERROR, 0 },
		{ 132, 1, YYAT_ERROR, 0 },
		{ 130, 1, YYAT_ERROR, 0 },
		{ 128, 1, YYAT_ERROR, 0 },
		{ 123, 1, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_DEFAULT, 98 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 95, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ -130, 1, YYAT_DEFAULT, 173 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 91, 1, YYAT_REDUCE, 54 },
		{ 106, 1, YYAT_DEFAULT, 168 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 55, 1, YYAT_REDUCE, 74 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ 54, 1, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 104, 1, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 102, 1, YYAT_DEFAULT, 168 },
		{ 80, 1, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -58, 1, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 95, 1, YYAT_DEFAULT, 157 },
		{ -43, 1, YYAT_REDUCE, 51 },
		{ 84, 1, YYAT_REDUCE, 49 },
		{ 67, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 83, 1, YYAT_DEFAULT, 157 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 78, 1, YYAT_DEFAULT, 168 },
		{ 77, 1, YYAT_DEFAULT, 168 },
		{ 58, 1, YYAT_DEFAULT, 128 },
		{ 53, 1, YYAT_DEFAULT, 128 },
		{ 52, 1, YYAT_DEFAULT, 143 },
		{ 69, 1, YYAT_DEFAULT, 168 },
		{ 68, 1, YYAT_DEFAULT, 168 },
		{ 48, 1, YYAT_REDUCE, 71 },
		{ -30, 1, YYAT_REDUCE, 77 },
		{ 59, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -203, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ -15, 1, YYAT_REDUCE, 59 },
		{ -22, 1, YYAT_REDUCE, 57 },
		{ 124, 1, YYAT_REDUCE, 55 },
		{ 92, 1, YYAT_REDUCE, 56 },
		{ -32, 1, YYAT_REDUCE, 58 },
		{ 122, 1, YYAT_REDUCE, 60 },
		{ -2, 1, YYAT_REDUCE, 53 },
		{ 115, 1, YYAT_REDUCE, 61 },
		{ -50, 1, YYAT_REDUCE, 68 },
		{ 26, 1, YYAT_REDUCE, 67 },
		{ 33, 1, YYAT_REDUCE, 66 },
		{ 61, 1, YYAT_REDUCE, 62 },
		{ 54, 1, YYAT_REDUCE, 65 },
		{ 95, 1, YYAT_REDUCE, 63 },
		{ 88, 1, YYAT_REDUCE, 64 },
		{ -4, 1, YYAT_DEFAULT, 44 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 43, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 42, 1, YYAT_DEFAULT, 157 },
		{ 23, 1, YYAT_DEFAULT, 143 },
		{ 40, 1, YYAT_DEFAULT, 157 },
		{ 18, 1, YYAT_DEFAULT, 143 },
		{ 15, 1, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 26, 1, YYAT_DEFAULT, 157 },
		{ 7, 1, YYAT_REDUCE, 72 },
		{ -9, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 0, 0, YYAT_REDUCE, 72 },
		{ -212, 1, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 20, 1, YYAT_DEFAULT, 168 },
		{ 15, 1, YYAT_DEFAULT, 157 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 13, 1, YYAT_DEFAULT, 168 },
		{ 9, 1, YYAT_DEFAULT, 157 },
		{ 6, 1, YYAT_DEFAULT, 157 },
		{ -17, 1, YYAT_DEFAULT, 44 },
		{ 0, 0, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ -4, 1, YYAT_DEFAULT, 168 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ -21, 1, YYAT_DEFAULT, 168 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ -38, 1, YYAT_DEFAULT, 168 },
		{ -19, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ 0, 0, YYAT_DEFAULT, 173 },
		{ -37, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ -4, 1, YYAT_DEFAULT, 57 },
		{ 0, 0, YYAT_REDUCE, 34 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 85;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 173, 36 },
		{ 98, 61 },
		{ 173, 174 },
		{ 173, 37 },
		{ 173, 38 },
		{ 173, 42 },
		{ 173, 45 },
		{ 173, 40 },
		{ 57, 35 },
		{ 167, 172 },
		{ 173, 43 },
		{ 173, 44 },
		{ 1, 6 },
		{ 166, 171 },
		{ 98, 131 },
		{ 98, 62 },
		{ 57, 90 },
		{ 128, 95 },
		{ 1, 7 },
		{ 128, 144 },
		{ 57, 91 },
		{ 157, 52 },
		{ 157, 168 },
		{ 157, 46 },
		{ 47, 84 },
		{ 47, 20 },
		{ 47, 21 },
		{ 7, 10 },
		{ 164, 170 },
		{ 7, 12 },
		{ 17, 39 },
		{ 17, 41 },
		{ 15, 24 },
		{ 15, 11 },
		{ 0, 2 },
		{ 0, 1 },
		{ 161, 169 },
		{ 155, 165 },
		{ 153, 163 },
		{ 152, 162 },
		{ 149, 160 },
		{ 148, 159 },
		{ 146, 158 },
		{ 142, 156 },
		{ 141, 154 },
		{ 139, 151 },
		{ 138, 150 },
		{ 136, 147 },
		{ 124, 143 },
		{ 122, 140 },
		{ 120, 137 },
		{ 119, 135 },
		{ 118, 134 },
		{ 97, 130 },
		{ 90, 123 },
		{ 89, 121 },
		{ 85, 117 },
		{ 83, 115 },
		{ 82, 114 },
		{ 81, 113 },
		{ 80, 112 },
		{ 79, 111 },
		{ 78, 110 },
		{ 77, 109 },
		{ 76, 108 },
		{ 75, 107 },
		{ 74, 106 },
		{ 73, 105 },
		{ 72, 104 },
		{ 71, 103 },
		{ 70, 102 },
		{ 69, 101 },
		{ 68, 100 },
		{ 60, 96 },
		{ 59, 93 },
		{ 58, 92 },
		{ 56, 88 },
		{ 55, 87 },
		{ 39, 66 },
		{ 35, 63 },
		{ 27, 54 },
		{ 26, 53 },
		{ 21, 48 },
		{ 13, 22 },
		{ 12, 18 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 33, -1 },
		{ 9, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 23, 15 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 74, -1 },
		{ 76, 47 },
		{ 0, -1 },
		{ 28, -1 },
		{ 0, -1 },
		{ 19, 173 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 77, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 60, 157 },
		{ 59, 157 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 61, 98 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 66, 173 },
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
		{ 0, -1 },
		{ 56, 157 },
		{ 55, 157 },
		{ -1, 157 },
		{ 54, 157 },
		{ 53, 157 },
		{ 50, 128 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
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
		{ 36, 157 },
		{ 0, -1 },
		{ 33, 128 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 34, 157 },
		{ 33, 157 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 32, 157 },
		{ -4, -1 },
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
		{ 40, 173 },
		{ 39, 173 },
		{ 29, 157 },
		{ 0, -1 },
		{ 28, 157 },
		{ 0, -1 },
		{ 27, 157 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -4, 157 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 35, 173 },
		{ 0, -1 },
		{ 25, 157 },
		{ 33, 173 },
		{ 0, -1 },
		{ 23, 157 },
		{ 22, 157 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 30, 173 },
		{ 0, -1 },
		{ 29, 173 },
		{ 28, 173 },
		{ 0, -1 },
		{ 0, -1 },
		{ 27, 173 },
		{ 26, 173 },
		{ 0, -1 },
		{ 25, 173 },
		{ 0, -1 },
		{ 1, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, 173 },
		{ 0, -1 },
		{ 0, -1 },
		{ 16, 173 },
		{ 0, -1 },
		{ 1, 173 },
		{ -3, 173 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -10, 57 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 302 ".\\myparser.y"


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


