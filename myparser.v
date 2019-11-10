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
# Time: 03:01:40
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : prog $end

    1  prog : VOID MAIN '(' ')' code_block
    2       | INT MAIN '(' ')' code_block

    3  statement_list : statement
    4                 | statement_list statement

    5  statement : expression ';'
    6            | while_stat
    7            | for_stat
    8            | ifelse_stat
    9            | var_declaration_front ';'
   10            | io_stat ';'

   11  io_stat : SCAN '(' id_expr ')'
   12          | PRINT '(' expression ')'

   13  var_declaration_front : type assign_expr
   14                        | type id_expr
   15                        | var_declaration_front ',' id_expr
   16                        | var_declaration_front ',' assign_expr

   17  type :
   18       | DOUBLE
   19       | FLOAT
   20       | BOOL
   21       | LONGINT
   22       | LONGLONGINT
   23       | BYTE
   24       | STRUCT
   25       | INT
   26       | VOID

   27  code_block : LBRACE statement_list RBRACE

   28  while_stat : WHILE '(' expression ')' code_block
   29             | WHILE '(' expression ')' statement

   30  for_stat : for_front code_block
   31           | for_front statement

   32  for_front : FOR '(' expression ';' expression ';' expression ')'
   33            | FOR '(' expression ';' expression ';' ')'
   34            | FOR '(' expression ';' ';' expression ')'
   35            | FOR '(' ';' expression ';' expression ')'
   36            | FOR '(' expression ';' ';' ')'
   37            | FOR '(' ';' expression ';' ')'
   38            | FOR '(' ';' ';' expression ')'
   39            | FOR '(' ';' ';' ')'

   40  expression : expression '+' expression
   41             | expression '-' expression
   42             | expression '*' expression
   43             | expression '/' expression
   44             | expression '%' expression
   45             | expression '<' expression
   46             | expression '>' expression
   47             | expression EQ expression
   48             | expression LE expression
   49             | expression GE expression
   50             | expression NE expression
   51             | '-' expression
   52             | '(' expression ')'
   53             | NUMBER
   54             | id_expr
   55             | assign_expr

   56  id_expr : ID

   57  assign_expr : id_expr '=' expression

   58  ifelse_stat : IF '(' expression ')' code_block
   59              | IF '(' expression ')' statement
   60              | IF '(' expression ')' code_block ELSE code_block
   61              | IF '(' expression ')' code_block ELSE statement
   62              | IF '(' expression ')' statement ELSE code_block
   63              | IF '(' expression ')' statement ELSE statement


##############################################################################
# States
##############################################################################

state 0
	$accept : . prog $end

	VOID  shift 1
	INT  shift 2

	prog  goto 3


state 1
	prog : VOID . MAIN '(' ')' code_block

	MAIN  shift 4


state 2
	prog : INT . MAIN '(' ')' code_block

	MAIN  shift 5


state 3
	$accept : prog . $end  (0)

	$end  accept


state 4
	prog : VOID MAIN . '(' ')' code_block

	'('  shift 6


state 5
	prog : INT MAIN . '(' ')' code_block

	'('  shift 7


state 6
	prog : VOID MAIN '(' . ')' code_block

	')'  shift 8


state 7
	prog : INT MAIN '(' . ')' code_block

	')'  shift 9


state 8
	prog : VOID MAIN '(' ')' . code_block

	LBRACE  shift 10

	code_block  goto 11


state 9
	prog : INT MAIN '(' ')' . code_block

	LBRACE  shift 10

	code_block  goto 12


10: shift-reduce conflict (shift 29, reduce 17) on ID
state 10
	code_block : LBRACE . statement_list RBRACE
	type : .  (17)

	'('  shift 13
	'-'  shift 14
	IF  shift 15
	VOID  shift 16
	INT  shift 17
	WHILE  shift 18
	FOR  shift 19
	STRUCT  shift 20
	LONGINT  shift 21
	DOUBLE  shift 22
	LONGLONGINT  shift 23
	FLOAT  shift 24
	BOOL  shift 25
	BYTE  shift 26
	SCAN  shift 27
	PRINT  shift 28
	ID  shift 29
	NUMBER  shift 30

	while_stat  goto 31
	id_expr  goto 32
	io_stat  goto 33
	statement  goto 34
	expression  goto 35
	type  goto 36
	var_declaration_front  goto 37
	for_front  goto 38
	assign_expr  goto 39
	statement_list  goto 40
	for_stat  goto 41
	ifelse_stat  goto 42


