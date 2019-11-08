#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 54 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 11/08/19
# Time: 21:51:29
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : statement_list $end

    1  statement_list : statement
    2                 | statement_list statement

    3  statement : ID '=' expression ';'
    4            | expression ';'
    5            | while_stat
    6            | for_stat
    7            | ifelse_stat

    8  type : INT
    9       | DOUBLE
   10       | FLOAT
   11       | BOOL
   12       | LONGINT
   13       | LONGLONGINT
   14       | BYTE
   15       | STRUCT
   16       | VOID
   17       | BYTE

   18  code_block : '{' statement_list '}'

   19  while_stat : WHILE '(' expression ')' code_block
   20             | WHILE '(' expression ')' statement

   21  for_stat : for_front code_block
   22           | for_front statement

   23  for_front : FOR '(' expression ';' expression ';' expression ')'
   24            | FOR '(' expression ';' expression ';' ')'
   25            | FOR '(' expression ';' ';' expression ')'
   26            | FOR '(' ';' expression ';' expression ')'
   27            | FOR '(' expression ';' ';' ')'
   28            | FOR '(' ';' expression ';' ')'
   29            | FOR '(' ';' ';' expression ')'
   30            | FOR '(' ';' ';' ')'

   31  expression : expression '+' expression
   32             | expression '-' expression
   33             | expression '*' expression
   34             | expression '/' expression
   35             | expression '%' expression
   36             | '-' expression
   37             | '(' expression ')'
   38             | NUMBER
   39             | ID

   40  ifelse_stat : IF '(' expression ')' code_block
   41              | IF '(' expression ')' statement
   42              | IF '(' expression ')' code_block ELSE code_block
   43              | IF '(' expression ')' code_block ELSE statement
   44              | IF '(' expression ')' statement ELSE code_block
   45              | IF '(' expression ')' statement ELSE statement


##############################################################################
# States
##############################################################################

state 0
	$accept : . statement_list $end

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	WHILE  shift 4
	FOR  shift 5
	ID  shift 6
	NUMBER  shift 7

	statement_list  goto 8
	expression  goto 9
	for_stat  goto 10
	for_front  goto 11
	statement  goto 12
	while_stat  goto 13
	ifelse_stat  goto 14


state 1
	expression : '(' . expression ')'

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 16


state 2
	expression : '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 17


state 3
	ifelse_stat : IF . '(' expression ')' code_block ELSE statement
	ifelse_stat : IF . '(' expression ')' statement ELSE statement
	ifelse_stat : IF . '(' expression ')' statement
	ifelse_stat : IF . '(' expression ')' statement ELSE code_block
	ifelse_stat : IF . '(' expression ')' code_block
	ifelse_stat : IF . '(' expression ')' code_block ELSE code_block

	'('  shift 18


state 4
	while_stat : WHILE . '(' expression ')' statement
	while_stat : WHILE . '(' expression ')' code_block

	'('  shift 19


state 5
	for_front : FOR . '(' ';' ';' ')'
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' ';' ';' expression ')'

	'('  shift 20


state 6
	statement : ID . '=' expression ';'
	expression : ID .  (39)

	'='  shift 21
	.  reduce 39


state 7
	expression : NUMBER .  (38)

	.  reduce 38


state 8
	$accept : statement_list . $end  (0)
	statement_list : statement_list . statement

	$end  accept
	'('  shift 1
	'-'  shift 2
	IF  shift 3
	WHILE  shift 4
	FOR  shift 5
	ID  shift 6
	NUMBER  shift 7

	expression  goto 9
	for_stat  goto 10
	for_front  goto 11
	statement  goto 22
	while_stat  goto 13
	ifelse_stat  goto 14


state 9
	statement : expression . ';'
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27
	';'  shift 28


state 10
	statement : for_stat .  (6)

	.  reduce 6


state 11
	for_stat : for_front . code_block
	for_stat : for_front . statement

	'('  shift 1
	'-'  shift 2
	'{'  shift 29
	IF  shift 3
	WHILE  shift 4
	FOR  shift 5
	ID  shift 6
	NUMBER  shift 7

	expression  goto 9
	code_block  goto 30
	for_stat  goto 10
	for_front  goto 11
	statement  goto 31
	while_stat  goto 13
	ifelse_stat  goto 14


