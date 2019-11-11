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
# Time: 15:21:30
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
   55             | expression '^' expression
   56             | '-' expression
   57             | '(' expression ')'
   58             | NUMBER
   59             | id_expr
   60             | assign_expr

   61  id_expr : ID

   62  assign_expr : id_expr '=' expression

   63  ifelse_stat : IF '(' expression ')' code_block
   64              | IF '(' expression ')' statement
   65              | IF '(' expression ')' code_block ELSE code_block
   66              | IF '(' expression ')' code_block ELSE statement
   67              | IF '(' expression ')' statement ELSE code_block
   68              | IF '(' expression ')' statement ELSE statement


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

	prog  goto 19
	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	main_func  goto 24
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 28
	statement_list  goto 29
	type  goto 30
	for_stat  goto 31
	while_stat  goto 32


state 1
	expression : '(' . expression ')'

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 33
	assign_expr  goto 27


state 2
	expression : '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 34
	assign_expr  goto 27


state 3
	ifelse_stat : IF . '(' expression ')' code_block
	ifelse_stat : IF . '(' expression ')' statement
	ifelse_stat : IF . '(' expression ')' code_block ELSE code_block
	ifelse_stat : IF . '(' expression ')' code_block ELSE statement
	ifelse_stat : IF . '(' expression ')' statement ELSE code_block
	ifelse_stat : IF . '(' expression ')' statement ELSE statement

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
	while_stat : WHILE . '(' expression ')' statement
	while_stat : WHILE . '(' expression ')' code_block

	'('  shift 39


state 7
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' ';' ';' ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' ';' ';' expression ')'
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' ';' expression ';' expression ')'

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
	id_expr : ID .  (61)

	.  reduce 61


state 18
	expression : NUMBER .  (58)

	.  reduce 58


19: shift-reduce conflict (shift 17, reduce 22) on ID
state 19
	$accept : prog . $end  (0)
	prog : prog . statement_list
	type : .  (22)

	$end  accept
	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 28
	statement_list  goto 45
	type  goto 30
	for_stat  goto 31
	while_stat  goto 32


state 20
	statement : io_stat . ';'

	';'  shift 46


state 21
	statement : ifelse_stat .  (13)

	.  reduce 13


state 22
	assign_expr : id_expr . '=' expression
	expression : id_expr .  (59)

	'='  shift 47
	.  reduce 59


23: shift-reduce conflict (shift 17, reduce 22) on ID
state 23
	for_stat : for_front . code_block
	for_stat : for_front . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	LBRACE  shift 48
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 49
	type  goto 30
	code_block  goto 50
	for_stat  goto 31
	while_stat  goto 32


state 24
	prog : main_func .  (1)

	.  reduce 1


state 25
	statement : var_declaration_front . ';'
	var_declaration_front : var_declaration_front . ',' assign_expr
	var_declaration_front : var_declaration_front . ',' id_expr

	','  shift 51
	';'  shift 52


state 26
	statement : expression . ';'
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	';'  shift 58
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 27
	expression : assign_expr .  (60)

	.  reduce 60


state 28
	statement_list : statement .  (8)

	.  reduce 8


29: shift-reduce conflict (shift 17, reduce 22) on ID
state 29
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

	prog  goto 66
	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	main_func  goto 24
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 67
	statement_list  goto 29
	type  goto 30
	for_stat  goto 31
	while_stat  goto 32


state 30
	var_declaration_front : type . id_expr
	var_declaration_front : type . assign_expr

	ID  shift 17

	id_expr  goto 68
	assign_expr  goto 69


state 31
	statement : for_stat .  (12)

	.  reduce 12


state 32
	statement : while_stat .  (11)

	.  reduce 11


state 33
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : '(' expression . ')'
	expression : expression . '%' expression

	'%'  shift 53
	')'  shift 70
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 34
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : '-' expression .  (56)
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	.  reduce 56


state 35
	ifelse_stat : IF '(' . expression ')' code_block
	ifelse_stat : IF '(' . expression ')' statement
	ifelse_stat : IF '(' . expression ')' code_block ELSE code_block
	ifelse_stat : IF '(' . expression ')' code_block ELSE statement
	ifelse_stat : IF '(' . expression ')' statement ELSE code_block
	ifelse_stat : IF '(' . expression ')' statement ELSE statement

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 71
	assign_expr  goto 27


state 36
	Main : MAIN .  (7)

	.  reduce 7


state 37
	main_func : VOID Main . '(' ')' code_block

	'('  shift 72


state 38
	main_func : INT Main . '(' ')' code_block

	'('  shift 73


