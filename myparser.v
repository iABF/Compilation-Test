#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 88 of your 30 day trial period.
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
# Date: 12/13/19
# Time: 01:42:53
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : prog $end

    1  prog : top_level_definition_list

    2  top_level_definition_list : top_level_definition top_level_definition_list
    3                            |

    4  top_level_definition : type top_level_declarator_list ';'
    5                       | type function_declarator code_block
    6                       | type ';'

    7  top_level_declarator_list : var_declarator
    8                            | var_declarator ',' top_level_declarator_list

    9  var_declarator : ID
   10                 | ID '[' NUMBER ']'

   11  function_declarator : ID '(' param_list ')'
   12                      | ID '(' ')'

   13  param_list : param
   14             | param ',' param_list

   15  param : type var_declarator

   16  type : DOUBLE
   17       | FLOAT
   18       | BOOL
   19       | LONGINT
   20       | LONGLONGINT
   21       | BYTE
   22       | STRUCT
   23       | INT
   24       | VOID

   25  code_block : LBRACE statement_list RBRACE

   26  statement_list : statement
   27                 | statement_list statement

   28  statement : expression ';'
   29            | while_loop_statement
   30            | for_loop_statement
   31            | selection_statement
   32            | var_definition
   33            | io_statement ';'

   34  io_statement : SCAN '(' expression ')'
   35               | PRINT '(' expression ')'

   36  while_loop_statement : WHILE '(' expression ')' code_block
   37                       | WHILE '(' expression ')' statement

   38  for_loop_statement : for_front code_block
   39                     | for_front statement

   40  for_front : FOR '(' expression ';' expression ';' expression ')'
   41            | FOR '(' type assignment_expression ';' expression ';' expression ')'
   42            | FOR '(' expression ';' expression ';' ')'
   43            | FOR '(' type assignment_expression ';' expression ';' ')'
   44            | FOR '(' expression ';' ';' expression ')'
   45            | FOR '(' type assignment_expression ';' ';' expression ')'
   46            | FOR '(' ';' expression ';' expression ')'
   47            | FOR '(' expression ';' ';' ')'
   48            | FOR '(' type assignment_expression ';' ';' ')'
   49            | FOR '(' ';' expression ';' ')'
   50            | FOR '(' ';' ';' expression ')'
   51            | FOR '(' ';' ';' ')'

   52  var_definition : type var_declaration_list ';'

   53  var_declaration_list : var_declaration
   54                       | var_declaration ',' var_declaration_list

   55  var_declaration : var_declarator
   56                  | var_declarator '=' expression

   57  assignment_expression : expression '=' expression

   58  expression : assignment_expression
   59             | expression '+' expression
   60             | expression '-' expression
   61             | expression '*' expression
   62             | expression '/' expression
   63             | expression '%' expression
   64             | expression '<' expression
   65             | expression '>' expression
   66             | expression EQ expression
   67             | expression LE expression
   68             | expression GE expression
   69             | expression NE expression
   70             | expression AND expression
   71             | expression OR expression
   72             | expression '^' expression
   73             | '-' expression
   74             | '(' expression ')'
   75             | NUMBER
   76             | var_declarator

   77  selection_statement : IF '(' expression ')' code_block
   78                      | IF '(' expression ')' statement
   79                      | IF '(' expression ')' code_block ELSE code_block
   80                      | IF '(' expression ')' code_block ELSE statement
   81                      | IF '(' expression ')' statement ELSE code_block
   82                      | IF '(' expression ')' statement ELSE statement


##############################################################################
# States
##############################################################################

state 0
	$accept : . prog $end
	top_level_definition_list : .  (3)

	VOID  shift 1
	INT  shift 2
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	.  reduce 3

	prog  goto 10
	type  goto 11
	top_level_definition_list  goto 12
	top_level_definition  goto 13


state 1
	type : VOID .  (24)

	.  reduce 24


state 2
	type : INT .  (23)

	.  reduce 23


state 3
	type : STRUCT .  (22)

	.  reduce 22


state 4
	type : LONGINT .  (19)

	.  reduce 19


