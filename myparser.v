#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 97 of your 30 day trial period.
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
# Date: 12/22/19
# Time: 11:17:08
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
   10                 | var_declarator '[' NUMBER ']'

   11  function_declarator : ID '(' ')'
   12                      | ID '(' param_list ')'

   13  param_list : param
   14             | param ',' param_list

   15  param : type var_declarator

   16  type : BOOL
   17       | INT
   18       | VOID

   19  code_block : LBRACE statement_list RBRACE

   20  statement_list : statement
   21                 | statement_list statement

   22  statement : assignment_expression ';'
   23            | while_loop_statement
   24            | for_loop_statement
   25            | selection_statement
   26            | var_definition
   27            | io_statement ';'
   28            | code_block

   29  io_statement : SCAN '(' expression ')'
   30               | PRINT '(' expression ')'

   31  while_loop_statement : WHILE '(' expression ')' statement

   32  for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement
   33                     | FOR '(' type assignment_expression ';' expression ';' expression ')' statement
   34                     | FOR '(' expression ';' expression ';' ')' statement
   35                     | FOR '(' type assignment_expression ';' expression ';' ')' statement
   36                     | FOR '(' expression ';' ';' expression ')' statement
   37                     | FOR '(' type assignment_expression ';' ';' expression ')' statement
   38                     | FOR '(' ';' expression ';' expression ')' statement
   39                     | FOR '(' expression ';' ';' ')' statement
   40                     | FOR '(' type assignment_expression ';' ';' ')' statement
   41                     | FOR '(' ';' expression ';' ')' statement
   42                     | FOR '(' ';' ';' expression ')' statement
   43                     | FOR '(' ';' ';' ')' statement

   44  selection_statement : IF '(' expression ')' statement
   45                      | IF '(' expression ')' statement ELSE statement

   46  var_definition : type var_declaration_list ';'

   47  var_declaration_list : var_declaration
   48                       | var_declaration ',' var_declaration_list

   49  var_declaration : var_declarator
   50                  | var_declarator '=' expression

   51  assignment_expression : expression '=' expression

   52  expression : assignment_expression
   53             | expression '+' expression
   54             | expression '-' expression
   55             | expression '*' expression
   56             | expression '/' expression
   57             | expression '%' expression
   58             | expression '<' expression
   59             | expression '>' expression
   60             | expression EQ expression
   61             | expression LE expression
   62             | expression GE expression
   63             | expression NE expression
   64             | expression AND expression
   65             | expression OR expression
   66             | expression '^' expression
   67             | '-' expression
   68             | '(' expression ')'
   69             | ID '(' ')'
   70             | ID '(' argument_list ')'
   71             | NUMBER
   72             | expression_id_dec

   73  expression_id_dec : ID
   74                    | expression_id_dec '[' expression ']'

   75  argument_list : expression
   76                | expression ',' argument_list


##############################################################################
# States
##############################################################################

state 0
	$accept : . prog $end
	top_level_definition_list : .  (3)

	VOID  shift 1
	INT  shift 2
	BOOL  shift 3
	.  reduce 3

	top_level_definition  goto 4
	prog  goto 5
	top_level_definition_list  goto 6
	type  goto 7


state 1
	type : VOID .  (18)

	.  reduce 18


state 2
	type : INT .  (17)

	.  reduce 17


state 3
	type : BOOL .  (16)

	.  reduce 16


state 4
	top_level_definition_list : top_level_definition . top_level_definition_list
	top_level_definition_list : .  (3)

	VOID  shift 1
	INT  shift 2
	BOOL  shift 3
	.  reduce 3

	top_level_definition  goto 4
	top_level_definition_list  goto 8
	type  goto 7


state 5
	$accept : prog . $end  (0)

	$end  accept


state 6
	prog : top_level_definition_list .  (1)

	.  reduce 1


state 7
	top_level_definition : type . top_level_declarator_list ';'
	top_level_definition : type . function_declarator code_block
	top_level_definition : type . ';'

	';'  shift 9
	ID  shift 10

	top_level_declarator_list  goto 11
	function_declarator  goto 12
	var_declarator  goto 13