state 39
	while_stat : WHILE '(' . expression ')' statement
	while_stat : WHILE '(' . expression ')' code_block

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 74
	assign_expr  goto 27


state 40
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . ';' ';' ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . ';' ';' expression ')'
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . ';' expression ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 75
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 76
	assign_expr  goto 27


state 41
	io_stat : SCAN '(' . id_expr ')'

	ID  shift 17

	id_expr  goto 77


state 42
	io_stat : PRINT '(' . expression ')'

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 78
	assign_expr  goto 27


state 43
	type : VOID .  (31)

	.  reduce 31


state 44
	type : INT .  (30)

	.  reduce 30


45: shift-reduce conflict (shift 1, reduce 2) on '('
45: shift-reduce conflict (shift 2, reduce 2) on '-'
45: shift-reduce conflict (shift 3, reduce 2) on IF
45: shift-reduce conflict (shift 43, reduce 2) on VOID
45: shift-reduce conflict (shift 44, reduce 2) on INT
45: shift-reduce conflict (shift 6, reduce 2) on WHILE
45: shift-reduce conflict (shift 7, reduce 2) on FOR
45: shift-reduce conflict (shift 8, reduce 2) on STRUCT
45: shift-reduce conflict (shift 9, reduce 2) on LONGINT
45: shift-reduce conflict (shift 10, reduce 2) on DOUBLE
45: shift-reduce conflict (shift 11, reduce 2) on LONGLONGINT
45: shift-reduce conflict (shift 12, reduce 2) on FLOAT
45: shift-reduce conflict (shift 13, reduce 2) on BOOL
45: shift-reduce conflict (shift 14, reduce 2) on BYTE
45: shift-reduce conflict (shift 15, reduce 2) on SCAN
45: shift-reduce conflict (shift 16, reduce 2) on PRINT
45: shift-reduce conflict (shift 17, reduce 2) on ID
45: shift-reduce conflict (shift 18, reduce 2) on NUMBER
45: shift-reduce conflict (shift 17, reduce 22) on ID
state 45
	prog : prog statement_list .  (2)
	statement_list : statement_list . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 79
	type  goto 30
	for_stat  goto 31
	while_stat  goto 32


state 46
	statement : io_stat ';' .  (15)

	.  reduce 15


state 47
	assign_expr : id_expr '=' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 80
	assign_expr  goto 27


48: shift-reduce conflict (shift 17, reduce 22) on ID
state 48
	code_block : LBRACE . statement_list RBRACE
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 28
	statement_list  goto 81
	type  goto 30
	for_stat  goto 31
	while_stat  goto 32


state 49
	for_stat : for_front statement .  (35)

	.  reduce 35


state 50
	for_stat : for_front code_block .  (34)

	.  reduce 34


state 51
	var_declaration_front : var_declaration_front ',' . assign_expr
	var_declaration_front : var_declaration_front ',' . id_expr

	ID  shift 17

	id_expr  goto 82
	assign_expr  goto 83


state 52
	statement : var_declaration_front ';' .  (14)

	.  reduce 14


state 53
	expression : expression '%' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 84
	assign_expr  goto 27


state 54
	expression : expression '*' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 85
	assign_expr  goto 27


state 55
	expression : expression '+' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 86
	assign_expr  goto 27


state 56
	expression : expression '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 87
	assign_expr  goto 27


state 57
	expression : expression '/' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 88
	assign_expr  goto 27


state 58
	statement : expression ';' .  (10)

	.  reduce 10


state 59
	expression : expression '<' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 89
	assign_expr  goto 27


state 60
	expression : expression '>' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 90
	assign_expr  goto 27


state 61
	expression : expression '^' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 91
	assign_expr  goto 27


state 62
	expression : expression EQ . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 92
	assign_expr  goto 27


state 63
	expression : expression NE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 93
	assign_expr  goto 27


state 64
	expression : expression LE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 94
	assign_expr  goto 27


state 65
	expression : expression GE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 95
	assign_expr  goto 27