state 11
	prog : VOID MAIN '(' ')' code_block .  (1)

	.  reduce 1


state 12
	prog : INT MAIN '(' ')' code_block .  (2)

	.  reduce 2


state 13
	expression : '(' . expression ')'

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 43
	assign_expr  goto 39


state 14
	expression : '-' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 44
	assign_expr  goto 39


state 15
	ifelse_stat : IF . '(' expression ')' code_block
	ifelse_stat : IF . '(' expression ')' code_block ELSE code_block
	ifelse_stat : IF . '(' expression ')' code_block ELSE statement
	ifelse_stat : IF . '(' expression ')' statement ELSE code_block
	ifelse_stat : IF . '(' expression ')' statement
	ifelse_stat : IF . '(' expression ')' statement ELSE statement

	'('  shift 45


state 16
	type : VOID .  (26)

	.  reduce 26


state 17
	type : INT .  (25)

	.  reduce 25


state 18
	while_stat : WHILE . '(' expression ')' code_block
	while_stat : WHILE . '(' expression ')' statement

	'('  shift 46


state 19
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' ';' ';' expression ')'
	for_front : FOR . '(' ';' ';' ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' ';' expression ';' expression ')'

	'('  shift 47


state 20
	type : STRUCT .  (24)

	.  reduce 24


state 21
	type : LONGINT .  (21)

	.  reduce 21


state 22
	type : DOUBLE .  (18)

	.  reduce 18


state 23
	type : LONGLONGINT .  (22)

	.  reduce 22


state 24
	type : FLOAT .  (19)

	.  reduce 19


state 25
	type : BOOL .  (20)

	.  reduce 20


state 26
	type : BYTE .  (23)

	.  reduce 23


state 27
	io_stat : SCAN . '(' id_expr ')'

	'('  shift 48


state 28
	io_stat : PRINT . '(' expression ')'

	'('  shift 49


state 29
	id_expr : ID .  (56)

	.  reduce 56


state 30
	expression : NUMBER .  (53)

	.  reduce 53


state 31
	statement : while_stat .  (6)

	.  reduce 6


state 32
	expression : id_expr .  (54)
	assign_expr : id_expr . '=' expression

	'='  shift 50
	.  reduce 54


state 33
	statement : io_stat . ';'

	';'  shift 51


state 34
	statement_list : statement .  (3)

	.  reduce 3


state 35
	statement : expression . ';'
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	';'  shift 57
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 36
	var_declaration_front : type . assign_expr
	var_declaration_front : type . id_expr

	ID  shift 29

	id_expr  goto 64
	assign_expr  goto 65


state 37
	statement : var_declaration_front . ';'
	var_declaration_front : var_declaration_front . ',' id_expr
	var_declaration_front : var_declaration_front . ',' assign_expr

	','  shift 66
	';'  shift 67


38: shift-reduce conflict (shift 29, reduce 17) on ID
state 38
	for_stat : for_front . code_block
	for_stat : for_front . statement
	type : .  (17)

	'('  shift 13
	'-'  shift 14
	IF  shift 15
	VOID  shift 16
	LBRACE  shift 10
	INT  shift 17
	WHILE  shift 18
	FOR  shift 19
	STRUCT  shift 20
	LONGINT  shift 21
	DOUBLE  shift 22
	LONGLONGINT  shift 23
	FLOAT  shift 24
	BOOL  shift 25
	BYTE  shift 26
	SCAN  shift 27
	PRINT  shift 28
	ID  shift 29
	NUMBER  shift 30

	while_stat  goto 31
	id_expr  goto 32
	io_stat  goto 33
	statement  goto 68
	expression  goto 35
	code_block  goto 69
	type  goto 36
	var_declaration_front  goto 37
	for_front  goto 38
	assign_expr  goto 39
	for_stat  goto 41
	ifelse_stat  goto 42


state 39
	expression : assign_expr .  (55)

	.  reduce 55


