#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 98 of your 30 day trial period.
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
# Time: 22:48:29
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : prog $end

    1  prog : top_level_definition_list

    2  top_level_definition_list : top_level_definition_list top_level_definition
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
   29            | ID '(' ')' ';'
   30            | ID '(' argument_list ')' ';'

   31  io_statement : SCAN '(' expression ')'
   32               | PRINT '(' expression ')'

   33  while_loop_statement : WHILE '(' expression ')' statement

   34  for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement
   35                     | FOR '(' var_definition expression ';' expression ')' statement
   36                     | FOR '(' expression ';' expression ';' ')' statement
   37                     | FOR '(' var_definition expression ';' ')' statement
   38                     | FOR '(' expression ';' ';' expression ')' statement
   39                     | FOR '(' var_definition ';' expression ')' statement
   40                     | FOR '(' ';' expression ';' expression ')' statement
   41                     | FOR '(' expression ';' ';' ')' statement
   42                     | FOR '(' var_definition ';' ')' statement
   43                     | FOR '(' ';' expression ';' ')' statement
   44                     | FOR '(' ';' ';' expression ')' statement
   45                     | FOR '(' ';' ';' ')' statement

   46  selection_statement : IF '(' expression ')' statement
   47                      | IF '(' expression ')' statement ELSE statement

   48  var_definition : type var_declaration_list ';'

   49  var_declaration_list : var_declaration
   50                       | var_declaration ',' var_declaration_list

   51  var_declaration : var_declarator
   52                  | var_declarator '=' expression

   53  assignment_expression : expression '=' expression

   54  expression : assignment_expression
   55             | expression '+' expression
   56             | expression '-' expression
   57             | expression '*' expression
   58             | expression '/' expression
   59             | expression '%' expression
   60             | expression '<' expression
   61             | expression '>' expression
   62             | expression EQ expression
   63             | expression LE expression
   64             | expression GE expression
   65             | expression NE expression
   66             | expression AND expression
   67             | expression OR expression
   68             | expression '^' expression
   69             | '-' expression
   70             | '(' expression ')'
   71             | ID '(' ')'
   72             | ID '(' argument_list ')'
   73             | NUMBER
   74             | expression_id_dec

   75  expression_id_dec : ID
   76                    | expression_id_dec '[' expression ']'

   77  argument_list : expression
   78                | expression ',' argument_list


##############################################################################
# States
##############################################################################

state 0
	$accept : . prog $end
	top_level_definition_list : .  (3)

	.  reduce 3

	top_level_definition_list  goto 1
	prog  goto 2


state 1
	prog : top_level_definition_list .  (1)
	top_level_definition_list : top_level_definition_list . top_level_definition

	VOID  shift 3
	INT  shift 4
	BOOL  shift 5
	.  reduce 1

	top_level_definition  goto 6
	type  goto 7


state 2
	$accept : prog . $end  (0)

	$end  accept


state 3
	type : VOID .  (18)

	.  reduce 18


state 4
	type : INT .  (17)

	.  reduce 17


state 5
	type : BOOL .  (16)

	.  reduce 16


state 6
	top_level_definition_list : top_level_definition_list top_level_definition .  (2)

	.  reduce 2


state 7
	top_level_definition : type . top_level_declarator_list ';'
	top_level_definition : type . function_declarator code_block
	top_level_definition : type . ';'

	';'  shift 8
	ID  shift 9

	top_level_declarator_list  goto 10
	var_declarator  goto 11
	function_declarator  goto 12


state 8
	top_level_definition : type ';' .  (6)

	.  reduce 6


state 9
	var_declarator : ID .  (9)
	function_declarator : ID . '(' ')'
	function_declarator : ID . '(' param_list ')'

	'('  shift 13
	.  reduce 9


state 10
	top_level_definition : type top_level_declarator_list . ';'

	';'  shift 14