state 8
	top_level_definition_list : top_level_definition top_level_definition_list .  (2)

	.  reduce 2


state 9
	top_level_definition : type ';' .  (6)

	.  reduce 6


state 10
	var_declarator : ID .  (9)
	function_declarator : ID . '(' ')'
	function_declarator : ID . '(' param_list ')'

	'('  shift 14
	.  reduce 9


state 11
	top_level_definition : type top_level_declarator_list . ';'

	';'  shift 15


state 12
	top_level_definition : type function_declarator . code_block

	LBRACE  shift 16

	code_block  goto 17


state 13
	top_level_declarator_list : var_declarator .  (7)
	top_level_declarator_list : var_declarator . ',' top_level_declarator_list
	var_declarator : var_declarator . '[' NUMBER ']'

	','  shift 18
	'['  shift 19
	.  reduce 7


state 14
	function_declarator : ID '(' . ')'
	function_declarator : ID '(' . param_list ')'

	')'  shift 20
	VOID  shift 1
	INT  shift 2
	BOOL  shift 3

	param  goto 21
	param_list  goto 22
	type  goto 23


state 15
	top_level_definition : type top_level_declarator_list ';' .  (4)

	.  reduce 4


state 16
	code_block : LBRACE . statement_list RBRACE

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	statement_list  goto 40
	type  goto 41
	code_block  goto 42
	statement  goto 43
	io_statement  goto 44


state 17
	top_level_definition : type function_declarator code_block .  (5)

	.  reduce 5


state 18
	top_level_declarator_list : var_declarator ',' . top_level_declarator_list

	ID  shift 45

	top_level_declarator_list  goto 46
	var_declarator  goto 13


state 19
	var_declarator : var_declarator '[' . NUMBER ']'

	NUMBER  shift 47


state 20
	function_declarator : ID '(' ')' .  (11)

	.  reduce 11


state 21
	param_list : param .  (13)
	param_list : param . ',' param_list

	','  shift 48
	.  reduce 13


state 22
	function_declarator : ID '(' param_list . ')'

	')'  shift 49


state 23
	param : type . var_declarator

	ID  shift 45

	var_declarator  goto 50


state 24
	expression : '(' . expression ')'

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 52
	expression_id_dec  goto 39


state 25
	expression : '-' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 53
	expression_id_dec  goto 39


state 26
	selection_statement : IF . '(' expression ')' statement
	selection_statement : IF . '(' expression ')' statement ELSE statement

	'('  shift 54


state 27
	while_loop_statement : WHILE . '(' expression ')' statement

	'('  shift 55


state 28
	for_loop_statement : FOR . '(' expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' type assignment_expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' type assignment_expression ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' type assignment_expression ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' ')' statement
	for_loop_statement : FOR . '(' ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' ';' ')' statement
	for_loop_statement : FOR . '(' type assignment_expression ';' ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' expression ')' statement

	'('  shift 56


state 29
	io_statement : SCAN . '(' expression ')'

	'('  shift 57


state 30
	io_statement : PRINT . '(' expression ')'

	'('  shift 58


state 31
	expression_id_dec : ID .  (73)
	expression : ID . '(' argument_list ')'
	expression : ID . '(' ')'

	'('  shift 59
	.  reduce 73


state 32
	expression : NUMBER .  (71)

	.  reduce 71


state 33
	statement : while_loop_statement .  (23)

	.  reduce 23


state 34
	statement : assignment_expression . ';'
	expression : assignment_expression .  (52)

	';'  shift 60
	.  reduce 52


state 35
	statement : var_definition .  (26)

	.  reduce 26


state 36
	statement : for_loop_statement .  (24)

	.  reduce 24


state 37
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 38
	statement : selection_statement .  (25)

	.  reduce 25


state 39
	expression : expression_id_dec .  (72)
	expression_id_dec : expression_id_dec . '[' expression ']'

	'['  shift 76
	.  reduce 72


