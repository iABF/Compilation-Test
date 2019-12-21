/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 96 of your 30 day trial period.
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
* Date: 12/20/19
* Time: 23:38:41
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
#line 181 ".\\mylexer.l"

	fprintf(fp, "SCAN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return SCAN;

#line 398 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 190 ".\\mylexer.l"

	fprintf(fp, "PRINT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return PRINT;

#line 413 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 200 ".\\mylexer.l"

	yylval.symp = symlook(yytext);
	fprintf(fp, "ID\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%d\n", yylval.symp);
	fflush(fp);
	return ID;

#line 429 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 210 ".\\mylexer.l"

	yylval.dval = atof(yytext);
	fprintf(fp, "NUMBER\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%g\n", yylval.dval);
	fflush(fp);
	return NUMBER;

#line 445 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 221 ".\\mylexer.l"

	fprintf(fp, "LT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 460 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 230 ".\\mylexer.l"

	fprintf(fp, "LE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LE;

#line 475 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 239 ".\\mylexer.l"

	fprintf(fp, "EQ\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return EQ;

#line 490 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 248 ".\\mylexer.l"

	fprintf(fp, "NE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return NE;

#line 505 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 257 ".\\mylexer.l"

	fprintf(fp, "GT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 520 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 266 ".\\mylexer.l"

	fprintf(fp, "GE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GE;

#line 535 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 275 ".\\mylexer.l"

	fprintf(fp, "OR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return OR;

#line 550 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 284 ".\\mylexer.l"

	fprintf(fp, "AND\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AND;

#line 565 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 294 ".\\mylexer.l"

	fprintf(fp, "LP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 580 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 303 ".\\mylexer.l"

	fprintf(fp, "RP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 595 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 312 ".\\mylexer.l"

	fprintf(fp, "LBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LBRACE;

#line 610 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 321 ".\\mylexer.l"

	fprintf(fp, "RBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return RBRACE;

#line 625 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 330 ".\\mylexer.l"

	fprintf(fp, "LMBRACE\t\t");
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
#line 339 ".\\mylexer.l"

	fprintf(fp, "RMBRACE\t\t");
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

	fprintf(fp, "ASSIGN\t\t");
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

	fprintf(fp, "SEMICOLON\t\t");
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

	fprintf(fp, "LNOT\t\t");
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

	fprintf(fp, "ADD\t\t");
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

	fprintf(fp, "SUBTRACT\t\t");
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

	fprintf(fp, "MULTIPLY\t\t");
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

	fprintf(fp, "DIVIDE\t\t");
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

	fprintf(fp, "MOD\t\t");
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

	fprintf(fp, "XOR\t\t");
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

	fprintf(fp, "BITOR\t\t");
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

	fprintf(fp, "BITAND\t\t");
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

	fprintf(fp, "COMMA\t\t");
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

	fprintf(fp, "DOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 850 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 466 ".\\mylexer.l"

	fprintf(fp, "COLON\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 865 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 475 ".\\mylexer.l"

	fprintf(fp, "ADDASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ADDASSIGN;

#line 880 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 484 ".\\mylexer.l"

	fprintf(fp, "ABTRACTASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ABTRACTASSIGN;

#line 895 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 493 ".\\mylexer.l"

	fprintf(fp, "DIVIDEASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DIVIDEASSIGN;

#line 910 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 502 ".\\mylexer.l"

	fprintf(fp, "MULTIPLYASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MULTIPLYASSIGN;

#line 925 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 511 ".\\mylexer.l"

	fprintf(fp, "MODASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MODASSIGN;

#line 940 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 520 ".\\mylexer.l"

	fprintf(fp, "AUTODECRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTODECRE;

#line 955 "mylexer.cpp"
		}
		break;
	case 57:
		{
#line 529 ".\\mylexer.l"

	fprintf(fp, "AUTOINCRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTOINCRE;

#line 970 "mylexer.cpp"
		}
		break;
#line 541 ".\\mylexer.l"

	fclose(fp);
	

#line 978 "mylexer.cpp"
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

	yytransitionmax = 273;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 3, 1 },
		{ 0, 60 },
		{ 54, 17 },
		{ 70, 34 },
		{ 64, 29 },
		{ 65, 30 },
		{ 40, 4 },
		{ 55, 17 },
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
		{ 68, 32 },
		{ 69, 33 },
		{ 71, 34 },
		{ 56, 17 },
		{ 3, 1 },
		{ 4, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 0, 48 },
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
		{ 60, 60 },
		{ 0, 41 },
		{ 48, 48 },
		{ 50, 13 },
		{ 42, 6 },
		{ 66, 31 },
		{ 3, 3 },
		{ 3, 3 },
		{ 52, 15 },
		{ 43, 6 },
		{ 79, 79 },
		{ 46, 7 },
		{ 72, 35 },
		{ 67, 31 },
		{ 73, 36 },
		{ 95, 79 },
		{ 74, 38 },
		{ 47, 8 },
		{ 75, 42 },
		{ 76, 43 },
		{ 77, 44 },
		{ 51, 13 },
		{ 78, 45 },
		{ 49, 12 },
		{ 53, 15 },
		{ 41, 41 },
		{ 79, 54 },
		{ 80, 55 },
		{ 25, 1 },
		{ 3, 3 },
		{ 26, 1 },
		{ 27, 1 },
		{ 59, 21 },
		{ 61, 22 },
		{ 81, 63 },
		{ 28, 1 },
		{ 44, 6 },
		{ 82, 64 },
		{ 29, 1 },
		{ 30, 1 },
		{ 83, 65 },
		{ 45, 6 },
		{ 31, 1 },
		{ 84, 67 },
		{ 85, 68 },
		{ 86, 69 },
		{ 87, 70 },
		{ 88, 71 },
		{ 89, 72 },
		{ 32, 1 },
		{ 91, 75 },
		{ 33, 1 },
		{ 34, 1 },
		{ 90, 73 },
		{ 92, 76 },
		{ 35, 1 },
		{ 36, 1 },
		{ 93, 77 },
		{ 94, 78 },
		{ 62, 23 },
		{ 37, 1 },
		{ 38, 1 },
		{ 39, 1 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 96, 81 },
		{ 97, 82 },
		{ 98, 85 },
		{ 99, 86 },
		{ 100, 87 },
		{ 101, 88 },
		{ 102, 89 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 103, 90 },
		{ 104, 91 },
		{ 105, 92 },
		{ 106, 93 },
		{ 57, 57 },
		{ 107, 94 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 57, 57 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 108, 98 },
		{ 109, 99 },
		{ 110, 101 },
		{ 111, 103 },
		{ 112, 104 },
		{ 113, 105 },
		{ 114, 106 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 115, 107 },
		{ 116, 109 },
		{ 117, 110 },
		{ 118, 112 },
		{ 24, 117 },
		{ 119, 113 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 24, 117 },
		{ 118, 114 },
		{ 120, 115 },
		{ 63, 28 },
		{ 121, 119 },
		{ 121, 120 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 117, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 52, 1 },
		{ 0, -53, 39 },
		{ 41, 0, 0 },
		{ 0, -9, 0 },
		{ 0, 5, 44 },
		{ 0, 34, 47 },
		{ 48, 0, 0 },
		{ 0, 0, 31 },
		{ 0, 0, 32 },
		{ 0, 17, 42 },
		{ 0, 15, 40 },
		{ 0, 0, 48 },
		{ 0, 18, 41 },
		{ 0, 0, 49 },
		{ 0, -38, 43 },
		{ 57, -38, 22 },
		{ 0, 0, 50 },
		{ 0, 0, 38 },
		{ 60, 26, 23 },
		{ 0, 27, 37 },
		{ 0, 53, 27 },
		{ 117, 0, 21 },
		{ 0, 0, 35 },
		{ 0, 0, 36 },
		{ 0, 0, 45 },
		{ 117, 159, 21 },
		{ 117, -102, 21 },
		{ 117, -104, 21 },
		{ 117, -42, 21 },
		{ 117, -94, 21 },
		{ 117, -80, 21 },
		{ 117, -94, 21 },
		{ 117, -44, 21 },
		{ 117, -35, 21 },
		{ 0, 0, 33 },
		{ 0, -53, 46 },
		{ 0, 0, 34 },
		{ 0, 0, 26 },
		{ -5, 46, 5 },
		{ 0, 4, 0 },
		{ 0, -4, 0 },
		{ 0, -26, 0 },
		{ 0, -33, 0 },
		{ 0, 0, 55 },
		{ 0, 0, 30 },
		{ -9, 18, 6 },
		{ 0, 0, 54 },
		{ 0, 0, 57 },
		{ 0, 0, 51 },
		{ 0, 0, 56 },
		{ 0, 0, 52 },
		{ -54, 39, 0 },
		{ -55, 72, 0 },
		{ 0, 0, 53 },
		{ 0, 70, 9 },
		{ 60, 0, 0 },
		{ 60, 0, 24 },
		{ -58, -7, 7 },
		{ 0, 0, 25 },
		{ 0, 0, 28 },
		{ 117, -22, 21 },
		{ 117, -23, 21 },
		{ 117, -19, 21 },
		{ 117, 0, 10 },
		{ 117, -18, 21 },
		{ 117, -6, 21 },
		{ 117, -16, 21 },
		{ 117, 4, 21 },
		{ 117, -12, 21 },
		{ 117, -2, 21 },
		{ 117, 3, 21 },
		{ 0, 0, 29 },
		{ 0, 35, 0 },
		{ 0, 42, 0 },
		{ 0, 10, 0 },
		{ 0, 14, 0 },
		{ -54, 23, 0 },
		{ 0, 0, 2 },
		{ 117, 20, 21 },
		{ 117, 28, 21 },
		{ 117, 0, 13 },
		{ 117, 0, 15 },
		{ 117, 20, 21 },
		{ 117, 14, 21 },
		{ 117, 22, 21 },
		{ 117, 16, 21 },
		{ 117, 34, 21 },
		{ 117, 53, 21 },
		{ 0, 89, 0 },
		{ 0, 87, 0 },
		{ 0, 59, 0 },
		{ 0, 58, 0 },
		{ 0, 0, 3 },
		{ 117, 0, 18 },
		{ 117, 0, 11 },
		{ 117, 87, 21 },
		{ 117, 90, 21 },
		{ 117, 0, 19 },
		{ 117, 106, 21 },
		{ 117, 0, 16 },
		{ 117, 105, 21 },
		{ 0, 129, 0 },
		{ 0, 123, 0 },
		{ 0, 99, 0 },
		{ 0, 119, 0 },
		{ 117, 0, 20 },
		{ 117, 127, 21 },
		{ 117, 122, 21 },
		{ 117, 0, 12 },
		{ 0, 170, 0 },
		{ 0, 173, 0 },
		{ 0, 167, 0 },
		{ 0, 169, 0 },
		{ 117, 0, 14 },
		{ 0, 145, 17 },
		{ 0, 0, 4 },
		{ 0, 202, 0 },
		{ 0, 171, 0 },
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
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 547 ".\\mylexer.l"


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
