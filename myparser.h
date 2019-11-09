/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 54 of your 30 day trial period.
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
* Date: 11/09/19
* Time: 12:43:40
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
#define BITANDASSIGN 262
#define XORASSIGN 263
#define BITORASSIGN 264
#define CONDITIONALOPERATOR 265
#define OR 266
#define AND 267
#define EQ 268
#define NE 269
#define LE 270
#define GE 271
#define LBITMOVE 272
#define RBITMOVE 273
#define UMINUS 274
#define POINT 275
#define AUTODECRE 276
#define AUTOINCRE 277
#define ADDRESS 278
#define BRACKET 279
#define IF 280
#define THEN 281
#define ELSE 282
#define RELOP 283
#define VOID 284
#define MAIN 285
#define INT 286
#define DEFINE 287
#define STRING 288
#define INCLUDE 289
#define WHILE 290
#define FOR 291
#define RETURN 292
#define GOTO 293
#define GETCHAR 294
#define STRUCT 295
#define LONGINT 296
#define DOUBLE 297
#define LONGLONGINT 298
#define FLOAT 299
#define BOOL 300
#define SHORT 301
#define BYTE 302
#define SCANF 303
#define PRINTF 304
#ifndef YYSTYPE
union tagYYSTYPE {
#line 33 ".\\myparser.y"

	double dval;
	struct symtable *symp;

#line 88 "myparser.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

#define ID 305
#define NUMBER 306
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
#line 45 ".\\myparser.y"

	// place any extra class members here

#line 132 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 60 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE int
#endif

#line 145 "myparser.h"
#endif