state 40
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	RBRACE  shift 77
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 78
	io_statement  goto 44


state 41
	var_definition : type . var_declaration_list ';'

	ID  shift 45

	var_declaration_list  goto 79
	var_declaration  goto 80
	var_declarator  goto 81


state 42
	statement : code_block .  (28)

	.  reduce 28


state 43
	statement_list : statement .  (20)

	.  reduce 20


state 44
	statement : io_statement . ';'

	';'  shift 82


state 45
	var_declarator : ID .  (9)

	.  reduce 9


state 46
	top_level_declarator_list : var_declarator ',' top_level_declarator_list .  (8)

	.  reduce 8


state 47
	var_declarator : var_declarator '[' NUMBER . ']'

	']'  shift 83


state 48
	param_list : param ',' . param_list

	VOID  shift 1
	INT  shift 2
	BOOL  shift 3

	param  goto 21
	param_list  goto 84
	type  goto 23


state 49
	function_declarator : ID '(' param_list ')' .  (12)

	.  reduce 12


state 50
	var_declarator : var_declarator . '[' NUMBER ']'
	param : type var_declarator .  (15)

	'['  shift 19
	.  reduce 15


state 51
	expression : assignment_expression .  (52)

	.  reduce 52


state 52
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : '(' expression . ')'
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 85
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


53: shift-reduce conflict (shift 67, reduce 67) on '='
state 53
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : '-' expression .  (67)
	expression : expression . '^' expression

	'='  shift 67
	.  reduce 67


state 54
	selection_statement : IF '(' . expression ')' statement
	selection_statement : IF '(' . expression ')' statement ELSE statement

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 86
	expression_id_dec  goto 39


state 55
	while_loop_statement : WHILE '(' . expression ')' statement

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 87
	expression_id_dec  goto 39


state 56
	for_loop_statement : FOR '(' . expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . type assignment_expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . type assignment_expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . type assignment_expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' ')' statement
	for_loop_statement : FOR '(' . ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' ';' ')' statement
	for_loop_statement : FOR '(' . type assignment_expression ';' ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' expression ')' statement

	'('  shift 24
	'-'  shift 25
	';'  shift 88
	VOID  shift 1
	INT  shift 2
	BOOL  shift 3
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 89
	expression_id_dec  goto 39
	type  goto 90


state 57
	io_statement : SCAN '(' . expression ')'

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 91
	expression_id_dec  goto 39


state 58
	io_statement : PRINT '(' . expression ')'

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 92
	expression_id_dec  goto 39


state 59
	expression : ID '(' . argument_list ')'
	expression : ID '(' . ')'

	'('  shift 24
	')'  shift 93
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 94
	expression_id_dec  goto 39
	argument_list  goto 95


state 60
	statement : assignment_expression ';' .  (22)

	.  reduce 22


state 61
	expression : expression '%' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 96
	expression_id_dec  goto 39


state 62
	expression : expression '*' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 97
	expression_id_dec  goto 39


state 63
	expression : expression '+' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 98
	expression_id_dec  goto 39


state 64
	expression : expression '-' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 99
	expression_id_dec  goto 39


state 65
	expression : expression '/' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 100
	expression_id_dec  goto 39


state 66
	expression : expression '<' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 101
	expression_id_dec  goto 39


state 67
	assignment_expression : expression '=' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 102
	expression_id_dec  goto 39


state 68
	expression : expression '>' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 103
	expression_id_dec  goto 39


state 69
	expression : expression '^' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 104
	expression_id_dec  goto 39


state 70
	expression : expression OR . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 105
	expression_id_dec  goto 39


state 71
	expression : expression AND . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 106
	expression_id_dec  goto 39


state 72
	expression : expression EQ . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 107
	expression_id_dec  goto 39


state 73
	expression : expression NE . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 108
	expression_id_dec  goto 39


state 74
	expression : expression LE . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 109
	expression_id_dec  goto 39