state 5
	type : DOUBLE .  (16)

	.  reduce 16


state 6
	type : LONGLONGINT .  (20)

	.  reduce 20


state 7
	type : FLOAT .  (17)

	.  reduce 17


state 8
	type : BOOL .  (18)

	.  reduce 18


state 9
	type : BYTE .  (21)

	.  reduce 21


state 10
	$accept : prog . $end  (0)

	$end  accept


state 11
	top_level_definition : type . top_level_declarator_list ';'
	top_level_definition : type . function_declarator code_block
	top_level_definition : type . ';'

	';'  shift 14
	ID  shift 15

	var_declarator  goto 16
	function_declarator  goto 17
	top_level_declarator_list  goto 18


state 12
	prog : top_level_definition_list .  (1)

	.  reduce 1


state 13
	top_level_definition_list : top_level_definition . top_level_definition_list
	top_level_definition_list : .  (3)

	VOID  shift 1
	INT  shift 2
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	.  reduce 3

	type  goto 11
	top_level_definition_list  goto 19
	top_level_definition  goto 13


state 14
	top_level_definition : type ';' .  (6)

	.  reduce 6


state 15
	var_declarator : ID .  (9)
	var_declarator : ID . '[' NUMBER ']'
	function_declarator : ID . '(' param_list ')'
	function_declarator : ID . '(' ')'

	'('  shift 20
	'['  shift 21
	.  reduce 9


state 16
	top_level_declarator_list : var_declarator .  (7)
	top_level_declarator_list : var_declarator . ',' top_level_declarator_list

	','  shift 22
	.  reduce 7


state 17
	top_level_definition : type function_declarator . code_block

	LBRACE  shift 23

	code_block  goto 24


state 18
	top_level_definition : type top_level_declarator_list . ';'

	';'  shift 25


state 19
	top_level_definition_list : top_level_definition top_level_definition_list .  (2)

	.  reduce 2


state 20
	function_declarator : ID '(' . param_list ')'
	function_declarator : ID '(' . ')'

	')'  shift 26
	VOID  shift 1
	INT  shift 2
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9

	param_list  goto 27
	type  goto 28
	param  goto 29


state 21
	var_declarator : ID '[' . NUMBER ']'

	NUMBER  shift 30


state 22
	top_level_declarator_list : var_declarator ',' . top_level_declarator_list

	ID  shift 31

	var_declarator  goto 16
	top_level_declarator_list  goto 32


state 23
	code_block : LBRACE . statement_list RBRACE

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	INT  shift 2
	WHILE  shift 36
	FOR  shift 37
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 38
	PRINT  shift 39
	ID  shift 31
	NUMBER  shift 40

	statement_list  goto 41
	statement  goto 42
	while_loop_statement  goto 43
	for_loop_statement  goto 44
	expression  goto 45
	var_definition  goto 46
	selection_statement  goto 47
	assignment_expression  goto 48
	io_statement  goto 49
	for_front  goto 50
	var_declarator  goto 51
	type  goto 52


state 24
	top_level_definition : type function_declarator code_block .  (5)

	.  reduce 5


state 25
	top_level_definition : type top_level_declarator_list ';' .  (4)

	.  reduce 4


state 26
	function_declarator : ID '(' ')' .  (12)

	.  reduce 12


state 27
	function_declarator : ID '(' param_list . ')'

	')'  shift 53


state 28
	param : type . var_declarator

	ID  shift 31

	var_declarator  goto 54


state 29
	param_list : param .  (13)
	param_list : param . ',' param_list

	','  shift 55
	.  reduce 13


state 30
	var_declarator : ID '[' NUMBER . ']'

	']'  shift 56


state 31
	var_declarator : ID .  (9)
	var_declarator : ID . '[' NUMBER ']'

	'['  shift 21
	.  reduce 9


state 32
	top_level_declarator_list : var_declarator ',' top_level_declarator_list .  (8)

	.  reduce 8


state 33
	expression : '(' . expression ')'

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 57
	assignment_expression  goto 48
	var_declarator  goto 51


state 34
	expression : '-' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 58
	assignment_expression  goto 48
	var_declarator  goto 51


