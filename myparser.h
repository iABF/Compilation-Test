/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 52 of your 30 day trial period.
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
* Date: 11/07/19
* Time: 10:50:09
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

#define LT 257
#define LE 258
#define EQ 259
#define NE 260
#define GT 261
#define GE 262
#define IF 263
#define THEN 264
#define ELSE 265
#define ID 266
#define NUMBER 267
#define RELOP 268
#define VOID 269
#define MAIN 270
#define LP 271
#define RP 272
#define LBRACE 273
#define RBRACE 274
#define SEMICOLON 275
#define LNOT 276
#define INT 277
#define ASSIGN 278
#define AND 279
#define OR 280
#ifndef YYSTYPE
union tagYYSTYPE {
#line 18 ".\\myparser.y"

	double dval;
	struct symtable *symp;

#line 64 "myparser.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

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
#line 28 ".\\myparser.y"

	// place any extra class members here

#line 106 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 43 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE int
#endif

#line 119 "myparser.h"
#endif
