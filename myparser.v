#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 56 of your 30 day trial period.
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
# Date: 11/11/19
# Time: 14:50:46
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : prog $end

    1  prog : main_func
    2       | prog statement_list
    3       | statement_list prog

    4  main_func : VOID Main '(' ')' code_block
    5            | INT Main '(' ')' code_block

    6  code_block : LBRACE statement_list RBRACE

    7  Main : MAIN

    8  statement_list : statement
    9                 | statement_list statement

   10  statement : expression ';'
   11            | while_stat
   12            | for_stat
   13            | ifelse_stat
   14            | var_declaration_front ';'
   15            | io_stat ';'

   16  io_stat : SCAN '(' id_expr ')'
   17          | PRINT '(' expression ')'

   18  var_declaration_front : type assign_expr
   19                        | type id_expr
   20                        | var_declaration_front ',' id_expr
   21                        | var_declaration_front ',' assign_expr

   22  type :
   23       | DOUBLE
   24       | FLOAT
   25       | BOOL
   26       | LONGINT
   27       | LONGLONGINT
   28       | BYTE
   29       | STRUCT
   30       | INT
   31       | VOID

   32  while_stat : WHILE '(' expression ')' code_block
   33             | WHILE '(' expression ')' statement

   34  for_stat : for_front code_block
   35           | for_front statement

   36  for_front : FOR '(' expression ';' expression ';' expression ')'
   37            | FOR '(' expression ';' expression ';' ')'
   38            | FOR '(' expression ';' ';' expression ')'
   39            | FOR '(' ';' expression ';' expression ')'
   40            | FOR '(' expression ';' ';' ')'
   41            | FOR '(' ';' expression ';' ')'
   42            | FOR '(' ';' ';' expression ')'
   43            | FOR '(' ';' ';' ')'

   44  expression : expression '+' expression
   45             | expression '-' expression
   46             | expression '*' expression
   47             | expression '/' expression
   48             | expression '%' expression
   49             | expression '<' expression
   50             | expression '>' expression
   51             | expression EQ expression
   52             | expression LE expression
   53             | expression GE expression
   54             | expression NE expression
   55             | '-' expression
   56             | '(' expression ')'
   57             | NUMBER
   58             | id_expr
   59             | assign_expr

   60  id_expr : ID

   61  assign_expr : id_expr '=' expression

   62  ifelse_stat : IF '(' expression ')' code_block
   63              | IF '(' expression ')' statement
   64              | IF '(' expression ')' code_block ELSE code_block
   65              | IF '(' expression ')' code_block ELSE statement
   66              | IF '(' expression ')' statement ELSE code_block
   67              | IF '(' expression ')' statement ELSE statement


##############################################################################
# States
##############################################################################

0: shift-reduce conflict (shift 17, reduce 22) on ID
state 0
	$accept : . prog $end
	type : .  (22)

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
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 23
	for_front  goto 24
	id_expr  goto 25
	prog  goto 26
	for_stat  goto 27
	assign_expr  goto 28
	io_stat  goto 29
	statement_list  goto 30
	ifelse_stat  goto 31
	main_func  goto 32


state 1
	expression : '(' . expression ')'

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 33
	id_expr  goto 25
	assign_expr  goto 28


state 2
	expression : '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 34
	id_expr  goto 25
	assign_expr  goto 28


state 3
	ifelse_stat : IF . '(' expression ')' code_block ELSE code_block
	ifelse_stat : IF . '(' expression ')' code_block ELSE statement
	ifelse_stat : IF . '(' expression ')' code_block
	ifelse_stat : IF . '(' expression ')' statement
	ifelse_stat : IF . '(' expression ')' statement ELSE statement
	ifelse_stat : IF . '(' expression ')' statement ELSE code_block

	'('  shift 35


state 4
	main_func : VOID . Main '(' ')' code_block
	type : VOID .  (31)

	MAIN  shift 36
	.  reduce 31

	Main  goto 37


state 5
	main_func : INT . Main '(' ')' code_block
	type : INT .  (30)

	MAIN  shift 36
	.  reduce 30

	Main  goto 38