state 75
	expression : expression GE . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 110
	expression_id_dec  goto 39


state 76
	expression_id_dec : expression_id_dec '[' . expression ']'

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 111
	expression_id_dec  goto 39


state 77
	code_block : LBRACE statement_list RBRACE .  (19)

	.  reduce 19


state 78
	statement_list : statement_list statement .  (21)

	.  reduce 21


state 79
	var_definition : type var_declaration_list . ';'

	';'  shift 112


state 80
	var_declaration_list : var_declaration .  (47)
	var_declaration_list : var_declaration . ',' var_declaration_list

	','  shift 113
	.  reduce 47


state 81
	var_declarator : var_declarator . '[' NUMBER ']'
	var_declaration : var_declarator . '=' expression
	var_declaration : var_declarator .  (49)

	'='  shift 114
	'['  shift 19
	.  reduce 49


state 82
	statement : io_statement ';' .  (27)

	.  reduce 27


state 83
	var_declarator : var_declarator '[' NUMBER ']' .  (10)

	.  reduce 10


state 84
	param_list : param ',' param_list .  (14)

	.  reduce 14


state 85
	expression : '(' expression ')' .  (68)

	.  reduce 68


state 86
	assignment_expression : expression . '=' expression
	selection_statement : IF '(' expression . ')' statement
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	selection_statement : IF '(' expression . ')' statement ELSE statement
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 115
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 87
	while_loop_statement : WHILE '(' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 116
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 88
	for_loop_statement : FOR '(' ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . ';' ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' expression ')' statement

	'('  shift 24
	'-'  shift 25
	';'  shift 117
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 118
	expression_id_dec  goto 39


state 89
	for_loop_statement : FOR '(' expression . ';' expression ';' expression ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' expression . ';' ';' expression ')' statement
	for_loop_statement : FOR '(' expression . ';' ';' ')' statement
	expression : expression . '>' expression
	for_loop_statement : FOR '(' expression . ';' expression ';' ')' statement
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	';'  shift 119
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 90
	for_loop_statement : FOR '(' type . assignment_expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' type . assignment_expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' type . assignment_expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' type . assignment_expression ';' ';' ')' statement

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 120
	expression  goto 37
	expression_id_dec  goto 39


state 91
	io_statement : SCAN '(' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 121
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 92
	io_statement : PRINT '(' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 122
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 93
	expression : ID '(' ')' .  (69)

	.  reduce 69


state 94
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression
	argument_list : expression . ',' argument_list
	argument_list : expression .  (75)

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	','  shift 123
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75
	.  reduce 75


state 95
	expression : ID '(' argument_list . ')'

	')'  shift 124


96: shift-reduce conflict (shift 67, reduce 57) on '='
state 96
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression '%' expression .  (57)
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'='  shift 67
	'^'  shift 69
	.  reduce 57


97: shift-reduce conflict (shift 67, reduce 55) on '='
state 97
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression '*' expression .  (55)
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'='  shift 67
	'^'  shift 69
	.  reduce 55


98: shift-reduce conflict (shift 67, reduce 53) on '='
state 98
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression '+' expression .  (53)
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'/'  shift 65
	'='  shift 67
	'^'  shift 69
	.  reduce 53


99: shift-reduce conflict (shift 67, reduce 54) on '='
state 99
	assignment_expression : expression . '=' expression
	expression : expression '-' expression .  (54)
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'/'  shift 65
	'='  shift 67
	'^'  shift 69
	.  reduce 54


100: shift-reduce conflict (shift 67, reduce 56) on '='
state 100
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression '/' expression .  (56)
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'='  shift 67
	'^'  shift 69
	.  reduce 56


101: shift-reduce conflict (shift 67, reduce 58) on '='
state 101
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression '<' expression .  (58)
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'='  shift 67
	'^'  shift 69
	.  reduce 58