state 12
	statement_list : statement .  (1)

	.  reduce 1


state 13
	statement : while_stat .  (5)

	.  reduce 5


state 14
	statement : ifelse_stat .  (7)

	.  reduce 7


state 15
	expression : ID .  (39)

	.  reduce 39


state 16
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : '(' expression . ')'

	'%'  shift 23
	')'  shift 32
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27


state 17
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : '-' expression .  (36)
	expression : expression . '/' expression
	expression : expression . '%' expression

	.  reduce 36


state 18
	ifelse_stat : IF '(' . expression ')' code_block ELSE statement
	ifelse_stat : IF '(' . expression ')' statement ELSE statement
	ifelse_stat : IF '(' . expression ')' statement
	ifelse_stat : IF '(' . expression ')' statement ELSE code_block
	ifelse_stat : IF '(' . expression ')' code_block
	ifelse_stat : IF '(' . expression ')' code_block ELSE code_block

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 33


state 19
	while_stat : WHILE '(' . expression ')' statement
	while_stat : WHILE '(' . expression ')' code_block

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 34


state 20
	for_front : FOR '(' . ';' ';' ')'
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . ';' ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 35
	ID  shift 15
	NUMBER  shift 7

	expression  goto 36


state 21
	statement : ID '=' . expression ';'

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 37


state 22
	statement_list : statement_list statement .  (2)

	.  reduce 2


state 23
	expression : expression '%' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 38


state 24
	expression : expression '*' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 39


state 25
	expression : expression '+' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 40


state 26
	expression : expression '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 41


state 27
	expression : expression '/' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 42


state 28
	statement : expression ';' .  (4)

	.  reduce 4


state 29
	code_block : '{' . statement_list '}'

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	WHILE  shift 4
	FOR  shift 5
	ID  shift 6
	NUMBER  shift 7

	statement_list  goto 43
	expression  goto 9
	for_stat  goto 10
	for_front  goto 11
	statement  goto 12
	while_stat  goto 13
	ifelse_stat  goto 14


state 30
	for_stat : for_front code_block .  (21)

	.  reduce 21


state 31
	for_stat : for_front statement .  (22)

	.  reduce 22


state 32
	expression : '(' expression ')' .  (37)

	.  reduce 37


state 33
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	ifelse_stat : IF '(' expression . ')' code_block ELSE statement
	ifelse_stat : IF '(' expression . ')' statement ELSE statement
	expression : expression . '/' expression
	expression : expression . '%' expression
	ifelse_stat : IF '(' expression . ')' statement
	ifelse_stat : IF '(' expression . ')' statement ELSE code_block
	ifelse_stat : IF '(' expression . ')' code_block
	ifelse_stat : IF '(' expression . ')' code_block ELSE code_block

	'%'  shift 23
	')'  shift 44
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27


state 34
	expression : expression . '-' expression
	expression : expression . '*' expression
	while_stat : WHILE '(' expression . ')' statement
	while_stat : WHILE '(' expression . ')' code_block
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	')'  shift 45
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27


state 35
	for_front : FOR '(' ';' . ';' ')'
	for_front : FOR '(' ';' . expression ';' expression ')'
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 46
	ID  shift 15
	NUMBER  shift 7

	expression  goto 47


state 36
	for_front : FOR '(' expression . ';' expression ';' ')'
	expression : expression . '-' expression
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	for_front : FOR '(' expression . ';' ';' ')'
	for_front : FOR '(' expression . ';' ';' expression ')'
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27
	';'  shift 48


state 37
	statement : ID '=' expression . ';'
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27
	';'  shift 49


state 38
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression '%' expression .  (35)
	expression : expression . '%' expression

	.  reduce 35


state 39
	expression : expression . '-' expression
	expression : expression '*' expression .  (33)
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	.  reduce 33