state 11
	top_level_declarator_list : var_declarator .  (7)
	top_level_declarator_list : var_declarator . ',' top_level_declarator_list
	var_declarator : var_declarator . '[' NUMBER ']'

	','  shift 15
	'['  shift 16
	.  reduce 7


state 12
	top_level_definition : type function_declarator . code_block

	LBRACE  shift 17

	code_block  goto 18


state 13
	function_declarator : ID '(' . ')'
	function_declarator : ID '(' . param_list ')'

	')'  shift 19
	VOID  shift 3
	INT  shift 4
	BOOL  shift 5

	param  goto 20
	type  goto 21
	param_list  goto 22


state 14
	top_level_definition : type top_level_declarator_list ';' .  (4)

	.  reduce 4


state 15
	top_level_declarator_list : var_declarator ',' . top_level_declarator_list

	ID  shift 23

	top_level_declarator_list  goto 24
	var_declarator  goto 11


state 16
	var_declarator : var_declarator '[' . NUMBER ']'

	NUMBER  shift 25


state 17
	code_block : LBRACE . statement_list RBRACE

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	statement_list  goto 39
	var_definition  goto 40
	statement  goto 41
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 18
	top_level_definition : type function_declarator code_block .  (5)

	.  reduce 5


state 19
	function_declarator : ID '(' ')' .  (11)

	.  reduce 11


state 20
	param_list : param .  (13)
	param_list : param . ',' param_list

	','  shift 47
	.  reduce 13


state 21
	param : type . var_declarator

	ID  shift 23

	var_declarator  goto 48


state 22
	function_declarator : ID '(' param_list . ')'

	')'  shift 49


state 23
	var_declarator : ID .  (9)

	.  reduce 9


state 24
	top_level_declarator_list : var_declarator ',' top_level_declarator_list .  (8)

	.  reduce 8


state 25
	var_declarator : var_declarator '[' NUMBER . ']'

	']'  shift 50


state 26
	expression : '(' . expression ')'

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 53
	expression_id_dec  goto 46


state 27
	expression : '-' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 54
	expression_id_dec  goto 46


state 28
	selection_statement : IF . '(' expression ')' statement
	selection_statement : IF . '(' expression ')' statement ELSE statement

	'('  shift 55


state 29
	while_loop_statement : WHILE . '(' expression ')' statement

	'('  shift 56


state 30
	for_loop_statement : FOR . '(' expression ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' ')' statement
	for_loop_statement : FOR . '(' ';' ';' ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' ')' statement

	'('  shift 57


state 31
	io_statement : SCAN . '(' expression ')'

	'('  shift 58


state 32
	io_statement : PRINT . '(' expression ')'

	'('  shift 59


state 33
	statement : ID . '(' ')' ';'
	statement : ID . '(' argument_list ')' ';'
	expression : ID . '(' argument_list ')'
	expression_id_dec : ID .  (75)
	expression : ID . '(' ')'

	'('  shift 60
	.  reduce 75


state 34
	expression : NUMBER .  (73)

	.  reduce 73


state 35
	var_definition : type . var_declaration_list ';'

	ID  shift 23

	var_declarator  goto 61
	var_declaration  goto 62
	var_declaration_list  goto 63


state 36
	statement : code_block .  (28)

	.  reduce 28


state 37
	statement : io_statement . ';'

	';'  shift 64


state 38
	statement : while_loop_statement .  (23)

	.  reduce 23


state 39
	code_block : LBRACE statement_list . RBRACE
	statement_list : statement_list . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	RBRACE  shift 65
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 66
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 40
	statement : var_definition .  (26)

	.  reduce 26


state 41
	statement_list : statement .  (20)

	.  reduce 20


state 42
	statement : for_loop_statement .  (24)

	.  reduce 24


state 43
	statement : assignment_expression . ';'
	expression : assignment_expression .  (54)

	';'  shift 67
	.  reduce 54


