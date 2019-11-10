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
# Time: 02:46:42
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

   10  var_declaration_front : type assign_expr
   11                        | type id_expr
   12                        | var_declaration_front ',' id_expr
   13                        | var_declaration_front ',' assign_expr

   14  type :
   15       | DOUBLE
   16       | FLOAT
   17       | BOOL
   18       | LONGINT
   19       | LONGLONGINT
   20       | BYTE
   21       | STRUCT
   22       | INT
   23       | VOID

   24  code_block : LBRACE statement_list RBRACE

   25  while_stat : WHILE '(' expression ')' code_block
   26             | WHILE '(' expression ')' statement

   27  for_stat : for_front code_block
   28           | for_front statement

   29  for_front : FOR '(' expression ';' expression ';' expression ')'
   30            | FOR '(' expression ';' expression ';' ')'
   31            | FOR '(' expression ';' ';' expression ')'
   32            | FOR '(' ';' expression ';' expression ')'
   33            | FOR '(' expression ';' ';' ')'
   34            | FOR '(' ';' expression ';' ')'
   35            | FOR '(' ';' ';' expression ')'
   36            | FOR '(' ';' ';' ')'

   37  expression : expression '+' expression
   38             | expression '-' expression
   39             | expression '*' expression
   40             | expression '/' expression
   41             | expression '%' expression
   42             | expression '<' expression
   43             | expression '>' expression
   44             | expression EQ expression
   45             | expression LE expression
   46             | expression GE expression
   47             | expression NE expression
   48             | '-' expression
   49             | '(' expression ')'
   50             | NUMBER
   51             | id_expr
   52             | assign_expr

   53  id_expr : ID

   54  assign_expr : id_expr '=' expression

   55  ifelse_stat : IF '(' expression ')' code_block
   56              | IF '(' expression ')' statement
   57              | IF '(' expression ')' code_block ELSE code_block
   58              | IF '(' expression ')' code_block ELSE statement
   59              | IF '(' expression ')' statement ELSE code_block
   60              | IF '(' expression ')' statement ELSE statement


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


10: shift-reduce conflict (shift 27, reduce 14) on ID
state 10
	code_block : LBRACE . statement_list RBRACE
	type : .  (14)

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
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	type  goto 30
	for_front  goto 31
	id_expr  goto 32
	for_stat  goto 33
	statement  goto 34
	expression  goto 35
	ifelse_stat  goto 36
	statement_list  goto 37
	while_stat  goto 38
	var_declaration_front  goto 39


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
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 40


state 14
	expression : '-' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 41


state 15
	ifelse_stat : IF . '(' expression ')' statement ELSE code_block
	ifelse_stat : IF . '(' expression ')' code_block ELSE code_block
	ifelse_stat : IF . '(' expression ')' statement
	ifelse_stat : IF . '(' expression ')' statement ELSE statement
	ifelse_stat : IF . '(' expression ')' code_block ELSE statement
	ifelse_stat : IF . '(' expression ')' code_block

	'('  shift 42


state 16
	type : VOID .  (23)

	.  reduce 23


state 17
	type : INT .  (22)

	.  reduce 22


state 18
	while_stat : WHILE . '(' expression ')' code_block
	while_stat : WHILE . '(' expression ')' statement

	'('  shift 43


state 19
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' ';' expression ';' expression ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' ';' ';' ')'
	for_front : FOR . '(' ';' ';' expression ')'

	'('  shift 44


state 20
	type : STRUCT .  (21)

	.  reduce 21


state 21
	type : LONGINT .  (18)

	.  reduce 18


state 22
	type : DOUBLE .  (15)

	.  reduce 15


state 23
	type : LONGLONGINT .  (19)

	.  reduce 19


state 24
	type : FLOAT .  (16)

	.  reduce 16


state 25
	type : BOOL .  (17)

	.  reduce 17


state 26
	type : BYTE .  (20)

	.  reduce 20


state 27
	id_expr : ID .  (53)

	.  reduce 53


state 28
	expression : NUMBER .  (50)

	.  reduce 50


state 29
	expression : assign_expr .  (52)

	.  reduce 52


state 30
	var_declaration_front : type . assign_expr
	var_declaration_front : type . id_expr

	ID  shift 27

	assign_expr  goto 45
	id_expr  goto 46


31: shift-reduce conflict (shift 27, reduce 14) on ID
state 31
	for_stat : for_front . code_block
	for_stat : for_front . statement
	type : .  (14)

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
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	type  goto 30
	for_front  goto 31
	id_expr  goto 32
	for_stat  goto 33
	statement  goto 47
	expression  goto 35
	ifelse_stat  goto 36
	while_stat  goto 38
	var_declaration_front  goto 39
	code_block  goto 48