state 40
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression '+' expression .  (31)
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	'*'  shift 24
	'/'  shift 27
	.  reduce 31


state 41
	expression : expression '-' expression .  (32)
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	'*'  shift 24
	'/'  shift 27
	.  reduce 32


state 42
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression '/' expression .  (34)
	expression : expression . '/' expression
	expression : expression . '%' expression

	.  reduce 34


state 43
	statement_list : statement_list . statement
	code_block : '{' statement_list . '}'

	'('  shift 1
	'-'  shift 2
	'}'  shift 50
	IF  shift 3
	WHILE  shift 4
	FOR  shift 5
	ID  shift 6
	NUMBER  shift 7

	expression  goto 9
	for_stat  goto 10
	for_front  goto 11
	statement  goto 22
	while_stat  goto 13
	ifelse_stat  goto 14


state 44
	ifelse_stat : IF '(' expression ')' . code_block ELSE statement
	ifelse_stat : IF '(' expression ')' . statement ELSE statement
	ifelse_stat : IF '(' expression ')' . statement
	ifelse_stat : IF '(' expression ')' . statement ELSE code_block
	ifelse_stat : IF '(' expression ')' . code_block
	ifelse_stat : IF '(' expression ')' . code_block ELSE code_block

	'('  shift 1
	'-'  shift 2
	'{'  shift 29
	IF  shift 3
	WHILE  shift 4
	FOR  shift 5
	ID  shift 6
	NUMBER  shift 7

	expression  goto 9
	code_block  goto 51
	for_stat  goto 10
	for_front  goto 11
	statement  goto 52
	while_stat  goto 13
	ifelse_stat  goto 14


state 45
	while_stat : WHILE '(' expression ')' . statement
	while_stat : WHILE '(' expression ')' . code_block

	'('  shift 1
	'-'  shift 2
	'{'  shift 29
	IF  shift 3
	WHILE  shift 4
	FOR  shift 5
	ID  shift 6
	NUMBER  shift 7

	expression  goto 9
	code_block  goto 53
	for_stat  goto 10
	for_front  goto 11
	statement  goto 54
	while_stat  goto 13
	ifelse_stat  goto 14


state 46
	for_front : FOR '(' ';' ';' . ')'
	for_front : FOR '(' ';' ';' . expression ')'

	'('  shift 1
	')'  shift 55
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 56


state 47
	for_front : FOR '(' ';' expression . ';' expression ')'
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27
	';'  shift 57


state 48
	for_front : FOR '(' expression ';' . expression ';' ')'
	for_front : FOR '(' expression ';' . expression ';' expression ')'
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 58
	ID  shift 15
	NUMBER  shift 7

	expression  goto 59


state 49
	statement : ID '=' expression ';' .  (3)

	.  reduce 3


state 50
	code_block : '{' statement_list '}' .  (18)

	.  reduce 18


51: shift-reduce conflict (shift 60, reduce 40) on ELSE
state 51
	ifelse_stat : IF '(' expression ')' code_block . ELSE statement
	ifelse_stat : IF '(' expression ')' code_block .  (40)
	ifelse_stat : IF '(' expression ')' code_block . ELSE code_block

	ELSE  shift 60
	.  reduce 40


52: shift-reduce conflict (shift 61, reduce 41) on ELSE
state 52
	ifelse_stat : IF '(' expression ')' statement . ELSE statement
	ifelse_stat : IF '(' expression ')' statement .  (41)
	ifelse_stat : IF '(' expression ')' statement . ELSE code_block

	ELSE  shift 61
	.  reduce 41


state 53
	while_stat : WHILE '(' expression ')' code_block .  (19)

	.  reduce 19


state 54
	while_stat : WHILE '(' expression ')' statement .  (20)

	.  reduce 20


state 55
	for_front : FOR '(' ';' ';' ')' .  (30)

	.  reduce 30


state 56
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	')'  shift 62
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27


state 57
	for_front : FOR '(' ';' expression ';' . expression ')'
	for_front : FOR '(' ';' expression ';' . ')'

	'('  shift 1
	')'  shift 63
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 64