state 35
	selection_statement : IF . '(' expression ')' statement ELSE statement
	selection_statement : IF . '(' expression ')' code_block ELSE statement
	selection_statement : IF . '(' expression ')' code_block
	selection_statement : IF . '(' expression ')' code_block ELSE code_block
	selection_statement : IF . '(' expression ')' statement
	selection_statement : IF . '(' expression ')' statement ELSE code_block

	'('  shift 59


state 36
	while_loop_statement : WHILE . '(' expression ')' code_block
	while_loop_statement : WHILE . '(' expression ')' statement

	'('  shift 60


state 37
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' ';' ';' expression ')'
	for_front : FOR . '(' type assignment_expression ';' expression ';' expression ')'
	for_front : FOR . '(' type assignment_expression ';' expression ';' ')'
	for_front : FOR . '(' ';' ';' ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' type assignment_expression ';' ';' expression ')'
	for_front : FOR . '(' type assignment_expression ';' ';' ')'

	'('  shift 61


state 38
	io_statement : SCAN . '(' expression ')'

	'('  shift 62


state 39
	io_statement : PRINT . '(' expression ')'

	'('  shift 63


state 40
	expression : NUMBER .  (75)

	.  reduce 75


state 41
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	RBRACE  shift 64
	INT  shift 2
	WHILE  shift 36
	FOR  shift 37
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 38
	PRINT  shift 39
	ID  shift 31
	NUMBER  shift 40

	statement  goto 65
	while_loop_statement  goto 43
	for_loop_statement  goto 44
	expression  goto 45
	var_definition  goto 46
	selection_statement  goto 47
	assignment_expression  goto 48
	io_statement  goto 49
	for_front  goto 50
	var_declarator  goto 51
	type  goto 52


state 42
	statement_list : statement .  (26)

	.  reduce 26


state 43
	statement : while_loop_statement .  (29)

	.  reduce 29


state 44
	statement : for_loop_statement .  (30)

	.  reduce 30


state 45
	statement : expression . ';'
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	';'  shift 71
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 46
	statement : var_definition .  (32)

	.  reduce 32


state 47
	statement : selection_statement .  (31)

	.  reduce 31


state 48
	expression : assignment_expression .  (58)

	.  reduce 58


state 49
	statement : io_statement . ';'

	';'  shift 82


state 50
	for_loop_statement : for_front . code_block
	for_loop_statement : for_front . statement

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 23
	INT  shift 2
	WHILE  shift 36
	FOR  shift 37
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 38
	PRINT  shift 39
	ID  shift 31
	NUMBER  shift 40

	statement  goto 83
	while_loop_statement  goto 43
	for_loop_statement  goto 44
	expression  goto 45
	var_definition  goto 46
	selection_statement  goto 47
	assignment_expression  goto 48
	io_statement  goto 49
	for_front  goto 50
	var_declarator  goto 51
	type  goto 52
	code_block  goto 84


state 51
	expression : var_declarator .  (76)

	.  reduce 76


state 52
	var_definition : type . var_declaration_list ';'

	ID  shift 31

	var_declaration_list  goto 85
	var_declaration  goto 86
	var_declarator  goto 87


state 53
	function_declarator : ID '(' param_list ')' .  (11)

	.  reduce 11


state 54
	param : type var_declarator .  (15)

	.  reduce 15


state 55
	param_list : param ',' . param_list

	VOID  shift 1
	INT  shift 2
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9

	param_list  goto 88
	type  goto 28
	param  goto 29


state 56
	var_declarator : ID '[' NUMBER ']' .  (10)

	.  reduce 10


state 57
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : '(' expression . ')'
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 89
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


58: shift-reduce conflict (shift 73, reduce 73) on '='
state 58
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : '-' expression .  (73)
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'='  shift 73
	.  reduce 73


state 59
	selection_statement : IF '(' . expression ')' statement ELSE statement
	selection_statement : IF '(' . expression ')' code_block ELSE statement
	selection_statement : IF '(' . expression ')' code_block
	selection_statement : IF '(' . expression ')' code_block ELSE code_block
	selection_statement : IF '(' . expression ')' statement
	selection_statement : IF '(' . expression ')' statement ELSE code_block

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 90
	assignment_expression  goto 48
	var_declarator  goto 51