state 32
	expression : id_expr .  (51)
	assign_expr : id_expr . '=' expression

	'='  shift 49
	.  reduce 51


state 33
	statement : for_stat .  (7)

	.  reduce 7


state 34
	statement_list : statement .  (3)

	.  reduce 3


state 35
	statement : expression . ';'
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	';'  shift 55
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


state 36
	statement : ifelse_stat .  (8)

	.  reduce 8


37: shift-reduce conflict (shift 27, reduce 14) on ID
state 37
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE
	type : .  (14)

	'('  shift 13
	'-'  shift 14
	IF  shift 15
	VOID  shift 16
	RBRACE  shift 62
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
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	type  goto 30
	for_front  goto 31
	id_expr  goto 32
	for_stat  goto 33
	statement  goto 63
	expression  goto 35
	ifelse_stat  goto 36
	while_stat  goto 38
	var_declaration_front  goto 39


state 38
	statement : while_stat .  (6)

	.  reduce 6


state 39
	statement : var_declaration_front . ';'
	var_declaration_front : var_declaration_front . ',' id_expr
	var_declaration_front : var_declaration_front . ',' assign_expr

	','  shift 64
	';'  shift 65


state 40
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : '(' expression . ')'

	'%'  shift 50
	')'  shift 66
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


state 41
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : '-' expression .  (48)
	expression : expression . '*' expression

	.  reduce 48


state 42
	ifelse_stat : IF '(' . expression ')' statement ELSE code_block
	ifelse_stat : IF '(' . expression ')' code_block ELSE code_block
	ifelse_stat : IF '(' . expression ')' statement
	ifelse_stat : IF '(' . expression ')' statement ELSE statement
	ifelse_stat : IF '(' . expression ')' code_block ELSE statement
	ifelse_stat : IF '(' . expression ')' code_block

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 67


state 43
	while_stat : WHILE '(' . expression ')' code_block
	while_stat : WHILE '(' . expression ')' statement

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 68


state 44
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . ';' expression ';' expression ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . ';' ';' ')'
	for_front : FOR '(' . ';' ';' expression ')'

	'('  shift 13
	'-'  shift 14
	';'  shift 69
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 70


state 45
	var_declaration_front : type assign_expr .  (10)

	.  reduce 10


state 46
	var_declaration_front : type id_expr .  (11)
	assign_expr : id_expr . '=' expression

	'='  shift 49
	.  reduce 11


state 47
	for_stat : for_front statement .  (28)

	.  reduce 28


state 48
	for_stat : for_front code_block .  (27)

	.  reduce 27


state 49
	assign_expr : id_expr '=' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 71


state 50
	expression : expression '%' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 72


state 51
	expression : expression '*' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 73


state 52
	expression : expression '+' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 74


state 53
	expression : expression '-' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 75


state 54
	expression : expression '/' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 76


state 55
	statement : expression ';' .  (5)

	.  reduce 5


state 56
	expression : expression '<' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 77


state 57
	expression : expression '>' . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 78


state 58
	expression : expression EQ . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 79


state 59
	expression : expression NE . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 80


state 60
	expression : expression LE . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 81


state 61
	expression : expression GE . expression

	'('  shift 13
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 82


state 62
	code_block : LBRACE statement_list RBRACE .  (24)

	.  reduce 24


state 63
	statement_list : statement_list statement .  (4)

	.  reduce 4


state 64
	var_declaration_front : var_declaration_front ',' . id_expr
	var_declaration_front : var_declaration_front ',' . assign_expr

	ID  shift 27

	assign_expr  goto 83
	id_expr  goto 84


state 65
	statement : var_declaration_front ';' .  (9)

	.  reduce 9


state 66
	expression : '(' expression ')' .  (49)

	.  reduce 49


state 67
	ifelse_stat : IF '(' expression . ')' statement ELSE code_block
	expression : expression . '-' expression
	expression : expression . LE expression
	ifelse_stat : IF '(' expression . ')' code_block ELSE code_block
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	ifelse_stat : IF '(' expression . ')' statement
	expression : expression . '%' expression
	ifelse_stat : IF '(' expression . ')' statement ELSE statement
	expression : expression . '/' expression
	ifelse_stat : IF '(' expression . ')' code_block ELSE statement
	expression : expression . '*' expression
	ifelse_stat : IF '(' expression . ')' code_block

	'%'  shift 50
	')'  shift 85
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


state 68
	while_stat : WHILE '(' expression . ')' code_block
	while_stat : WHILE '(' expression . ')' statement
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	')'  shift 86
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


state 69
	for_front : FOR '(' ';' . expression ';' expression ')'
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . ';' ')'
	for_front : FOR '(' ';' . ';' expression ')'

	'('  shift 13
	'-'  shift 14
	';'  shift 87
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 88