40: shift-reduce conflict (shift 29, reduce 17) on ID
state 40
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE
	type : .  (17)

	'('  shift 13
	'-'  shift 14
	IF  shift 15
	VOID  shift 16
	RBRACE  shift 70
	INT  shift 17
	WHILE  shift 18
	FOR  shift 19
	STRUCT  shift 20
	LONGINT  shift 21
	DOUBLE  shift 22
	LONGLONGINT  shift 23
	FLOAT  shift 24
	BOOL  shift 25
	BYTE  shift 26
	SCAN  shift 27
	PRINT  shift 28
	ID  shift 29
	NUMBER  shift 30

	while_stat  goto 31
	id_expr  goto 32
	io_stat  goto 33
	statement  goto 71
	expression  goto 35
	type  goto 36
	var_declaration_front  goto 37
	for_front  goto 38
	assign_expr  goto 39
	for_stat  goto 41
	ifelse_stat  goto 42


state 41
	statement : for_stat .  (7)

	.  reduce 7


state 42
	statement : ifelse_stat .  (8)

	.  reduce 8


state 43
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : '(' expression . ')'
	expression : expression . LE expression

	'%'  shift 52
	')'  shift 72
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 44
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : '-' expression .  (51)
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	.  reduce 51


state 45
	ifelse_stat : IF '(' . expression ')' code_block
	ifelse_stat : IF '(' . expression ')' code_block ELSE code_block
	ifelse_stat : IF '(' . expression ')' code_block ELSE statement
	ifelse_stat : IF '(' . expression ')' statement ELSE code_block
	ifelse_stat : IF '(' . expression ')' statement
	ifelse_stat : IF '(' . expression ')' statement ELSE statement

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 73
	assign_expr  goto 39


state 46
	while_stat : WHILE '(' . expression ')' code_block
	while_stat : WHILE '(' . expression ')' statement

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 74
	assign_expr  goto 39


state 47
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . ';' ';' expression ')'
	for_front : FOR '(' . ';' ';' ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . ';' expression ';' expression ')'

	'('  shift 13
	'-'  shift 14
	';'  shift 75
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 76
	assign_expr  goto 39


state 48
	io_stat : SCAN '(' . id_expr ')'

	ID  shift 29

	id_expr  goto 77


state 49
	io_stat : PRINT '(' . expression ')'

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 78
	assign_expr  goto 39


state 50
	assign_expr : id_expr '=' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 79
	assign_expr  goto 39


state 51
	statement : io_stat ';' .  (10)

	.  reduce 10


state 52
	expression : expression '%' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 80
	assign_expr  goto 39


state 53
	expression : expression '*' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 81
	assign_expr  goto 39


state 54
	expression : expression '+' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 82
	assign_expr  goto 39


state 55
	expression : expression '-' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 83
	assign_expr  goto 39


state 56
	expression : expression '/' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 84
	assign_expr  goto 39


state 57
	statement : expression ';' .  (5)

	.  reduce 5


state 58
	expression : expression '<' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 85
	assign_expr  goto 39


state 59
	expression : expression '>' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 86
	assign_expr  goto 39


state 60
	expression : expression EQ . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 87
	assign_expr  goto 39


state 61
	expression : expression NE . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 88
	assign_expr  goto 39


state 62
	expression : expression LE . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 89
	assign_expr  goto 39


state 63
	expression : expression GE . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 90
	assign_expr  goto 39


state 64
	var_declaration_front : type id_expr .  (14)
	assign_expr : id_expr . '=' expression

	'='  shift 50
	.  reduce 14


state 65
	var_declaration_front : type assign_expr .  (13)

	.  reduce 13


state 66
	var_declaration_front : var_declaration_front ',' . id_expr
	var_declaration_front : var_declaration_front ',' . assign_expr

	ID  shift 29

	id_expr  goto 91
	assign_expr  goto 92


state 67
	statement : var_declaration_front ';' .  (9)

	.  reduce 9


state 68
	for_stat : for_front statement .  (31)

	.  reduce 31


state 69
	for_stat : for_front code_block .  (30)

	.  reduce 30


state 70
	code_block : LBRACE statement_list RBRACE .  (27)

	.  reduce 27


state 71
	statement_list : statement_list statement .  (4)

	.  reduce 4


state 72
	expression : '(' expression ')' .  (52)

	.  reduce 52