state 6
	while_stat : WHILE . '(' expression ')' code_block
	while_stat : WHILE . '(' expression ')' statement

	'('  shift 39


state 7
	for_front : FOR . '(' ';' ';' ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' ';' expression ';' expression ')'
	for_front : FOR . '(' ';' ';' expression ')'
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' expression ';' ';' expression ')'

	'('  shift 40


state 8
	type : STRUCT .  (29)

	.  reduce 29


state 9
	type : LONGINT .  (26)

	.  reduce 26


state 10
	type : DOUBLE .  (23)

	.  reduce 23


state 11
	type : LONGLONGINT .  (27)

	.  reduce 27


state 12
	type : FLOAT .  (24)

	.  reduce 24


state 13
	type : BOOL .  (25)

	.  reduce 25


state 14
	type : BYTE .  (28)

	.  reduce 28


state 15
	io_stat : SCAN . '(' id_expr ')'

	'('  shift 41


state 16
	io_stat : PRINT . '(' expression ')'

	'('  shift 42


state 17
	id_expr : ID .  (60)

	.  reduce 60


state 18
	expression : NUMBER .  (57)

	.  reduce 57


state 19
	statement : while_stat .  (11)

	.  reduce 11


state 20
	var_declaration_front : type . id_expr
	var_declaration_front : type . assign_expr

	ID  shift 17

	id_expr  goto 43
	assign_expr  goto 44


state 21
	statement : var_declaration_front . ';'
	var_declaration_front : var_declaration_front . ',' id_expr
	var_declaration_front : var_declaration_front . ',' assign_expr

	','  shift 45
	';'  shift 46


state 22
	statement : expression . ';'
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	';'  shift 52
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 23
	statement_list : statement .  (8)

	.  reduce 8


24: shift-reduce conflict (shift 17, reduce 22) on ID
state 24
	for_stat : for_front . code_block
	for_stat : for_front . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	LBRACE  shift 60
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 62
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	code_block  goto 63
	assign_expr  goto 28
	io_stat  goto 29
	ifelse_stat  goto 31


state 25
	assign_expr : id_expr . '=' expression
	expression : id_expr .  (58)

	'='  shift 64
	.  reduce 58


26: shift-reduce conflict (shift 17, reduce 22) on ID
state 26
	$accept : prog . $end  (0)
	prog : prog . statement_list
	type : .  (22)

	$end  accept
	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 23
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	assign_expr  goto 28
	io_stat  goto 29
	statement_list  goto 65
	ifelse_stat  goto 31


state 27
	statement : for_stat .  (12)

	.  reduce 12


state 28
	expression : assign_expr .  (59)

	.  reduce 59


state 29
	statement : io_stat . ';'

	';'  shift 66


30: shift-reduce conflict (shift 17, reduce 22) on ID
state 30
	prog : statement_list . prog
	statement_list : statement_list . statement
	type : .  (22)

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
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 67
	for_front  goto 24
	id_expr  goto 25
	prog  goto 68
	for_stat  goto 27
	assign_expr  goto 28
	io_stat  goto 29
	statement_list  goto 30
	ifelse_stat  goto 31
	main_func  goto 32


state 31
	statement : ifelse_stat .  (13)

	.  reduce 13


state 32
	prog : main_func .  (1)

	.  reduce 1


state 33
	expression : expression . '*' expression
	expression : '(' expression . ')'
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	')'  shift 69
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 34
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : '-' expression .  (55)
	expression : expression . GE expression
	expression : expression . '+' expression

	.  reduce 55


state 35
	ifelse_stat : IF '(' . expression ')' code_block ELSE code_block
	ifelse_stat : IF '(' . expression ')' code_block ELSE statement
	ifelse_stat : IF '(' . expression ')' code_block
	ifelse_stat : IF '(' . expression ')' statement
	ifelse_stat : IF '(' . expression ')' statement ELSE statement
	ifelse_stat : IF '(' . expression ')' statement ELSE code_block

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 70
	id_expr  goto 25
	assign_expr  goto 28


state 36
	Main : MAIN .  (7)

	.  reduce 7


state 37
	main_func : VOID Main . '(' ')' code_block

	'('  shift 71


