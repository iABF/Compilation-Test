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
# Time: 02:25:54
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
    9                        | type id_expr
   10                        | var_declaration_front ',' id_expr
   11                        | var_declaration_front ',' assign_expr

   12  type :
   13       | DOUBLE
   14       | FLOAT
   15       | BOOL
   16       | LONGINT
   17       | LONGLONGINT
   18       | BYTE
   19       | STRUCT
   20       | INT
   21       | VOID

   22  code_block : LBRACE statement_list RBRACE

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
   40             | expression '<' expression
   41             | expression '>' expression
   42             | expression EQ expression
   43             | expression LE expression
   44             | expression GE expression
   45             | expression NE expression
   46             | '-' expression
   47             | '(' expression ')'
   48             | NUMBER
   49             | id_expr
   50             | assign_expr

   51  id_expr : ID

   52  assign_expr : id_expr '=' expression

   53  ifelse_stat : IF '(' expression ')' code_block
   54              | IF '(' expression ')' statement
   55              | IF '(' expression ')' code_block ELSE code_block
   56              | IF '(' expression ')' code_block ELSE statement
   57              | IF '(' expression ')' statement ELSE code_block
   58              | IF '(' expression ')' statement ELSE statement


##############################################################################
# States
##############################################################################

0: shift-reduce conflict (shift 15, reduce 12) on ID
state 0
	$accept : . statement_list $end
	type : .  (12)

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

	for_front  goto 17
	id_expr  goto 18
	var_declaration_front  goto 19
	ifelse_stat  goto 20
	statement  goto 21
	statement_list  goto 22
	type  goto 23
	while_stat  goto 24
	for_stat  goto 25
	expression  goto 26
	assign_expr  goto 27


state 1
	expression : '(' . expression ')'

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 28
	assign_expr  goto 27


state 2
	expression : '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 29
	assign_expr  goto 27


state 3
	ifelse_stat : IF . '(' expression ')' code_block
	ifelse_stat : IF . '(' expression ')' statement
	ifelse_stat : IF . '(' expression ')' statement ELSE code_block
	ifelse_stat : IF . '(' expression ')' code_block ELSE code_block
	ifelse_stat : IF . '(' expression ')' code_block ELSE statement
	ifelse_stat : IF . '(' expression ')' statement ELSE statement

	'('  shift 30


state 4
	type : VOID .  (21)

	.  reduce 21


state 5
	type : INT .  (20)

	.  reduce 20


state 6
	while_stat : WHILE . '(' expression ')' code_block
	while_stat : WHILE . '(' expression ')' statement

	'('  shift 31


state 7
	for_front : FOR . '(' ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' ';' ';' expression ')'
	for_front : FOR . '(' ';' ';' ')'

	'('  shift 32


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


state 14
	type : BYTE .  (18)

	.  reduce 18


state 15
	id_expr : ID .  (51)

	.  reduce 51


state 16
	expression : NUMBER .  (48)

	.  reduce 48


17: shift-reduce conflict (shift 15, reduce 12) on ID
state 17
	for_stat : for_front . code_block
	for_stat : for_front . statement
	type : .  (12)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 4
	LBRACE  shift 33
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

	for_front  goto 17
	id_expr  goto 18
	var_declaration_front  goto 19
	ifelse_stat  goto 20
	statement  goto 34
	type  goto 23
	while_stat  goto 24
	code_block  goto 35
	for_stat  goto 25
	expression  goto 26
	assign_expr  goto 27


state 18
	assign_expr : id_expr . '=' expression
	expression : id_expr .  (49)

	'='  shift 36
	.  reduce 49


state 19
	statement : var_declaration_front . ';'
	var_declaration_front : var_declaration_front . ',' id_expr
	var_declaration_front : var_declaration_front . ',' assign_expr

	','  shift 37
	';'  shift 38


state 20
	statement : ifelse_stat .  (6)

	.  reduce 6


state 21
	statement_list : statement .  (1)

	.  reduce 1