state 44
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 45
	statement : selection_statement .  (25)

	.  reduce 25


state 46
	expression_id_dec : expression_id_dec . '[' expression ']'
	expression : expression_id_dec .  (74)

	'['  shift 83
	.  reduce 74


state 47
	param_list : param ',' . param_list

	VOID  shift 3
	INT  shift 4
	BOOL  shift 5

	param  goto 20
	type  goto 21
	param_list  goto 84


state 48
	var_declarator : var_declarator . '[' NUMBER ']'
	param : type var_declarator .  (15)

	'['  shift 16
	.  reduce 15


state 49
	function_declarator : ID '(' param_list ')' .  (12)

	.  reduce 12


state 50
	var_declarator : var_declarator '[' NUMBER ']' .  (10)

	.  reduce 10


state 51
	expression : ID . '(' argument_list ')'
	expression_id_dec : ID .  (75)
	expression : ID . '(' ')'

	'('  shift 85
	.  reduce 75


state 52
	expression : assignment_expression .  (54)

	.  reduce 54


state 53
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression
	expression : '(' expression . ')'

	'%'  shift 68
	')'  shift 86
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


54: shift-reduce conflict (shift 74, reduce 69) on '='
state 54
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression
	expression : '-' expression .  (69)

	'='  shift 74
	.  reduce 69


state 55
	selection_statement : IF '(' . expression ')' statement
	selection_statement : IF '(' . expression ')' statement ELSE statement

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 87
	expression_id_dec  goto 46


state 56
	while_loop_statement : WHILE '(' . expression ')' statement

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 88
	expression_id_dec  goto 46


state 57
	for_loop_statement : FOR '(' . expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' ')' statement
	for_loop_statement : FOR '(' . ';' ';' ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 89
	VOID  shift 3
	INT  shift 4
	BOOL  shift 5
	ID  shift 51
	NUMBER  shift 34

	type  goto 35
	var_definition  goto 90
	assignment_expression  goto 52
	expression  goto 91
	expression_id_dec  goto 46


state 58
	io_statement : SCAN '(' . expression ')'

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 92
	expression_id_dec  goto 46


state 59
	io_statement : PRINT '(' . expression ')'

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 93
	expression_id_dec  goto 46


state 60
	statement : ID '(' . ')' ';'
	statement : ID '(' . argument_list ')' ';'
	expression : ID '(' . argument_list ')'
	expression : ID '(' . ')'

	'('  shift 26
	')'  shift 94
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 95
	expression_id_dec  goto 46
	argument_list  goto 96


state 61
	var_declarator : var_declarator . '[' NUMBER ']'
	var_declaration : var_declarator .  (51)
	var_declaration : var_declarator . '=' expression

	'='  shift 97
	'['  shift 16
	.  reduce 51


state 62
	var_declaration_list : var_declaration . ',' var_declaration_list
	var_declaration_list : var_declaration .  (49)

	','  shift 98
	.  reduce 49


state 63
	var_definition : type var_declaration_list . ';'

	';'  shift 99


state 64
	statement : io_statement ';' .  (27)

	.  reduce 27


state 65
	code_block : LBRACE statement_list RBRACE .  (19)

	.  reduce 19


state 66
	statement_list : statement_list statement .  (21)

	.  reduce 21


state 67
	statement : assignment_expression ';' .  (22)

	.  reduce 22


state 68
	expression : expression '%' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 100
	expression_id_dec  goto 46


state 69
	expression : expression '*' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 101
	expression_id_dec  goto 46


state 70
	expression : expression '+' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 102
	expression_id_dec  goto 46


state 71
	expression : expression '-' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 103
	expression_id_dec  goto 46


state 72
	expression : expression '/' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 104
	expression_id_dec  goto 46


state 73
	expression : expression '<' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 105
	expression_id_dec  goto 46


state 74
	assignment_expression : expression '=' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 106
	expression_id_dec  goto 46