state 38
	main_func : INT Main . '(' ')' code_block

	'('  shift 72


state 39
	while_stat : WHILE '(' . expression ')' code_block
	while_stat : WHILE '(' . expression ')' statement

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 73
	id_expr  goto 25
	assign_expr  goto 28


state 40
	for_front : FOR '(' . ';' ';' ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . ';' expression ';' expression ')'
	for_front : FOR '(' . ';' ';' expression ')'
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . expression ';' ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 74
	ID  shift 17
	NUMBER  shift 18

	expression  goto 75
	id_expr  goto 25
	assign_expr  goto 28


state 41
	io_stat : SCAN '(' . id_expr ')'

	ID  shift 17

	id_expr  goto 76


state 42
	io_stat : PRINT '(' . expression ')'

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 77
	id_expr  goto 25
	assign_expr  goto 28


state 43
	var_declaration_front : type id_expr .  (19)
	assign_expr : id_expr . '=' expression

	'='  shift 64
	.  reduce 19


state 44
	var_declaration_front : type assign_expr .  (18)

	.  reduce 18


state 45
	var_declaration_front : var_declaration_front ',' . id_expr
	var_declaration_front : var_declaration_front ',' . assign_expr

	ID  shift 17

	id_expr  goto 78
	assign_expr  goto 79


state 46
	statement : var_declaration_front ';' .  (14)

	.  reduce 14


state 47
	expression : expression '%' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 80
	id_expr  goto 25
	assign_expr  goto 28


state 48
	expression : expression '*' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 81
	id_expr  goto 25
	assign_expr  goto 28


state 49
	expression : expression '+' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 82
	id_expr  goto 25
	assign_expr  goto 28


state 50
	expression : expression '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 83
	id_expr  goto 25
	assign_expr  goto 28


state 51
	expression : expression '/' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 84
	id_expr  goto 25
	assign_expr  goto 28


state 52
	statement : expression ';' .  (10)

	.  reduce 10


state 53
	expression : expression '<' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 85
	id_expr  goto 25
	assign_expr  goto 28


state 54
	expression : expression '>' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 86
	id_expr  goto 25
	assign_expr  goto 28


state 55
	expression : expression EQ . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 87
	id_expr  goto 25
	assign_expr  goto 28


state 56
	expression : expression NE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 88
	id_expr  goto 25
	assign_expr  goto 28


state 57
	expression : expression LE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 89
	id_expr  goto 25
	assign_expr  goto 28


state 58
	expression : expression GE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 90
	id_expr  goto 25
	assign_expr  goto 28


state 59
	type : VOID .  (31)

	.  reduce 31


60: shift-reduce conflict (shift 17, reduce 22) on ID
state 60
	code_block : LBRACE . statement_list RBRACE
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 23
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	assign_expr  goto 28
	io_stat  goto 29
	statement_list  goto 91
	ifelse_stat  goto 31


state 61
	type : INT .  (30)

	.  reduce 30


state 62
	for_stat : for_front statement .  (35)

	.  reduce 35


state 63
	for_stat : for_front code_block .  (34)

	.  reduce 34


state 64
	assign_expr : id_expr '=' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 92
	id_expr  goto 25
	assign_expr  goto 28


65: shift-reduce conflict (shift 1, reduce 2) on '('
65: shift-reduce conflict (shift 2, reduce 2) on '-'
65: shift-reduce conflict (shift 3, reduce 2) on IF
65: shift-reduce conflict (shift 59, reduce 2) on VOID
65: shift-reduce conflict (shift 61, reduce 2) on INT
65: shift-reduce conflict (shift 6, reduce 2) on WHILE
65: shift-reduce conflict (shift 7, reduce 2) on FOR
65: shift-reduce conflict (shift 8, reduce 2) on STRUCT
65: shift-reduce conflict (shift 9, reduce 2) on LONGINT
65: shift-reduce conflict (shift 10, reduce 2) on DOUBLE
65: shift-reduce conflict (shift 11, reduce 2) on LONGLONGINT
65: shift-reduce conflict (shift 12, reduce 2) on FLOAT
65: shift-reduce conflict (shift 13, reduce 2) on BOOL
65: shift-reduce conflict (shift 14, reduce 2) on BYTE
65: shift-reduce conflict (shift 15, reduce 2) on SCAN
65: shift-reduce conflict (shift 16, reduce 2) on PRINT
65: shift-reduce conflict (shift 17, reduce 2) on ID
65: shift-reduce conflict (shift 18, reduce 2) on NUMBER
65: shift-reduce conflict (shift 17, reduce 22) on ID
state 65
	prog : prog statement_list .  (2)
	statement_list : statement_list . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18
	.  reduce 2

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 93
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	assign_expr  goto 28
	io_stat  goto 29
	ifelse_stat  goto 31