state 73
	expression : expression . '%' expression
	ifelse_stat : IF '(' expression . ')' code_block
	expression : expression . GE expression
	ifelse_stat : IF '(' expression . ')' code_block ELSE code_block
	ifelse_stat : IF '(' expression . ')' code_block ELSE statement
	ifelse_stat : IF '(' expression . ')' statement ELSE code_block
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	ifelse_stat : IF '(' expression . ')' statement
	ifelse_stat : IF '(' expression . ')' statement ELSE statement

	'%'  shift 52
	')'  shift 93
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 74
	while_stat : WHILE '(' expression . ')' code_block
	while_stat : WHILE '(' expression . ')' statement
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	')'  shift 94
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 75
	for_front : FOR '(' ';' . ';' expression ')'
	for_front : FOR '(' ';' . ';' ')'
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . expression ';' expression ')'

	'('  shift 13
	'-'  shift 14
	';'  shift 95
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 96
	assign_expr  goto 39


state 76
	for_front : FOR '(' expression . ';' expression ';' ')'
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	for_front : FOR '(' expression . ';' ';' ')'
	for_front : FOR '(' expression . ';' ';' expression ')'
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	';'  shift 97
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 77
	io_stat : SCAN '(' id_expr . ')'

	')'  shift 98


state 78
	io_stat : PRINT '(' expression . ')'
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	')'  shift 99
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


79: shift-reduce conflict (shift 52, reduce 57) on '%'
79: shift-reduce conflict (shift 53, reduce 57) on '*'
79: shift-reduce conflict (shift 54, reduce 57) on '+'
79: shift-reduce conflict (shift 55, reduce 57) on '-'
79: shift-reduce conflict (shift 56, reduce 57) on '/'
79: shift-reduce conflict (shift 58, reduce 57) on '<'
79: shift-reduce conflict (shift 59, reduce 57) on '>'
79: shift-reduce conflict (shift 60, reduce 57) on EQ
79: shift-reduce conflict (shift 61, reduce 57) on NE
79: shift-reduce conflict (shift 62, reduce 57) on LE
79: shift-reduce conflict (shift 63, reduce 57) on GE
state 79
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	assign_expr : id_expr '=' expression .  (57)

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63
	.  reduce 57


state 80
	expression : expression '%' expression .  (44)
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	.  reduce 44


state 81
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression '*' expression .  (42)
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	.  reduce 42


state 82
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression '+' expression .  (40)
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'/'  shift 56
	.  reduce 40


state 83
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression '-' expression .  (41)
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'/'  shift 56
	.  reduce 41


state 84
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression '/' expression .  (43)
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	.  reduce 43


state 85
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression '<' expression .  (45)
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	.  reduce 45


state 86
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression '>' expression .  (46)
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	.  reduce 46


state 87
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression EQ expression .  (47)
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	LE  shift 62
	GE  shift 63
	.  reduce 47


state 88
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression NE expression .  (50)
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	LE  shift 62
	GE  shift 63
	.  reduce 50


state 89
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression LE expression .  (48)
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	.  reduce 48


state 90
	expression : expression . '%' expression
	expression : expression GE expression .  (49)
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	.  reduce 49


state 91
	var_declaration_front : var_declaration_front ',' id_expr .  (15)
	assign_expr : id_expr . '=' expression

	'='  shift 50
	.  reduce 15


state 92
	var_declaration_front : var_declaration_front ',' assign_expr .  (16)

	.  reduce 16


93: shift-reduce conflict (shift 29, reduce 17) on ID
state 93
	ifelse_stat : IF '(' expression ')' . code_block
	ifelse_stat : IF '(' expression ')' . code_block ELSE code_block
	ifelse_stat : IF '(' expression ')' . code_block ELSE statement
	ifelse_stat : IF '(' expression ')' . statement ELSE code_block
	ifelse_stat : IF '(' expression ')' . statement
	ifelse_stat : IF '(' expression ')' . statement ELSE statement
	type : .  (17)

	'('  shift 13
	'-'  shift 14
	IF  shift 15
	VOID  shift 16
	LBRACE  shift 10
	INT  shift 17
	WHILE  shift 18
	FOR  shift 19
	STRUCT  shift 20
	LONGINT  shift 21
	DOUBLE  shift 22
	LONGLONGINT  shift 23
	FLOAT  shift 24
	BOOL  shift 25
	BYTE  shift 26
	SCAN  shift 27
	PRINT  shift 28
	ID  shift 29
	NUMBER  shift 30

	while_stat  goto 31
	id_expr  goto 32
	io_stat  goto 33
	statement  goto 100
	expression  goto 35
	code_block  goto 101
	type  goto 36
	var_declaration_front  goto 37
	for_front  goto 38
	assign_expr  goto 39
	for_stat  goto 41
	ifelse_stat  goto 42


