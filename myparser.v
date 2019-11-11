#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 57 of your 30 day trial period.
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
# Time: 16:43:52
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
   37            | FOR '(' type assign_expr ';' expression ';' expression ')'
   38            | FOR '(' expression ';' expression ';' ')'
   39            | FOR '(' type assign_expr ';' expression ';' ')'
   40            | FOR '(' expression ';' ';' expression ')'
   41            | FOR '(' type assign_expr ';' ';' expression ')'
   42            | FOR '(' ';' expression ';' expression ')'
   43            | FOR '(' expression ';' ';' ')'
   44            | FOR '(' type assign_expr ';' ';' ')'
   45            | FOR '(' ';' expression ';' ')'
   46            | FOR '(' ';' ';' expression ')'
   47            | FOR '(' ';' ';' ')'

   48  assign_expr : id_expr '=' expression

   49  expression : expression '+' expression
   50             | expression '-' expression
   51             | expression '*' expression
   52             | expression '/' expression
   53             | expression '%' expression
   54             | expression '<' expression
   55             | expression '>' expression
   56             | expression EQ expression
   57             | expression LE expression
   58             | expression GE expression
   59             | expression NE expression
   60             | expression AND expression
   61             | expression OR expression
   62             | expression '^' expression
   63             | '-' expression
   64             | '(' expression ')'
   65             | NUMBER
   66             | id_expr
   67             | assign_expr

   68  id_expr : ID

   69  ifelse_stat : IF '(' expression ')' code_block
   70              | IF '(' expression ')' statement
   71              | IF '(' expression ')' code_block ELSE code_block
   72              | IF '(' expression ')' code_block ELSE statement
   73              | IF '(' expression ')' statement ELSE code_block
   74              | IF '(' expression ')' statement ELSE statement


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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	prog  goto 22
	assign_expr  goto 23
	statement  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26
	main_func  goto 27
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	statement_list  goto 31
	for_front  goto 32


state 1
	expression : '(' . expression ')'

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 33
	assign_expr  goto 23


state 2
	expression : '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 34
	assign_expr  goto 23


state 3
	ifelse_stat : IF . '(' expression ')' code_block ELSE statement
	ifelse_stat : IF . '(' expression ')' code_block
	ifelse_stat : IF . '(' expression ')' statement ELSE statement
	ifelse_stat : IF . '(' expression ')' code_block ELSE code_block
	ifelse_stat : IF . '(' expression ')' statement ELSE code_block
	ifelse_stat : IF . '(' expression ')' statement

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
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' type assign_expr ';' expression ';' ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' type assign_expr ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' ';' ';' ')'
	for_front : FOR . '(' ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' type assign_expr ';' ';' expression ')'
	for_front : FOR . '(' type assign_expr ';' ';' ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' ';' ';' expression ')'

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
	id_expr : ID .  (68)

	.  reduce 68


state 18
	expression : NUMBER .  (65)

	.  reduce 65


state 19
	assign_expr : id_expr . '=' expression
	expression : id_expr .  (66)

	'='  shift 43
	.  reduce 66


state 20
	statement : io_stat . ';'

	';'  shift 44


state 21
	statement : expression . ';'
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	';'  shift 50
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


22: shift-reduce conflict (shift 17, reduce 22) on ID
state 22
	$accept : prog . $end  (0)
	prog : prog . statement_list
	type : .  (22)

	$end  accept
	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	statement_list  goto 62
	for_front  goto 32


state 23
	expression : assign_expr .  (67)

	.  reduce 67


state 24
	statement_list : statement .  (8)

	.  reduce 8


state 25
	statement : for_stat .  (12)

	.  reduce 12


state 26
	statement : var_declaration_front . ';'
	var_declaration_front : var_declaration_front . ',' id_expr
	var_declaration_front : var_declaration_front . ',' assign_expr

	','  shift 63
	';'  shift 64


state 27
	prog : main_func .  (1)

	.  reduce 1


state 28
	statement : while_stat .  (11)

	.  reduce 11


state 29
	var_declaration_front : type . assign_expr
	var_declaration_front : type . id_expr

	ID  shift 17

	id_expr  goto 65
	assign_expr  goto 66