state 70
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	for_front : FOR '(' expression . ';' ';' ')'
	for_front : FOR '(' expression . ';' expression ';' ')'
	for_front : FOR '(' expression . ';' ';' expression ')'
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	';'  shift 89
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


71: shift-reduce conflict (shift 50, reduce 54) on '%'
71: shift-reduce conflict (shift 51, reduce 54) on '*'
71: shift-reduce conflict (shift 52, reduce 54) on '+'
71: shift-reduce conflict (shift 53, reduce 54) on '-'
71: shift-reduce conflict (shift 54, reduce 54) on '/'
71: shift-reduce conflict (shift 56, reduce 54) on '<'
71: shift-reduce conflict (shift 57, reduce 54) on '>'
71: shift-reduce conflict (shift 58, reduce 54) on EQ
71: shift-reduce conflict (shift 59, reduce 54) on NE
71: shift-reduce conflict (shift 60, reduce 54) on LE
71: shift-reduce conflict (shift 61, reduce 54) on GE
state 71
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	assign_expr : id_expr '=' expression .  (54)
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61
	.  reduce 54


state 72
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression '%' expression .  (41)
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	.  reduce 41


state 73
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression '*' expression .  (39)
	expression : expression . '*' expression

	.  reduce 39


state 74
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression '+' expression .  (37)
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'/'  shift 54
	.  reduce 37


state 75
	expression : expression '-' expression .  (38)
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'/'  shift 54
	.  reduce 38


state 76
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression '/' expression .  (40)
	expression : expression . '/' expression
	expression : expression . '*' expression

	.  reduce 40


state 77
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression '<' expression .  (42)
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	.  reduce 42


state 78
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression '>' expression .  (43)
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	.  reduce 43


state 79
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression EQ expression .  (44)
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	LE  shift 60
	GE  shift 61
	.  reduce 44


state 80
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression NE expression .  (47)
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	LE  shift 60
	GE  shift 61
	.  reduce 47


state 81
	expression : expression . '-' expression
	expression : expression LE expression .  (45)
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	.  reduce 45


state 82
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression GE expression .  (46)
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	.  reduce 46


state 83
	var_declaration_front : var_declaration_front ',' assign_expr .  (13)

	.  reduce 13


state 84
	var_declaration_front : var_declaration_front ',' id_expr .  (12)
	assign_expr : id_expr . '=' expression

	'='  shift 49
	.  reduce 12


85: shift-reduce conflict (shift 27, reduce 14) on ID
state 85
	ifelse_stat : IF '(' expression ')' . statement ELSE code_block
	ifelse_stat : IF '(' expression ')' . code_block ELSE code_block
	ifelse_stat : IF '(' expression ')' . statement
	ifelse_stat : IF '(' expression ')' . statement ELSE statement
	ifelse_stat : IF '(' expression ')' . code_block ELSE statement
	ifelse_stat : IF '(' expression ')' . code_block
	type : .  (14)

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
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	type  goto 30
	for_front  goto 31
	id_expr  goto 32
	for_stat  goto 33
	statement  goto 90
	expression  goto 35
	ifelse_stat  goto 36
	while_stat  goto 38
	var_declaration_front  goto 39
	code_block  goto 91


86: shift-reduce conflict (shift 27, reduce 14) on ID
state 86
	while_stat : WHILE '(' expression ')' . code_block
	while_stat : WHILE '(' expression ')' . statement
	type : .  (14)

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
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	type  goto 30
	for_front  goto 31
	id_expr  goto 32
	for_stat  goto 33
	statement  goto 92
	expression  goto 35
	ifelse_stat  goto 36
	while_stat  goto 38
	var_declaration_front  goto 39
	code_block  goto 93


state 87
	for_front : FOR '(' ';' ';' . ')'
	for_front : FOR '(' ';' ';' . expression ')'

	'('  shift 13
	')'  shift 94
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 95


state 88
	for_front : FOR '(' ';' expression . ';' expression ')'
	expression : expression . '-' expression
	expression : expression . LE expression
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	';'  shift 96
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


state 89
	for_front : FOR '(' expression ';' . expression ';' expression ')'
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . expression ';' ')'
	for_front : FOR '(' expression ';' . ';' expression ')'

	'('  shift 13
	'-'  shift 14
	';'  shift 97
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 98


90: shift-reduce conflict (shift 99, reduce 56) on ELSE
state 90
	ifelse_stat : IF '(' expression ')' statement . ELSE code_block
	ifelse_stat : IF '(' expression ')' statement .  (56)
	ifelse_stat : IF '(' expression ')' statement . ELSE statement

	ELSE  shift 99
	.  reduce 56


91: shift-reduce conflict (shift 100, reduce 55) on ELSE
state 91
	ifelse_stat : IF '(' expression ')' code_block . ELSE code_block
	ifelse_stat : IF '(' expression ')' code_block . ELSE statement
	ifelse_stat : IF '(' expression ')' code_block .  (55)

	ELSE  shift 100
	.  reduce 55