state 66
	statement : io_stat ';' .  (15)

	.  reduce 15


67: reduce-reduce conflict (reduce 8, reduce 9) on '('
67: reduce-reduce conflict (reduce 8, reduce 9) on '-'
67: reduce-reduce conflict (reduce 8, reduce 9) on IF
67: reduce-reduce conflict (reduce 8, reduce 9) on VOID
67: reduce-reduce conflict (reduce 8, reduce 9) on INT
67: reduce-reduce conflict (reduce 8, reduce 9) on WHILE
67: reduce-reduce conflict (reduce 8, reduce 9) on FOR
67: reduce-reduce conflict (reduce 8, reduce 9) on STRUCT
67: reduce-reduce conflict (reduce 8, reduce 9) on LONGINT
67: reduce-reduce conflict (reduce 8, reduce 9) on DOUBLE
67: reduce-reduce conflict (reduce 8, reduce 9) on LONGLONGINT
67: reduce-reduce conflict (reduce 8, reduce 9) on FLOAT
67: reduce-reduce conflict (reduce 8, reduce 9) on BOOL
67: reduce-reduce conflict (reduce 8, reduce 9) on BYTE
67: reduce-reduce conflict (reduce 8, reduce 9) on SCAN
67: reduce-reduce conflict (reduce 8, reduce 9) on PRINT
67: reduce-reduce conflict (reduce 8, reduce 9) on ID
67: reduce-reduce conflict (reduce 8, reduce 9) on NUMBER
state 67
	statement_list : statement .  (8)
	statement_list : statement_list statement .  (9)

	.  reduce 8


68: shift-reduce conflict (shift 1, reduce 3) on '('
68: shift-reduce conflict (shift 2, reduce 3) on '-'
68: shift-reduce conflict (shift 3, reduce 3) on IF
68: shift-reduce conflict (shift 59, reduce 3) on VOID
68: shift-reduce conflict (shift 61, reduce 3) on INT
68: shift-reduce conflict (shift 6, reduce 3) on WHILE
68: shift-reduce conflict (shift 7, reduce 3) on FOR
68: shift-reduce conflict (shift 8, reduce 3) on STRUCT
68: shift-reduce conflict (shift 9, reduce 3) on LONGINT
68: shift-reduce conflict (shift 10, reduce 3) on DOUBLE
68: shift-reduce conflict (shift 11, reduce 3) on LONGLONGINT
68: shift-reduce conflict (shift 12, reduce 3) on FLOAT
68: shift-reduce conflict (shift 13, reduce 3) on BOOL
68: shift-reduce conflict (shift 14, reduce 3) on BYTE
68: shift-reduce conflict (shift 15, reduce 3) on SCAN
68: shift-reduce conflict (shift 16, reduce 3) on PRINT
68: shift-reduce conflict (shift 17, reduce 3) on ID
68: shift-reduce conflict (shift 18, reduce 3) on NUMBER
68: shift-reduce conflict (shift 17, reduce 22) on ID
state 68
	prog : prog . statement_list
	prog : statement_list prog .  (3)
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18
	.  reduce 3

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 23
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	assign_expr  goto 28
	io_stat  goto 29
	statement_list  goto 65
	ifelse_stat  goto 31


state 69
	expression : '(' expression ')' .  (56)

	.  reduce 56