state 60
	while_loop_statement : WHILE '(' . expression ')' code_block
	while_loop_statement : WHILE '(' . expression ')' statement

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 91
	assignment_expression  goto 48
	var_declarator  goto 51


state 61
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . ';' ';' expression ')'
	for_front : FOR '(' . type assignment_expression ';' expression ';' expression ')'
	for_front : FOR '(' . type assignment_expression ';' expression ';' ')'
	for_front : FOR '(' . ';' ';' ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . type assignment_expression ';' ';' expression ')'
	for_front : FOR '(' . type assignment_expression ';' ';' ')'

	'('  shift 33
	'-'  shift 34
	';'  shift 92
	VOID  shift 1
	INT  shift 2
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	ID  shift 31
	NUMBER  shift 40

	expression  goto 93
	assignment_expression  goto 48
	var_declarator  goto 51
	type  goto 94


state 62
	io_statement : SCAN '(' . expression ')'

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 95
	assignment_expression  goto 48
	var_declarator  goto 51


state 63
	io_statement : PRINT '(' . expression ')'

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 96
	assignment_expression  goto 48
	var_declarator  goto 51


state 64
	code_block : LBRACE statement_list RBRACE .  (25)

	.  reduce 25


state 65
	statement_list : statement_list statement .  (27)

	.  reduce 27


state 66
	expression : expression '%' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 97
	assignment_expression  goto 48
	var_declarator  goto 51


state 67
	expression : expression '*' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 98
	assignment_expression  goto 48
	var_declarator  goto 51


state 68
	expression : expression '+' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 99
	assignment_expression  goto 48
	var_declarator  goto 51


state 69
	expression : expression '-' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 100
	assignment_expression  goto 48
	var_declarator  goto 51


state 70
	expression : expression '/' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 101
	assignment_expression  goto 48
	var_declarator  goto 51


state 71
	statement : expression ';' .  (28)

	.  reduce 28


state 72
	expression : expression '<' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 102
	assignment_expression  goto 48
	var_declarator  goto 51


state 73
	assignment_expression : expression '=' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 103
	assignment_expression  goto 48
	var_declarator  goto 51


state 74
	expression : expression '>' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 104
	assignment_expression  goto 48
	var_declarator  goto 51


state 75
	expression : expression '^' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 105
	assignment_expression  goto 48
	var_declarator  goto 51


state 76
	expression : expression OR . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 106
	assignment_expression  goto 48
	var_declarator  goto 51


state 77
	expression : expression AND . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 107
	assignment_expression  goto 48
	var_declarator  goto 51


state 78
	expression : expression EQ . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 108
	assignment_expression  goto 48
	var_declarator  goto 51


state 79
	expression : expression NE . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 109
	assignment_expression  goto 48
	var_declarator  goto 51


state 80
	expression : expression LE . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 110
	assignment_expression  goto 48
	var_declarator  goto 51


state 81
	expression : expression GE . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 111
	assignment_expression  goto 48
	var_declarator  goto 51


state 82
	statement : io_statement ';' .  (33)

	.  reduce 33


state 83
	for_loop_statement : for_front statement .  (39)

	.  reduce 39


state 84
	for_loop_statement : for_front code_block .  (38)

	.  reduce 38


state 85
	var_definition : type var_declaration_list . ';'

	';'  shift 112


state 86
	var_declaration_list : var_declaration .  (53)
	var_declaration_list : var_declaration . ',' var_declaration_list

	','  shift 113
	.  reduce 53


state 87
	var_declaration : var_declarator .  (55)
	var_declaration : var_declarator . '=' expression

	'='  shift 114
	.  reduce 55


state 88
	param_list : param ',' param_list .  (14)

	.  reduce 14


state 89
	expression : '(' expression ')' .  (74)

	.  reduce 74