state 58
	for_front : FOR '(' expression ';' ';' . ')'
	for_front : FOR '(' expression ';' ';' . expression ')'

	'('  shift 1
	')'  shift 65
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 66


state 59
	for_front : FOR '(' expression ';' expression . ';' ')'
	expression : expression . '-' expression
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27
	';'  shift 67


state 60
	ifelse_stat : IF '(' expression ')' code_block ELSE . statement
	ifelse_stat : IF '(' expression ')' code_block ELSE . code_block

	'('  shift 1
	'-'  shift 2
	'{'  shift 29
	IF  shift 3
	WHILE  shift 4
	FOR  shift 5
	ID  shift 6
	NUMBER  shift 7

	expression  goto 9
	code_block  goto 68
	for_stat  goto 10
	for_front  goto 11
	statement  goto 69
	while_stat  goto 13
	ifelse_stat  goto 14


state 61
	ifelse_stat : IF '(' expression ')' statement ELSE . statement
	ifelse_stat : IF '(' expression ')' statement ELSE . code_block

	'('  shift 1
	'-'  shift 2
	'{'  shift 29
	IF  shift 3
	WHILE  shift 4
	FOR  shift 5
	ID  shift 6
	NUMBER  shift 7

	expression  goto 9
	code_block  goto 70
	for_stat  goto 10
	for_front  goto 11
	statement  goto 71
	while_stat  goto 13
	ifelse_stat  goto 14


state 62
	for_front : FOR '(' ';' ';' expression ')' .  (29)

	.  reduce 29


state 63
	for_front : FOR '(' ';' expression ';' ')' .  (28)

	.  reduce 28


state 64
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	')'  shift 72
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27


state 65
	for_front : FOR '(' expression ';' ';' ')' .  (27)

	.  reduce 27


state 66
	expression : expression . '-' expression
	for_front : FOR '(' expression ';' ';' expression . ')'
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	')'  shift 73
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27


state 67
	for_front : FOR '(' expression ';' expression ';' . ')'
	for_front : FOR '(' expression ';' expression ';' . expression ')'

	'('  shift 1
	')'  shift 74
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 7

	expression  goto 75


state 68
	ifelse_stat : IF '(' expression ')' code_block ELSE code_block .  (42)

	.  reduce 42


state 69
	ifelse_stat : IF '(' expression ')' code_block ELSE statement .  (43)

	.  reduce 43


state 70
	ifelse_stat : IF '(' expression ')' statement ELSE code_block .  (44)

	.  reduce 44


state 71
	ifelse_stat : IF '(' expression ')' statement ELSE statement .  (45)

	.  reduce 45


state 72
	for_front : FOR '(' ';' expression ';' expression ')' .  (26)

	.  reduce 26


state 73
	for_front : FOR '(' expression ';' ';' expression ')' .  (25)

	.  reduce 25


state 74
	for_front : FOR '(' expression ';' expression ';' ')' .  (24)

	.  reduce 24


state 75
	expression : expression . '-' expression
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression

	'%'  shift 23
	')'  shift 76
	'*'  shift 24
	'+'  shift 25
	'-'  shift 26
	'/'  shift 27


state 76
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (23)

	.  reduce 23


Tokens never shifted
	VOID  (284)
	INT  (286)
	DOUBLE  (297)
	LONGLONGINT  (298)
	FLOAT  (299)
	STRUCT  (295)
	LONGINT  (296)
	BOOL  (300)
	BYTE  (302)


Rules never reduced
	type : INT  (8)
	type : DOUBLE  (9)
	type : FLOAT  (10)
	type : BOOL  (11)
	type : LONGINT  (12)
	type : LONGLONGINT  (13)
	type : BYTE  (14)
	type : STRUCT  (15)
	type : VOID  (16)
	type : BYTE  (17)


##############################################################################
# Summary
##############################################################################

State 51 contains 1 shift-reduce conflict(s)
State 52 contains 1 shift-reduce conflict(s)


29 token(s), 10 nonterminal(s)
46 grammar rule(s), 77 state(s)


##############################################################################
# End of File
##############################################################################