state 70
	ifelse_stat : IF '(' expression . ')' code_block ELSE code_block
	ifelse_stat : IF '(' expression . ')' code_block ELSE statement
	ifelse_stat : IF '(' expression . ')' code_block
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	ifelse_stat : IF '(' expression . ')' statement
	expression : expression . GE expression
	expression : expression . '+' expression
	ifelse_stat : IF '(' expression . ')' statement ELSE statement
	ifelse_stat : IF '(' expression . ')' statement ELSE code_block

	'%'  shift 47
	')'  shift 94
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 71
	main_func : VOID Main '(' . ')' code_block

	')'  shift 95


state 72
	main_func : INT Main '(' . ')' code_block

	')'  shift 96


state 73
	while_stat : WHILE '(' expression . ')' code_block
	while_stat : WHILE '(' expression . ')' statement
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	')'  shift 97
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 74
	for_front : FOR '(' ';' . ';' ')'
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . expression ';' expression ')'
	for_front : FOR '(' ';' . ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 98
	ID  shift 17
	NUMBER  shift 18

	expression  goto 99
	id_expr  goto 25
	assign_expr  goto 28


state 75
	expression : expression . '*' expression
	expression : expression . '-' expression
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	expression : expression . '<' expression
	for_front : FOR '(' expression . ';' expression ';' ')'
	for_front : FOR '(' expression . ';' ';' ')'
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	for_front : FOR '(' expression . ';' ';' expression ')'
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	';'  shift 100
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 76
	io_stat : SCAN '(' id_expr . ')'

	')'  shift 101


state 77
	io_stat : PRINT '(' expression . ')'
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	')'  shift 102
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 78
	var_declaration_front : var_declaration_front ',' id_expr .  (20)
	assign_expr : id_expr . '=' expression

	'='  shift 64
	.  reduce 20


state 79
	var_declaration_front : var_declaration_front ',' assign_expr .  (21)

	.  reduce 21


state 80
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression '%' expression .  (48)
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	.  reduce 48


state 81
	expression : expression '*' expression .  (46)
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	.  reduce 46


state 82
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression '+' expression .  (44)
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'/'  shift 51
	.  reduce 44


state 83
	expression : expression . '*' expression
	expression : expression '-' expression .  (45)
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'/'  shift 51
	.  reduce 45


state 84
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression '/' expression .  (47)
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	.  reduce 47


state 85
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression '<' expression .  (49)
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	.  reduce 49


state 86
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression '>' expression .  (50)
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	.  reduce 50


state 87
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression EQ expression .  (51)
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	LE  shift 57
	GE  shift 58
	.  reduce 51


state 88
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression NE expression .  (54)
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	LE  shift 57
	GE  shift 58
	.  reduce 54


state 89
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression LE expression .  (52)
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	.  reduce 52


state 90
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression GE expression .  (53)
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	.  reduce 53


91: shift-reduce conflict (shift 17, reduce 22) on ID
state 91
	code_block : LBRACE statement_list . RBRACE
	statement_list : statement_list . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	RBRACE  shift 103
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 93
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	assign_expr  goto 28
	io_stat  goto 29
	ifelse_stat  goto 31


92: shift-reduce conflict (shift 47, reduce 61) on '%'
92: shift-reduce conflict (shift 48, reduce 61) on '*'
92: shift-reduce conflict (shift 49, reduce 61) on '+'
92: shift-reduce conflict (shift 50, reduce 61) on '-'
92: shift-reduce conflict (shift 51, reduce 61) on '/'
92: shift-reduce conflict (shift 53, reduce 61) on '<'
92: shift-reduce conflict (shift 54, reduce 61) on '>'
92: shift-reduce conflict (shift 55, reduce 61) on EQ
92: shift-reduce conflict (shift 56, reduce 61) on NE
92: shift-reduce conflict (shift 57, reduce 61) on LE
92: shift-reduce conflict (shift 58, reduce 61) on GE
state 92
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	assign_expr : id_expr '=' expression .  (61)
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58
	.  reduce 61


state 93
	statement_list : statement_list statement .  (9)

	.  reduce 9