state 75
	expression : expression '>' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 107
	expression_id_dec  goto 46


state 76
	expression : expression '^' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 108
	expression_id_dec  goto 46


state 77
	expression : expression OR . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 109
	expression_id_dec  goto 46


state 78
	expression : expression AND . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 110
	expression_id_dec  goto 46


state 79
	expression : expression EQ . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 111
	expression_id_dec  goto 46


state 80
	expression : expression NE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 112
	expression_id_dec  goto 46


state 81
	expression : expression LE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 113
	expression_id_dec  goto 46


state 82
	expression : expression GE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 114
	expression_id_dec  goto 46


state 83
	expression_id_dec : expression_id_dec '[' . expression ']'

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 115
	expression_id_dec  goto 46


state 84
	param_list : param ',' param_list .  (14)

	.  reduce 14


state 85
	expression : ID '(' . argument_list ')'
	expression : ID '(' . ')'

	'('  shift 26
	')'  shift 116
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 95
	expression_id_dec  goto 46
	argument_list  goto 117


state 86
	expression : '(' expression ')' .  (70)

	.  reduce 70


state 87
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	selection_statement : IF '(' expression . ')' statement
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	selection_statement : IF '(' expression . ')' statement ELSE statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 118
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 88
	while_loop_statement : WHILE '(' expression . ')' statement
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 119
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 89
	for_loop_statement : FOR '(' ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' ';' . ';' ')' statement
	for_loop_statement : FOR '(' ';' . ';' expression ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 120
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 121
	expression_id_dec  goto 46


state 90
	for_loop_statement : FOR '(' var_definition . expression ';' ')' statement
	for_loop_statement : FOR '(' var_definition . expression ';' expression ')' statement
	for_loop_statement : FOR '(' var_definition . ';' expression ')' statement
	for_loop_statement : FOR '(' var_definition . ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 122
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 123
	expression_id_dec  goto 46


state 91
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	for_loop_statement : FOR '(' expression . ';' expression ';' ')' statement
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	for_loop_statement : FOR '(' expression . ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression . ';' ';' expression ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	for_loop_statement : FOR '(' expression . ';' ';' ')' statement
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	';'  shift 124
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 92
	io_statement : SCAN '(' expression . ')'
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 125
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 93
	io_statement : PRINT '(' expression . ')'
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 126
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 94
	statement : ID '(' ')' . ';'
	expression : ID '(' ')' .  (71)

	';'  shift 127
	.  reduce 71


state 95
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression
	argument_list : expression .  (77)
	argument_list : expression . ',' argument_list

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	','  shift 128
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82
	.  reduce 77


state 96
	statement : ID '(' argument_list . ')' ';'
	expression : ID '(' argument_list . ')'

	')'  shift 129


state 97
	var_declaration : var_declarator '=' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 130
	expression_id_dec  goto 46


state 98
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 23

	var_declarator  goto 61
	var_declaration  goto 62
	var_declaration_list  goto 131


state 99
	var_definition : type var_declaration_list ';' .  (48)

	.  reduce 48


100: shift-reduce conflict (shift 74, reduce 59) on '='
state 100
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression '%' expression .  (59)
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'='  shift 74
	'^'  shift 76
	.  reduce 59


101: shift-reduce conflict (shift 74, reduce 57) on '='
state 101
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression '*' expression .  (57)
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'='  shift 74
	'^'  shift 76
	.  reduce 57


102: shift-reduce conflict (shift 74, reduce 55) on '='
state 102
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression '+' expression .  (55)
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'/'  shift 72
	'='  shift 74
	'^'  shift 76
	.  reduce 55


103: shift-reduce conflict (shift 74, reduce 56) on '='
state 103
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression '-' expression .  (56)
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'/'  shift 72
	'='  shift 74
	'^'  shift 76
	.  reduce 56