22: shift-reduce conflict (shift 15, reduce 12) on ID
state 22
	$accept : statement_list . $end  (0)
	statement_list : statement_list . statement
	type : .  (12)

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

	for_front  goto 17
	id_expr  goto 18
	var_declaration_front  goto 19
	ifelse_stat  goto 20
	statement  goto 39
	type  goto 23
	while_stat  goto 24
	for_stat  goto 25
	expression  goto 26
	assign_expr  goto 27


state 23
	var_declaration_front : type . assign_expr
	var_declaration_front : type . id_expr

	ID  shift 15

	id_expr  goto 40
	assign_expr  goto 41


state 24
	statement : while_stat .  (4)

	.  reduce 4


state 25
	statement : for_stat .  (5)

	.  reduce 5


state 26
	statement : expression . ';'
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	';'  shift 47
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


state 27
	expression : assign_expr .  (50)

	.  reduce 50


state 28
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : '(' expression . ')'
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	')'  shift 54
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


state 29
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : '-' expression .  (46)
	expression : expression . '+' expression
	expression : expression . NE expression

	.  reduce 46


state 30
	ifelse_stat : IF '(' . expression ')' code_block
	ifelse_stat : IF '(' . expression ')' statement
	ifelse_stat : IF '(' . expression ')' statement ELSE code_block
	ifelse_stat : IF '(' . expression ')' code_block ELSE code_block
	ifelse_stat : IF '(' . expression ')' code_block ELSE statement
	ifelse_stat : IF '(' . expression ')' statement ELSE statement

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 55
	assign_expr  goto 27


state 31
	while_stat : WHILE '(' . expression ')' code_block
	while_stat : WHILE '(' . expression ')' statement

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 56
	assign_expr  goto 27


state 32
	for_front : FOR '(' . ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . ';' ';' expression ')'
	for_front : FOR '(' . ';' ';' ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 57
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 58
	assign_expr  goto 27


33: shift-reduce conflict (shift 15, reduce 12) on ID
state 33
	code_block : LBRACE . statement_list RBRACE
	type : .  (12)

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

	for_front  goto 17
	id_expr  goto 18
	var_declaration_front  goto 19
	ifelse_stat  goto 20
	statement  goto 21
	statement_list  goto 59
	type  goto 23
	while_stat  goto 24
	for_stat  goto 25
	expression  goto 26
	assign_expr  goto 27


state 34
	for_stat : for_front statement .  (26)

	.  reduce 26


state 35
	for_stat : for_front code_block .  (25)

	.  reduce 25


state 36
	assign_expr : id_expr '=' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 60
	assign_expr  goto 27


state 37
	var_declaration_front : var_declaration_front ',' . id_expr
	var_declaration_front : var_declaration_front ',' . assign_expr

	ID  shift 15

	id_expr  goto 61
	assign_expr  goto 62


state 38
	statement : var_declaration_front ';' .  (7)

	.  reduce 7


state 39
	statement_list : statement_list statement .  (2)

	.  reduce 2


state 40
	var_declaration_front : type id_expr .  (9)
	assign_expr : id_expr . '=' expression

	'='  shift 36
	.  reduce 9


state 41
	var_declaration_front : type assign_expr .  (8)

	.  reduce 8


state 42
	expression : expression '%' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 63
	assign_expr  goto 27


state 43
	expression : expression '*' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 64
	assign_expr  goto 27


state 44
	expression : expression '+' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 65
	assign_expr  goto 27


state 45
	expression : expression '-' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 66
	assign_expr  goto 27


state 46
	expression : expression '/' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 67
	assign_expr  goto 27


state 47
	statement : expression ';' .  (3)

	.  reduce 3


state 48
	expression : expression '<' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 68
	assign_expr  goto 27


state 49
	expression : expression '>' . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 69
	assign_expr  goto 27


state 50
	expression : expression EQ . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 70
	assign_expr  goto 27


state 51
	expression : expression NE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 71
	assign_expr  goto 27