state 30
	statement : ifelse_stat .  (13)

	.  reduce 13


31: shift-reduce conflict (shift 17, reduce 22) on ID
state 31
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	prog  goto 67
	assign_expr  goto 23
	statement  goto 68
	for_stat  goto 25
	var_declaration_front  goto 26
	main_func  goto 27
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	statement_list  goto 31
	for_front  goto 32


32: shift-reduce conflict (shift 17, reduce 22) on ID
state 32
	for_stat : for_front . statement
	for_stat : for_front . code_block
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
	LBRACE  shift 69
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 70
	for_stat  goto 25
	var_declaration_front  goto 26
	code_block  goto 71
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	for_front  goto 32


state 33
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : '(' expression . ')'
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	')'  shift 72
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 34
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : '-' expression .  (63)
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	.  reduce 63


state 35
	ifelse_stat : IF '(' . expression ')' code_block ELSE statement
	ifelse_stat : IF '(' . expression ')' code_block
	ifelse_stat : IF '(' . expression ')' statement ELSE statement
	ifelse_stat : IF '(' . expression ')' code_block ELSE code_block
	ifelse_stat : IF '(' . expression ')' statement ELSE code_block
	ifelse_stat : IF '(' . expression ')' statement

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 73
	assign_expr  goto 23


state 36
	Main : MAIN .  (7)

	.  reduce 7


state 37
	main_func : VOID Main . '(' ')' code_block

	'('  shift 74


state 38
	main_func : INT Main . '(' ')' code_block

	'('  shift 75


state 39
	while_stat : WHILE '(' . expression ')' code_block
	while_stat : WHILE '(' . expression ')' statement

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 76
	assign_expr  goto 23


40: shift-reduce conflict (shift 17, reduce 22) on ID
state 40
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . type assign_expr ';' expression ';' ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . type assign_expr ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . ';' ';' ')'
	for_front : FOR '(' . ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . type assign_expr ';' ';' expression ')'
	for_front : FOR '(' . type assign_expr ';' ';' ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . ';' ';' expression ')'
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	';'  shift 77
	VOID  shift 60
	INT  shift 61
	STRUCT  shift 8
	LONGINT  shift 9
	DOUBLE  shift 10
	LONGLONGINT  shift 11
	FLOAT  shift 12
	BOOL  shift 13
	BYTE  shift 14
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 78
	assign_expr  goto 23
	type  goto 79


state 41
	io_stat : SCAN '(' . id_expr ')'

	ID  shift 17

	id_expr  goto 80


state 42
	io_stat : PRINT '(' . expression ')'

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 81
	assign_expr  goto 23


state 43
	assign_expr : id_expr '=' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 82
	assign_expr  goto 23


state 44
	statement : io_stat ';' .  (15)

	.  reduce 15


state 45
	expression : expression '%' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 83
	assign_expr  goto 23


state 46
	expression : expression '*' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 84
	assign_expr  goto 23


state 47
	expression : expression '+' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 85
	assign_expr  goto 23


state 48
	expression : expression '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 86
	assign_expr  goto 23


state 49
	expression : expression '/' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 87
	assign_expr  goto 23


state 50
	statement : expression ';' .  (10)

	.  reduce 10


state 51
	expression : expression '<' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 88
	assign_expr  goto 23


state 52
	expression : expression '>' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 89
	assign_expr  goto 23


state 53
	expression : expression '^' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 90
	assign_expr  goto 23


state 54
	expression : expression OR . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 91
	assign_expr  goto 23


state 55
	expression : expression AND . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 92
	assign_expr  goto 23


state 56
	expression : expression EQ . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 93
	assign_expr  goto 23


state 57
	expression : expression NE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 94
	assign_expr  goto 23


state 58
	expression : expression LE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 95
	assign_expr  goto 23


state 59
	expression : expression GE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 96
	assign_expr  goto 23


state 60
	type : VOID .  (31)

	.  reduce 31


state 61
	type : INT .  (30)

	.  reduce 30


