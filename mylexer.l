%{
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
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}


/* regular definitions */

delim		[ \t\n]
ws			{delim}+
letter		[A-Za-z_]
digit		[0-9]
id			{letter}({letter}|{digit})*
number		{digit}+(\.{digit}+)?(E[+-]?{digit}+)?
sglcmmt		\/\/(.)*\n
mtlcmmt		\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/
def			(#define)|(#DEFINE)
include		(#include)|(#INCLUDE)
string		\"(.)*\"
abra		\<(.)*\>
sglstring	\'(.)*\'
lli			long[ ]long[ ]int
li			long[ ]int
error		({digit}+{letter}+({letter}|{digit})*)|.

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

%{
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
%}

{ws}		{/* no action and no return */}
{sglcmmt}	{fprintf(fp, "SGLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng - 1, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
{mtlcmmt}	{fprintf(fp, "MTLCMMT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
{def}		{fprintf(fp, "DEFINE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
{string}	{fprintf(fp, "STRING\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
{sglstring}	{fprintf(fp, "SGLSTRING\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
{abra}		{fprintf(fp, "ABRACKET\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
{include}	{fprintf(fp, "INCLUDE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
{error}		{fprintf(fp, "ERROR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}

if			{fprintf(fp, "IF\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
else		{fprintf(fp, "ELSE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
while		{fprintf(fp, "WHILE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
for			{fprintf(fp, "FOR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
return		{fprintf(fp, "RETURN\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
goto		{fprintf(fp, "GOTO\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
getchar		{fprintf(fp, "GETCHAR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}

int			{fprintf(fp, "INT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
void		{fprintf(fp, "VOID\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
struct		{fprintf(fp, "STRUCT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
{li}		{fprintf(fp, "LONGINT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
double		{fprintf(fp, "DOUBLE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
{lli}		{fprintf(fp, "LONGLONGINT\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
float		{fprintf(fp, "FLOAT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
bool		{fprintf(fp, "BOOL\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
short		{fprintf(fp, "SHORT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
byte		{fprintf(fp, "BYTE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}


main		{fprintf(fp, "MAIN\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
scanf		{fprintf(fp, "SCANF\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
printf		{fprintf(fp, "PRINTF\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}

{id}		{
				yylval.symp = symlook(yytext);
				fprintf(fp, "ID\t\t");
				fflush(fp);
				fwrite(yytext, yyleng, 1, fp);
				fflush(fp);
				fprintf(fp, "\t\t%d\n", yylval.symp);
				fflush(fp);
			}
{number}	{
				yylval.dval = atof(yytext);
				fprintf(fp, "NUMBER\t\t");
				fflush(fp);
				fwrite(yytext, yyleng, 1, fp);
				fflush(fp);
				fprintf(fp, "\t\t%g\n", yylval.dval);
				fflush(fp);
			}

"<"			{fprintf(fp, "LT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);}
"<="		{fprintf(fp, "LE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);}
"=="		{fprintf(fp, "EQ\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);}
"!="		{fprintf(fp, "NE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);}
">"			{fprintf(fp, "GT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);}
">="		{fprintf(fp, "GE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);}
"||"		{fprintf(fp, "OR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);}
"&&"		{fprintf(fp, "AND\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp);  fprintf(fp, "\n"); fflush(fp);}

"("			{fprintf(fp, "LP\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
")"			{fprintf(fp, "RP\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"{"			{fprintf(fp, "LBRACE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"}"			{fprintf(fp, "RBRACE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"["			{fprintf(fp, "LMBRACE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"]"			{fprintf(fp, "RMBRACE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}

"="			{fprintf(fp, "ASSIGN\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
";"			{fprintf(fp, "SEMICOLON\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"!"			{fprintf(fp, "LNOT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"+"			{fprintf(fp, "ADD\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"-"			{fprintf(fp, "SUBTRACT\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"*"			{fprintf(fp, "MULTIPLY\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"/"			{fprintf(fp, "DIVIDE\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"%"			{fprintf(fp, "MOD\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"^"			{fprintf(fp, "XOR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"|"			{fprintf(fp, "BITOR\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"&"			{fprintf(fp, "BITAND\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
","			{fprintf(fp, "COMMA\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
"."			{fprintf(fp, "DOT\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}
":"			{fprintf(fp, "COLON\t\t"); fflush(fp); fwrite(yytext, yyleng, 1, fp); fflush(fp); fprintf(fp, "\n"); fflush(fp);}


%{
	fclose(fp);
	
%}


%%

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