state 52
	expression : expression LE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 72
	assign_expr  goto 27


state 53
	expression : expression GE . expression

	'('  shift 1
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 73
	assign_expr  goto 27


state 54
	expression : '(' expression ')' .  (47)

	.  reduce 47


state 55
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	ifelse_stat : IF '(' expression . ')' code_block
	ifelse_stat : IF '(' expression . ')' statement
	expression : expression . GE expression
	ifelse_stat : IF '(' expression . ')' statement ELSE code_block
	ifelse_stat : IF '(' expression . ')' code_block ELSE code_block
	ifelse_stat : IF '(' expression . ')' code_block ELSE statement
	expression : expression . '+' expression
	expression : expression . NE expression
	ifelse_stat : IF '(' expression . ')' statement ELSE statement

	'%'  shift 42
	')'  shift 74
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


state 56
	while_stat : WHILE '(' expression . ')' code_block
	while_stat : WHILE '(' expression . ')' statement
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	')'  shift 75
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


state 57
	for_front : FOR '(' ';' . expression ';' expression ')'
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . ';' expression ')'
	for_front : FOR '(' ';' . ';' ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 76
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 77
	assign_expr  goto 27


state 58
	for_front : FOR '(' expression . ';' ';' expression ')'
	for_front : FOR '(' expression . ';' ';' ')'
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	for_front : FOR '(' expression . ';' expression ';' ')'
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	';'  shift 78
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


59: shift-reduce conflict (shift 15, reduce 12) on ID
state 59
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE
	type : .  (12)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 4
	RBRACE  shift 79
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

	for_front  goto 17
	id_expr  goto 18
	var_declaration_front  goto 19
	ifelse_stat  goto 20
	statement  goto 39
	type  goto 23
	while_stat  goto 24
	for_stat  goto 25
	expression  goto 26
	assign_expr  goto 27


60: shift-reduce conflict (shift 42, reduce 52) on '%'
60: shift-reduce conflict (shift 43, reduce 52) on '*'
60: shift-reduce conflict (shift 44, reduce 52) on '+'
60: shift-reduce conflict (shift 45, reduce 52) on '-'
60: shift-reduce conflict (shift 46, reduce 52) on '/'
60: shift-reduce conflict (shift 48, reduce 52) on '<'
60: shift-reduce conflict (shift 49, reduce 52) on '>'
60: shift-reduce conflict (shift 50, reduce 52) on EQ
60: shift-reduce conflict (shift 51, reduce 52) on NE
60: shift-reduce conflict (shift 52, reduce 52) on LE
60: shift-reduce conflict (shift 53, reduce 52) on GE
state 60
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	assign_expr : id_expr '=' expression .  (52)
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53
	.  reduce 52


state 61
	var_declaration_front : var_declaration_front ',' id_expr .  (10)
	assign_expr : id_expr . '=' expression

	'='  shift 36
	.  reduce 10


state 62
	var_declaration_front : var_declaration_front ',' assign_expr .  (11)

	.  reduce 11


state 63
	expression : expression . '*' expression
	expression : expression '%' expression .  (39)
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	.  reduce 39


state 64
	expression : expression '*' expression .  (37)
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	.  reduce 37


state 65
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression '+' expression .  (35)
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'/'  shift 46
	.  reduce 35


state 66
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression '-' expression .  (36)
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'/'  shift 46
	.  reduce 36


state 67
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression '/' expression .  (38)
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	.  reduce 38


state 68
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression '<' expression .  (40)
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	.  reduce 40


state 69
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression '>' expression .  (41)
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	.  reduce 41


state 70
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression EQ expression .  (42)
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	LE  shift 52
	GE  shift 53
	.  reduce 42


state 71
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression NE expression .  (45)
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	LE  shift 52
	GE  shift 53
	.  reduce 45


state 72
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression LE expression .  (43)
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	.  reduce 43


state 73
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression GE expression .  (44)
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	.  reduce 44


