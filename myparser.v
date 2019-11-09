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
# Date: 11/09/19
# Time: 12:43:40
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : statement_list $end

    1  statement_list : statement
    2                 | statement_list statement

    3  statement : expression ';'
    4            | while_stat
    5            | for_stat
    6            | ifelse_stat
    7            | var_declaration_front ';'

    8  var_declaration_front : type assign_expr
    9                        | type ID
   10                        | var_declaration_front ',' ID
   11                        | var_declaration_front ',' assign_expr

   12  type : INT
   13       | DOUBLE
   14       | FLOAT
   15       | BOOL
   16       | LONGINT
   17       | LONGLONGINT
   18       | BYTE
   19       | STRUCT
   20       | VOID
   21       | BYTE

   22  code_block : '{' statement_list '}'

   23  while_stat : WHILE '(' expression ')' code_block
   24             | WHILE '(' expression ')' statement

   25  for_stat : for_front code_block
   26           | for_front statement

   27  for_front : FOR '(' expression ';' expression ';' expression ')'
   28            | FOR '(' expression ';' expression ';' ')'
   29            | FOR '(' expression ';' ';' expression ')'
   30            | FOR '(' ';' expression ';' expression ')'
   31            | FOR '(' expression ';' ';' ')'
   32            | FOR '(' ';' expression ';' ')'
   33            | FOR '(' ';' ';' expression ')'
   34            | FOR '(' ';' ';' ')'

   35  expression : expression '+' expression
   36             | expression '-' expression
   37             | expression '*' expression
   38             | expression '/' expression
   39             | expression '%' expression
   40             | '-' expression
   41             | '(' expression ')'
   42             | NUMBER
   43             | ID
   44             | assign_expr

   45  assign_expr : ID '=' expression

   46  ifelse_stat : IF '(' expression ')' code_block
   47              | IF '(' expression ')' statement
   48              | IF '(' expression ')' code_block ELSE code_block
   49              | IF '(' expression ')' code_block ELSE statement
   50              | IF '(' expression ')' statement ELSE code_block
   51              | IF '(' expression ')' statement ELSE statement


##############################################################################
# States
##############################################################################

state 0
	$accept : . statement_list $end

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 4
	INT  shift 5
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 15
	NUMBER  shift 16

	statement_list  goto 17
	for_front  goto 18
	assign_expr  goto 19
	while_stat  goto 20
	ifelse_stat  goto 21
	statement  goto 22
	expression  goto 23
	type  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26


state 1
	expression : '(' . expression ')'

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 27


state 2
	expression : '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 28


state 3
	ifelse_stat : IF . '(' expression ')' statement
	ifelse_stat : IF . '(' expression ')' statement ELSE statement
	ifelse_stat : IF . '(' expression ')' code_block ELSE code_block
	ifelse_stat : IF . '(' expression ')' code_block ELSE statement
	ifelse_stat : IF . '(' expression ')' statement ELSE code_block
	ifelse_stat : IF . '(' expression ')' code_block

	'('  shift 29


state 4
	type : VOID .  (20)

	.  reduce 20


state 5
	type : INT .  (12)

	.  reduce 12


state 6
	while_stat : WHILE . '(' expression ')' code_block
	while_stat : WHILE . '(' expression ')' statement

	'('  shift 30


state 7
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' ';' ';' expression ')'
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' ';' ';' ')'

	'('  shift 31


state 8
	type : STRUCT .  (19)

	.  reduce 19


state 9
	type : LONGINT .  (16)

	.  reduce 16


state 10
	type : DOUBLE .  (13)

	.  reduce 13


state 11
	type : LONGLONGINT .  (17)

	.  reduce 17


state 12
	type : FLOAT .  (14)

	.  reduce 14


state 13
	type : BOOL .  (15)

	.  reduce 15


14: reduce-reduce conflict (reduce 18, reduce 21) on ID
state 14
	type : BYTE .  (21)
	type : BYTE .  (18)

	.  reduce 18


state 15
	assign_expr : ID . '=' expression
	expression : ID .  (43)

	'='  shift 32
	.  reduce 43


state 16
	expression : NUMBER .  (42)

	.  reduce 42


state 17
	$accept : statement_list . $end  (0)
	statement_list : statement_list . statement

	$end  accept
	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 4
	INT  shift 5
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 15
	NUMBER  shift 16

	for_front  goto 18
	assign_expr  goto 19
	while_stat  goto 20
	ifelse_stat  goto 21
	statement  goto 33
	expression  goto 23
	type  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26