104: shift-reduce conflict (shift 74, reduce 58) on '='
state 104
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression '/' expression .  (58)
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'='  shift 74
	'^'  shift 76
	.  reduce 58


105: shift-reduce conflict (shift 74, reduce 60) on '='
state 105
	expression : expression '<' expression .  (60)
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'='  shift 74
	'^'  shift 76
	.  reduce 60


106: shift-reduce conflict (shift 68, reduce 53) on '%'
106: shift-reduce conflict (shift 69, reduce 53) on '*'
106: shift-reduce conflict (shift 70, reduce 53) on '+'
106: shift-reduce conflict (shift 71, reduce 53) on '-'
106: shift-reduce conflict (shift 72, reduce 53) on '/'
106: shift-reduce conflict (shift 73, reduce 53) on '<'
106: shift-reduce conflict (shift 74, reduce 53) on '='
106: shift-reduce conflict (shift 75, reduce 53) on '>'
106: shift-reduce conflict (shift 76, reduce 53) on '^'
106: shift-reduce conflict (shift 77, reduce 53) on OR
106: shift-reduce conflict (shift 78, reduce 53) on AND
106: shift-reduce conflict (shift 79, reduce 53) on EQ
106: shift-reduce conflict (shift 80, reduce 53) on NE
106: shift-reduce conflict (shift 81, reduce 53) on LE
106: shift-reduce conflict (shift 82, reduce 53) on GE
state 106
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression '=' expression .  (53)
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82
	.  reduce 53


107: shift-reduce conflict (shift 74, reduce 61) on '='
state 107
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression '>' expression .  (61)
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'='  shift 74
	'^'  shift 76
	.  reduce 61


108: shift-reduce conflict (shift 74, reduce 68) on '='
state 108
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression '^' expression .  (68)
	expression : expression . '^' expression
	expression : expression . AND expression

	'='  shift 74
	'^'  shift 76
	.  reduce 68


109: shift-reduce conflict (shift 74, reduce 67) on '='
state 109
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression OR expression .  (67)
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82
	.  reduce 67


110: shift-reduce conflict (shift 74, reduce 66) on '='
state 110
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression AND expression .  (66)
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82
	.  reduce 66


111: shift-reduce conflict (shift 74, reduce 62) on '='
state 111
	expression : expression . '<' expression
	expression : expression EQ expression .  (62)
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	LE  shift 81
	GE  shift 82
	.  reduce 62


112: shift-reduce conflict (shift 74, reduce 65) on '='
state 112
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression NE expression .  (65)
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	LE  shift 81
	GE  shift 82
	.  reduce 65


113: shift-reduce conflict (shift 74, reduce 63) on '='
state 113
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression LE expression .  (63)
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'='  shift 74
	'^'  shift 76
	.  reduce 63


114: shift-reduce conflict (shift 74, reduce 64) on '='
state 114
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression GE expression .  (64)
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'='  shift 74
	'^'  shift 76
	.  reduce 64


state 115
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression
	expression_id_dec : expression_id_dec '[' expression . ']'

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	']'  shift 132
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 116
	expression : ID '(' ')' .  (71)

	.  reduce 71


state 117
	expression : ID '(' argument_list . ')'

	')'  shift 133


state 118
	selection_statement : IF '(' expression ')' . statement
	selection_statement : IF '(' expression ')' . statement ELSE statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 134
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 119
	while_loop_statement : WHILE '(' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 135
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 120
	for_loop_statement : FOR '(' ';' ';' . ')' statement
	for_loop_statement : FOR '(' ';' ';' . expression ')' statement

	'('  shift 26
	')'  shift 136
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 137
	expression_id_dec  goto 46