66: shift-reduce conflict (shift 1, reduce 3) on '('
66: shift-reduce conflict (shift 2, reduce 3) on '-'
66: shift-reduce conflict (shift 3, reduce 3) on IF
66: shift-reduce conflict (shift 43, reduce 3) on VOID
66: shift-reduce conflict (shift 44, reduce 3) on INT
66: shift-reduce conflict (shift 6, reduce 3) on WHILE
66: shift-reduce conflict (shift 7, reduce 3) on FOR
66: shift-reduce conflict (shift 8, reduce 3) on STRUCT
66: shift-reduce conflict (shift 9, reduce 3) on LONGINT
66: shift-reduce conflict (shift 10, reduce 3) on DOUBLE
66: shift-reduce conflict (shift 11, reduce 3) on LONGLONGINT
66: shift-reduce conflict (shift 12, reduce 3) on FLOAT
66: shift-reduce conflict (shift 13, reduce 3) on BOOL
66: shift-reduce conflict (shift 14, reduce 3) on BYTE
66: shift-reduce conflict (shift 15, reduce 3) on SCAN
66: shift-reduce conflict (shift 16, reduce 3) on PRINT
66: shift-reduce conflict (shift 17, reduce 3) on ID
66: shift-reduce conflict (shift 18, reduce 3) on NUMBER
66: shift-reduce conflict (shift 17, reduce 22) on ID
state 66
	prog : prog . statement_list
	prog : statement_list prog .  (3)
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 28
	statement_list  goto 45
	type  goto 30
	for_stat  goto 31
	while_stat  goto 32


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


state 68
	var_declaration_front : type id_expr .  (19)
	assign_expr : id_expr . '=' expression

	'='  shift 47
	.  reduce 19


state 69
	var_declaration_front : type assign_expr .  (18)

	.  reduce 18


state 70
	expression : '(' expression ')' .  (57)

	.  reduce 57


state 71
	expression : expression . LE expression
	ifelse_stat : IF '(' expression . ')' code_block
	ifelse_stat : IF '(' expression . ')' statement
	ifelse_stat : IF '(' expression . ')' code_block ELSE code_block
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression
	ifelse_stat : IF '(' expression . ')' code_block ELSE statement
	ifelse_stat : IF '(' expression . ')' statement ELSE code_block
	ifelse_stat : IF '(' expression . ')' statement ELSE statement

	'%'  shift 53
	')'  shift 96
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 72
	main_func : VOID Main '(' . ')' code_block

	')'  shift 97


state 73
	main_func : INT Main '(' . ')' code_block

	')'  shift 98


state 74
	while_stat : WHILE '(' expression . ')' statement
	while_stat : WHILE '(' expression . ')' code_block
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	')'  shift 99
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 75
	for_front : FOR '(' ';' . ';' ')'
	for_front : FOR '(' ';' . ';' expression ')'
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . expression ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 100
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 101
	assign_expr  goto 27


state 76
	for_front : FOR '(' expression . ';' ';' ')'
	expression : expression . LE expression
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	for_front : FOR '(' expression . ';' expression ';' ')'
	for_front : FOR '(' expression . ';' ';' expression ')'
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	';'  shift 102
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 77
	io_stat : SCAN '(' id_expr . ')'

	')'  shift 103


state 78
	io_stat : PRINT '(' expression . ')'
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	')'  shift 104
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 79
	statement_list : statement_list statement .  (9)

	.  reduce 9


80: shift-reduce conflict (shift 53, reduce 62) on '%'
80: shift-reduce conflict (shift 54, reduce 62) on '*'
80: shift-reduce conflict (shift 55, reduce 62) on '+'
80: shift-reduce conflict (shift 56, reduce 62) on '-'
80: shift-reduce conflict (shift 57, reduce 62) on '/'
80: shift-reduce conflict (shift 59, reduce 62) on '<'
80: shift-reduce conflict (shift 60, reduce 62) on '>'
80: shift-reduce conflict (shift 61, reduce 62) on '^'
80: shift-reduce conflict (shift 62, reduce 62) on EQ
80: shift-reduce conflict (shift 63, reduce 62) on NE
80: shift-reduce conflict (shift 64, reduce 62) on LE
80: shift-reduce conflict (shift 65, reduce 62) on GE
state 80
	assign_expr : id_expr '=' expression .  (62)
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65
	.  reduce 62


81: shift-reduce conflict (shift 17, reduce 22) on ID
state 81
	code_block : LBRACE statement_list . RBRACE
	statement_list : statement_list . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	RBRACE  shift 105
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 79
	type  goto 30
	for_stat  goto 31
	while_stat  goto 32


state 82
	var_declaration_front : var_declaration_front ',' id_expr .  (20)
	assign_expr : id_expr . '=' expression

	'='  shift 47
	.  reduce 20


state 83
	var_declaration_front : var_declaration_front ',' assign_expr .  (21)

	.  reduce 21


state 84
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression '%' expression .  (48)
	expression : expression . '%' expression

	'^'  shift 61
	.  reduce 48


state 85
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression '*' expression .  (46)
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'^'  shift 61
	.  reduce 46