state 90
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	selection_statement : IF '(' expression . ')' statement ELSE statement
	expression : expression . NE expression
	selection_statement : IF '(' expression . ')' code_block ELSE statement
	selection_statement : IF '(' expression . ')' code_block
	selection_statement : IF '(' expression . ')' code_block ELSE code_block
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	selection_statement : IF '(' expression . ')' statement
	selection_statement : IF '(' expression . ')' statement ELSE code_block

	'%'  shift 66
	')'  shift 115
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 91
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	while_loop_statement : WHILE '(' expression . ')' code_block
	while_loop_statement : WHILE '(' expression . ')' statement
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 116
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 92
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . ';' expression ')'
	for_front : FOR '(' ';' . ';' ')'
	for_front : FOR '(' ';' . expression ';' expression ')'

	'('  shift 33
	'-'  shift 34
	';'  shift 117
	ID  shift 31
	NUMBER  shift 40

	expression  goto 118
	assignment_expression  goto 48
	var_declarator  goto 51


state 93
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	for_front : FOR '(' expression . ';' ';' ')'
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' expression . ';' ';' expression ')'
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	for_front : FOR '(' expression . ';' expression ';' ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	';'  shift 119
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 94
	for_front : FOR '(' type . assignment_expression ';' expression ';' expression ')'
	for_front : FOR '(' type . assignment_expression ';' expression ';' ')'
	for_front : FOR '(' type . assignment_expression ';' ';' expression ')'
	for_front : FOR '(' type . assignment_expression ';' ';' ')'

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 120
	assignment_expression  goto 121
	var_declarator  goto 51


state 95
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	io_statement : SCAN '(' expression . ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 122
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 96
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	io_statement : PRINT '(' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 123
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


97: shift-reduce conflict (shift 73, reduce 63) on '='
state 97
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression '%' expression .  (63)
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'='  shift 73
	'^'  shift 75
	.  reduce 63


98: shift-reduce conflict (shift 73, reduce 61) on '='
state 98
	expression : expression . '+' expression
	expression : expression '*' expression .  (61)
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'='  shift 73
	'^'  shift 75
	.  reduce 61


99: shift-reduce conflict (shift 73, reduce 59) on '='
state 99
	expression : expression '+' expression .  (59)
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'/'  shift 70
	'='  shift 73
	'^'  shift 75
	.  reduce 59


100: shift-reduce conflict (shift 73, reduce 60) on '='
state 100
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression '-' expression .  (60)
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'/'  shift 70
	'='  shift 73
	'^'  shift 75
	.  reduce 60


101: shift-reduce conflict (shift 73, reduce 62) on '='
state 101
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression '/' expression .  (62)
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'='  shift 73
	'^'  shift 75
	.  reduce 62


102: shift-reduce conflict (shift 73, reduce 64) on '='
state 102
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression '<' expression .  (64)
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'='  shift 73
	'^'  shift 75
	.  reduce 64


103: shift-reduce conflict (shift 66, reduce 57) on '%'
103: shift-reduce conflict (shift 67, reduce 57) on '*'
103: shift-reduce conflict (shift 68, reduce 57) on '+'
103: shift-reduce conflict (shift 69, reduce 57) on '-'
103: shift-reduce conflict (shift 70, reduce 57) on '/'
103: shift-reduce conflict (shift 72, reduce 57) on '<'
103: shift-reduce conflict (shift 73, reduce 57) on '='
103: shift-reduce conflict (shift 74, reduce 57) on '>'
103: shift-reduce conflict (shift 75, reduce 57) on '^'
103: shift-reduce conflict (shift 76, reduce 57) on OR
103: shift-reduce conflict (shift 77, reduce 57) on AND
103: shift-reduce conflict (shift 78, reduce 57) on EQ
103: shift-reduce conflict (shift 79, reduce 57) on NE
103: shift-reduce conflict (shift 80, reduce 57) on LE
103: shift-reduce conflict (shift 81, reduce 57) on GE
state 103
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression '=' expression .  (57)
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81
	.  reduce 57


104: shift-reduce conflict (shift 73, reduce 65) on '='
state 104
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression '>' expression .  (65)
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'='  shift 73
	'^'  shift 75
	.  reduce 65