state 121
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	for_loop_statement : FOR '(' ';' expression . ';' expression ')' statement
	assignment_expression : expression . '=' expression
	for_loop_statement : FOR '(' ';' expression . ';' ')' statement
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	';'  shift 138
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 122
	for_loop_statement : FOR '(' var_definition ';' . expression ')' statement
	for_loop_statement : FOR '(' var_definition ';' . ')' statement

	'('  shift 26
	')'  shift 139
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 140
	expression_id_dec  goto 46


state 123
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	for_loop_statement : FOR '(' var_definition expression . ';' ')' statement
	expression : expression . '-' expression
	for_loop_statement : FOR '(' var_definition expression . ';' expression ')' statement
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	';'  shift 141
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 124
	for_loop_statement : FOR '(' expression ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' expression ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 142
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 143
	expression_id_dec  goto 46


state 125
	io_statement : SCAN '(' expression ')' .  (31)

	.  reduce 31


state 126
	io_statement : PRINT '(' expression ')' .  (32)

	.  reduce 32


state 127
	statement : ID '(' ')' ';' .  (29)

	.  reduce 29


state 128
	argument_list : expression ',' . argument_list

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 95
	expression_id_dec  goto 46
	argument_list  goto 144


state 129
	statement : ID '(' argument_list ')' . ';'
	expression : ID '(' argument_list ')' .  (72)

	';'  shift 145
	.  reduce 72


state 130
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	var_declaration : var_declarator '=' expression .  (52)
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82
	.  reduce 52


state 131
	var_declaration_list : var_declaration ',' var_declaration_list .  (50)

	.  reduce 50


state 132
	expression_id_dec : expression_id_dec '[' expression ']' .  (76)

	.  reduce 76


state 133
	expression : ID '(' argument_list ')' .  (72)

	.  reduce 72


134: shift-reduce conflict (shift 146, reduce 46) on ELSE
state 134
	selection_statement : IF '(' expression ')' statement .  (46)
	selection_statement : IF '(' expression ')' statement . ELSE statement

	ELSE  shift 146
	.  reduce 46


state 135
	while_loop_statement : WHILE '(' expression ')' statement .  (33)

	.  reduce 33


state 136
	for_loop_statement : FOR '(' ';' ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 147
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 137
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	for_loop_statement : FOR '(' ';' ';' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 148
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 138
	for_loop_statement : FOR '(' ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' ';' expression ';' . ')' statement

	'('  shift 26
	')'  shift 149
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 150
	expression_id_dec  goto 46


state 139
	for_loop_statement : FOR '(' var_definition ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 151
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 140
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	for_loop_statement : FOR '(' var_definition ';' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 152
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 141
	for_loop_statement : FOR '(' var_definition expression ';' . ')' statement
	for_loop_statement : FOR '(' var_definition expression ';' . expression ')' statement

	'('  shift 26
	')'  shift 153
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 154
	expression_id_dec  goto 46


state 142
	for_loop_statement : FOR '(' expression ';' ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' ';' . ')' statement

	'('  shift 26
	')'  shift 155
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 156
	expression_id_dec  goto 46


state 143
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	for_loop_statement : FOR '(' expression ';' expression . ';' ')' statement
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	for_loop_statement : FOR '(' expression ';' expression . ';' expression ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	';'  shift 157
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 144
	argument_list : expression ',' argument_list .  (78)

	.  reduce 78


state 145
	statement : ID '(' argument_list ')' ';' .  (30)

	.  reduce 30


state 146
	selection_statement : IF '(' expression ')' statement ELSE . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 158
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 147
	for_loop_statement : FOR '(' ';' ';' ')' statement .  (45)

	.  reduce 45


state 148
	for_loop_statement : FOR '(' ';' ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 159
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 149
	for_loop_statement : FOR '(' ';' expression ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 160
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 150
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	for_loop_statement : FOR '(' ';' expression ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 161
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 151
	for_loop_statement : FOR '(' var_definition ';' ')' statement .  (42)

	.  reduce 42