94: shift-reduce conflict (shift 17, reduce 22) on ID
state 94
	ifelse_stat : IF '(' expression ')' . code_block ELSE code_block
	ifelse_stat : IF '(' expression ')' . code_block ELSE statement
	ifelse_stat : IF '(' expression ')' . code_block
	ifelse_stat : IF '(' expression ')' . statement
	ifelse_stat : IF '(' expression ')' . statement ELSE statement
	ifelse_stat : IF '(' expression ')' . statement ELSE code_block
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	LBRACE  shift 60
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 104
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	code_block  goto 105
	assign_expr  goto 28
	io_stat  goto 29
	ifelse_stat  goto 31


state 95
	main_func : VOID Main '(' ')' . code_block

	LBRACE  shift 60

	code_block  goto 106


state 96
	main_func : INT Main '(' ')' . code_block

	LBRACE  shift 60

	code_block  goto 107


97: shift-reduce conflict (shift 17, reduce 22) on ID
state 97
	while_stat : WHILE '(' expression ')' . code_block
	while_stat : WHILE '(' expression ')' . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	LBRACE  shift 60
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 108
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	code_block  goto 109
	assign_expr  goto 28
	io_stat  goto 29
	ifelse_stat  goto 31


state 98
	for_front : FOR '(' ';' ';' . ')'
	for_front : FOR '(' ';' ';' . expression ')'

	'('  shift 1
	')'  shift 110
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 111
	id_expr  goto 25
	assign_expr  goto 28


state 99
	expression : expression . '*' expression
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . '-' expression
	for_front : FOR '(' ';' expression . ';' expression ')'
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	';'  shift 112
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 100
	for_front : FOR '(' expression ';' . expression ';' expression ')'
	for_front : FOR '(' expression ';' . expression ';' ')'
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 113
	ID  shift 17
	NUMBER  shift 18

	expression  goto 114
	id_expr  goto 25
	assign_expr  goto 28


state 101
	io_stat : SCAN '(' id_expr ')' .  (16)

	.  reduce 16


state 102
	io_stat : PRINT '(' expression ')' .  (17)

	.  reduce 17


state 103
	code_block : LBRACE statement_list RBRACE .  (6)

	.  reduce 6


104: shift-reduce conflict (shift 115, reduce 63) on ELSE
state 104
	ifelse_stat : IF '(' expression ')' statement .  (63)
	ifelse_stat : IF '(' expression ')' statement . ELSE statement
	ifelse_stat : IF '(' expression ')' statement . ELSE code_block

	ELSE  shift 115
	.  reduce 63


105: shift-reduce conflict (shift 116, reduce 62) on ELSE
state 105
	ifelse_stat : IF '(' expression ')' code_block . ELSE code_block
	ifelse_stat : IF '(' expression ')' code_block . ELSE statement
	ifelse_stat : IF '(' expression ')' code_block .  (62)

	ELSE  shift 116
	.  reduce 62


state 106
	main_func : VOID Main '(' ')' code_block .  (4)

	.  reduce 4


state 107
	main_func : INT Main '(' ')' code_block .  (5)

	.  reduce 5


state 108
	while_stat : WHILE '(' expression ')' statement .  (33)

	.  reduce 33


state 109
	while_stat : WHILE '(' expression ')' code_block .  (32)

	.  reduce 32


state 110
	for_front : FOR '(' ';' ';' ')' .  (43)

	.  reduce 43


state 111
	expression : expression . '*' expression
	expression : expression . '-' expression
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	')'  shift 117
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 112
	for_front : FOR '(' ';' expression ';' . ')'
	for_front : FOR '(' ';' expression ';' . expression ')'

	'('  shift 1
	')'  shift 118
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 119
	id_expr  goto 25
	assign_expr  goto 28


state 113
	for_front : FOR '(' expression ';' ';' . ')'
	for_front : FOR '(' expression ';' ';' . expression ')'

	'('  shift 1
	')'  shift 120
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 121
	id_expr  goto 25
	assign_expr  goto 28


state 114
	expression : expression . '*' expression
	expression : expression . '-' expression
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	expression : expression . '<' expression
	for_front : FOR '(' expression ';' expression . ';' ')'
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	';'  shift 122
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