state 92
	while_stat : WHILE '(' expression ')' statement .  (26)

	.  reduce 26


state 93
	while_stat : WHILE '(' expression ')' code_block .  (25)

	.  reduce 25


state 94
	for_front : FOR '(' ';' ';' ')' .  (36)

	.  reduce 36


state 95
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	')'  shift 101
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


state 96
	for_front : FOR '(' ';' expression ';' . expression ')'
	for_front : FOR '(' ';' expression ';' . ')'

	'('  shift 13
	')'  shift 102
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 103


state 97
	for_front : FOR '(' expression ';' ';' . ')'
	for_front : FOR '(' expression ';' ';' . expression ')'

	'('  shift 13
	')'  shift 104
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 105


state 98
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	for_front : FOR '(' expression ';' expression . ';' ')'
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	';'  shift 106
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


99: shift-reduce conflict (shift 27, reduce 14) on ID
state 99
	ifelse_stat : IF '(' expression ')' statement ELSE . code_block
	ifelse_stat : IF '(' expression ')' statement ELSE . statement
	type : .  (14)

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
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	type  goto 30
	for_front  goto 31
	id_expr  goto 32
	for_stat  goto 33
	statement  goto 107
	expression  goto 35
	ifelse_stat  goto 36
	while_stat  goto 38
	var_declaration_front  goto 39
	code_block  goto 108


100: shift-reduce conflict (shift 27, reduce 14) on ID
state 100
	ifelse_stat : IF '(' expression ')' code_block ELSE . code_block
	ifelse_stat : IF '(' expression ')' code_block ELSE . statement
	type : .  (14)

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
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	type  goto 30
	for_front  goto 31
	id_expr  goto 32
	for_stat  goto 33
	statement  goto 109
	expression  goto 35
	ifelse_stat  goto 36
	while_stat  goto 38
	var_declaration_front  goto 39
	code_block  goto 110


state 101
	for_front : FOR '(' ';' ';' expression ')' .  (35)

	.  reduce 35


state 102
	for_front : FOR '(' ';' expression ';' ')' .  (34)

	.  reduce 34


state 103
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	')'  shift 111
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


state 104
	for_front : FOR '(' expression ';' ';' ')' .  (33)

	.  reduce 33


state 105
	for_front : FOR '(' expression ';' ';' expression . ')'
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	')'  shift 112
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


state 106
	for_front : FOR '(' expression ';' expression ';' . expression ')'
	for_front : FOR '(' expression ';' expression ';' . ')'

	'('  shift 13
	')'  shift 113
	'-'  shift 14
	ID  shift 27
	NUMBER  shift 28

	assign_expr  goto 29
	id_expr  goto 32
	expression  goto 114


state 107
	ifelse_stat : IF '(' expression ')' statement ELSE statement .  (60)

	.  reduce 60


state 108
	ifelse_stat : IF '(' expression ')' statement ELSE code_block .  (59)

	.  reduce 59


state 109
	ifelse_stat : IF '(' expression ')' code_block ELSE statement .  (58)

	.  reduce 58


state 110
	ifelse_stat : IF '(' expression ')' code_block ELSE code_block .  (57)

	.  reduce 57


state 111
	for_front : FOR '(' ';' expression ';' expression ')' .  (32)

	.  reduce 32


state 112
	for_front : FOR '(' expression ';' ';' expression ')' .  (31)

	.  reduce 31


state 113
	for_front : FOR '(' expression ';' expression ';' ')' .  (30)

	.  reduce 30


state 114
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . NE expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '*' expression

	'%'  shift 50
	')'  shift 115
	'*'  shift 51
	'+'  shift 52
	'-'  shift 53
	'/'  shift 54
	'<'  shift 56
	'>'  shift 57
	EQ  shift 58
	NE  shift 59
	LE  shift 60
	GE  shift 61


state 115
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (29)

	.  reduce 29


Rules never reduced
	type :  (14)


##############################################################################
# Summary
##############################################################################

State 10 contains 1 shift-reduce conflict(s)
State 31 contains 1 shift-reduce conflict(s)
State 37 contains 1 shift-reduce conflict(s)
State 71 contains 11 shift-reduce conflict(s)
State 85 contains 1 shift-reduce conflict(s)
State 86 contains 1 shift-reduce conflict(s)
State 90 contains 1 shift-reduce conflict(s)
State 91 contains 1 shift-reduce conflict(s)
State 99 contains 1 shift-reduce conflict(s)
State 100 contains 1 shift-reduce conflict(s)


37 token(s), 14 nonterminal(s)
61 grammar rule(s), 116 state(s)


##############################################################################
# End of File
##############################################################################