state 18
	for_stat : for_front . code_block
	for_stat : for_front . statement

	'('  shift 1
	'-'  shift 2
	'{'  shift 34
	IF  shift 3
	VOID  shift 4
	INT  shift 5
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 15
	NUMBER  shift 16

	for_front  goto 18
	code_block  goto 35
	assign_expr  goto 19
	while_stat  goto 20
	ifelse_stat  goto 21
	statement  goto 36
	expression  goto 23
	type  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26


state 19
	expression : assign_expr .  (44)

	.  reduce 44


state 20
	statement : while_stat .  (4)

	.  reduce 4


state 21
	statement : ifelse_stat .  (6)

	.  reduce 6


state 22
	statement_list : statement .  (1)

	.  reduce 1


state 23
	statement : expression . ';'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41
	';'  shift 42


state 24
	var_declaration_front : type . assign_expr
	var_declaration_front : type . ID

	ID  shift 43

	assign_expr  goto 44


state 25
	statement : for_stat .  (5)

	.  reduce 5


state 26
	statement : var_declaration_front . ';'
	var_declaration_front : var_declaration_front . ',' ID
	var_declaration_front : var_declaration_front . ',' assign_expr

	','  shift 45
	';'  shift 46


state 27
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : '(' expression . ')'
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	')'  shift 47
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41


state 28
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : '-' expression .  (40)
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	.  reduce 40


state 29
	ifelse_stat : IF '(' . expression ')' statement
	ifelse_stat : IF '(' . expression ')' statement ELSE statement
	ifelse_stat : IF '(' . expression ')' code_block ELSE code_block
	ifelse_stat : IF '(' . expression ')' code_block ELSE statement
	ifelse_stat : IF '(' . expression ')' statement ELSE code_block
	ifelse_stat : IF '(' . expression ')' code_block

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 48


state 30
	while_stat : WHILE '(' . expression ')' code_block
	while_stat : WHILE '(' . expression ')' statement

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 49


state 31
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . ';' ';' expression ')'
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . ';' ';' ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 50
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 51


state 32
	assign_expr : ID '=' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 52


state 33
	statement_list : statement_list statement .  (2)

	.  reduce 2


state 34
	code_block : '{' . statement_list '}'

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 4
	INT  shift 5
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 15
	NUMBER  shift 16

	statement_list  goto 53
	for_front  goto 18
	assign_expr  goto 19
	while_stat  goto 20
	ifelse_stat  goto 21
	statement  goto 22
	expression  goto 23
	type  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26


state 35
	for_stat : for_front code_block .  (25)

	.  reduce 25


state 36
	for_stat : for_front statement .  (26)

	.  reduce 26


state 37
	expression : expression '%' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 54


state 38
	expression : expression '*' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 55


state 39
	expression : expression '+' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 56


state 40
	expression : expression '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 57


state 41
	expression : expression '/' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 58


state 42
	statement : expression ';' .  (3)

	.  reduce 3


state 43
	var_declaration_front : type ID .  (9)
	assign_expr : ID . '=' expression

	'='  shift 32
	.  reduce 9


state 44
	var_declaration_front : type assign_expr .  (8)

	.  reduce 8


state 45
	var_declaration_front : var_declaration_front ',' . ID
	var_declaration_front : var_declaration_front ',' . assign_expr

	ID  shift 59

	assign_expr  goto 60


state 46
	statement : var_declaration_front ';' .  (7)

	.  reduce 7


state 47
	expression : '(' expression ')' .  (41)

	.  reduce 41


state 48
	ifelse_stat : IF '(' expression . ')' statement
	ifelse_stat : IF '(' expression . ')' statement ELSE statement
	ifelse_stat : IF '(' expression . ')' code_block ELSE code_block
	expression : expression . '/' expression
	expression : expression . '*' expression
	ifelse_stat : IF '(' expression . ')' code_block ELSE statement
	ifelse_stat : IF '(' expression . ')' statement ELSE code_block
	expression : expression . '%' expression
	ifelse_stat : IF '(' expression . ')' code_block
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	')'  shift 61
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41


state 49
	while_stat : WHILE '(' expression . ')' code_block
	while_stat : WHILE '(' expression . ')' statement
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	')'  shift 62
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41