62: shift-reduce conflict (shift 1, reduce 2) on '('
62: shift-reduce conflict (shift 2, reduce 2) on '-'
62: shift-reduce conflict (shift 3, reduce 2) on IF
62: shift-reduce conflict (shift 60, reduce 2) on VOID
62: shift-reduce conflict (shift 61, reduce 2) on INT
62: shift-reduce conflict (shift 6, reduce 2) on WHILE
62: shift-reduce conflict (shift 7, reduce 2) on FOR
62: shift-reduce conflict (shift 8, reduce 2) on STRUCT
62: shift-reduce conflict (shift 9, reduce 2) on LONGINT
62: shift-reduce conflict (shift 10, reduce 2) on DOUBLE
62: shift-reduce conflict (shift 11, reduce 2) on LONGLONGINT
62: shift-reduce conflict (shift 12, reduce 2) on FLOAT
62: shift-reduce conflict (shift 13, reduce 2) on BOOL
62: shift-reduce conflict (shift 14, reduce 2) on BYTE
62: shift-reduce conflict (shift 15, reduce 2) on SCAN
62: shift-reduce conflict (shift 16, reduce 2) on PRINT
62: shift-reduce conflict (shift 17, reduce 2) on ID
62: shift-reduce conflict (shift 18, reduce 2) on NUMBER
62: shift-reduce conflict (shift 17, reduce 22) on ID
state 62
	prog : prog statement_list .  (2)
	statement_list : statement_list . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 97
	for_stat  goto 25
	var_declaration_front  goto 26
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	for_front  goto 32


state 63
	var_declaration_front : var_declaration_front ',' . id_expr
	var_declaration_front : var_declaration_front ',' . assign_expr

	ID  shift 17

	id_expr  goto 98
	assign_expr  goto 99


state 64
	statement : var_declaration_front ';' .  (14)

	.  reduce 14


state 65
	var_declaration_front : type id_expr .  (19)
	assign_expr : id_expr . '=' expression

	'='  shift 43
	.  reduce 19


state 66
	var_declaration_front : type assign_expr .  (18)

	.  reduce 18


67: shift-reduce conflict (shift 1, reduce 3) on '('
67: shift-reduce conflict (shift 2, reduce 3) on '-'
67: shift-reduce conflict (shift 3, reduce 3) on IF
67: shift-reduce conflict (shift 60, reduce 3) on VOID
67: shift-reduce conflict (shift 61, reduce 3) on INT
67: shift-reduce conflict (shift 6, reduce 3) on WHILE
67: shift-reduce conflict (shift 7, reduce 3) on FOR
67: shift-reduce conflict (shift 8, reduce 3) on STRUCT
67: shift-reduce conflict (shift 9, reduce 3) on LONGINT
67: shift-reduce conflict (shift 10, reduce 3) on DOUBLE
67: shift-reduce conflict (shift 11, reduce 3) on LONGLONGINT
67: shift-reduce conflict (shift 12, reduce 3) on FLOAT
67: shift-reduce conflict (shift 13, reduce 3) on BOOL
67: shift-reduce conflict (shift 14, reduce 3) on BYTE
67: shift-reduce conflict (shift 15, reduce 3) on SCAN
67: shift-reduce conflict (shift 16, reduce 3) on PRINT
67: shift-reduce conflict (shift 17, reduce 3) on ID
67: shift-reduce conflict (shift 18, reduce 3) on NUMBER
67: shift-reduce conflict (shift 17, reduce 22) on ID
state 67
	prog : prog . statement_list
	prog : statement_list prog .  (3)
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	statement_list  goto 62
	for_front  goto 32