74: shift-reduce conflict (shift 15, reduce 12) on ID
state 74
	ifelse_stat : IF '(' expression ')' . code_block
	ifelse_stat : IF '(' expression ')' . statement
	ifelse_stat : IF '(' expression ')' . statement ELSE code_block
	ifelse_stat : IF '(' expression ')' . code_block ELSE code_block
	ifelse_stat : IF '(' expression ')' . code_block ELSE statement
	ifelse_stat : IF '(' expression ')' . statement ELSE statement
	type : .  (12)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 4
	LBRACE  shift 33
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

	for_front  goto 17
	id_expr  goto 18
	var_declaration_front  goto 19
	ifelse_stat  goto 20
	statement  goto 80
	type  goto 23
	while_stat  goto 24
	code_block  goto 81
	for_stat  goto 25
	expression  goto 26
	assign_expr  goto 27


75: shift-reduce conflict (shift 15, reduce 12) on ID
state 75
	while_stat : WHILE '(' expression ')' . code_block
	while_stat : WHILE '(' expression ')' . statement
	type : .  (12)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 4
	LBRACE  shift 33
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

	for_front  goto 17
	id_expr  goto 18
	var_declaration_front  goto 19
	ifelse_stat  goto 20
	statement  goto 82
	type  goto 23
	while_stat  goto 24
	code_block  goto 83
	for_stat  goto 25
	expression  goto 26
	assign_expr  goto 27


state 76
	for_front : FOR '(' ';' ';' . expression ')'
	for_front : FOR '(' ';' ';' . ')'

	'('  shift 1
	')'  shift 84
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 85
	assign_expr  goto 27


state 77
	for_front : FOR '(' ';' expression . ';' expression ')'
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	';'  shift 86
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


state 78
	for_front : FOR '(' expression ';' . ';' expression ')'
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . expression ';' expression ')'
	for_front : FOR '(' expression ';' . expression ';' ')'

	'('  shift 1
	'-'  shift 2
	';'  shift 87
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 88
	assign_expr  goto 27


state 79
	code_block : LBRACE statement_list RBRACE .  (22)

	.  reduce 22


80: shift-reduce conflict (shift 89, reduce 54) on ELSE
state 80
	ifelse_stat : IF '(' expression ')' statement .  (54)
	ifelse_stat : IF '(' expression ')' statement . ELSE code_block
	ifelse_stat : IF '(' expression ')' statement . ELSE statement

	ELSE  shift 89
	.  reduce 54


81: shift-reduce conflict (shift 90, reduce 53) on ELSE
state 81
	ifelse_stat : IF '(' expression ')' code_block .  (53)
	ifelse_stat : IF '(' expression ')' code_block . ELSE code_block
	ifelse_stat : IF '(' expression ')' code_block . ELSE statement

	ELSE  shift 90
	.  reduce 53


state 82
	while_stat : WHILE '(' expression ')' statement .  (24)

	.  reduce 24


state 83
	while_stat : WHILE '(' expression ')' code_block .  (23)

	.  reduce 23


state 84
	for_front : FOR '(' ';' ';' ')' .  (34)

	.  reduce 34


state 85
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	')'  shift 91
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


state 86
	for_front : FOR '(' ';' expression ';' . expression ')'
	for_front : FOR '(' ';' expression ';' . ')'

	'('  shift 1
	')'  shift 92
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 93
	assign_expr  goto 27


state 87
	for_front : FOR '(' expression ';' ';' . expression ')'
	for_front : FOR '(' expression ';' ';' . ')'

	'('  shift 1
	')'  shift 94
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 95
	assign_expr  goto 27


state 88
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	for_front : FOR '(' expression ';' expression . ';' ')'
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	';'  shift 96
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