state 50
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . ';' expression ')'
	for_front : FOR '(' ';' . expression ';' expression ')'
	for_front : FOR '(' ';' . ';' ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 63
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 64


state 51
	for_front : FOR '(' expression . ';' ';' ')'
	for_front : FOR '(' expression . ';' expression ';' ')'
	for_front : FOR '(' expression . ';' ';' expression ')'
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41
	';'  shift 65


52: shift-reduce conflict (shift 37, reduce 45) on '%'
52: shift-reduce conflict (shift 38, reduce 45) on '*'
52: shift-reduce conflict (shift 39, reduce 45) on '+'
52: shift-reduce conflict (shift 40, reduce 45) on '-'
52: shift-reduce conflict (shift 41, reduce 45) on '/'
state 52
	assign_expr : ID '=' expression .  (45)
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41
	.  reduce 45


state 53
	statement_list : statement_list . statement
	code_block : '{' statement_list . '}'

	'('  shift 1
	'-'  shift 2
	'}'  shift 66
	IF  shift 3
	VOID  shift 4
	INT  shift 5
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 15
	NUMBER  shift 16

	for_front  goto 18
	assign_expr  goto 19
	while_stat  goto 20
	ifelse_stat  goto 21
	statement  goto 33
	expression  goto 23
	type  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26


state 54
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression '%' expression .  (39)
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	.  reduce 39


state 55
	expression : expression . '/' expression
	expression : expression '*' expression .  (37)
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	.  reduce 37


state 56
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression '+' expression .  (35)
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	'*'  shift 38
	'/'  shift 41
	.  reduce 35


state 57
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression '-' expression .  (36)
	expression : expression . '-' expression

	'%'  shift 37
	'*'  shift 38
	'/'  shift 41
	.  reduce 36


state 58
	expression : expression '/' expression .  (38)
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	.  reduce 38


state 59
	var_declaration_front : var_declaration_front ',' ID .  (10)
	assign_expr : ID . '=' expression

	'='  shift 32
	.  reduce 10


state 60
	var_declaration_front : var_declaration_front ',' assign_expr .  (11)

	.  reduce 11


state 61
	ifelse_stat : IF '(' expression ')' . statement
	ifelse_stat : IF '(' expression ')' . statement ELSE statement
	ifelse_stat : IF '(' expression ')' . code_block ELSE code_block
	ifelse_stat : IF '(' expression ')' . code_block ELSE statement
	ifelse_stat : IF '(' expression ')' . statement ELSE code_block
	ifelse_stat : IF '(' expression ')' . code_block

	'('  shift 1
	'-'  shift 2
	'{'  shift 34
	IF  shift 3
	VOID  shift 4
	INT  shift 5
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 15
	NUMBER  shift 16

	for_front  goto 18
	code_block  goto 67
	assign_expr  goto 19
	while_stat  goto 20
	ifelse_stat  goto 21
	statement  goto 68
	expression  goto 23
	type  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26


state 62
	while_stat : WHILE '(' expression ')' . code_block
	while_stat : WHILE '(' expression ')' . statement

	'('  shift 1
	'-'  shift 2
	'{'  shift 34
	IF  shift 3
	VOID  shift 4
	INT  shift 5
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 15
	NUMBER  shift 16

	for_front  goto 18
	code_block  goto 69
	assign_expr  goto 19
	while_stat  goto 20
	ifelse_stat  goto 21
	statement  goto 70
	expression  goto 23
	type  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26


state 63
	for_front : FOR '(' ';' ';' . expression ')'
	for_front : FOR '(' ';' ';' . ')'

	'('  shift 1
	')'  shift 71
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 72


state 64
	for_front : FOR '(' ';' expression . ';' ')'
	for_front : FOR '(' ';' expression . ';' expression ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41
	';'  shift 73


state 65
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . expression ';' ')'
	for_front : FOR '(' expression ';' . ';' expression ')'
	for_front : FOR '(' expression ';' . expression ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 74
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 75


state 66
	code_block : '{' statement_list '}' .  (22)

	.  reduce 22


67: shift-reduce conflict (shift 76, reduce 46) on ELSE
state 67
	ifelse_stat : IF '(' expression ')' code_block . ELSE code_block
	ifelse_stat : IF '(' expression ')' code_block . ELSE statement
	ifelse_stat : IF '(' expression ')' code_block .  (46)

	ELSE  shift 76
	.  reduce 46