state 86
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression '+' expression .  (44)
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'/'  shift 57
	'^'  shift 61
	.  reduce 44


state 87
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression '-' expression .  (45)
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'/'  shift 57
	'^'  shift 61
	.  reduce 45


state 88
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression '/' expression .  (47)
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'^'  shift 61
	.  reduce 47


state 89
	expression : expression . LE expression
	expression : expression '<' expression .  (49)
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'^'  shift 61
	.  reduce 49


state 90
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression '>' expression .  (50)
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'^'  shift 61
	.  reduce 50


state 91
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression '^' expression .  (55)
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'^'  shift 61
	.  reduce 55


state 92
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression EQ expression .  (51)
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	LE  shift 64
	GE  shift 65
	.  reduce 51


state 93
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression NE expression .  (54)
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	LE  shift 64
	GE  shift 65
	.  reduce 54


state 94
	expression : expression LE expression .  (52)
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'^'  shift 61
	.  reduce 52


state 95
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression GE expression .  (53)
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'^'  shift 61
	.  reduce 53


96: shift-reduce conflict (shift 17, reduce 22) on ID
state 96
	ifelse_stat : IF '(' expression ')' . code_block
	ifelse_stat : IF '(' expression ')' . statement
	ifelse_stat : IF '(' expression ')' . code_block ELSE code_block
	ifelse_stat : IF '(' expression ')' . code_block ELSE statement
	ifelse_stat : IF '(' expression ')' . statement ELSE code_block
	ifelse_stat : IF '(' expression ')' . statement ELSE statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	LBRACE  shift 48
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 106
	type  goto 30
	code_block  goto 107
	for_stat  goto 31
	while_stat  goto 32


state 97
	main_func : VOID Main '(' ')' . code_block

	LBRACE  shift 48

	code_block  goto 108


state 98
	main_func : INT Main '(' ')' . code_block

	LBRACE  shift 48

	code_block  goto 109


99: shift-reduce conflict (shift 17, reduce 22) on ID
state 99
	while_stat : WHILE '(' expression ')' . statement
	while_stat : WHILE '(' expression ')' . code_block
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	LBRACE  shift 48
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 110
	type  goto 30
	code_block  goto 111
	for_stat  goto 31
	while_stat  goto 32


state 100
	for_front : FOR '(' ';' ';' . ')'
	for_front : FOR '(' ';' ';' . expression ')'

	'('  shift 1
	')'  shift 112
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 113
	assign_expr  goto 27


state 101
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . '/' expression
	expression : expression . '^' expression
	for_front : FOR '(' ';' expression . ';' expression ')'
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	';'  shift 114
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 102
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . expression ';' expression ')'
	for_front : FOR '(' expression ';' . expression ';' ')'
	for_front : FOR '(' expression ';' . ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 115
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 116
	assign_expr  goto 27


state 103
	io_stat : SCAN '(' id_expr ')' .  (16)

	.  reduce 16


state 104
	io_stat : PRINT '(' expression ')' .  (17)

	.  reduce 17


state 105
	code_block : LBRACE statement_list RBRACE .  (6)

	.  reduce 6


106: shift-reduce conflict (shift 117, reduce 64) on ELSE
state 106
	ifelse_stat : IF '(' expression ')' statement .  (64)
	ifelse_stat : IF '(' expression ')' statement . ELSE code_block
	ifelse_stat : IF '(' expression ')' statement . ELSE statement

	ELSE  shift 117
	.  reduce 64


107: shift-reduce conflict (shift 118, reduce 63) on ELSE
state 107
	ifelse_stat : IF '(' expression ')' code_block .  (63)
	ifelse_stat : IF '(' expression ')' code_block . ELSE code_block
	ifelse_stat : IF '(' expression ')' code_block . ELSE statement

	ELSE  shift 118
	.  reduce 63


state 108
	main_func : VOID Main '(' ')' code_block .  (4)

	.  reduce 4


state 109
	main_func : INT Main '(' ')' code_block .  (5)

	.  reduce 5


state 110
	while_stat : WHILE '(' expression ')' statement .  (33)

	.  reduce 33


state 111
	while_stat : WHILE '(' expression ')' code_block .  (32)

	.  reduce 32


state 112
	for_front : FOR '(' ';' ';' ')' .  (43)

	.  reduce 43


state 113
	expression : expression . LE expression
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	')'  shift 119
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 114
	for_front : FOR '(' ';' expression ';' . ')'
	for_front : FOR '(' ';' expression ';' . expression ')'

	'('  shift 1
	')'  shift 120
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 121
	assign_expr  goto 27


