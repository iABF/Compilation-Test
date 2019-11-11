/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 56 of your 30 day trial period.
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
* Date: 11/11/19
* Time: 14:21:08
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
#line 47 ".\\mylexer.l"

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

#line 160 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 61 ".\\mylexer.l"
/* no action and no return */
#line 167 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 62 ".\\mylexer.l"
fprintf(fp, "SGLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng - 1, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 174 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 63 ".\\mylexer.l"
fprintf(fp, "MTLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 181 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 64 ".\\mylexer.l"

	fprintf(fp, "DEFINE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DEFINE;

#line 196 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 73 ".\\mylexer.l"

	fprintf(fp, "STRING\t\t");
	fflush(fp); fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRING;

#line 210 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 81 ".\\mylexer.l"

	fprintf(fp, "SGLSTRING\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRING;

#line 225 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 90 ".\\mylexer.l"
fprintf(fp, "ABRACKET\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 232 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 91 ".\\mylexer.l"

	fprintf(fp, "INCLUDE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return INCLUDE;

#line 247 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 100 ".\\mylexer.l"
fprintf(fp, "ERROR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 254 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 102 ".\\mylexer.l"

	fprintf(fp, "IF\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return IF;

#line 269 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 111 ".\\mylexer.l"

	fprintf(fp, "ELSE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ELSE;

#line 284 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 120 ".\\mylexer.l"

	fprintf(fp, "WHILE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return WHILE;

#line 299 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 129 ".\\mylexer.l"

	fprintf(fp, "FOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return FOR;

#line 314 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 138 ".\\mylexer.l"

	fprintf(fp, "RETURN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return RETURN;

#line 329 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 147 ".\\mylexer.l"

	fprintf(fp, "GOTO\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GOTO;

#line 344 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 156 ".\\mylexer.l"

	fprintf(fp, "GETCHAR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GETCHAR;

#line 359 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 166 ".\\mylexer.l"

	fprintf(fp, "INT\t\t");
	fflush(fp); fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return INT;

#line 373 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 174 ".\\mylexer.l"

	fprintf(fp, "VOID\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return VOID;

#line 388 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 183 ".\\mylexer.l"

	fprintf(fp, "STRUCT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return STRUCT;

#line 403 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 192 ".\\mylexer.l"

	fprintf(fp, "LONGINT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LONGINT;

#line 418 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 201 ".\\mylexer.l"

	fprintf(fp, "DOUBLE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DOUBLE;

#line 433 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 210 ".\\mylexer.l"

	fprintf(fp, "LONGLONGINT\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LONGLONGINT;

#line 448 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 219 ".\\mylexer.l"

	fprintf(fp, "FLOAT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return FLOAT;

#line 463 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 228 ".\\mylexer.l"

	fprintf(fp, "BOOL\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BOOL;

#line 478 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 237 ".\\mylexer.l"

	fprintf(fp, "SHORT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return SHORT;

#line 493 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 246 ".\\mylexer.l"

	fprintf(fp, "BYTE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BYTE;

#line 508 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 257 ".\\mylexer.l"

	fprintf(fp, "MAIN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MAIN;

#line 523 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 266 ".\\mylexer.l"

	fprintf(fp, "SCAN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return SCAN;

#line 538 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 275 ".\\mylexer.l"

	fprintf(fp, "PRINT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return PRINT;

#line 553 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 285 ".\\mylexer.l"

	yylval.symp = symlook(yytext);
	fprintf(fp, "ID\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%d\n", yylval.symp);
	fflush(fp);
	return ID;

#line 569 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 295 ".\\mylexer.l"

	yylval.dval = atof(yytext);
	fprintf(fp, "NUMBER\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\t\t%g\n", yylval.dval);
	fflush(fp);
	return NUMBER;

#line 585 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 306 ".\\mylexer.l"

	fprintf(fp, "LT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 600 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 315 ".\\mylexer.l"

	fprintf(fp, "LE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LE;

#line 615 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 324 ".\\mylexer.l"

	fprintf(fp, "EQ\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return EQ;

#line 630 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 333 ".\\mylexer.l"

	fprintf(fp, "NE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return NE;

#line 645 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 342 ".\\mylexer.l"

	fprintf(fp, "GT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 660 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 351 ".\\mylexer.l"

	fprintf(fp, "GE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return GE;

#line 675 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 360 ".\\mylexer.l"

	fprintf(fp, "OR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return OR;

#line 690 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 369 ".\\mylexer.l"

	fprintf(fp, "AND\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AND;

#line 705 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 379 ".\\mylexer.l"

	fprintf(fp, "LP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 720 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 388 ".\\mylexer.l"

	fprintf(fp, "RP\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 735 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 397 ".\\mylexer.l"

	fprintf(fp, "LBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return LBRACE;

#line 750 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 406 ".\\mylexer.l"

	fprintf(fp, "RBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return RBRACE;

#line 765 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 415 ".\\mylexer.l"

	fprintf(fp, "LMBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 780 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 424 ".\\mylexer.l"

	fprintf(fp, "RMBRACE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 795 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 434 ".\\mylexer.l"

	fprintf(fp, "ASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 810 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 443 ".\\mylexer.l"

	fprintf(fp, "SEMICOLON\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 825 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 452 ".\\mylexer.l"

	fprintf(fp, "LNOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 840 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 461 ".\\mylexer.l"

	fprintf(fp, "ADD\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 855 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 470 ".\\mylexer.l"

	fprintf(fp, "SUBTRACT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 870 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 479 ".\\mylexer.l"

	fprintf(fp, "MULTIPLY\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 885 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 488 ".\\mylexer.l"

	fprintf(fp, "DIVIDE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 900 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 497 ".\\mylexer.l"

	fprintf(fp, "MOD\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 915 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 506 ".\\mylexer.l"

	fprintf(fp, "XOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 930 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 515 ".\\mylexer.l"

	fprintf(fp, "BITOR\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 945 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 524 ".\\mylexer.l"

	fprintf(fp, "BITAND\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 960 "mylexer.cpp"
		}
		break;
	case 57:
		{
#line 533 ".\\mylexer.l"

	fprintf(fp, "COMMA\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 975 "mylexer.cpp"
		}
		break;
	case 58:
		{
#line 542 ".\\mylexer.l"

	fprintf(fp, "DOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 990 "mylexer.cpp"
		}
		break;
	case 59:
		{
#line 551 ".\\mylexer.l"

	fprintf(fp, "COLON\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 1005 "mylexer.cpp"
		}
		break;
	case 60:
		{
#line 560 ".\\mylexer.l"

	fprintf(fp, "ADDASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ADDASSIGN;

#line 1020 "mylexer.cpp"
		}
		break;
	case 61:
		{
#line 569 ".\\mylexer.l"

	fprintf(fp, "ABTRACTASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return ABTRACTASSIGN;

#line 1035 "mylexer.cpp"
		}
		break;
	case 62:
		{
#line 578 ".\\mylexer.l"

	fprintf(fp, "DIVIDEASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return DIVIDEASSIGN;

#line 1050 "mylexer.cpp"
		}
		break;
	case 63:
		{
#line 587 ".\\mylexer.l"

	fprintf(fp, "MULTIPLYASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MULTIPLYASSIGN;

#line 1065 "mylexer.cpp"
		}
		break;
	case 64:
		{
#line 596 ".\\mylexer.l"

	fprintf(fp, "MODASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return MODASSIGN;

#line 1080 "mylexer.cpp"
		}
		break;
	case 65:
		{
#line 605 ".\\mylexer.l"

	fprintf(fp, "BITANDASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BITANDASSIGN;

#line 1095 "mylexer.cpp"
		}
		break;
	case 66:
		{
#line 614 ".\\mylexer.l"

	fprintf(fp, "XORASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return XORASSIGN;

#line 1110 "mylexer.cpp"
		}
		break;
	case 67:
		{
#line 623 ".\\mylexer.l"

	fprintf(fp, "BITORASSIGN\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return BITORASSIGN;

#line 1125 "mylexer.cpp"
		}
		break;
	case 68:
		{
#line 632 ".\\mylexer.l"

	fprintf(fp, "AUTODECRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTODECRE;

#line 1140 "mylexer.cpp"
		}
		break;
	case 69:
		{
#line 641 ".\\mylexer.l"

	fprintf(fp, "AUTOINCRE\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return AUTOINCRE;

#line 1155 "mylexer.cpp"
		}
		break;
	case 70:
		{
#line 650 ".\\mylexer.l"

	fprintf(fp, "BITNOT\t\t");
	fflush(fp);
	fwrite(yytext, yyleng, 1, fp);
	fflush(fp);
	fprintf(fp, "\n");
	fflush(fp);
	return yytext[0];

#line 1170 "mylexer.cpp"
		}
		break;
#line 661 ".\\mylexer.l"

	fclose(fp);
	

#line 1178 "mylexer.cpp"
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

	yytransitionmax = 350;
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
		{ 159, 147 },
		{ 85, 38 },
		{ 78, 33 },
		{ 160, 147 },
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
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 111, 83 },
		{ 112, 84 },
		{ 113, 85 },
		{ 114, 86 },
		{ 115, 87 },
		{ 116, 88 },
		{ 117, 91 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 118, 92 },
		{ 119, 93 },
		{ 120, 94 },
		{ 80, 34 },
		{ 24, 166 },
		{ 81, 35 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
		{ 24, 166 },
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
		{ 150, 136 },
		{ 151, 137 },
		{ 152, 139 },
		{ 153, 140 },
		{ 154, 141 },
		{ 155, 142 },
		{ 156, 143 },
		{ 157, 144 },
		{ 158, 146 },
		{ 69, 27 },
		{ 161, 149 },
		{ 162, 151 },
		{ 163, 153 },
		{ 164, 154 },
		{ 163, 155 },
		{ 165, 156 },
		{ 166, 158 },
		{ 167, 159 },
		{ 168, 160 },
		{ 169, 164 },
		{ 169, 165 },
		{ 87, 39 },
		{ 170, 167 },
		{ 171, 168 },
		{ 172, 171 },
		{ 173, 172 },
		{ 174, 173 },
		{ 175, 174 },
		{ 176, 175 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 166, -8, 0 },
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
		{ 166, 0, 30 },
		{ 0, 0, 44 },
		{ 0, 0, 45 },
		{ 0, 269, 54 },
		{ 166, -105, 30 },
		{ 166, -90, 30 },
		{ 166, -9, 30 },
		{ 166, -93, 30 },
		{ 166, -94, 30 },
		{ 166, -91, 30 },
		{ 166, 129, 30 },
		{ 166, 145, 30 },
		{ 166, 199, 30 },
		{ 166, 213, 30 },
		{ 166, -94, 30 },
		{ 166, 231, 30 },
		{ 166, -90, 30 },
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
		{ 166, 18, 30 },
		{ 166, 14, 30 },
		{ 166, 14, 30 },
		{ 166, 17, 30 },
		{ 166, 22, 30 },
		{ 166, 20, 30 },
		{ 166, 19, 30 },
		{ 166, 46, 30 },
		{ 166, 0, 10 },
		{ 166, 47, 30 },
		{ 166, 54, 30 },
		{ 166, 60, 30 },
		{ 166, 62, 30 },
		{ 166, 88, 30 },
		{ 166, 108, 30 },
		{ 166, 95, 30 },
		{ 166, 93, 30 },
		{ 166, 103, 30 },
		{ 166, 104, 30 },
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
		{ 166, 172, 30 },
		{ 166, 180, 30 },
		{ 166, 184, 30 },
		{ 166, 182, 30 },
		{ 166, 188, 30 },
		{ 166, 0, 13 },
		{ 166, 187, 30 },
		{ 166, 176, 30 },
		{ 166, 0, 17 },
		{ 166, 185, 30 },
		{ 166, 179, 30 },
		{ 166, 181, 30 },
		{ 166, 175, 30 },
		{ 166, 183, 30 },
		{ 166, 180, 30 },
		{ 166, 178, 30 },
		{ 166, 196, 30 },
		{ 166, 189, 30 },
		{ 0, 236, 0 },
		{ 0, 234, 0 },
		{ 0, 206, 0 },
		{ 0, 204, 0 },
		{ 0, 0, 3 },
		{ 123, 46, 0 },
		{ 0, 251, 31 },
		{ 166, 0, 24 },
		{ 166, 0, 26 },
		{ 166, 207, 30 },
		{ 166, 0, 11 },
		{ 166, 200, 30 },
		{ 166, 213, 30 },
		{ 166, 0, 15 },
		{ 166, 286, 30 },
		{ 166, 0, 27 },
		{ 166, 203, 30 },
		{ 166, 206, 30 },
		{ 166, 0, 28 },
		{ 166, 205, 30 },
		{ 166, 223, 30 },
		{ 166, 0, 18 },
		{ 166, 222, 30 },
		{ 0, 246, 0 },
		{ 0, 240, 0 },
		{ 0, 216, 0 },
		{ 0, 210, 0 },
		{ 166, 227, 30 },
		{ 166, 0, 23 },
		{ 166, 232, 30 },
		{ 0, -96, 0 },
		{ 166, 0, 29 },
		{ 166, 221, 30 },
		{ 166, 0, 25 },
		{ 166, 216, 30 },
		{ 166, 0, 12 },
		{ 0, 264, 0 },
		{ 0, 266, 0 },
		{ 0, 234, 0 },
		{ 0, 236, 0 },
		{ 166, 0, 21 },
		{ 166, 223, 30 },
		{ 0, 228, 0 },
		{ 0, 228, 0 },
		{ 166, 0, 14 },
		{ 166, 0, 19 },
		{ 0, 0, 4 },
		{ 0, 271, 0 },
		{ 0, 240, 0 },
		{ 0, 146, 16 },
		{ 0, 227, 0 },
		{ 0, 234, 0 },
		{ 0, 0, 8 },
		{ 0, 0, 20 },
		{ 0, 242, 0 },
		{ 0, 314, 0 },
		{ 0, 242, 0 },
		{ 0, 238, 0 },
		{ 0, 233, 0 },
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
#line 667 ".\\mylexer.l"


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