102: shift-reduce conflict (shift 61, reduce 51) on '%'
102: shift-reduce conflict (shift 62, reduce 51) on '*'
102: shift-reduce conflict (shift 63, reduce 51) on '+'
102: shift-reduce conflict (shift 64, reduce 51) on '-'
102: shift-reduce conflict (shift 65, reduce 51) on '/'
102: shift-reduce conflict (shift 66, reduce 51) on '<'
102: shift-reduce conflict (shift 67, reduce 51) on '='
102: shift-reduce conflict (shift 68, reduce 51) on '>'
102: shift-reduce conflict (shift 69, reduce 51) on '^'
102: shift-reduce conflict (shift 70, reduce 51) on OR
102: shift-reduce conflict (shift 71, reduce 51) on AND
102: shift-reduce conflict (shift 72, reduce 51) on EQ
102: shift-reduce conflict (shift 73, reduce 51) on NE
102: shift-reduce conflict (shift 74, reduce 51) on LE
102: shift-reduce conflict (shift 75, reduce 51) on GE
state 102
	assignment_expression : expression '=' expression .  (51)
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75
	.  reduce 51


103: shift-reduce conflict (shift 67, reduce 59) on '='
state 103
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression '>' expression .  (59)
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'='  shift 67
	'^'  shift 69
	.  reduce 59


104: shift-reduce conflict (shift 67, reduce 66) on '='
state 104
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression '^' expression .  (66)
	expression : expression . '^' expression

	'='  shift 67
	'^'  shift 69
	.  reduce 66


105: shift-reduce conflict (shift 67, reduce 65) on '='
state 105
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression OR expression .  (65)
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75
	.  reduce 65


106: shift-reduce conflict (shift 67, reduce 64) on '='
state 106
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression AND expression .  (64)
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75
	.  reduce 64


107: shift-reduce conflict (shift 67, reduce 60) on '='
state 107
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression EQ expression .  (60)
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	LE  shift 74
	GE  shift 75
	.  reduce 60


108: shift-reduce conflict (shift 67, reduce 63) on '='
state 108
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression NE expression .  (63)
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	LE  shift 74
	GE  shift 75
	.  reduce 63


109: shift-reduce conflict (shift 67, reduce 61) on '='
state 109
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression LE expression .  (61)
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'='  shift 67
	'^'  shift 69
	.  reduce 61


110: shift-reduce conflict (shift 67, reduce 62) on '='
state 110
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression GE expression .  (62)
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'='  shift 67
	'^'  shift 69
	.  reduce 62


state 111
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression
	expression_id_dec : expression_id_dec '[' expression . ']'

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	']'  shift 125
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 112
	var_definition : type var_declaration_list ';' .  (46)

	.  reduce 46


state 113
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 45

	var_declaration_list  goto 126
	var_declaration  goto 80
	var_declarator  goto 81


state 114
	var_declaration : var_declarator '=' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 127
	expression_id_dec  goto 39


state 115
	selection_statement : IF '(' expression ')' . statement
	selection_statement : IF '(' expression ')' . statement ELSE statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 128
	io_statement  goto 44


state 116
	while_loop_statement : WHILE '(' expression ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 129
	io_statement  goto 44


state 117
	for_loop_statement : FOR '(' ';' ';' . expression ')' statement
	for_loop_statement : FOR '(' ';' ';' . ')' statement

	'('  shift 24
	')'  shift 130
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 131
	expression_id_dec  goto 39


state 118
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	for_loop_statement : FOR '(' ';' expression . ';' ')' statement
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	for_loop_statement : FOR '(' ';' expression . ';' expression ')' statement
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	';'  shift 132
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 119
	for_loop_statement : FOR '(' expression ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' ')' statement
	for_loop_statement : FOR '(' expression ';' . expression ';' ')' statement

	'('  shift 24
	'-'  shift 25
	';'  shift 133
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 134
	expression_id_dec  goto 39