68: reduce-reduce conflict (reduce 8, reduce 9) on '('
68: reduce-reduce conflict (reduce 8, reduce 9) on '-'
68: reduce-reduce conflict (reduce 8, reduce 9) on IF
68: reduce-reduce conflict (reduce 8, reduce 9) on VOID
68: reduce-reduce conflict (reduce 8, reduce 9) on INT
68: reduce-reduce conflict (reduce 8, reduce 9) on WHILE
68: reduce-reduce conflict (reduce 8, reduce 9) on FOR
68: reduce-reduce conflict (reduce 8, reduce 9) on STRUCT
68: reduce-reduce conflict (reduce 8, reduce 9) on LONGINT
68: reduce-reduce conflict (reduce 8, reduce 9) on DOUBLE
68: reduce-reduce conflict (reduce 8, reduce 9) on LONGLONGINT
68: reduce-reduce conflict (reduce 8, reduce 9) on FLOAT
68: reduce-reduce conflict (reduce 8, reduce 9) on BOOL
68: reduce-reduce conflict (reduce 8, reduce 9) on BYTE
68: reduce-reduce conflict (reduce 8, reduce 9) on SCAN
68: reduce-reduce conflict (reduce 8, reduce 9) on PRINT
68: reduce-reduce conflict (reduce 8, reduce 9) on ID
68: reduce-reduce conflict (reduce 8, reduce 9) on NUMBER
state 68
	statement_list : statement .  (8)
	statement_list : statement_list statement .  (9)

	.  reduce 8


69: shift-reduce conflict (shift 17, reduce 22) on ID
state 69
	code_block : LBRACE . statement_list RBRACE
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 24
	for_stat  goto 25
	var_declaration_front  goto 26
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	statement_list  goto 100
	for_front  goto 32


state 70
	for_stat : for_front statement .  (35)

	.  reduce 35


state 71
	for_stat : for_front code_block .  (34)

	.  reduce 34


state 72
	expression : '(' expression ')' .  (64)

	.  reduce 64


state 73
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression
	ifelse_stat : IF '(' expression . ')' code_block ELSE statement
	ifelse_stat : IF '(' expression . ')' code_block
	ifelse_stat : IF '(' expression . ')' statement ELSE statement
	ifelse_stat : IF '(' expression . ')' code_block ELSE code_block
	ifelse_stat : IF '(' expression . ')' statement ELSE code_block
	ifelse_stat : IF '(' expression . ')' statement

	'%'  shift 45
	')'  shift 101
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 74
	main_func : VOID Main '(' . ')' code_block

	')'  shift 102


state 75
	main_func : INT Main '(' . ')' code_block

	')'  shift 103


state 76
	while_stat : WHILE '(' expression . ')' code_block
	while_stat : WHILE '(' expression . ')' statement
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	')'  shift 104
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 77
	for_front : FOR '(' ';' . ';' ')'
	for_front : FOR '(' ';' . expression ';' expression ')'
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . ';' expression ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 105
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 106
	assign_expr  goto 23


state 78
	for_front : FOR '(' expression . ';' expression ';' ')'
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	for_front : FOR '(' expression . ';' ';' expression ')'
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	for_front : FOR '(' expression . ';' ';' ')'
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	';'  shift 107
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 79
	for_front : FOR '(' type . assign_expr ';' expression ';' ')'
	for_front : FOR '(' type . assign_expr ';' expression ';' expression ')'
	for_front : FOR '(' type . assign_expr ';' ';' expression ')'
	for_front : FOR '(' type . assign_expr ';' ';' ')'

	ID  shift 17

	id_expr  goto 108
	assign_expr  goto 109


state 80
	io_stat : SCAN '(' id_expr . ')'

	')'  shift 110


state 81
	io_stat : PRINT '(' expression . ')'
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	')'  shift 111
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


82: shift-reduce conflict (shift 45, reduce 48) on '%'
82: shift-reduce conflict (shift 46, reduce 48) on '*'
82: shift-reduce conflict (shift 47, reduce 48) on '+'
82: shift-reduce conflict (shift 48, reduce 48) on '-'
82: shift-reduce conflict (shift 49, reduce 48) on '/'
82: shift-reduce conflict (shift 51, reduce 48) on '<'
82: shift-reduce conflict (shift 52, reduce 48) on '>'
82: shift-reduce conflict (shift 53, reduce 48) on '^'
82: shift-reduce conflict (shift 54, reduce 48) on OR
82: shift-reduce conflict (shift 55, reduce 48) on AND
82: shift-reduce conflict (shift 56, reduce 48) on EQ
82: shift-reduce conflict (shift 57, reduce 48) on NE
82: shift-reduce conflict (shift 58, reduce 48) on LE
82: shift-reduce conflict (shift 59, reduce 48) on GE
state 82
	assign_expr : id_expr '=' expression .  (48)
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59
	.  reduce 48