68: shift-reduce conflict (shift 77, reduce 47) on ELSE
state 68
	ifelse_stat : IF '(' expression ')' statement .  (47)
	ifelse_stat : IF '(' expression ')' statement . ELSE statement
	ifelse_stat : IF '(' expression ')' statement . ELSE code_block

	ELSE  shift 77
	.  reduce 47


state 69
	while_stat : WHILE '(' expression ')' code_block .  (23)

	.  reduce 23


state 70
	while_stat : WHILE '(' expression ')' statement .  (24)

	.  reduce 24


state 71
	for_front : FOR '(' ';' ';' ')' .  (34)

	.  reduce 34


state 72
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	')'  shift 78
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41


state 73
	for_front : FOR '(' ';' expression ';' . ')'
	for_front : FOR '(' ';' expression ';' . expression ')'

	'('  shift 1
	')'  shift 79
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 80


state 74
	for_front : FOR '(' expression ';' ';' . ')'
	for_front : FOR '(' expression ';' ';' . expression ')'

	'('  shift 1
	')'  shift 81
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 82


state 75
	for_front : FOR '(' expression ';' expression . ';' ')'
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41
	';'  shift 83


state 76
	ifelse_stat : IF '(' expression ')' code_block ELSE . code_block
	ifelse_stat : IF '(' expression ')' code_block ELSE . statement

	'('  shift 1
	'-'  shift 2
	'{'  shift 34
	IF  shift 3
	VOID  shift 4
	INT  shift 5
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 15
	NUMBER  shift 16

	for_front  goto 18
	code_block  goto 84
	assign_expr  goto 19
	while_stat  goto 20
	ifelse_stat  goto 21
	statement  goto 85
	expression  goto 23
	type  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26


state 77
	ifelse_stat : IF '(' expression ')' statement ELSE . statement
	ifelse_stat : IF '(' expression ')' statement ELSE . code_block

	'('  shift 1
	'-'  shift 2
	'{'  shift 34
	IF  shift 3
	VOID  shift 4
	INT  shift 5
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 15
	NUMBER  shift 16

	for_front  goto 18
	code_block  goto 86
	assign_expr  goto 19
	while_stat  goto 20
	ifelse_stat  goto 21
	statement  goto 87
	expression  goto 23
	type  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26


state 78
	for_front : FOR '(' ';' ';' expression ')' .  (33)

	.  reduce 33


state 79
	for_front : FOR '(' ';' expression ';' ')' .  (32)

	.  reduce 32


state 80
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	')'  shift 88
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41


state 81
	for_front : FOR '(' expression ';' ';' ')' .  (31)

	.  reduce 31


state 82
	for_front : FOR '(' expression ';' ';' expression . ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	')'  shift 89
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41


state 83
	for_front : FOR '(' expression ';' expression ';' . ')'
	for_front : FOR '(' expression ';' expression ';' . expression ')'

	'('  shift 1
	')'  shift 90
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	assign_expr  goto 19
	expression  goto 91


state 84
	ifelse_stat : IF '(' expression ')' code_block ELSE code_block .  (48)

	.  reduce 48


state 85
	ifelse_stat : IF '(' expression ')' code_block ELSE statement .  (49)

	.  reduce 49


state 86
	ifelse_stat : IF '(' expression ')' statement ELSE code_block .  (50)

	.  reduce 50


state 87
	ifelse_stat : IF '(' expression ')' statement ELSE statement .  (51)

	.  reduce 51


state 88
	for_front : FOR '(' ';' expression ';' expression ')' .  (30)

	.  reduce 30


state 89
	for_front : FOR '(' expression ';' ';' expression ')' .  (29)

	.  reduce 29


state 90
	for_front : FOR '(' expression ';' expression ';' ')' .  (28)

	.  reduce 28


state 91
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '+' expression
	expression : expression . '-' expression

	'%'  shift 37
	')'  shift 92
	'*'  shift 38
	'+'  shift 39
	'-'  shift 40
	'/'  shift 41


state 92
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (27)

	.  reduce 27


Rules never reduced
	type : BYTE  (21)


##############################################################################
# Summary
##############################################################################

State 14 contains 1 reduce-reduce conflict(s)
State 52 contains 5 shift-reduce conflict(s)
State 67 contains 1 shift-reduce conflict(s)
State 68 contains 1 shift-reduce conflict(s)


30 token(s), 12 nonterminal(s)
52 grammar rule(s), 93 state(s)


##############################################################################
# End of File
##############################################################################