94: shift-reduce conflict (shift 29, reduce 17) on ID
state 94
	while_stat : WHILE '(' expression ')' . code_block
	while_stat : WHILE '(' expression ')' . statement
	type : .  (17)

	'('  shift 13
	'-'  shift 14
	IF  shift 15
	VOID  shift 16
	LBRACE  shift 10
	INT  shift 17
	WHILE  shift 18
	FOR  shift 19
	STRUCT  shift 20
	LONGINT  shift 21
	DOUBLE  shift 22
	LONGLONGINT  shift 23
	FLOAT  shift 24
	BOOL  shift 25
	BYTE  shift 26
	SCAN  shift 27
	PRINT  shift 28
	ID  shift 29
	NUMBER  shift 30

	while_stat  goto 31
	id_expr  goto 32
	io_stat  goto 33
	statement  goto 102
	expression  goto 35
	code_block  goto 103
	type  goto 36
	var_declaration_front  goto 37
	for_front  goto 38
	assign_expr  goto 39
	for_stat  goto 41
	ifelse_stat  goto 42


state 95
	for_front : FOR '(' ';' ';' . expression ')'
	for_front : FOR '(' ';' ';' . ')'

	'('  shift 13
	')'  shift 104
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 105
	assign_expr  goto 39


state 96
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	for_front : FOR '(' ';' expression . ';' expression ')'
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	';'  shift 106
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 97
	for_front : FOR '(' expression ';' . expression ';' ')'
	for_front : FOR '(' expression ';' . expression ';' expression ')'
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . ';' expression ')'

	'('  shift 13
	'-'  shift 14
	';'  shift 107
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 108
	assign_expr  goto 39


state 98
	io_stat : SCAN '(' id_expr ')' .  (11)

	.  reduce 11


state 99
	io_stat : PRINT '(' expression ')' .  (12)

	.  reduce 12


100: shift-reduce conflict (shift 109, reduce 59) on ELSE
state 100
	ifelse_stat : IF '(' expression ')' statement . ELSE code_block
	ifelse_stat : IF '(' expression ')' statement .  (59)
	ifelse_stat : IF '(' expression ')' statement . ELSE statement

	ELSE  shift 109
	.  reduce 59


101: shift-reduce conflict (shift 110, reduce 58) on ELSE
state 101
	ifelse_stat : IF '(' expression ')' code_block .  (58)
	ifelse_stat : IF '(' expression ')' code_block . ELSE code_block
	ifelse_stat : IF '(' expression ')' code_block . ELSE statement

	ELSE  shift 110
	.  reduce 58


state 102
	while_stat : WHILE '(' expression ')' statement .  (29)

	.  reduce 29


state 103
	while_stat : WHILE '(' expression ')' code_block .  (28)

	.  reduce 28


state 104
	for_front : FOR '(' ';' ';' ')' .  (39)

	.  reduce 39


state 105
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	')'  shift 111
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 106
	for_front : FOR '(' ';' expression ';' . ')'
	for_front : FOR '(' ';' expression ';' . expression ')'

	'('  shift 13
	')'  shift 112
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 113
	assign_expr  goto 39


state 107
	for_front : FOR '(' expression ';' ';' . ')'
	for_front : FOR '(' expression ';' ';' . expression ')'

	'('  shift 13
	')'  shift 114
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 115
	assign_expr  goto 39


state 108
	for_front : FOR '(' expression ';' expression . ';' ')'
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	';'  shift 116
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