state 83
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression '%' expression .  (53)
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'^'  shift 53
	.  reduce 53


state 84
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression '*' expression .  (51)
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'^'  shift 53
	.  reduce 51


state 85
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression '+' expression .  (49)
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'/'  shift 49
	'^'  shift 53
	.  reduce 49


state 86
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression '-' expression .  (50)
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'/'  shift 49
	'^'  shift 53
	.  reduce 50


state 87
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression '/' expression .  (52)
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'^'  shift 53
	.  reduce 52


state 88
	expression : expression . '>' expression
	expression : expression '<' expression .  (54)
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'^'  shift 53
	.  reduce 54


state 89
	expression : expression '>' expression .  (55)
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'^'  shift 53
	.  reduce 55


state 90
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression '^' expression .  (62)
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'^'  shift 53
	.  reduce 62


state 91
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression OR expression .  (61)
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59
	.  reduce 61


state 92
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression AND expression .  (60)
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59
	.  reduce 60


state 93
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression EQ expression .  (56)
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	LE  shift 58
	GE  shift 59
	.  reduce 56


state 94
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression NE expression .  (59)
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	LE  shift 58
	GE  shift 59
	.  reduce 59


state 95
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression LE expression .  (57)
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'^'  shift 53
	.  reduce 57


state 96
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression GE expression .  (58)
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'^'  shift 53
	.  reduce 58


state 97
	statement_list : statement_list statement .  (9)

	.  reduce 9


state 98
	var_declaration_front : var_declaration_front ',' id_expr .  (20)
	assign_expr : id_expr . '=' expression

	'='  shift 43
	.  reduce 20


state 99
	var_declaration_front : var_declaration_front ',' assign_expr .  (21)

	.  reduce 21


100: shift-reduce conflict (shift 17, reduce 22) on ID
state 100
	code_block : LBRACE statement_list . RBRACE
	statement_list : statement_list . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
	RBRACE  shift 112
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 97
	for_stat  goto 25
	var_declaration_front  goto 26
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	for_front  goto 32


101: shift-reduce conflict (shift 17, reduce 22) on ID
state 101
	ifelse_stat : IF '(' expression ')' . code_block ELSE statement
	ifelse_stat : IF '(' expression ')' . code_block
	ifelse_stat : IF '(' expression ')' . statement ELSE statement
	ifelse_stat : IF '(' expression ')' . code_block ELSE code_block
	ifelse_stat : IF '(' expression ')' . statement ELSE code_block
	ifelse_stat : IF '(' expression ')' . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
	LBRACE  shift 69
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 113
	for_stat  goto 25
	var_declaration_front  goto 26
	code_block  goto 114
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	for_front  goto 32


state 102
	main_func : VOID Main '(' ')' . code_block

	LBRACE  shift 69

	code_block  goto 115


state 103
	main_func : INT Main '(' ')' . code_block

	LBRACE  shift 69

	code_block  goto 116


104: shift-reduce conflict (shift 17, reduce 22) on ID
state 104
	while_stat : WHILE '(' expression ')' . code_block
	while_stat : WHILE '(' expression ')' . statement
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
	LBRACE  shift 69
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 117
	for_stat  goto 25
	var_declaration_front  goto 26
	code_block  goto 118
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	for_front  goto 32


state 105
	for_front : FOR '(' ';' ';' . ')'
	for_front : FOR '(' ';' ';' . expression ')'

	'('  shift 1
	')'  shift 119
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 120
	assign_expr  goto 23


state 106
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	for_front : FOR '(' ';' expression . ';' expression ')'
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	';'  shift 121
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 107
	for_front : FOR '(' expression ';' . expression ';' ')'
	for_front : FOR '(' expression ';' . expression ';' expression ')'
	for_front : FOR '(' expression ';' . ';' expression ')'
	for_front : FOR '(' expression ';' . ';' ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 122
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 123
	assign_expr  goto 23


state 108
	assign_expr : id_expr . '=' expression

	'='  shift 43


state 109
	for_front : FOR '(' type assign_expr . ';' expression ';' ')'
	for_front : FOR '(' type assign_expr . ';' expression ';' expression ')'
	for_front : FOR '(' type assign_expr . ';' ';' expression ')'
	for_front : FOR '(' type assign_expr . ';' ';' ')'

	';'  shift 124