105: shift-reduce conflict (shift 73, reduce 72) on '='
state 105
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression '^' expression .  (72)
	expression : expression . '^' expression
	expression : expression . OR expression

	'='  shift 73
	'^'  shift 75
	.  reduce 72


106: shift-reduce conflict (shift 73, reduce 71) on '='
state 106
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression OR expression .  (71)
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81
	.  reduce 71


107: shift-reduce conflict (shift 73, reduce 70) on '='
state 107
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression AND expression .  (70)
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81
	.  reduce 70


108: shift-reduce conflict (shift 73, reduce 66) on '='
state 108
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression EQ expression .  (66)
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	LE  shift 80
	GE  shift 81
	.  reduce 66


109: shift-reduce conflict (shift 73, reduce 69) on '='
state 109
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression NE expression .  (69)
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	LE  shift 80
	GE  shift 81
	.  reduce 69


110: shift-reduce conflict (shift 73, reduce 67) on '='
state 110
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression LE expression .  (67)
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'='  shift 73
	'^'  shift 75
	.  reduce 67


111: shift-reduce conflict (shift 73, reduce 68) on '='
state 111
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression GE expression .  (68)
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'='  shift 73
	'^'  shift 75
	.  reduce 68


state 112
	var_definition : type var_declaration_list ';' .  (52)

	.  reduce 52


state 113
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 31

	var_declaration_list  goto 124
	var_declaration  goto 86
	var_declarator  goto 87


state 114
	var_declaration : var_declarator '=' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 125
	assignment_expression  goto 48
	var_declarator  goto 51


state 115
	selection_statement : IF '(' expression ')' . statement ELSE statement
	selection_statement : IF '(' expression ')' . code_block ELSE statement
	selection_statement : IF '(' expression ')' . code_block
	selection_statement : IF '(' expression ')' . code_block ELSE code_block
	selection_statement : IF '(' expression ')' . statement
	selection_statement : IF '(' expression ')' . statement ELSE code_block

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 23
	INT  shift 2
	WHILE  shift 36
	FOR  shift 37
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 38
	PRINT  shift 39
	ID  shift 31
	NUMBER  shift 40

	statement  goto 126
	while_loop_statement  goto 43
	for_loop_statement  goto 44
	expression  goto 45
	var_definition  goto 46
	selection_statement  goto 47
	assignment_expression  goto 48
	io_statement  goto 49
	for_front  goto 50
	var_declarator  goto 51
	type  goto 52
	code_block  goto 127


state 116
	while_loop_statement : WHILE '(' expression ')' . code_block
	while_loop_statement : WHILE '(' expression ')' . statement

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 23
	INT  shift 2
	WHILE  shift 36
	FOR  shift 37
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 38
	PRINT  shift 39
	ID  shift 31
	NUMBER  shift 40

	statement  goto 128
	while_loop_statement  goto 43
	for_loop_statement  goto 44
	expression  goto 45
	var_definition  goto 46
	selection_statement  goto 47
	assignment_expression  goto 48
	io_statement  goto 49
	for_front  goto 50
	var_declarator  goto 51
	type  goto 52
	code_block  goto 129


state 117
	for_front : FOR '(' ';' ';' . expression ')'
	for_front : FOR '(' ';' ';' . ')'

	'('  shift 33
	')'  shift 130
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 131
	assignment_expression  goto 48
	var_declarator  goto 51


state 118
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' ';' expression . ';' expression ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	';'  shift 132
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 119
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . ';' expression ')'
	for_front : FOR '(' expression ';' . expression ';' expression ')'
	for_front : FOR '(' expression ';' . expression ';' ')'

	'('  shift 33
	'-'  shift 34
	';'  shift 133
	ID  shift 31
	NUMBER  shift 40

	expression  goto 134
	assignment_expression  goto 48
	var_declarator  goto 51


state 120
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 121
	expression : assignment_expression .  (58)
	for_front : FOR '(' type assignment_expression . ';' expression ';' expression ')'
	for_front : FOR '(' type assignment_expression . ';' expression ';' ')'
	for_front : FOR '(' type assignment_expression . ';' ';' expression ')'
	for_front : FOR '(' type assignment_expression . ';' ';' ')'

	';'  shift 135
	.  reduce 58


