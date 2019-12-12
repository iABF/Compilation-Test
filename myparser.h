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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 12/13/19
* Time: 01:42:53
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

#define DIVIDEASSIGN 257
#define MULTIPLYASSIGN 258
#define MODASSIGN 259
#define ADDASSIGN 260
#define ABTRACTASSIGN 261
#define CONDITIONALOPERATOR 262
#define OR 263
#define AND 264
#define EQ 265
#define NE 266
#define LE 267
#define GE 268
#define UMINUS 269
#define POINT 270
#define AUTODECRE 271
#define AUTOINCRE 272
#define ADDRESS 273
#define BRACKET 274
#define IF 275
#define THEN 276
#define ELSE 277
#define RELOP 278
#define VOID 279
#define LBRACE 280
#define RBRACE 281
#define INT 282
#define DEFINE 283
#define STRING 284
#define INCLUDE 285
#define WHILE 286
#define FOR 287
#define RETURN 288
#define GOTO 289
#define GETCHAR 290
#define STRUCT 291
#define LONGINT 292
#define DOUBLE 293
#define LONGLONGINT 294
#define FLOAT 295
#define BOOL 296
#define SHORT 297
#define BYTE 298
#define SCAN 299
#define PRINT 300
#ifndef YYSTYPE
union tagYYSTYPE {
#line 31 ".\\myparser.y"

	double dval;
	struct symtable *symp;
	class ParseTreeNode *node;
	class RootNode *rootnode;
	class FunctionNode *functionnode;
	class VarNode *varnode;
	class ParamNode *paramnode;
	class TypeNode *typenode;
	class CompoundStatementNode *compoundstatementnode;
	class StatementNode *statementnode;
	class WhileLoopStatementNode *whileloopstatementnode;
	class ForLoopStatementNode *forloopstatementnode;
	class OperatorNode *operatornode;
	class SelectionStatementNode *selectionstatementnode;

#line 96 "myparser.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

#define ID 301
#define NUMBER 302
/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 74 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE int
#endif

#line 148 "myparser.h"
#endif