89: shift-reduce conflict (shift 15, reduce 12) on ID
state 89
	ifelse_stat : IF '(' expression ')' statement ELSE . code_block
	ifelse_stat : IF '(' expression ')' statement ELSE . statement
	type : .  (12)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 4
	LBRACE  shift 33
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

	for_front  goto 17
	id_expr  goto 18
	var_declaration_front  goto 19
	ifelse_stat  goto 20
	statement  goto 97
	type  goto 23
	while_stat  goto 24
	code_block  goto 98
	for_stat  goto 25
	expression  goto 26
	assign_expr  goto 27


90: shift-reduce conflict (shift 15, reduce 12) on ID
state 90
	ifelse_stat : IF '(' expression ')' code_block ELSE . code_block
	ifelse_stat : IF '(' expression ')' code_block ELSE . statement
	type : .  (12)

	'('  shift 1
	'-'  shift 2
	IF  shift 3
	VOID  shift 4
	LBRACE  shift 33
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

	for_front  goto 17
	id_expr  goto 18
	var_declaration_front  goto 19
	ifelse_stat  goto 20
	statement  goto 99
	type  goto 23
	while_stat  goto 24
	code_block  goto 100
	for_stat  goto 25
	expression  goto 26
	assign_expr  goto 27


state 91
	for_front : FOR '(' ';' ';' expression ')' .  (33)

	.  reduce 33


state 92
	for_front : FOR '(' ';' expression ';' ')' .  (32)

	.  reduce 32


state 93
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	')'  shift 101
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


state 94
	for_front : FOR '(' expression ';' ';' ')' .  (31)

	.  reduce 31


state 95
	for_front : FOR '(' expression ';' ';' expression . ')'
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	')'  shift 102
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


state 96
	for_front : FOR '(' expression ';' expression ';' . expression ')'
	for_front : FOR '(' expression ';' expression ';' . ')'

	'('  shift 1
	')'  shift 103
	'-'  shift 2
	ID  shift 15
	NUMBER  shift 16

	id_expr  goto 18
	expression  goto 104
	assign_expr  goto 27


state 97
	ifelse_stat : IF '(' expression ')' statement ELSE statement .  (58)

	.  reduce 58


state 98
	ifelse_stat : IF '(' expression ')' statement ELSE code_block .  (57)

	.  reduce 57


state 99
	ifelse_stat : IF '(' expression ')' code_block ELSE statement .  (56)

	.  reduce 56


state 100
	ifelse_stat : IF '(' expression ')' code_block ELSE code_block .  (55)

	.  reduce 55


state 101
	for_front : FOR '(' ';' expression ';' expression ')' .  (30)

	.  reduce 30


state 102
	for_front : FOR '(' expression ';' ';' expression ')' .  (29)

	.  reduce 29


state 103
	for_front : FOR '(' expression ';' expression ';' ')' .  (28)

	.  reduce 28


state 104
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '-' expression
	expression : expression . GE expression
	expression : expression . '+' expression
	expression : expression . NE expression

	'%'  shift 42
	')'  shift 105
	'*'  shift 43
	'+'  shift 44
	'-'  shift 45
	'/'  shift 46
	'<'  shift 48
	'>'  shift 49
	EQ  shift 50
	NE  shift 51
	LE  shift 52
	GE  shift 53


state 105
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (27)

	.  reduce 27


Rules never reduced
	type :  (12)


##############################################################################
# Summary
##############################################################################

State 0 contains 1 shift-reduce conflict(s)
State 17 contains 1 shift-reduce conflict(s)
State 22 contains 1 shift-reduce conflict(s)
State 33 contains 1 shift-reduce conflict(s)
State 59 contains 1 shift-reduce conflict(s)
State 60 contains 11 shift-reduce conflict(s)
State 74 contains 1 shift-reduce conflict(s)
State 75 contains 1 shift-reduce conflict(s)
State 80 contains 1 shift-reduce conflict(s)
State 81 contains 1 shift-reduce conflict(s)
State 89 contains 1 shift-reduce conflict(s)
State 90 contains 1 shift-reduce conflict(s)


36 token(s), 13 nonterminal(s)
59 grammar rule(s), 106 state(s)


##############################################################################
# End of File
##############################################################################