state 110
	io_stat : SCAN '(' id_expr ')' .  (16)

	.  reduce 16


state 111
	io_stat : PRINT '(' expression ')' .  (17)

	.  reduce 17


state 112
	code_block : LBRACE statement_list RBRACE .  (6)

	.  reduce 6


113: shift-reduce conflict (shift 125, reduce 70) on ELSE
state 113
	ifelse_stat : IF '(' expression ')' statement . ELSE statement
	ifelse_stat : IF '(' expression ')' statement . ELSE code_block
	ifelse_stat : IF '(' expression ')' statement .  (70)

	ELSE  shift 125
	.  reduce 70


114: shift-reduce conflict (shift 126, reduce 69) on ELSE
state 114
	ifelse_stat : IF '(' expression ')' code_block . ELSE statement
	ifelse_stat : IF '(' expression ')' code_block .  (69)
	ifelse_stat : IF '(' expression ')' code_block . ELSE code_block

	ELSE  shift 126
	.  reduce 69


state 115
	main_func : VOID Main '(' ')' code_block .  (4)

	.  reduce 4


state 116
	main_func : INT Main '(' ')' code_block .  (5)

	.  reduce 5


state 117
	while_stat : WHILE '(' expression ')' statement .  (33)

	.  reduce 33


state 118
	while_stat : WHILE '(' expression ')' code_block .  (32)

	.  reduce 32


state 119
	for_front : FOR '(' ';' ';' ')' .  (47)

	.  reduce 47


state 120
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . LE expression

	'%'  shift 45
	')'  shift 127
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 121
	for_front : FOR '(' ';' expression ';' . expression ')'
	for_front : FOR '(' ';' expression ';' . ')'

	'('  shift 1
	')'  shift 128
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 129
	assign_expr  goto 23


state 122
	for_front : FOR '(' expression ';' ';' . expression ')'
	for_front : FOR '(' expression ';' ';' . ')'

	'('  shift 1
	')'  shift 130
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 131
	assign_expr  goto 23


state 123
	for_front : FOR '(' expression ';' expression . ';' ')'
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	';'  shift 132
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 124
	for_front : FOR '(' type assign_expr ';' . expression ';' ')'
	for_front : FOR '(' type assign_expr ';' . expression ';' expression ')'
	for_front : FOR '(' type assign_expr ';' . ';' expression ')'
	for_front : FOR '(' type assign_expr ';' . ';' ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 133
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 134
	assign_expr  goto 23


125: shift-reduce conflict (shift 17, reduce 22) on ID
state 125
	ifelse_stat : IF '(' expression ')' statement ELSE . statement
	ifelse_stat : IF '(' expression ')' statement ELSE . code_block
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
	LBRACE  shift 69
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 135
	for_stat  goto 25
	var_declaration_front  goto 26
	code_block  goto 136
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	for_front  goto 32


126: shift-reduce conflict (shift 17, reduce 22) on ID
state 126
	ifelse_stat : IF '(' expression ')' code_block ELSE . statement
	ifelse_stat : IF '(' expression ')' code_block ELSE . code_block
	type : .  (22)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 60
	LBRACE  shift 69
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

	id_expr  goto 19
	io_stat  goto 20
	expression  goto 21
	assign_expr  goto 23
	statement  goto 137
	for_stat  goto 25
	var_declaration_front  goto 26
	code_block  goto 138
	while_stat  goto 28
	type  goto 29
	ifelse_stat  goto 30
	for_front  goto 32


state 127
	for_front : FOR '(' ';' ';' expression ')' .  (46)

	.  reduce 46


state 128
	for_front : FOR '(' ';' expression ';' ')' .  (45)

	.  reduce 45


state 129
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	')'  shift 139
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 130
	for_front : FOR '(' expression ';' ';' ')' .  (43)

	.  reduce 43


state 131
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	for_front : FOR '(' expression ';' ';' expression . ')'
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	')'  shift 140
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 132
	for_front : FOR '(' expression ';' expression ';' . ')'
	for_front : FOR '(' expression ';' expression ';' . expression ')'

	'('  shift 1
	')'  shift 141
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 142
	assign_expr  goto 23