state 115
	for_front : FOR '(' expression ';' ';' . ')'
	for_front : FOR '(' expression ';' ';' . expression ')'

	'('  shift 1
	')'  shift 122
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 123
	assign_expr  goto 27


state 116
	expression : expression . LE expression
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	for_front : FOR '(' expression ';' expression . ';' ')'
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	';'  shift 124
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


117: shift-reduce conflict (shift 17, reduce 22) on ID
state 117
	ifelse_stat : IF '(' expression ')' statement ELSE . code_block
	ifelse_stat : IF '(' expression ')' statement ELSE . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	LBRACE  shift 48
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 125
	type  goto 30
	code_block  goto 126
	for_stat  goto 31
	while_stat  goto 32


118: shift-reduce conflict (shift 17, reduce 22) on ID
state 118
	ifelse_stat : IF '(' expression ')' code_block ELSE . code_block
	ifelse_stat : IF '(' expression ')' code_block ELSE . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 43
	LBRACE  shift 48
	INT  shift 44
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

	io_stat  goto 20
	ifelse_stat  goto 21
	id_expr  goto 22
	for_front  goto 23
	var_declaration_front  goto 25
	expression  goto 26
	assign_expr  goto 27
	statement  goto 127
	type  goto 30
	code_block  goto 128
	for_stat  goto 31
	while_stat  goto 32


state 119
	for_front : FOR '(' ';' ';' expression ')' .  (42)

	.  reduce 42


state 120
	for_front : FOR '(' ';' expression ';' ')' .  (41)

	.  reduce 41


state 121
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	')'  shift 129
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 122
	for_front : FOR '(' expression ';' ';' ')' .  (40)

	.  reduce 40


state 123
	expression : expression . LE expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	for_front : FOR '(' expression ';' ';' expression . ')'
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	')'  shift 130
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 124
	for_front : FOR '(' expression ';' expression ';' . expression ')'
	for_front : FOR '(' expression ';' expression ';' . ')'

	'('  shift 1
	')'  shift 131
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 22
	expression  goto 132
	assign_expr  goto 27


state 125
	ifelse_stat : IF '(' expression ')' statement ELSE statement .  (68)

	.  reduce 68


state 126
	ifelse_stat : IF '(' expression ')' statement ELSE code_block .  (67)

	.  reduce 67


state 127
	ifelse_stat : IF '(' expression ')' code_block ELSE statement .  (66)

	.  reduce 66


state 128
	ifelse_stat : IF '(' expression ')' code_block ELSE code_block .  (65)

	.  reduce 65


state 129
	for_front : FOR '(' ';' expression ';' expression ')' .  (39)

	.  reduce 39


state 130
	for_front : FOR '(' expression ';' ';' expression ')' .  (38)

	.  reduce 38


state 131
	for_front : FOR '(' expression ';' expression ';' ')' .  (37)

	.  reduce 37


state 132
	expression : expression . LE expression
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . GE expression
	expression : expression . '/' expression
	expression : expression . '^' expression
	expression : expression . EQ expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '>' expression
	expression : expression . '%' expression

	'%'  shift 53
	')'  shift 133
	'*'  shift 54
	'+'  shift 55
	'-'  shift 56
	'/'  shift 57
	'<'  shift 59
	'>'  shift 60
	'^'  shift 61
	EQ  shift 62
	NE  shift 63
	LE  shift 64
	GE  shift 65


state 133
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (36)

	.  reduce 36


Rules never reduced
	type :  (22)


##############################################################################
# Summary
##############################################################################

State 0 contains 1 shift-reduce conflict(s)
State 19 contains 1 shift-reduce conflict(s)
State 23 contains 1 shift-reduce conflict(s)
State 29 contains 1 shift-reduce conflict(s)
State 45 contains 19 shift-reduce conflict(s)
State 48 contains 1 shift-reduce conflict(s)
State 66 contains 19 shift-reduce conflict(s)
State 67 contains 18 reduce-reduce conflict(s)
State 80 contains 12 shift-reduce conflict(s)
State 81 contains 1 shift-reduce conflict(s)
State 96 contains 1 shift-reduce conflict(s)
State 99 contains 1 shift-reduce conflict(s)
State 106 contains 1 shift-reduce conflict(s)
State 107 contains 1 shift-reduce conflict(s)
State 117 contains 1 shift-reduce conflict(s)
State 118 contains 1 shift-reduce conflict(s)


40 token(s), 17 nonterminal(s)
69 grammar rule(s), 134 state(s)


##############################################################################
# End of File
##############################################################################