state 120
	for_loop_statement : FOR '(' type assignment_expression . ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' type assignment_expression . ';' expression ';' ')' statement
	for_loop_statement : FOR '(' type assignment_expression . ';' ';' expression ')' statement
	expression : assignment_expression .  (52)
	for_loop_statement : FOR '(' type assignment_expression . ';' ';' ')' statement

	';'  shift 135
	.  reduce 52


state 121
	io_statement : SCAN '(' expression ')' .  (29)

	.  reduce 29


state 122
	io_statement : PRINT '(' expression ')' .  (30)

	.  reduce 30


state 123
	argument_list : expression ',' . argument_list

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 94
	expression_id_dec  goto 39
	argument_list  goto 136


state 124
	expression : ID '(' argument_list ')' .  (70)

	.  reduce 70


state 125
	expression_id_dec : expression_id_dec '[' expression ']' .  (74)

	.  reduce 74


state 126
	var_declaration_list : var_declaration ',' var_declaration_list .  (48)

	.  reduce 48


state 127
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	var_declaration : var_declarator '=' expression .  (50)
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75
	.  reduce 50


128: shift-reduce conflict (shift 137, reduce 44) on ELSE
state 128
	selection_statement : IF '(' expression ')' statement .  (44)
	selection_statement : IF '(' expression ')' statement . ELSE statement

	ELSE  shift 137
	.  reduce 44


state 129
	while_loop_statement : WHILE '(' expression ')' statement .  (31)

	.  reduce 31


state 130
	for_loop_statement : FOR '(' ';' ';' ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 138
	io_statement  goto 44


state 131
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' ';' ';' expression . ')' statement
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 139
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 132
	for_loop_statement : FOR '(' ';' expression ';' . ')' statement
	for_loop_statement : FOR '(' ';' expression ';' . expression ')' statement

	'('  shift 24
	')'  shift 140
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 141
	expression_id_dec  goto 39


state 133
	for_loop_statement : FOR '(' expression ';' ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' ';' . ')' statement

	'('  shift 24
	')'  shift 142
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 143
	expression_id_dec  goto 39


state 134
	for_loop_statement : FOR '(' expression ';' expression . ';' expression ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	for_loop_statement : FOR '(' expression ';' expression . ';' ')' statement
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	';'  shift 144
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 135
	for_loop_statement : FOR '(' type assignment_expression ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' type assignment_expression ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' type assignment_expression ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' type assignment_expression ';' . ';' ')' statement

	'('  shift 24
	'-'  shift 25
	';'  shift 145
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 146
	expression_id_dec  goto 39


state 136
	argument_list : expression ',' argument_list .  (76)

	.  reduce 76


state 137
	selection_statement : IF '(' expression ')' statement ELSE . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 147
	io_statement  goto 44


state 138
	for_loop_statement : FOR '(' ';' ';' ')' statement .  (43)

	.  reduce 43


state 139
	for_loop_statement : FOR '(' ';' ';' expression ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 148
	io_statement  goto 44


state 140
	for_loop_statement : FOR '(' ';' expression ';' ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 149
	io_statement  goto 44


state 141
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	for_loop_statement : FOR '(' ';' expression ';' expression . ')' statement
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 150
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 142
	for_loop_statement : FOR '(' expression ';' ';' ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 151
	io_statement  goto 44


state 143
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' expression ';' ';' expression . ')' statement
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 152
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 144
	for_loop_statement : FOR '(' expression ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' expression ';' . ')' statement

	'('  shift 24
	')'  shift 153
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 154
	expression_id_dec  goto 39


state 145
	for_loop_statement : FOR '(' type assignment_expression ';' ';' . expression ')' statement
	for_loop_statement : FOR '(' type assignment_expression ';' ';' . ')' statement

	'('  shift 24
	')'  shift 155
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 156
	expression_id_dec  goto 39


state 146
	for_loop_statement : FOR '(' type assignment_expression ';' expression . ';' expression ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	for_loop_statement : FOR '(' type assignment_expression ';' expression . ';' ')' statement
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	';'  shift 157
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 147
	selection_statement : IF '(' expression ')' statement ELSE statement .  (45)

	.  reduce 45