state 133
	for_front : FOR '(' type assign_expr ';' ';' . expression ')'
	for_front : FOR '(' type assign_expr ';' ';' . ')'

	'('  shift 1
	')'  shift 143
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 144
	assign_expr  goto 23


state 134
	for_front : FOR '(' type assign_expr ';' expression . ';' ')'
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	for_front : FOR '(' type assign_expr ';' expression . ';' expression ')'
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	';'  shift 145
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 135
	ifelse_stat : IF '(' expression ')' statement ELSE statement .  (74)

	.  reduce 74


state 136
	ifelse_stat : IF '(' expression ')' statement ELSE code_block .  (73)

	.  reduce 73


state 137
	ifelse_stat : IF '(' expression ')' code_block ELSE statement .  (72)

	.  reduce 72


state 138
	ifelse_stat : IF '(' expression ')' code_block ELSE code_block .  (71)

	.  reduce 71


state 139
	for_front : FOR '(' ';' expression ';' expression ')' .  (42)

	.  reduce 42


state 140
	for_front : FOR '(' expression ';' ';' expression ')' .  (40)

	.  reduce 40


state 141
	for_front : FOR '(' expression ';' expression ';' ')' .  (38)

	.  reduce 38


state 142
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	')'  shift 146
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 143
	for_front : FOR '(' type assign_expr ';' ';' ')' .  (44)

	.  reduce 44


state 144
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	for_front : FOR '(' type assign_expr ';' ';' expression . ')'
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	')'  shift 147
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 145
	for_front : FOR '(' type assign_expr ';' expression ';' . ')'
	for_front : FOR '(' type assign_expr ';' expression ';' . expression ')'

	'('  shift 1
	')'  shift 148
	'-'  shift 2
	ID  shift 17
	NUMBER  shift 18

	id_expr  goto 19
	expression  goto 149
	assign_expr  goto 23


state 146
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (36)

	.  reduce 36


state 147
	for_front : FOR '(' type assign_expr ';' ';' expression ')' .  (41)

	.  reduce 41


state 148
	for_front : FOR '(' type assign_expr ';' expression ';' ')' .  (39)

	.  reduce 39


state 149
	expression : expression . '>' expression
	expression : expression . '<' expression
	expression : expression . GE expression
	expression : expression . '^' expression
	for_front : FOR '(' type assign_expr ';' expression ';' expression . ')'
	expression : expression . NE expression
	expression : expression . '%' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . EQ expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . LE expression

	'%'  shift 45
	')'  shift 150
	'*'  shift 46
	'+'  shift 47
	'-'  shift 48
	'/'  shift 49
	'<'  shift 51
	'>'  shift 52
	'^'  shift 53
	OR  shift 54
	AND  shift 55
	EQ  shift 56
	NE  shift 57
	LE  shift 58
	GE  shift 59


state 150
	for_front : FOR '(' type assign_expr ';' expression ';' expression ')' .  (37)

	.  reduce 37


Rules never reduced
	type :  (22)


##############################################################################
# Summary
##############################################################################

State 0 contains 1 shift-reduce conflict(s)
State 22 contains 1 shift-reduce conflict(s)
State 31 contains 1 shift-reduce conflict(s)
State 32 contains 1 shift-reduce conflict(s)
State 40 contains 1 shift-reduce conflict(s)
State 62 contains 19 shift-reduce conflict(s)
State 67 contains 19 shift-reduce conflict(s)
State 68 contains 18 reduce-reduce conflict(s)
State 69 contains 1 shift-reduce conflict(s)
State 82 contains 14 shift-reduce conflict(s)
State 100 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 104 contains 1 shift-reduce conflict(s)
State 113 contains 1 shift-reduce conflict(s)
State 114 contains 1 shift-reduce conflict(s)
State 125 contains 1 shift-reduce conflict(s)
State 126 contains 1 shift-reduce conflict(s)


42 token(s), 17 nonterminal(s)
75 grammar rule(s), 151 state(s)


##############################################################################
# End of File
##############################################################################
