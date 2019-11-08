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
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 11/08/19
* Time: 21:55:17
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
extern struct symtable symtable[MAXSYM];

#line 54 "mylexer.cpp"
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
#line 29 ".\\mylexer.l"

	// place any extra initialisation code here

#line 78 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 34 ".\\mylexer.l"

	// place any extra cleanup code here

#line 90 "mylexer.cpp"
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
#line 63 ".\\mylexer.l"

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

#line 170 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 77 ".\\mylexer.l"
/* no action and no return */
#line 177 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 78 ".\\mylexer.l"
fprintf(fp, "SGLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng - 1, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 184 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 79 ".\\mylexer.l"
fprintf(fp, "MTLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 191 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 80 ".\\mylexer.l"

	fprintf(fp, "DEFINE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DEFINE;

#line 206 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 89 ".\\mylexer.l"

	fprintf(fp, "STRING\t\t");
	fflush(fp); fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRING;

#line 220 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 97 ".\\mylexer.l"

	fprintf(fp, "SGLSTRING\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRING;

#line 235 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 106 ".\\mylexer.l"
fprintf(fp, "ABRACKET\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 242 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 107 ".\\mylexer.l"

	fprintf(fp, "INCLUDE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return INCLUDE;

#line 257 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 116 ".\\mylexer.l"
fprintf(fp, "ERROR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 264 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 118 ".\\mylexer.l"

	fprintf(fp, "IF\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return IF;

#line 279 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 127 ".\\mylexer.l"

	fprintf(fp, "ELSE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ELSE;

#line 294 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 136 ".\\mylexer.l"

	fprintf(fp, "WHILE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return WHILE;

#line 309 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 145 ".\\mylexer.l"

	fprintf(fp, "FOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return FOR;

#line 324 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 154 ".\\mylexer.l"

	fprintf(fp, "RETURN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return RETURN;

#line 339 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 163 ".\\mylexer.l"

	fprintf(fp, "GOTO\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GOTO;

#line 354 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 172 ".\\mylexer.l"

	fprintf(fp, "GETCHAR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GETCHAR;

#line 369 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 182 ".\\mylexer.l"

	fprintf(fp, "INT\t\t");
	fflush(fp); fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return INT;

#line 383 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 190 ".\\mylexer.l"

	fprintf(fp, "VOID\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return VOID;

#line 398 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 199 ".\\mylexer.l"

	fprintf(fp, "STRUCT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRUCT;

#line 413 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 208 ".\\mylexer.l"

	fprintf(fp, "LONGINT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LONGINT;

#line 428 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 217 ".\\mylexer.l"

	fprintf(fp, "DOUBLE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DOUBLE;

#line 443 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 226 ".\\mylexer.l"

	fprintf(fp, "LONGLONGINT\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LONGLONGINT;

#line 458 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 235 ".\\mylexer.l"

	fprintf(fp, "FLOAT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return FLOAT;

#line 473 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 244 ".\\mylexer.l"

	fprintf(fp, "BOOL\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BOOL;

#line 488 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 253 ".\\mylexer.l"

	fprintf(fp, "SHORT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return SHORT;

#line 503 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 262 ".\\mylexer.l"

	fprintf(fp, "BYTE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BYTE;

#line 518 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 273 ".\\mylexer.l"

	fprintf(fp, "MAIN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MAIN;

#line 533 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 282 ".\\mylexer.l"

	fprintf(fp, "SCANF\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return SCANF;

#line 548 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 291 ".\\mylexer.l"

	fprintf(fp, "PRINTF\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return PRINTF;

#line 563 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 301 ".\\mylexer.l"

	yylval.symp = symlook(yytext);
	fprintf(fp, "ID\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%d\n", yylval.symp);
	fflush(fp);
	return ID;

#line 579 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 311 ".\\mylexer.l"

	yylval.dval = atof(yytext);
	fprintf(fp, "NUMBER\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%g\n", yylval.dval);
	fflush(fp);
	return NUMBER;

#line 595 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 322 ".\\mylexer.l"

	fprintf(fp, "LT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 610 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 331 ".\\mylexer.l"

	fprintf(fp, "LE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LE;

#line 625 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 340 ".\\mylexer.l"

	fprintf(fp, "EQ\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return EQ;

#line 640 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 349 ".\\mylexer.l"

	fprintf(fp, "NE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return NE;

#line 655 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 358 ".\\mylexer.l"

	fprintf(fp, "GT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 670 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 367 ".\\mylexer.l"

	fprintf(fp, "GE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GE;

#line 685 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 376 ".\\mylexer.l"

	fprintf(fp, "OR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return OR;

#line 700 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 385 ".\\mylexer.l"

	fprintf(fp, "AND\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AND;

#line 715 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 395 ".\\mylexer.l"

	fprintf(fp, "LP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 730 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 404 ".\\mylexer.l"

	fprintf(fp, "RP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 745 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 413 ".\\mylexer.l"

	fprintf(fp, "LBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 760 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 422 ".\\mylexer.l"

	fprintf(fp, "RBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 775 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 431 ".\\mylexer.l"

	fprintf(fp, "LMBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 790 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 440 ".\\mylexer.l"

	fprintf(fp, "RMBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 805 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 450 ".\\mylexer.l"

	fprintf(fp, "ASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 820 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 459 ".\\mylexer.l"

	fprintf(fp, "SEMICOLON\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 835 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 468 ".\\mylexer.l"

	fprintf(fp, "LNOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 850 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 477 ".\\mylexer.l"

	fprintf(fp, "ADD\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 865 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 486 ".\\mylexer.l"

	fprintf(fp, "SUBTRACT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 880 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 495 ".\\mylexer.l"

	fprintf(fp, "MULTIPLY\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 895 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 504 ".\\mylexer.l"

	fprintf(fp, "DIVIDE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 910 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 513 ".\\mylexer.l"

	fprintf(fp, "MOD\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 925 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 522 ".\\mylexer.l"

	fprintf(fp, "XOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 940 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 531 ".\\mylexer.l"

	fprintf(fp, "BITOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 955 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 540 ".\\mylexer.l"

	fprintf(fp, "BITAND\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 970 "mylexer.cpp"
		}
		break;
	case 57:
		{
#line 549 ".\\mylexer.l"

	fprintf(fp, "COMMA\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 985 "mylexer.cpp"
		}
		break;
	case 58:
		{
#line 558 ".\\mylexer.l"

	fprintf(fp, "DOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 1000 "mylexer.cpp"
		}
		break;
	case 59:
		{
#line 567 ".\\mylexer.l"

	fprintf(fp, "COLON\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 1015 "mylexer.cpp"
		}
		break;
	case 60:
		{
#line 576 ".\\mylexer.l"

	fprintf(fp, "ADDASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ADDASSIGN;

#line 1030 "mylexer.cpp"
		}
		break;
	case 61:
		{
#line 585 ".\\mylexer.l"

	fprintf(fp, "ABTRACTASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ABTRACTASSIGN;

#line 1045 "mylexer.cpp"
		}
		break;
	case 62:
		{
#line 594 ".\\mylexer.l"

	fprintf(fp, "DIVIDEASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DIVIDEASSIGN;

#line 1060 "mylexer.cpp"
		}
		break;
	case 63:
		{
#line 603 ".\\mylexer.l"

	fprintf(fp, "MULTIPLYASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MULTIPLYASSIGN;

#line 1075 "mylexer.cpp"
		}
		break;
	case 64:
		{
#line 612 ".\\mylexer.l"

	fprintf(fp, "MODASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MODASSIGN;

#line 1090 "mylexer.cpp"
		}
		break;
	case 65:
		{
#line 621 ".\\mylexer.l"

	fprintf(fp, "BITANDASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BITANDASSIGN;

#line 1105 "mylexer.cpp"
		}
		break;
	case 66:
		{
#line 630 ".\\mylexer.l"

	fprintf(fp, "XORASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return XORASSIGN;

#line 1120 "mylexer.cpp"
		}
		break;
	case 67:
		{
#line 639 ".\\mylexer.l"

	fprintf(fp, "BITORASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BITORASSIGN;

#line 1135 "mylexer.cpp"
		}
		break;
	case 68:
		{
#line 648 ".\\mylexer.l"

	fprintf(fp, "AUTODECRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTODECRE;

#line 1150 "mylexer.cpp"
		}
		break;
	case 69:
		{
#line 657 ".\\mylexer.l"

	fprintf(fp, "AUTOINCRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTOINCRE;

#line 1165 "mylexer.cpp"
		}
		break;
	case 70:
		{
#line 666 ".\\mylexer.l"

	fprintf(fp, "BITNOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 1180 "mylexer.cpp"
		}
		break;
#line 677 ".\\mylexer.l"

	fclose(fp);
	

#line 1188 "mylexer.cpp"
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

	yytransitionmax = 355;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 3, 1 },
		{ 89, 42 },
		{ 0, 66 },
		{ 84, 38 },
		{ 70, 28 },
		{ 76, 32 },
		{ 95, 95 },
		{ 160, 147 },
		{ 85, 38 },
		{ 78, 33 },
		{ 161, 147 },
		{ 121, 95 },
		{ 88, 40 },
		{ 74, 31 },
		{ 71, 28 },
		{ 77, 32 },
		{ 75, 31 },
		{ 79, 33 },
		{ 45, 4 },
		{ 72, 29 },
		{ 86, 38 },
		{ 47, 6 },
		{ 3, 1 },
		{ 4, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 48, 6 },
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
		{ 49, 6 },
		{ 66, 66 },
		{ 0, 46 },
		{ 0, 53 },
		{ 51, 8 },
		{ 50, 6 },
		{ 3, 3 },
		{ 3, 3 },
		{ 56, 15 },
		{ 91, 47 },
		{ 61, 18 },
		{ 90, 42 },
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
		{ 92, 48 },
		{ 54, 13 },
		{ 57, 15 },
		{ 93, 49 },
		{ 46, 46 },
		{ 52, 8 },
		{ 25, 1 },
		{ 3, 3 },
		{ 26, 1 },
		{ 27, 1 },
		{ 53, 53 },
		{ 63, 18 },
		{ 98, 122 },
		{ 28, 1 },
		{ 98, 122 },
		{ 29, 1 },
		{ 30, 1 },
		{ 31, 1 },
		{ 32, 1 },
		{ 55, 13 },
		{ 33, 1 },
		{ 94, 50 },
		{ 73, 30 },
		{ 34, 1 },
		{ 35, 1 },
		{ 95, 58 },
		{ 0, 62 },
		{ 36, 1 },
		{ 0, 62 },
		{ 37, 1 },
		{ 38, 1 },
		{ 96, 59 },
		{ 0, 61 },
		{ 39, 1 },
		{ 40, 1 },
		{ 65, 21 },
		{ 67, 22 },
		{ 68, 23 },
		{ 41, 1 },
		{ 42, 1 },
		{ 43, 1 },
		{ 44, 1 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 99, 70 },
		{ 100, 71 },
		{ 101, 72 },
		{ 102, 73 },
		{ 103, 74 },
		{ 104, 75 },
		{ 105, 76 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 106, 77 },
		{ 107, 79 },
		{ 108, 80 },
		{ 109, 81 },
		{ 62, 63 },
		{ 110, 82 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 62, 63 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 111, 83 },
		{ 112, 84 },
		{ 113, 85 },
		{ 114, 86 },
		{ 115, 87 },
		{ 116, 88 },
		{ 117, 91 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 118, 92 },
		{ 119, 93 },
		{ 120, 94 },
		{ 80, 34 },
		{ 24, 169 },
		{ 81, 35 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 24, 169 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 58, 17 },
		{ 124, 99 },
		{ 125, 100 },
		{ 126, 101 },
		{ 127, 102 },
		{ 59, 17 },
		{ 128, 103 },
		{ 129, 105 },
		{ 130, 106 },
		{ 131, 108 },
		{ 132, 109 },
		{ 122, 97 },
		{ 133, 110 },
		{ 134, 111 },
		{ 135, 112 },
		{ 136, 113 },
		{ 137, 114 },
		{ 138, 115 },
		{ 139, 116 },
		{ 60, 17 },
		{ 123, 123 },
		{ 123, 123 },
		{ 123, 123 },
		{ 123, 123 },
		{ 123, 123 },
		{ 123, 123 },
		{ 123, 123 },
		{ 123, 123 },
		{ 123, 123 },
		{ 123, 123 },
		{ 140, 117 },
		{ 141, 118 },
		{ 142, 119 },
		{ 143, 120 },
		{ 82, 36 },
		{ 83, 37 },
		{ 144, 126 },
		{ 145, 128 },
		{ 146, 129 },
		{ 147, 131 },
		{ 148, 133 },
		{ 149, 134 },
		{ 150, 135 },
		{ 151, 136 },
		{ 152, 137 },
		{ 153, 139 },
		{ 154, 140 },
		{ 155, 141 },
		{ 156, 142 },
		{ 157, 143 },
		{ 158, 144 },
		{ 159, 146 },
		{ 69, 27 },
		{ 162, 148 },
		{ 163, 149 },
		{ 164, 152 },
		{ 165, 154 },
		{ 166, 155 },
		{ 167, 156 },
		{ 168, 157 },
		{ 169, 159 },
		{ 170, 160 },
		{ 171, 161 },
		{ 172, 165 },
		{ 173, 166 },
		{ 173, 168 },
		{ 87, 39 },
		{ 174, 170 },
		{ 175, 171 },
		{ 176, 172 },
		{ 177, 175 },
		{ 167, 176 },
		{ 178, 177 },
		{ 179, 178 },
		{ 180, 179 },
		{ 181, 180 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 169, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 52, 1 },
		{ 0, -41, 48 },
		{ 46, 0, 0 },
		{ 0, -45, 0 },
		{ 0, 0, 53 },
		{ 0, 21, 56 },
		{ 53, 0, 0 },
		{ 0, 0, 40 },
		{ 0, 0, 41 },
		{ 0, 0, 51 },
		{ 0, 35, 49 },
		{ 0, 0, 57 },
		{ 0, 18, 50 },
		{ 0, 0, 58 },
		{ 0, 237, 52 },
		{ 62, 19, 31 },
		{ 0, 0, 59 },
		{ 0, 0, 47 },
		{ 66, 51, 32 },
		{ 0, 52, 46 },
		{ 0, 53, 36 },
		{ 169, 0, 30 },
		{ 0, 0, 44 },
		{ 0, 0, 45 },
		{ 0, 270, 54 },
		{ 169, -105, 30 },
		{ 169, -90, 30 },
		{ 169, -9, 30 },
		{ 169, -93, 30 },
		{ 169, -94, 30 },
		{ 169, -91, 30 },
		{ 169, 129, 30 },
		{ 169, 145, 30 },
		{ 169, 199, 30 },
		{ 169, 213, 30 },
		{ 169, -94, 30 },
		{ 169, 234, 30 },
		{ 169, -90, 30 },
		{ 0, 0, 42 },
		{ 0, -58, 55 },
		{ 0, 0, 43 },
		{ 0, 0, 70 },
		{ 0, 0, 35 },
		{ -5, 47, 5 },
		{ 0, -5, 0 },
		{ 0, -1, 0 },
		{ 0, -21, 0 },
		{ 0, -12, 0 },
		{ 0, 0, 39 },
		{ 0, 0, 65 },
		{ -9, 48, 6 },
		{ 0, 0, 69 },
		{ 0, 0, 60 },
		{ 0, 0, 68 },
		{ 0, 0, 61 },
		{ -58, 60, 0 },
		{ -59, 98, 0 },
		{ 0, 0, 62 },
		{ 97, 40, 0 },
		{ 63, 60, 9 },
		{ 122, 71, 9 },
		{ 66, 0, 0 },
		{ 66, 0, 33 },
		{ -64, -6, 7 },
		{ 0, 0, 34 },
		{ 0, 0, 37 },
		{ 0, 0, 66 },
		{ 169, 18, 30 },
		{ 169, 14, 30 },
		{ 169, 14, 30 },
		{ 169, 17, 30 },
		{ 169, 22, 30 },
		{ 169, 20, 30 },
		{ 169, 19, 30 },
		{ 169, 46, 30 },
		{ 169, 0, 10 },
		{ 169, 47, 30 },
		{ 169, 54, 30 },
		{ 169, 60, 30 },
		{ 169, 62, 30 },
		{ 169, 88, 30 },
		{ 169, 108, 30 },
		{ 169, 95, 30 },
		{ 169, 93, 30 },
		{ 169, 103, 30 },
		{ 169, 104, 30 },
		{ 0, 0, 67 },
		{ 0, 0, 38 },
		{ 0, 140, 0 },
		{ 0, 170, 0 },
		{ 0, 136, 0 },
		{ 0, 140, 0 },
		{ -58, -34, 0 },
		{ 0, 0, 2 },
		{ 0, 221, 31 },
		{ 123, 0, 0 },
		{ 169, 172, 30 },
		{ 169, 180, 30 },
		{ 169, 184, 30 },
		{ 169, 182, 30 },
		{ 169, 188, 30 },
		{ 169, 0, 13 },
		{ 169, 187, 30 },
		{ 169, 176, 30 },
		{ 169, 0, 17 },
		{ 169, 185, 30 },
		{ 169, 179, 30 },
		{ 169, 181, 30 },
		{ 169, 175, 30 },
		{ 169, 183, 30 },
		{ 169, 180, 30 },
		{ 169, 178, 30 },
		{ 169, 196, 30 },
		{ 169, 189, 30 },
		{ 0, 236, 0 },
		{ 0, 234, 0 },
		{ 0, 206, 0 },
		{ 0, 204, 0 },
		{ 0, 0, 3 },
		{ 123, 46, 0 },
		{ 0, 251, 31 },
		{ 169, 0, 24 },
		{ 169, 0, 26 },
		{ 169, 207, 30 },
		{ 169, 0, 11 },
		{ 169, 200, 30 },
		{ 169, 213, 30 },
		{ 169, 0, 15 },
		{ 169, 286, 30 },
		{ 169, 0, 27 },
		{ 169, 203, 30 },
		{ 169, 206, 30 },
		{ 169, 219, 30 },
		{ 169, 206, 30 },
		{ 169, 224, 30 },
		{ 169, 0, 18 },
		{ 169, 223, 30 },
		{ 0, 247, 0 },
		{ 0, 241, 0 },
		{ 0, 217, 0 },
		{ 0, 211, 0 },
		{ 169, 228, 30 },
		{ 169, 0, 23 },
		{ 169, 233, 30 },
		{ 0, -96, 0 },
		{ 169, 230, 30 },
		{ 169, 223, 30 },
		{ 169, 0, 28 },
		{ 169, 0, 25 },
		{ 169, 218, 30 },
		{ 169, 0, 12 },
		{ 0, 266, 0 },
		{ 0, 268, 0 },
		{ 0, 236, 0 },
		{ 0, 238, 0 },
		{ 169, 0, 21 },
		{ 169, 225, 30 },
		{ 0, 230, 0 },
		{ 0, 230, 0 },
		{ 169, 0, 29 },
		{ 169, 0, 14 },
		{ 169, 0, 19 },
		{ 0, 239, 0 },
		{ 0, 274, 0 },
		{ 0, 0, 4 },
		{ 0, 243, 0 },
		{ 0, 146, 16 },
		{ 0, 230, 0 },
		{ 0, 237, 0 },
		{ 0, 243, 0 },
		{ 0, 0, 8 },
		{ 0, 0, 20 },
		{ 0, 246, 0 },
		{ 0, 234, 0 },
		{ 0, 319, 0 },
		{ 0, 247, 0 },
		{ 0, 243, 0 },
		{ 0, 238, 0 },
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
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 683 ".\\mylexer.l"


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