state 152
	for_loop_statement : FOR '(' var_definition ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 162
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 153
	for_loop_statement : FOR '(' var_definition expression ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 163
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 154
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	for_loop_statement : FOR '(' var_definition expression ';' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 164
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 155
	for_loop_statement : FOR '(' expression ';' ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 165
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 156
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	for_loop_statement : FOR '(' expression ';' ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 166
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 157
	for_loop_statement : FOR '(' expression ';' expression ';' . ')' statement
	for_loop_statement : FOR '(' expression ';' expression ';' . expression ')' statement

	'('  shift 26
	')'  shift 167
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression  goto 168
	expression_id_dec  goto 46


state 158
	selection_statement : IF '(' expression ')' statement ELSE statement .  (47)

	.  reduce 47


state 159
	for_loop_statement : FOR '(' ';' ';' expression ')' statement .  (44)

	.  reduce 44


state 160
	for_loop_statement : FOR '(' ';' expression ';' ')' statement .  (43)

	.  reduce 43


state 161
	for_loop_statement : FOR '(' ';' expression ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 169
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 162
	for_loop_statement : FOR '(' var_definition ';' expression ')' statement .  (39)

	.  reduce 39


state 163
	for_loop_statement : FOR '(' var_definition expression ';' ')' statement .  (37)

	.  reduce 37


state 164
	for_loop_statement : FOR '(' var_definition expression ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 170
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 165
	for_loop_statement : FOR '(' expression ';' ';' ')' statement .  (41)

	.  reduce 41


state 166
	for_loop_statement : FOR '(' expression ';' ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 171
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 167
	for_loop_statement : FOR '(' expression ';' expression ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 172
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 168
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . '/' expression
	for_loop_statement : FOR '(' expression ';' expression ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '*' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : expression . AND expression

	'%'  shift 68
	')'  shift 173
	'*'  shift 69
	'+'  shift 70
	'-'  shift 71
	'/'  shift 72
	'<'  shift 73
	'='  shift 74
	'>'  shift 75
	'^'  shift 76
	OR  shift 77
	AND  shift 78
	EQ  shift 79
	NE  shift 80
	LE  shift 81
	GE  shift 82


state 169
	for_loop_statement : FOR '(' ';' expression ';' expression ')' statement .  (40)

	.  reduce 40


state 170
	for_loop_statement : FOR '(' var_definition expression ';' expression ')' statement .  (35)

	.  reduce 35


state 171
	for_loop_statement : FOR '(' expression ';' ';' expression ')' statement .  (38)

	.  reduce 38


state 172
	for_loop_statement : FOR '(' expression ';' expression ';' ')' statement .  (36)

	.  reduce 36


state 173
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	type  goto 35
	code_block  goto 36
	io_statement  goto 37
	while_loop_statement  goto 38
	var_definition  goto 40
	statement  goto 174
	for_loop_statement  goto 42
	assignment_expression  goto 43
	expression  goto 44
	selection_statement  goto 45
	expression_id_dec  goto 46


state 174
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement .  (34)

	.  reduce 34


##############################################################################
# Summary
##############################################################################

State 54 contains 1 shift-reduce conflict(s)
State 100 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 102 contains 1 shift-reduce conflict(s)
State 103 contains 1 shift-reduce conflict(s)
State 104 contains 1 shift-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 106 contains 15 shift-reduce conflict(s)
State 107 contains 1 shift-reduce conflict(s)
State 108 contains 1 shift-reduce conflict(s)
State 109 contains 1 shift-reduce conflict(s)
State 110 contains 1 shift-reduce conflict(s)
State 111 contains 1 shift-reduce conflict(s)
State 112 contains 1 shift-reduce conflict(s)
State 113 contains 1 shift-reduce conflict(s)
State 114 contains 1 shift-reduce conflict(s)
State 134 contains 1 shift-reduce conflict(s)


37 token(s), 24 nonterminal(s)
79 grammar rule(s), 175 state(s)


##############################################################################
# End of File
##############################################################################