state 122
	io_statement : SCAN '(' expression ')' .  (34)

	.  reduce 34


state 123
	io_statement : PRINT '(' expression ')' .  (35)

	.  reduce 35


state 124
	var_declaration_list : var_declaration ',' var_declaration_list .  (54)

	.  reduce 54


state 125
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	var_declaration : var_declarator '=' expression .  (56)
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81
	.  reduce 56


126: shift-reduce conflict (shift 136, reduce 78) on ELSE
state 126
	selection_statement : IF '(' expression ')' statement . ELSE statement
	selection_statement : IF '(' expression ')' statement .  (78)
	selection_statement : IF '(' expression ')' statement . ELSE code_block

	ELSE  shift 136
	.  reduce 78


127: shift-reduce conflict (shift 137, reduce 77) on ELSE
state 127
	selection_statement : IF '(' expression ')' code_block . ELSE statement
	selection_statement : IF '(' expression ')' code_block .  (77)
	selection_statement : IF '(' expression ')' code_block . ELSE code_block

	ELSE  shift 137
	.  reduce 77


state 128
	while_loop_statement : WHILE '(' expression ')' statement .  (37)

	.  reduce 37


state 129
	while_loop_statement : WHILE '(' expression ')' code_block .  (36)

	.  reduce 36


state 130
	for_front : FOR '(' ';' ';' ')' .  (51)

	.  reduce 51


state 131
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	for_front : FOR '(' ';' ';' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 138
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 132
	for_front : FOR '(' ';' expression ';' . ')'
	for_front : FOR '(' ';' expression ';' . expression ')'

	'('  shift 33
	')'  shift 139
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 140
	assignment_expression  goto 48
	var_declarator  goto 51


state 133
	for_front : FOR '(' expression ';' ';' . ')'
	for_front : FOR '(' expression ';' ';' . expression ')'

	'('  shift 33
	')'  shift 141
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 142
	assignment_expression  goto 48
	var_declarator  goto 51


state 134
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	for_front : FOR '(' expression ';' expression . ';' ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	';'  shift 143
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 135
	for_front : FOR '(' type assignment_expression ';' . expression ';' expression ')'
	for_front : FOR '(' type assignment_expression ';' . expression ';' ')'
	for_front : FOR '(' type assignment_expression ';' . ';' expression ')'
	for_front : FOR '(' type assignment_expression ';' . ';' ')'

	'('  shift 33
	'-'  shift 34
	';'  shift 144
	ID  shift 31
	NUMBER  shift 40

	expression  goto 145
	assignment_expression  goto 48
	var_declarator  goto 51


state 136
	selection_statement : IF '(' expression ')' statement ELSE . statement
	selection_statement : IF '(' expression ')' statement ELSE . code_block

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 23
	INT  shift 2
	WHILE  shift 36
	FOR  shift 37
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 38
	PRINT  shift 39
	ID  shift 31
	NUMBER  shift 40

	statement  goto 146
	while_loop_statement  goto 43
	for_loop_statement  goto 44
	expression  goto 45
	var_definition  goto 46
	selection_statement  goto 47
	assignment_expression  goto 48
	io_statement  goto 49
	for_front  goto 50
	var_declarator  goto 51
	type  goto 52
	code_block  goto 147


state 137
	selection_statement : IF '(' expression ')' code_block ELSE . statement
	selection_statement : IF '(' expression ')' code_block ELSE . code_block

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 23
	INT  shift 2
	WHILE  shift 36
	FOR  shift 37
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 38
	PRINT  shift 39
	ID  shift 31
	NUMBER  shift 40

	statement  goto 148
	while_loop_statement  goto 43
	for_loop_statement  goto 44
	expression  goto 45
	var_definition  goto 46
	selection_statement  goto 47
	assignment_expression  goto 48
	io_statement  goto 49
	for_front  goto 50
	var_declarator  goto 51
	type  goto 52
	code_block  goto 149