109: shift-reduce conflict (shift 29, reduce 17) on ID
state 109
	ifelse_stat : IF '(' expression ')' statement ELSE . code_block
	ifelse_stat : IF '(' expression ')' statement ELSE . statement
	type : .  (17)

	'('  shift 13
	'-'  shift 14
	IF  shift 15
	VOID  shift 16
	LBRACE  shift 10
	INT  shift 17
	WHILE  shift 18
	FOR  shift 19
	STRUCT  shift 20
	LONGINT  shift 21
	DOUBLE  shift 22
	LONGLONGINT  shift 23
	FLOAT  shift 24
	BOOL  shift 25
	BYTE  shift 26
	SCAN  shift 27
	PRINT  shift 28
	ID  shift 29
	NUMBER  shift 30

	while_stat  goto 31
	id_expr  goto 32
	io_stat  goto 33
	statement  goto 117
	expression  goto 35
	code_block  goto 118
	type  goto 36
	var_declaration_front  goto 37
	for_front  goto 38
	assign_expr  goto 39
	for_stat  goto 41
	ifelse_stat  goto 42


110: shift-reduce conflict (shift 29, reduce 17) on ID
state 110
	ifelse_stat : IF '(' expression ')' code_block ELSE . code_block
	ifelse_stat : IF '(' expression ')' code_block ELSE . statement
	type : .  (17)

	'('  shift 13
	'-'  shift 14
	IF  shift 15
	VOID  shift 16
	LBRACE  shift 10
	INT  shift 17
	WHILE  shift 18
	FOR  shift 19
	STRUCT  shift 20
	LONGINT  shift 21
	DOUBLE  shift 22
	LONGLONGINT  shift 23
	FLOAT  shift 24
	BOOL  shift 25
	BYTE  shift 26
	SCAN  shift 27
	PRINT  shift 28
	ID  shift 29
	NUMBER  shift 30

	while_stat  goto 31
	id_expr  goto 32
	io_stat  goto 33
	statement  goto 119
	expression  goto 35
	code_block  goto 120
	type  goto 36
	var_declaration_front  goto 37
	for_front  goto 38
	assign_expr  goto 39
	for_stat  goto 41
	ifelse_stat  goto 42


state 111
	for_front : FOR '(' ';' ';' expression ')' .  (38)

	.  reduce 38


state 112
	for_front : FOR '(' ';' expression ';' ')' .  (37)

	.  reduce 37


state 113
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	')'  shift 121
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 114
	for_front : FOR '(' expression ';' ';' ')' .  (36)

	.  reduce 36


state 115
	for_front : FOR '(' expression ';' ';' expression . ')'
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	')'  shift 122
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 116
	for_front : FOR '(' expression ';' expression ';' . ')'
	for_front : FOR '(' expression ';' expression ';' . expression ')'

	'('  shift 13
	')'  shift 123
	'-'  shift 14
	ID  shift 29
	NUMBER  shift 30

	id_expr  goto 32
	expression  goto 124
	assign_expr  goto 39


state 117
	ifelse_stat : IF '(' expression ')' statement ELSE statement .  (63)

	.  reduce 63


state 118
	ifelse_stat : IF '(' expression ')' statement ELSE code_block .  (62)

	.  reduce 62


state 119
	ifelse_stat : IF '(' expression ')' code_block ELSE statement .  (61)

	.  reduce 61


state 120
	ifelse_stat : IF '(' expression ')' code_block ELSE code_block .  (60)

	.  reduce 60


state 121
	for_front : FOR '(' ';' expression ';' expression ')' .  (35)

	.  reduce 35


state 122
	for_front : FOR '(' expression ';' ';' expression ')' .  (34)

	.  reduce 34


state 123
	for_front : FOR '(' expression ';' expression ';' ')' .  (33)

	.  reduce 33


state 124
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression

	'%'  shift 52
	')'  shift 125
	'*'  shift 53
	'+'  shift 54
	'-'  shift 55
	'/'  shift 56
	'<'  shift 58
	'>'  shift 59
	EQ  shift 60
	NE  shift 61
	LE  shift 62
	GE  shift 63


state 125
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (32)

	.  reduce 32


Rules never reduced
	type :  (17)


##############################################################################
# Summary
##############################################################################

State 10 contains 1 shift-reduce conflict(s)
State 38 contains 1 shift-reduce conflict(s)
State 40 contains 1 shift-reduce conflict(s)
State 79 contains 11 shift-reduce conflict(s)
State 93 contains 1 shift-reduce conflict(s)
State 94 contains 1 shift-reduce conflict(s)
State 100 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 109 contains 1 shift-reduce conflict(s)
State 110 contains 1 shift-reduce conflict(s)


39 token(s), 15 nonterminal(s)
64 grammar rule(s), 126 state(s)


##############################################################################
# End of File
##############################################################################
