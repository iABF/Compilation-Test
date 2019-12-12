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
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 12/13/19
* Time: 00:58:23
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
	//time_t tnow;
	//tnow=time(0);
	//char s[30];
	//struct tm *sttm;
	//sttm=localtime(&tnow);
	//sprintf(s, "%04u-%02u-%02u-%02u%02u%02u.txt", sttm->tm_year+1900, sttm->tm_mon+1, sttm->tm_mday, sttm->tm_hour, sttm->tm_min, sttm->tm_sec);
	FILE* fp;
	fp=fopen("out_lexer.txt", "a");
	setbuf(fp, NULL);

#line 161 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 62 ".\\mylexer.l"
/* no action and no return */
#line 168 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 63 ".\\mylexer.l"
fprintf(fp, "SGLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng - 1, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 175 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 64 ".\\mylexer.l"
fprintf(fp, "MTLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 182 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 65 ".\\mylexer.l"

	fprintf(fp, "DEFINE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DEFINE;

#line 197 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 74 ".\\mylexer.l"

	fprintf(fp, "STRING\t\t");
	fflush(fp); fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRING;

#line 211 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 82 ".\\mylexer.l"

	fprintf(fp, "SGLSTRING\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRING;

#line 226 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 91 ".\\mylexer.l"
fprintf(fp, "ABRACKET\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 233 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 92 ".\\mylexer.l"

	fprintf(fp, "INCLUDE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return INCLUDE;

#line 248 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 101 ".\\mylexer.l"
fprintf(fp, "ERROR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 255 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 103 ".\\mylexer.l"

	fprintf(fp, "IF\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return IF;

#line 270 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 112 ".\\mylexer.l"

	fprintf(fp, "ELSE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ELSE;

#line 285 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 121 ".\\mylexer.l"

	fprintf(fp, "WHILE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return WHILE;

#line 300 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 130 ".\\mylexer.l"

	fprintf(fp, "FOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return FOR;

#line 315 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 139 ".\\mylexer.l"

	fprintf(fp, "RETURN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return RETURN;

#line 330 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 148 ".\\mylexer.l"

	fprintf(fp, "GOTO\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GOTO;

#line 345 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 157 ".\\mylexer.l"

	fprintf(fp, "GETCHAR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GETCHAR;

#line 360 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 167 ".\\mylexer.l"

	fprintf(fp, "INT\t\t");
	fflush(fp); fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return INT;

#line 374 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 175 ".\\mylexer.l"

	fprintf(fp, "VOID\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return VOID;

#line 389 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 184 ".\\mylexer.l"

	fprintf(fp, "STRUCT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRUCT;

#line 404 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 193 ".\\mylexer.l"

	fprintf(fp, "LONGINT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LONGINT;

#line 419 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 202 ".\\mylexer.l"

	fprintf(fp, "DOUBLE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DOUBLE;

#line 434 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 211 ".\\mylexer.l"

	fprintf(fp, "LONGLONGINT\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LONGLONGINT;

#line 449 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 220 ".\\mylexer.l"

	fprintf(fp, "FLOAT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return FLOAT;

#line 464 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 229 ".\\mylexer.l"

	fprintf(fp, "BOOL\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BOOL;

#line 479 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 238 ".\\mylexer.l"

	fprintf(fp, "SHORT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return SHORT;

#line 494 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 247 ".\\mylexer.l"

	fprintf(fp, "BYTE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BYTE;

#line 509 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 258 ".\\mylexer.l"

	fprintf(fp, "SCAN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return SCAN;

#line 524 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 267 ".\\mylexer.l"

	fprintf(fp, "PRINT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return PRINT;

#line 539 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 277 ".\\mylexer.l"

	yylval.symp = symlook(yytext);
	fprintf(fp, "ID\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%d\n", yylval.symp);
	fflush(fp);
	return ID;

#line 555 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 287 ".\\mylexer.l"

	yylval.dval = atof(yytext);
	fprintf(fp, "NUMBER\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%g\n", yylval.dval);
	fflush(fp);
	return NUMBER;

#line 571 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 298 ".\\mylexer.l"

	fprintf(fp, "LT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 586 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 307 ".\\mylexer.l"

	fprintf(fp, "LE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LE;

#line 601 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 316 ".\\mylexer.l"

	fprintf(fp, "EQ\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return EQ;

#line 616 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 325 ".\\mylexer.l"

	fprintf(fp, "NE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return NE;

#line 631 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 334 ".\\mylexer.l"

	fprintf(fp, "GT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 646 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 343 ".\\mylexer.l"

	fprintf(fp, "GE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GE;

#line 661 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 352 ".\\mylexer.l"

	fprintf(fp, "OR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return OR;

#line 676 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 361 ".\\mylexer.l"

	fprintf(fp, "AND\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AND;

#line 691 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 371 ".\\mylexer.l"

	fprintf(fp, "LP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 706 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 380 ".\\mylexer.l"

	fprintf(fp, "RP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 721 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 389 ".\\mylexer.l"

	fprintf(fp, "LBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LBRACE;

#line 736 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 398 ".\\mylexer.l"

	fprintf(fp, "RBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return RBRACE;

#line 751 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 407 ".\\mylexer.l"

	fprintf(fp, "LMBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 766 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 416 ".\\mylexer.l"

	fprintf(fp, "RMBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 781 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 426 ".\\mylexer.l"

	fprintf(fp, "ASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 796 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 435 ".\\mylexer.l"

	fprintf(fp, "SEMICOLON\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 811 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 444 ".\\mylexer.l"

	fprintf(fp, "LNOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 826 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 453 ".\\mylexer.l"

	fprintf(fp, "ADD\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 841 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 462 ".\\mylexer.l"

	fprintf(fp, "SUBTRACT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 856 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 471 ".\\mylexer.l"

	fprintf(fp, "MULTIPLY\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 871 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 480 ".\\mylexer.l"

	fprintf(fp, "DIVIDE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 886 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 489 ".\\mylexer.l"

	fprintf(fp, "MOD\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 901 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 498 ".\\mylexer.l"

	fprintf(fp, "XOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 916 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 507 ".\\mylexer.l"

	fprintf(fp, "BITOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 931 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 516 ".\\mylexer.l"

	fprintf(fp, "BITAND\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 946 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 525 ".\\mylexer.l"

	fprintf(fp, "COMMA\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 961 "mylexer.cpp"
		}
		break;
	case 57:
		{
#line 534 ".\\mylexer.l"

	fprintf(fp, "DOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 976 "mylexer.cpp"
		}
		break;
	case 58:
		{
#line 543 ".\\mylexer.l"

	fprintf(fp, "COLON\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 991 "mylexer.cpp"
		}
		break;
	case 59:
		{
#line 552 ".\\mylexer.l"

	fprintf(fp, "ADDASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ADDASSIGN;

#line 1006 "mylexer.cpp"
		}
		break;
	case 60:
		{
#line 561 ".\\mylexer.l"

	fprintf(fp, "ABTRACTASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ABTRACTASSIGN;

#line 1021 "mylexer.cpp"
		}
		break;
	case 61:
		{
#line 570 ".\\mylexer.l"

	fprintf(fp, "DIVIDEASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DIVIDEASSIGN;

#line 1036 "mylexer.cpp"
		}
		break;
	case 62:
		{
#line 579 ".\\mylexer.l"

	fprintf(fp, "MULTIPLYASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MULTIPLYASSIGN;

#line 1051 "mylexer.cpp"
		}
		break;
	case 63:
		{
#line 588 ".\\mylexer.l"

	fprintf(fp, "MODASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MODASSIGN;

#line 1066 "mylexer.cpp"
		}
		break;
	case 64:
		{
#line 597 ".\\mylexer.l"

	fprintf(fp, "AUTODECRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTODECRE;

#line 1081 "mylexer.cpp"
		}
		break;
	case 65:
		{
#line 606 ".\\mylexer.l"

	fprintf(fp, "AUTOINCRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTOINCRE;

#line 1096 "mylexer.cpp"
		}
		break;
#line 618 ".\\mylexer.l"

	fclose(fp);
	

#line 1104 "mylexer.cpp"
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

	yytransitionmax = 344;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 3, 1 },
		{ 0, 65 },
		{ 57, 17 },
		{ 81, 37 },
		{ 74, 32 },
		{ 68, 28 },
		{ 91, 91 },
		{ 58, 17 },
		{ 82, 37 },
		{ 76, 33 },
		{ 153, 141 },
		{ 116, 91 },
		{ 64, 21 },
		{ 154, 141 },
		{ 75, 32 },
		{ 69, 28 },
		{ 72, 31 },
		{ 77, 33 },
		{ 84, 38 },
		{ 73, 31 },
		{ 83, 37 },
		{ 59, 17 },
		{ 3, 1 },
		{ 4, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 0, 51 },
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
		{ 65, 65 },
		{ 0, 44 },
		{ 51, 51 },
		{ 85, 39 },
		{ 45, 6 },
		{ 53, 13 },
		{ 3, 3 },
		{ 3, 3 },
		{ 55, 15 },
		{ 46, 6 },
		{ 60, 18 },
		{ 86, 41 },
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
		{ 66, 22 },
		{ 54, 13 },
		{ 56, 15 },
		{ 44, 44 },
		{ 87, 45 },
		{ 88, 46 },
		{ 25, 1 },
		{ 3, 3 },
		{ 26, 1 },
		{ 27, 1 },
		{ 94, 117 },
		{ 62, 18 },
		{ 94, 117 },
		{ 28, 1 },
		{ 47, 6 },
		{ 29, 1 },
		{ 30, 1 },
		{ 31, 1 },
		{ 32, 1 },
		{ 48, 6 },
		{ 33, 1 },
		{ 89, 47 },
		{ 0, 61 },
		{ 34, 1 },
		{ 0, 61 },
		{ 90, 48 },
		{ 67, 23 },
		{ 35, 1 },
		{ 91, 57 },
		{ 36, 1 },
		{ 37, 1 },
		{ 92, 58 },
		{ 0, 60 },
		{ 38, 1 },
		{ 39, 1 },
		{ 43, 4 },
		{ 70, 29 },
		{ 71, 30 },
		{ 40, 1 },
		{ 41, 1 },
		{ 42, 1 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 95, 68 },
		{ 96, 69 },
		{ 97, 70 },
		{ 98, 71 },
		{ 99, 72 },
		{ 100, 73 },
		{ 101, 74 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 102, 75 },
		{ 103, 77 },
		{ 104, 78 },
		{ 105, 79 },
		{ 61, 62 },
		{ 106, 80 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 61, 62 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 107, 81 },
		{ 108, 82 },
		{ 109, 83 },
		{ 110, 84 },
		{ 111, 85 },
		{ 112, 87 },
		{ 113, 88 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 114, 89 },
		{ 115, 90 },
		{ 49, 7 },
		{ 50, 8 },
		{ 24, 160 },
		{ 119, 95 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 24, 160 },
		{ 93, 93 },
		{ 93, 93 },
		{ 93, 93 },
		{ 93, 93 },
		{ 93, 93 },
		{ 93, 93 },
		{ 93, 93 },
		{ 93, 93 },
		{ 93, 93 },
		{ 93, 93 },
		{ 118, 118 },
		{ 118, 118 },
		{ 118, 118 },
		{ 118, 118 },
		{ 118, 118 },
		{ 118, 118 },
		{ 118, 118 },
		{ 118, 118 },
		{ 118, 118 },
		{ 118, 118 },
		{ 120, 96 },
		{ 117, 93 },
		{ 121, 97 },
		{ 122, 98 },
		{ 123, 99 },
		{ 124, 101 },
		{ 125, 102 },
		{ 126, 104 },
		{ 127, 105 },
		{ 128, 106 },
		{ 129, 107 },
		{ 130, 108 },
		{ 131, 109 },
		{ 132, 110 },
		{ 133, 111 },
		{ 134, 112 },
		{ 135, 113 },
		{ 136, 114 },
		{ 137, 115 },
		{ 52, 12 },
		{ 78, 34 },
		{ 138, 121 },
		{ 139, 123 },
		{ 140, 124 },
		{ 141, 126 },
		{ 142, 127 },
		{ 143, 128 },
		{ 144, 130 },
		{ 145, 131 },
		{ 146, 133 },
		{ 147, 134 },
		{ 148, 135 },
		{ 149, 136 },
		{ 150, 137 },
		{ 151, 138 },
		{ 152, 140 },
		{ 79, 35 },
		{ 155, 143 },
		{ 156, 145 },
		{ 157, 147 },
		{ 158, 148 },
		{ 157, 149 },
		{ 159, 150 },
		{ 160, 152 },
		{ 161, 153 },
		{ 162, 154 },
		{ 163, 158 },
		{ 163, 159 },
		{ 80, 36 },
		{ 164, 161 },
		{ 165, 162 },
		{ 166, 165 },
		{ 167, 166 },
		{ 168, 167 },
		{ 169, 168 },
		{ 170, 169 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 160, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 52, 1 },
		{ 0, 51, 47 },
		{ 44, 0, 0 },
		{ 0, -9, 0 },
		{ 0, 177, 52 },
		{ 0, 201, 55 },
		{ 51, 0, 0 },
		{ 0, 0, 39 },
		{ 0, 0, 40 },
		{ 0, 246, 50 },
		{ 0, 17, 48 },
		{ 0, 0, 56 },
		{ 0, 18, 49 },
		{ 0, 0, 57 },
		{ 0, -38, 51 },
		{ 61, 19, 30 },
		{ 0, 0, 58 },
		{ 0, 0, 46 },
		{ 65, -47, 31 },
		{ 0, 16, 45 },
		{ 0, 42, 35 },
		{ 160, 0, 29 },
		{ 0, 0, 43 },
		{ 0, 0, 44 },
		{ 0, 0, 53 },
		{ 160, -104, 29 },
		{ 160, 2, 29 },
		{ 160, 6, 29 },
		{ 160, -90, 29 },
		{ 160, -95, 29 },
		{ 160, -91, 29 },
		{ 160, 197, 29 },
		{ 160, 210, 29 },
		{ 160, 235, 29 },
		{ 160, -94, 29 },
		{ 160, -91, 29 },
		{ 160, -46, 29 },
		{ 0, 0, 41 },
		{ 0, -58, 54 },
		{ 0, 0, 42 },
		{ 0, 0, 34 },
		{ -5, 46, 5 },
		{ 0, 12, 0 },
		{ 0, 4, 0 },
		{ 0, -3, 0 },
		{ 0, -8, 0 },
		{ 0, 0, 63 },
		{ 0, 0, 38 },
		{ -9, 18, 6 },
		{ 0, 0, 62 },
		{ 0, 0, 65 },
		{ 0, 0, 59 },
		{ 0, 0, 64 },
		{ 0, 0, 60 },
		{ -57, 63, 0 },
		{ -58, 98, 0 },
		{ 0, 0, 61 },
		{ 93, 40, 0 },
		{ 62, 56, 9 },
		{ 117, 70, 9 },
		{ 65, 0, 0 },
		{ 65, 0, 32 },
		{ -63, -7, 7 },
		{ 0, 0, 33 },
		{ 0, 0, 36 },
		{ 160, 17, 29 },
		{ 160, 13, 29 },
		{ 160, 13, 29 },
		{ 160, 16, 29 },
		{ 160, 21, 29 },
		{ 160, 19, 29 },
		{ 160, 18, 29 },
		{ 160, 45, 29 },
		{ 160, 0, 10 },
		{ 160, 46, 29 },
		{ 160, 53, 29 },
		{ 160, 59, 29 },
		{ 160, 50, 29 },
		{ 160, 106, 29 },
		{ 160, 93, 29 },
		{ 160, 91, 29 },
		{ 160, 101, 29 },
		{ 160, 102, 29 },
		{ 0, 0, 37 },
		{ 0, 138, 0 },
		{ 0, 142, 0 },
		{ 0, 134, 0 },
		{ 0, 138, 0 },
		{ -57, -34, 0 },
		{ 0, 0, 2 },
		{ 0, 220, 30 },
		{ 118, 0, 0 },
		{ 160, 133, 29 },
		{ 160, 187, 29 },
		{ 160, 192, 29 },
		{ 160, 190, 29 },
		{ 160, 195, 29 },
		{ 160, 0, 13 },
		{ 160, 194, 29 },
		{ 160, 183, 29 },
		{ 160, 0, 17 },
		{ 160, 192, 29 },
		{ 160, 186, 29 },
		{ 160, 180, 29 },
		{ 160, 188, 29 },
		{ 160, 185, 29 },
		{ 160, 183, 29 },
		{ 160, 201, 29 },
		{ 160, 194, 29 },
		{ 0, 230, 0 },
		{ 0, 228, 0 },
		{ 0, 200, 0 },
		{ 0, 198, 0 },
		{ 0, 0, 3 },
		{ 118, 44, 0 },
		{ 0, 230, 30 },
		{ 160, 0, 24 },
		{ 160, 0, 26 },
		{ 160, 201, 29 },
		{ 160, 0, 11 },
		{ 160, 194, 29 },
		{ 160, 207, 29 },
		{ 160, 0, 15 },
		{ 160, 280, 29 },
		{ 160, 197, 29 },
		{ 160, 200, 29 },
		{ 160, 0, 27 },
		{ 160, 199, 29 },
		{ 160, 217, 29 },
		{ 160, 0, 18 },
		{ 160, 216, 29 },
		{ 0, 240, 0 },
		{ 0, 234, 0 },
		{ 0, 210, 0 },
		{ 0, 204, 0 },
		{ 160, 221, 29 },
		{ 160, 0, 23 },
		{ 160, 226, 29 },
		{ 0, -93, 0 },
		{ 160, 0, 28 },
		{ 160, 215, 29 },
		{ 160, 0, 25 },
		{ 160, 210, 29 },
		{ 160, 0, 12 },
		{ 0, 258, 0 },
		{ 0, 260, 0 },
		{ 0, 228, 0 },
		{ 0, 230, 0 },
		{ 160, 0, 21 },
		{ 160, 217, 29 },
		{ 0, 222, 0 },
		{ 0, 222, 0 },
		{ 160, 0, 14 },
		{ 160, 0, 19 },
		{ 0, 0, 4 },
		{ 0, 265, 0 },
		{ 0, 234, 0 },
		{ 0, 145, 16 },
		{ 0, 221, 0 },
		{ 0, 228, 0 },
		{ 0, 0, 8 },
		{ 0, 0, 20 },
		{ 0, 236, 0 },
		{ 0, 308, 0 },
		{ 0, 236, 0 },
		{ 0, 232, 0 },
		{ 0, 227, 0 },
		{ 0, 0, 22 }
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
#line 624 ".\\mylexer.l"


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
