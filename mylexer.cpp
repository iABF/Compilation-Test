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
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 11/07/19
* Time: 11:18:47
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
	fp=fopen("out.txt", "a");
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
fprintf(fp, "DEFINE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 198 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 81 ".\\mylexer.l"
fprintf(fp, "STRING\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 205 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 82 ".\\mylexer.l"
fprintf(fp, "SGLSTRING\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 212 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 83 ".\\mylexer.l"
fprintf(fp, "ABRACKET\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 219 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 84 ".\\mylexer.l"
fprintf(fp, "INCLUDE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 226 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 85 ".\\mylexer.l"
fprintf(fp, "ERROR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 233 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 87 ".\\mylexer.l"
fprintf(fp, "IF\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 240 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 88 ".\\mylexer.l"
fprintf(fp, "ELSE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 247 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 89 ".\\mylexer.l"
fprintf(fp, "WHILE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 254 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 90 ".\\mylexer.l"
fprintf(fp, "FOR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 261 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 91 ".\\mylexer.l"
fprintf(fp, "RETURN\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 268 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 92 ".\\mylexer.l"
fprintf(fp, "GOTO\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 275 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 93 ".\\mylexer.l"
fprintf(fp, "GETCHAR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 282 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 95 ".\\mylexer.l"
fprintf(fp, "INT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 289 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 96 ".\\mylexer.l"
fprintf(fp, "VOID\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 296 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 97 ".\\mylexer.l"
fprintf(fp, "STRUCT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 303 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 98 ".\\mylexer.l"
fprintf(fp, "LONGINT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 310 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 99 ".\\mylexer.l"
fprintf(fp, "DOUBLE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 317 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 100 ".\\mylexer.l"
fprintf(fp, "LONGLONGINT\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 324 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 101 ".\\mylexer.l"
fprintf(fp, "FLOAT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 331 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 102 ".\\mylexer.l"
fprintf(fp, "BOOL\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 338 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 103 ".\\mylexer.l"
fprintf(fp, "SHORT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 345 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 104 ".\\mylexer.l"
fprintf(fp, "BYTE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 352 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 107 ".\\mylexer.l"
fprintf(fp, "MAIN\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 359 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 108 ".\\mylexer.l"
fprintf(fp, "SCANF\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 366 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 109 ".\\mylexer.l"
fprintf(fp, "PRINTF\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 373 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 111 ".\\mylexer.l"

				yylval.symp = symlook(yytext);
				fprintf(fp, "ID\t\t");
				fflush(fp);
				fwrite(yytext, yyleng, 1, fp);
				fflush(fp);
				fprintf(fp, "\t\t%d\n", yylval.symp);
				fflush(fp);
			
#line 388 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 120 ".\\mylexer.l"

				yylval.dval = atof(yytext);
				fprintf(fp, "NUMBER\t\t");
				fflush(fp);
				fwrite(yytext, yyleng, 1, fp);
				fflush(fp);
				fprintf(fp, "\t\t%g\n", yylval.dval);
				fflush(fp);
			
#line 403 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 130 ".\\mylexer.l"
fprintf(fp, "LT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);
#line 410 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 131 ".\\mylexer.l"
fprintf(fp, "LE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);
#line 417 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 132 ".\\mylexer.l"
fprintf(fp, "EQ\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);
#line 424 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 133 ".\\mylexer.l"
fprintf(fp, "NE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);
#line 431 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 134 ".\\mylexer.l"
fprintf(fp, "GT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);
#line 438 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 135 ".\\mylexer.l"
fprintf(fp, "GE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);
#line 445 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 136 ".\\mylexer.l"
fprintf(fp, "OR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);
#line 452 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 137 ".\\mylexer.l"
fprintf(fp, "AND\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);
#line 459 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 139 ".\\mylexer.l"
fprintf(fp, "LP\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 466 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 140 ".\\mylexer.l"
fprintf(fp, "RP\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 473 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 141 ".\\mylexer.l"
fprintf(fp, "LBRACE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 480 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 142 ".\\mylexer.l"
fprintf(fp, "RBRACE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 487 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 143 ".\\mylexer.l"
fprintf(fp, "LMBRACE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 494 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 144 ".\\mylexer.l"
fprintf(fp, "RMBRACE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 501 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 146 ".\\mylexer.l"
fprintf(fp, "ASSIGN\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 508 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 147 ".\\mylexer.l"
fprintf(fp, "SEMICOLON\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 515 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 148 ".\\mylexer.l"
fprintf(fp, "LNOT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 522 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 149 ".\\mylexer.l"
fprintf(fp, "ADD\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 529 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 150 ".\\mylexer.l"
fprintf(fp, "SUBTRACT\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 536 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 151 ".\\mylexer.l"
fprintf(fp, "MULTIPLY\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 543 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 152 ".\\mylexer.l"
fprintf(fp, "DIVIDE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 550 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 153 ".\\mylexer.l"
fprintf(fp, "MOD\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 557 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 154 ".\\mylexer.l"
fprintf(fp, "XOR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 564 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 155 ".\\mylexer.l"
fprintf(fp, "BITOR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 571 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 156 ".\\mylexer.l"
fprintf(fp, "BITAND\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 578 "mylexer.cpp"
		}
		break;
	case 57:
		{
#line 157 ".\\mylexer.l"
fprintf(fp, "COMMA\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 585 "mylexer.cpp"
		}
		break;
	case 58:
		{
#line 158 ".\\mylexer.l"
fprintf(fp, "DOT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 592 "mylexer.cpp"
		}
		break;
	case 59:
		{
#line 159 ".\\mylexer.l"
fprintf(fp, "COLON\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);
#line 599 "mylexer.cpp"
		}
		break;
#line 162 ".\\mylexer.l"

	fclose(fp);
	

#line 607 "mylexer.cpp"
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

	yytransitionmax = 368;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 4, 1 },
		{ 0, 48 },
		{ 0, 39 },
		{ 0, 32 },
		{ 79, 103 },
		{ 141, 128 },
		{ 79, 103 },
		{ 42, 43 },
		{ 142, 128 },
		{ 43, 43 },
		{ 43, 43 },
		{ 43, 43 },
		{ 43, 43 },
		{ 43, 43 },
		{ 43, 43 },
		{ 43, 43 },
		{ 43, 43 },
		{ 43, 43 },
		{ 43, 43 },
		{ 0, 44 },
		{ 70, 28 },
		{ 0, 44 },
		{ 4, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 7, 1 },
		{ 52, 16 },
		{ 32, 32 },
		{ 8, 1 },
		{ 9, 1 },
		{ 45, 43 },
		{ 39, 39 },
		{ 56, 19 },
		{ 71, 29 },
		{ 37, 8 },
		{ 57, 19 },
		{ 53, 16 },
		{ 10, 1 },
		{ 11, 1 },
		{ 11, 1 },
		{ 11, 1 },
		{ 11, 1 },
		{ 11, 1 },
		{ 11, 1 },
		{ 11, 1 },
		{ 11, 1 },
		{ 11, 1 },
		{ 11, 1 },
		{ 72, 33 },
		{ 33, 7 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 48, 48 },
		{ 34, 7 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 35, 7 },
		{ 73, 34 },
		{ 74, 35 },
		{ 75, 36 },
		{ 15, 1 },
		{ 36, 7 },
		{ 15, 1 },
		{ 16, 1 },
		{ 15, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 15, 1 },
		{ 21, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 22, 1 },
		{ 23, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 24, 1 },
		{ 15, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 54, 17 },
		{ 29, 1 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 76, 76 },
		{ 40, 10 },
		{ 76, 40 },
		{ 77, 41 },
		{ 0, 42 },
		{ 102, 76 },
		{ 41, 10 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 55, 18 },
		{ 30, 5 },
		{ 47, 12 },
		{ 49, 13 },
		{ 44, 45 },
		{ 80, 52 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 44, 45 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 81, 53 },
		{ 82, 54 },
		{ 83, 55 },
		{ 84, 56 },
		{ 85, 57 },
		{ 86, 58 },
		{ 87, 59 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 88, 61 },
		{ 89, 62 },
		{ 90, 63 },
		{ 91, 64 },
		{ 51, 149 },
		{ 92, 65 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 51, 149 },
		{ 4, 4 },
		{ 4, 4 },
		{ 93, 66 },
		{ 78, 78 },
		{ 78, 78 },
		{ 78, 78 },
		{ 78, 78 },
		{ 78, 78 },
		{ 78, 78 },
		{ 78, 78 },
		{ 78, 78 },
		{ 78, 78 },
		{ 78, 78 },
		{ 66, 26 },
		{ 60, 21 },
		{ 58, 20 },
		{ 94, 67 },
		{ 95, 68 },
		{ 67, 26 },
		{ 96, 69 },
		{ 97, 70 },
		{ 98, 72 },
		{ 61, 21 },
		{ 4, 4 },
		{ 103, 78 },
		{ 59, 20 },
		{ 99, 73 },
		{ 100, 74 },
		{ 101, 75 },
		{ 62, 22 },
		{ 68, 26 },
		{ 104, 104 },
		{ 104, 104 },
		{ 104, 104 },
		{ 104, 104 },
		{ 104, 104 },
		{ 104, 104 },
		{ 104, 104 },
		{ 104, 104 },
		{ 104, 104 },
		{ 104, 104 },
		{ 63, 23 },
		{ 105, 80 },
		{ 106, 81 },
		{ 107, 82 },
		{ 108, 83 },
		{ 109, 84 },
		{ 110, 86 },
		{ 111, 87 },
		{ 112, 89 },
		{ 113, 90 },
		{ 114, 91 },
		{ 115, 92 },
		{ 116, 93 },
		{ 117, 94 },
		{ 118, 95 },
		{ 119, 96 },
		{ 120, 97 },
		{ 121, 98 },
		{ 122, 99 },
		{ 123, 100 },
		{ 124, 101 },
		{ 64, 24 },
		{ 65, 25 },
		{ 125, 107 },
		{ 126, 109 },
		{ 127, 110 },
		{ 128, 112 },
		{ 129, 114 },
		{ 130, 115 },
		{ 131, 116 },
		{ 132, 117 },
		{ 133, 118 },
		{ 134, 120 },
		{ 135, 121 },
		{ 136, 122 },
		{ 137, 123 },
		{ 138, 124 },
		{ 139, 125 },
		{ 140, 127 },
		{ 50, 14 },
		{ 143, 129 },
		{ 144, 130 },
		{ 145, 133 },
		{ 146, 135 },
		{ 147, 136 },
		{ 146, 137 },
		{ 148, 138 },
		{ 149, 140 },
		{ 150, 141 },
		{ 151, 142 },
		{ 152, 147 },
		{ 152, 148 },
		{ 69, 27 },
		{ 153, 150 },
		{ 154, 151 },
		{ 155, 154 },
		{ 156, 155 },
		{ 157, 156 },
		{ 158, 157 },
		{ 159, 158 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 9 },
		{ 0, 258, 1 },
		{ 0, 100, 9 },
		{ 32, 0, 9 },
		{ 0, -17, 9 },
		{ 0, -2, 9 },
		{ 39, 0, 9 },
		{ 0, 86, 9 },
		{ 43, 0, 9 },
		{ 48, 101, 9 },
		{ 0, 102, 9 },
		{ 0, 286, 9 },
		{ 149, 0, 9 },
		{ 149, -83, 9 },
		{ 149, 4, 9 },
		{ 149, 52, 9 },
		{ 149, -74, 9 },
		{ 149, 181, 9 },
		{ 149, 179, 9 },
		{ 149, 185, 9 },
		{ 149, 211, 9 },
		{ 149, 215, 9 },
		{ 149, 229, 9 },
		{ 149, 181, 9 },
		{ 149, 249, 9 },
		{ 149, -82, 9 },
		{ 0, -89, 9 },
		{ 0, 0, 35 },
		{ 32, 0, 0 },
		{ -31, -5, 5 },
		{ 0, -19, 0 },
		{ 0, 6, 0 },
		{ 0, -16, 0 },
		{ 0, -24, 0 },
		{ 0, 0, 39 },
		{ 39, 0, 0 },
		{ -38, -6, 6 },
		{ -40, 87, 0 },
		{ -41, 120, 0 },
		{ 78, 62, 0 },
		{ 44, -37, 31 },
		{ 45, -22, 9 },
		{ 103, 69, 9 },
		{ 48, 0, 0 },
		{ 48, 0, 33 },
		{ -46, -7, 7 },
		{ 0, 0, 34 },
		{ 0, 0, 37 },
		{ 149, 0, 30 },
		{ 149, 54, 30 },
		{ 149, 86, 30 },
		{ 149, 86, 30 },
		{ 149, 89, 30 },
		{ 149, 94, 30 },
		{ 149, 92, 30 },
		{ 149, 91, 30 },
		{ 149, 92, 30 },
		{ 149, 0, 10 },
		{ 149, 119, 30 },
		{ 149, 126, 30 },
		{ 149, 132, 30 },
		{ 149, 133, 30 },
		{ 149, 124, 30 },
		{ 149, 172, 30 },
		{ 149, 172, 30 },
		{ 149, 170, 30 },
		{ 149, 181, 30 },
		{ 149, 182, 30 },
		{ 0, 0, 38 },
		{ 0, 218, 0 },
		{ 0, 226, 0 },
		{ 0, 192, 0 },
		{ 0, 196, 0 },
		{ -40, 85, 0 },
		{ 0, 0, 2 },
		{ 0, 222, 31 },
		{ 104, 0, 0 },
		{ 149, 201, 30 },
		{ 149, 209, 30 },
		{ 149, 213, 30 },
		{ 149, 211, 30 },
		{ 149, 216, 30 },
		{ 149, 0, 13 },
		{ 149, 215, 30 },
		{ 149, 204, 30 },
		{ 149, 0, 17 },
		{ 149, 213, 30 },
		{ 149, 207, 30 },
		{ 149, 208, 30 },
		{ 149, 202, 30 },
		{ 149, 210, 30 },
		{ 149, 207, 30 },
		{ 149, 205, 30 },
		{ 149, 223, 30 },
		{ 149, 216, 30 },
		{ 0, 252, 0 },
		{ 0, 250, 0 },
		{ 0, 222, 0 },
		{ 0, 220, 0 },
		{ 0, 0, 3 },
		{ 104, -37, 0 },
		{ 0, 250, 31 },
		{ 149, 0, 24 },
		{ 149, 0, 26 },
		{ 149, 223, 30 },
		{ 149, 0, 11 },
		{ 149, 216, 30 },
		{ 149, 229, 30 },
		{ 149, 0, 15 },
		{ 149, 302, 30 },
		{ 149, 0, 27 },
		{ 149, 219, 30 },
		{ 149, 222, 30 },
		{ 149, 235, 30 },
		{ 149, 222, 30 },
		{ 149, 240, 30 },
		{ 149, 0, 18 },
		{ 149, 239, 30 },
		{ 0, 263, 0 },
		{ 0, 257, 0 },
		{ 0, 233, 0 },
		{ 0, 227, 0 },
		{ 149, 244, 30 },
		{ 149, 0, 23 },
		{ 149, 249, 30 },
		{ 0, -98, 0 },
		{ 149, 246, 30 },
		{ 149, 239, 30 },
		{ 149, 0, 28 },
		{ 149, 0, 25 },
		{ 149, 234, 30 },
		{ 149, 0, 12 },
		{ 0, 282, 0 },
		{ 0, 284, 0 },
		{ 0, 252, 0 },
		{ 0, 254, 0 },
		{ 149, 0, 21 },
		{ 149, 241, 30 },
		{ 0, 246, 0 },
		{ 0, 246, 0 },
		{ 149, 0, 29 },
		{ 149, 0, 14 },
		{ 149, 0, 19 },
		{ 0, 0, 4 },
		{ 0, 289, 0 },
		{ 0, 258, 0 },
		{ 0, 144, 16 },
		{ 0, 245, 0 },
		{ 0, 252, 0 },
		{ 0, 0, 8 },
		{ 0, 0, 20 },
		{ 0, 260, 0 },
		{ 0, 332, 0 },
		{ 0, 260, 0 },
		{ 0, 256, 0 },
		{ 0, 251, 0 },
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
		0
	};
	yybackup = backup;
}
#line 168 ".\\mylexer.l"


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
