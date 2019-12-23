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
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 12/23/19
* Time: 11:11:25
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2019��9��16��
****************************************************************************/
#include "symtable.h"
#include "myparser.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
extern struct symtable symtable[MAXSYM];

#line 55 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 48 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
	FILE* fp;
	fp=fopen("out_lexer.txt", "a");
	setbuf(fp, NULL);

#line 155 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 56 ".\\mylexer.l"
/* no action and no return */
#line 162 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 57 ".\\mylexer.l"
fprintf(fp, "SGLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng - 1, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 169 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 58 ".\\mylexer.l"
fprintf(fp, "MTLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 176 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 59 ".\\mylexer.l"

	fprintf(fp, "DEFINE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DEFINE;

#line 191 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 68 ".\\mylexer.l"

	fprintf(fp, "STRING\t\t");
	fflush(fp); fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRING;

#line 205 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 76 ".\\mylexer.l"

	fprintf(fp, "SGLSTRING\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRING;

#line 220 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 85 ".\\mylexer.l"
fprintf(fp, "ABRACKET\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 227 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 86 ".\\mylexer.l"

	fprintf(fp, "INCLUDE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return INCLUDE;

#line 242 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 95 ".\\mylexer.l"
fprintf(fp, "ERROR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 249 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 97 ".\\mylexer.l"

	fprintf(fp, "IF\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return IF;

#line 264 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 106 ".\\mylexer.l"

	fprintf(fp, "ELSE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ELSE;

#line 279 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 115 ".\\mylexer.l"

	fprintf(fp, "WHILE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return WHILE;

#line 294 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 124 ".\\mylexer.l"

	fprintf(fp, "FOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return FOR;

#line 309 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 133 ".\\mylexer.l"

	fprintf(fp, "RETURN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return RETURN;

#line 324 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 144 ".\\mylexer.l"

	fprintf(fp, "INT\t\t");
	fflush(fp); fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return INT;

#line 338 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 152 ".\\mylexer.l"

	fprintf(fp, "VOID\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return VOID;

#line 353 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 161 ".\\mylexer.l"

	fprintf(fp, "STRUCT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRUCT;

#line 368 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 171 ".\\mylexer.l"

	fprintf(fp, "BOOL\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BOOL;

#line 383 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 182 ".\\mylexer.l"

	yylval.symp = symlook(yytext);
	fprintf(fp, "ID\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%d\n", yylval.symp);
	fflush(fp);
	return ID;

#line 399 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 192 ".\\mylexer.l"

	yylval.dval = atof(yytext);
	fprintf(fp, "NUMBER\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%g\n", yylval.dval);
	fflush(fp);
	return NUMBER;

#line 415 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 203 ".\\mylexer.l"

	fprintf(fp, "LT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 430 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 212 ".\\mylexer.l"

	fprintf(fp, "LE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LE;

#line 445 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 221 ".\\mylexer.l"

	fprintf(fp, "EQ\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return EQ;

#line 460 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 230 ".\\mylexer.l"

	fprintf(fp, "NE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return NE;

#line 475 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 239 ".\\mylexer.l"

	fprintf(fp, "GT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 490 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 248 ".\\mylexer.l"

	fprintf(fp, "GE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GE;

#line 505 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 257 ".\\mylexer.l"

	fprintf(fp, "OR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return OR;

#line 520 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 266 ".\\mylexer.l"

	fprintf(fp, "AND\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AND;

#line 535 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 276 ".\\mylexer.l"

	fprintf(fp, "LP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 550 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 285 ".\\mylexer.l"

	fprintf(fp, "RP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 565 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 294 ".\\mylexer.l"

	fprintf(fp, "LBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LBRACE;

#line 580 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 303 ".\\mylexer.l"

	fprintf(fp, "RBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return RBRACE;

#line 595 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 312 ".\\mylexer.l"

	fprintf(fp, "LMBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 610 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 321 ".\\mylexer.l"

	fprintf(fp, "RMBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 625 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 331 ".\\mylexer.l"

	fprintf(fp, "ASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 640 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 340 ".\\mylexer.l"

	fprintf(fp, "SEMICOLON\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 655 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 349 ".\\mylexer.l"

	fprintf(fp, "LNOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 670 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 358 ".\\mylexer.l"

	fprintf(fp, "ADD\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 685 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 367 ".\\mylexer.l"

	fprintf(fp, "SUBTRACT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 700 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 376 ".\\mylexer.l"

	fprintf(fp, "MULTIPLY\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 715 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 385 ".\\mylexer.l"

	fprintf(fp, "DIVIDE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 730 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 394 ".\\mylexer.l"

	fprintf(fp, "MOD\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 745 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 403 ".\\mylexer.l"

	fprintf(fp, "XOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 760 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 412 ".\\mylexer.l"

	fprintf(fp, "BITOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 775 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 421 ".\\mylexer.l"

	fprintf(fp, "BITAND\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 790 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 430 ".\\mylexer.l"

	fprintf(fp, "COMMA\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 805 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 439 ".\\mylexer.l"

	fprintf(fp, "DOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 820 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 448 ".\\mylexer.l"

	fprintf(fp, "COLON\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 835 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 457 ".\\mylexer.l"

	fprintf(fp, "ADDASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ADDASSIGN;

#line 850 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 466 ".\\mylexer.l"

	fprintf(fp, "ABTRACTASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ABTRACTASSIGN;

#line 865 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 475 ".\\mylexer.l"

	fprintf(fp, "DIVIDEASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DIVIDEASSIGN;

#line 880 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 484 ".\\mylexer.l"

	fprintf(fp, "MULTIPLYASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MULTIPLYASSIGN;

#line 895 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 493 ".\\mylexer.l"

	fprintf(fp, "MODASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MODASSIGN;

#line 910 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 502 ".\\mylexer.l"

	fprintf(fp, "AUTODECRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTODECRE;

#line 925 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 511 ".\\mylexer.l"

	fprintf(fp, "AUTOINCRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTOINCRE;

#line 940 "mylexer.cpp"
		}
		break;
#line 523 ".\\mylexer.l"

	fclose(fp);
	

#line 948 "mylexer.cpp"
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 268;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 3, 1 },
		{ 0, 59 },
		{ 53, 17 },
		{ 51, 15 },
		{ 62, 28 },
		{ 63, 29 },
		{ 64, 30 },
		{ 54, 17 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 39, 4 },
		{ 52, 15 },
		{ 67, 32 },
		{ 55, 17 },
		{ 3, 1 },
		{ 4, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 0, 47 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 22, 1 },
		{ 23, 1 },
		{ 59, 59 },
		{ 0, 40 },
		{ 47, 47 },
		{ 49, 13 },
		{ 41, 6 },
		{ 65, 31 },
		{ 3, 3 },
		{ 3, 3 },
		{ 68, 33 },
		{ 42, 6 },
		{ 76, 76 },
		{ 69, 34 },
		{ 70, 35 },
		{ 66, 31 },
		{ 71, 37 },
		{ 90, 76 },
		{ 45, 7 },
		{ 72, 41 },
		{ 73, 42 },
		{ 74, 43 },
		{ 75, 44 },
		{ 50, 13 },
		{ 46, 8 },
		{ 76, 53 },
		{ 77, 54 },
		{ 40, 40 },
		{ 48, 12 },
		{ 58, 21 },
		{ 25, 1 },
		{ 3, 3 },
		{ 26, 1 },
		{ 27, 1 },
		{ 78, 62 },
		{ 79, 63 },
		{ 80, 64 },
		{ 28, 1 },
		{ 43, 6 },
		{ 81, 66 },
		{ 29, 1 },
		{ 30, 1 },
		{ 82, 67 },
		{ 44, 6 },
		{ 31, 1 },
		{ 83, 68 },
		{ 84, 69 },
		{ 85, 70 },
		{ 86, 72 },
		{ 87, 73 },
		{ 88, 74 },
		{ 89, 75 },
		{ 60, 22 },
		{ 32, 1 },
		{ 33, 1 },
		{ 92, 79 },
		{ 91, 78 },
		{ 34, 1 },
		{ 35, 1 },
		{ 93, 82 },
		{ 94, 83 },
		{ 95, 84 },
		{ 36, 1 },
		{ 37, 1 },
		{ 38, 1 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 96, 85 },
		{ 97, 86 },
		{ 98, 87 },
		{ 99, 88 },
		{ 100, 89 },
		{ 101, 93 },
		{ 102, 94 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 103, 96 },
		{ 104, 97 },
		{ 105, 98 },
		{ 106, 99 },
		{ 56, 56 },
		{ 107, 100 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 56, 56 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 108, 101 },
		{ 109, 102 },
		{ 110, 104 },
		{ 111, 105 },
		{ 110, 106 },
		{ 112, 107 },
		{ 61, 23 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 113, 111 },
		{ 113, 112 },
		{ 0, 0 },
		{ 0, 0 },
		{ 24, 109 },
		{ 0, 0 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 },
		{ 24, 109 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 109, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 52, 1 },
		{ 0, -41, 37 },
		{ 40, 0, 0 },
		{ 0, -9, 0 },
		{ 0, 10, 42 },
		{ 0, 39, 45 },
		{ 47, 0, 0 },
		{ 0, 0, 29 },
		{ 0, 0, 30 },
		{ 0, 20, 40 },
		{ 0, 15, 38 },
		{ 0, 0, 46 },
		{ 0, -40, 39 },
		{ 0, 0, 47 },
		{ 0, -38, 41 },
		{ 56, -38, 20 },
		{ 0, 0, 48 },
		{ 0, 0, 36 },
		{ 59, 21, 21 },
		{ 0, 44, 35 },
		{ 0, 148, 25 },
		{ 109, 0, 19 },
		{ 0, 0, 33 },
		{ 0, 0, 34 },
		{ 0, 0, 43 },
		{ 109, -105, 19 },
		{ 109, -101, 19 },
		{ 109, -103, 19 },
		{ 109, -42, 19 },
		{ 109, -79, 19 },
		{ 109, -53, 19 },
		{ 109, -45, 19 },
		{ 109, -37, 19 },
		{ 0, 0, 31 },
		{ 0, -55, 44 },
		{ 0, 0, 32 },
		{ 0, 0, 24 },
		{ -5, 46, 5 },
		{ 0, 3, 0 },
		{ 0, -5, 0 },
		{ 0, -27, 0 },
		{ 0, -35, 0 },
		{ 0, 0, 53 },
		{ 0, 0, 28 },
		{ -9, 18, 6 },
		{ 0, 0, 52 },
		{ 0, 0, 55 },
		{ 0, 0, 49 },
		{ 0, 0, 54 },
		{ 0, 0, 50 },
		{ -53, 36, 0 },
		{ -54, 69, 0 },
		{ 0, 0, 51 },
		{ 0, 70, 9 },
		{ 59, 0, 0 },
		{ 59, 0, 22 },
		{ -57, -7, 7 },
		{ 0, 0, 23 },
		{ 0, 0, 26 },
		{ 109, -24, 19 },
		{ 109, -27, 19 },
		{ 109, -25, 19 },
		{ 109, 0, 10 },
		{ 109, -24, 19 },
		{ 109, -21, 19 },
		{ 109, -16, 19 },
		{ 109, -6, 19 },
		{ 109, -5, 19 },
		{ 0, 0, 27 },
		{ 0, 31, 0 },
		{ 0, 35, 0 },
		{ 0, 1, 0 },
		{ 0, 5, 0 },
		{ -53, 23, 0 },
		{ 0, 0, 2 },
		{ 109, 1, 19 },
		{ 109, 7, 19 },
		{ 109, 0, 13 },
		{ 109, 0, 15 },
		{ 109, -5, 19 },
		{ 109, -4, 19 },
		{ 109, 14, 19 },
		{ 109, 20, 19 },
		{ 0, 56, 0 },
		{ 0, 54, 0 },
		{ 0, 26, 0 },
		{ 0, 24, 0 },
		{ 0, 0, 3 },
		{ 109, 0, 18 },
		{ 109, 0, 11 },
		{ 109, 19, 19 },
		{ 109, 35, 19 },
		{ 109, 0, 16 },
		{ 109, 60, 19 },
		{ 0, 84, 0 },
		{ 0, 78, 0 },
		{ 0, 54, 0 },
		{ 0, 49, 0 },
		{ 109, 93, 19 },
		{ 109, 88, 19 },
		{ 109, 0, 12 },
		{ 0, 136, 0 },
		{ 0, 138, 0 },
		{ 0, 106, 0 },
		{ 0, 108, 0 },
		{ 109, 0, 14 },
		{ 0, 145, 17 },
		{ 0, 0, 4 },
		{ 0, 167, 0 },
		{ 0, 136, 0 },
		{ 0, 0, 8 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 529 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section


struct symtable *symlook(char *s)
{
	char *p;
	struct symtable *sp;
	for(sp = symtable; sp < &symtable[MAXSYM]; sp++) {
		if(sp->name && !strcmp(sp->name, s))
			return sp;
		if(!sp->name) {
			sp->name = strdup(s);
			return sp;
		}
	}
	exit(1);
}

void addfunc(char *name, double (*func)()) {
	struct symtable *sp = symlook(name);
	sp->funcptr = func;
}