state 148
	for_loop_statement : FOR '(' ';' ';' expression ')' statement .  (42)

	.  reduce 42


state 149
	for_loop_statement : FOR '(' ';' expression ';' ')' statement .  (41)

	.  reduce 41


state 150
	for_loop_statement : FOR '(' ';' expression ';' expression ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 158
	io_statement  goto 44


state 151
	for_loop_statement : FOR '(' expression ';' ';' ')' statement .  (39)

	.  reduce 39


state 152
	for_loop_statement : FOR '(' expression ';' ';' expression ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 159
	io_statement  goto 44


state 153
	for_loop_statement : FOR '(' expression ';' expression ';' ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 160
	io_statement  goto 44


state 154
	for_loop_statement : FOR '(' expression ';' expression ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 161
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 155
	for_loop_statement : FOR '(' type assignment_expression ';' ';' ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 162
	io_statement  goto 44


state 156
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' type assignment_expression ';' ';' expression . ')' statement
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 163
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 157
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' . ')' statement

	'('  shift 24
	')'  shift 164
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression  goto 165
	expression_id_dec  goto 39


state 158
	for_loop_statement : FOR '(' ';' expression ';' expression ')' statement .  (38)

	.  reduce 38


state 159
	for_loop_statement : FOR '(' expression ';' ';' expression ')' statement .  (36)

	.  reduce 36


state 160
	for_loop_statement : FOR '(' expression ';' expression ';' ')' statement .  (34)

	.  reduce 34


state 161
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 166
	io_statement  goto 44


state 162
	for_loop_statement : FOR '(' type assignment_expression ';' ';' ')' statement .  (40)

	.  reduce 40


state 163
	for_loop_statement : FOR '(' type assignment_expression ';' ';' expression ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 167
	io_statement  goto 44


state 164
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 168
	io_statement  goto 44


state 165
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '+' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . OR expression
	expression : expression . '>' expression
	expression : expression . '^' expression

	'%'  shift 61
	')'  shift 169
	'*'  shift 62
	'+'  shift 63
	'-'  shift 64
	'/'  shift 65
	'<'  shift 66
	'='  shift 67
	'>'  shift 68
	'^'  shift 69
	OR  shift 70
	AND  shift 71
	EQ  shift 72
	NE  shift 73
	LE  shift 74
	GE  shift 75


state 166
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement .  (32)

	.  reduce 32


state 167
	for_loop_statement : FOR '(' type assignment_expression ';' ';' expression ')' statement .  (37)

	.  reduce 37


state 168
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' ')' statement .  (35)

	.  reduce 35


state 169
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' expression ')' . statement

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	while_loop_statement  goto 33
	assignment_expression  goto 34
	var_definition  goto 35
	for_loop_statement  goto 36
	expression  goto 37
	selection_statement  goto 38
	expression_id_dec  goto 39
	type  goto 41
	code_block  goto 42
	statement  goto 170
	io_statement  goto 44


state 170
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' expression ')' statement .  (33)

	.  reduce 33


##############################################################################
# Summary
##############################################################################

State 53 contains 1 shift-reduce conflict(s)
State 96 contains 1 shift-reduce conflict(s)
State 97 contains 1 shift-reduce conflict(s)
State 98 contains 1 shift-reduce conflict(s)
State 99 contains 1 shift-reduce conflict(s)
State 100 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 102 contains 15 shift-reduce conflict(s)
State 103 contains 1 shift-reduce conflict(s)
State 104 contains 1 shift-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 106 contains 1 shift-reduce conflict(s)
State 107 contains 1 shift-reduce conflict(s)
State 108 contains 1 shift-reduce conflict(s)
State 109 contains 1 shift-reduce conflict(s)
State 110 contains 1 shift-reduce conflict(s)
State 128 contains 1 shift-reduce conflict(s)


37 token(s), 24 nonterminal(s)
77 grammar rule(s), 171 state(s)


##############################################################################
# End of File
##############################################################################