state 138
	for_front : FOR '(' ';' ';' expression ')' .  (50)

	.  reduce 50


state 139
	for_front : FOR '(' ';' expression ';' ')' .  (49)

	.  reduce 49


state 140
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 150
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 141
	for_front : FOR '(' expression ';' ';' ')' .  (47)

	.  reduce 47


state 142
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' expression ';' ';' expression . ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 151
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 143
	for_front : FOR '(' expression ';' expression ';' . expression ')'
	for_front : FOR '(' expression ';' expression ';' . ')'

	'('  shift 33
	')'  shift 152
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 153
	assignment_expression  goto 48
	var_declarator  goto 51


state 144
	for_front : FOR '(' type assignment_expression ';' ';' . expression ')'
	for_front : FOR '(' type assignment_expression ';' ';' . ')'

	'('  shift 33
	')'  shift 154
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 155
	assignment_expression  goto 48
	var_declarator  goto 51


state 145
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' type assignment_expression ';' expression . ';' expression ')'
	for_front : FOR '(' type assignment_expression ';' expression . ';' ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	';'  shift 156
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 146
	selection_statement : IF '(' expression ')' statement ELSE statement .  (82)

	.  reduce 82


state 147
	selection_statement : IF '(' expression ')' statement ELSE code_block .  (81)

	.  reduce 81


state 148
	selection_statement : IF '(' expression ')' code_block ELSE statement .  (80)

	.  reduce 80


state 149
	selection_statement : IF '(' expression ')' code_block ELSE code_block .  (79)

	.  reduce 79


state 150
	for_front : FOR '(' ';' expression ';' expression ')' .  (46)

	.  reduce 46


state 151
	for_front : FOR '(' expression ';' ';' expression ')' .  (44)

	.  reduce 44


state 152
	for_front : FOR '(' expression ';' expression ';' ')' .  (42)

	.  reduce 42


state 153
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 157
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 154
	for_front : FOR '(' type assignment_expression ';' ';' ')' .  (48)

	.  reduce 48


state 155
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' type assignment_expression ';' ';' expression . ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 158
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 156
	for_front : FOR '(' type assignment_expression ';' expression ';' . expression ')'
	for_front : FOR '(' type assignment_expression ';' expression ';' . ')'

	'('  shift 33
	')'  shift 159
	'-'  shift 34
	ID  shift 31
	NUMBER  shift 40

	expression  goto 160
	assignment_expression  goto 48
	var_declarator  goto 51


state 157
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (40)

	.  reduce 40


state 158
	for_front : FOR '(' type assignment_expression ';' ';' expression ')' .  (45)

	.  reduce 45


state 159
	for_front : FOR '(' type assignment_expression ';' expression ';' ')' .  (43)

	.  reduce 43


state 160
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '-' expression
	assignment_expression : expression . '=' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' type assignment_expression ';' expression ';' expression . ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression

	'%'  shift 66
	')'  shift 161
	'*'  shift 67
	'+'  shift 68
	'-'  shift 69
	'/'  shift 70
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 161
	for_front : FOR '(' type assignment_expression ';' expression ';' expression ')' .  (41)

	.  reduce 41


##############################################################################
# Summary
##############################################################################

State 58 contains 1 shift-reduce conflict(s)
State 97 contains 1 shift-reduce conflict(s)
State 98 contains 1 shift-reduce conflict(s)
State 99 contains 1 shift-reduce conflict(s)
State 100 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 102 contains 1 shift-reduce conflict(s)
State 103 contains 15 shift-reduce conflict(s)
State 104 contains 1 shift-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 106 contains 1 shift-reduce conflict(s)
State 107 contains 1 shift-reduce conflict(s)
State 108 contains 1 shift-reduce conflict(s)
State 109 contains 1 shift-reduce conflict(s)
State 110 contains 1 shift-reduce conflict(s)
State 111 contains 1 shift-reduce conflict(s)
State 126 contains 1 shift-reduce conflict(s)
State 127 contains 1 shift-reduce conflict(s)


43 token(s), 23 nonterminal(s)
83 grammar rule(s), 162 state(s)


##############################################################################
# End of File
##############################################################################