115: shift-reduce conflict (shift 17, reduce 22) on ID
state 115
	ifelse_stat : IF '(' expression ')' statement ELSE . statement
	ifelse_stat : IF '(' expression ')' statement ELSE . code_block
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	LBRACE  shift 60
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 123
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	code_block  goto 124
	assign_expr  goto 28
	io_stat  goto 29
	ifelse_stat  goto 31


116: shift-reduce conflict (shift 17, reduce 22) on ID
state 116
	ifelse_stat : IF '(' expression ')' code_block ELSE . code_block
	ifelse_stat : IF '(' expression ')' code_block ELSE . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 59
	LBRACE  shift 60
	INT  shift 61
	WHILE  shift 6
	FOR  shift 7
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	SCAN  shift 15
	PRINT  shift 16
	ID  shift 17
	NUMBER  shift 18

	while_stat  goto 19
	type  goto 20
	var_declaration_front  goto 21
	expression  goto 22
	statement  goto 125
	for_front  goto 24
	id_expr  goto 25
	for_stat  goto 27
	code_block  goto 126
	assign_expr  goto 28
	io_stat  goto 29
	ifelse_stat  goto 31


state 117
	for_front : FOR '(' ';' ';' expression ')' .  (42)

	.  reduce 42


state 118
	for_front : FOR '(' ';' expression ';' ')' .  (41)

	.  reduce 41


state 119
	expression : expression . '*' expression
	expression : expression . '-' expression
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	')'  shift 127
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 120
	for_front : FOR '(' expression ';' ';' ')' .  (40)

	.  reduce 40


state 121
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	for_front : FOR '(' expression ';' ';' expression . ')'
	expression : expression . '+' expression

	'%'  shift 47
	')'  shift 128
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 122
	for_front : FOR '(' expression ';' expression ';' . expression ')'
	for_front : FOR '(' expression ';' expression ';' . ')'

	'('  shift 1
	')'  shift 129
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	expression  goto 130
	id_expr  goto 25
	assign_expr  goto 28


state 123
	ifelse_stat : IF '(' expression ')' statement ELSE statement .  (67)

	.  reduce 67


state 124
	ifelse_stat : IF '(' expression ')' statement ELSE code_block .  (66)

	.  reduce 66


state 125
	ifelse_stat : IF '(' expression ')' code_block ELSE statement .  (65)

	.  reduce 65


state 126
	ifelse_stat : IF '(' expression ')' code_block ELSE code_block .  (64)

	.  reduce 64


state 127
	for_front : FOR '(' ';' expression ';' expression ')' .  (39)

	.  reduce 39


state 128
	for_front : FOR '(' expression ';' ';' expression ')' .  (38)

	.  reduce 38


state 129
	for_front : FOR '(' expression ';' expression ';' ')' .  (37)

	.  reduce 37


state 130
	expression : expression . '*' expression
	expression : expression . '-' expression
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '+' expression

	'%'  shift 47
	')'  shift 131
	'*'  shift 48
	'+'  shift 49
	'-'  shift 50
	'/'  shift 51
	'<'  shift 53
	'>'  shift 54
	EQ  shift 55
	NE  shift 56
	LE  shift 57
	GE  shift 58


state 131
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (36)

	.  reduce 36


Rules never reduced
	type :  (22)


##############################################################################
# Summary
##############################################################################

State 0 contains 1 shift-reduce conflict(s)
State 24 contains 1 shift-reduce conflict(s)
State 26 contains 1 shift-reduce conflict(s)
State 30 contains 1 shift-reduce conflict(s)
State 60 contains 1 shift-reduce conflict(s)
State 65 contains 19 shift-reduce conflict(s)
State 67 contains 18 reduce-reduce conflict(s)
State 68 contains 19 shift-reduce conflict(s)
State 91 contains 1 shift-reduce conflict(s)
State 92 contains 11 shift-reduce conflict(s)
State 94 contains 1 shift-reduce conflict(s)
State 97 contains 1 shift-reduce conflict(s)
State 104 contains 1 shift-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 115 contains 1 shift-reduce conflict(s)
State 116 contains 1 shift-reduce conflict(s)


39 token(s), 17 nonterminal(s)
68 grammar rule(s), 132 state(s)


##############################################################################
# End of File
##############################################################################
