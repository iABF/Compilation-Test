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
# Time: 16:52:07
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

   29  io_statement : SCAN '(' expression ')'
   30               | PRINT '(' expression ')'

   31  while_loop_statement : WHILE '(' expression ')' statement

   32  for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement
   33                     | FOR '(' var_definition expression ';' expression ')' statement
   34                     | FOR '(' expression ';' expression ';' ')' statement
   35                     | FOR '(' var_definition expression ';' ')' statement
   36                     | FOR '(' expression ';' ';' expression ')' statement
   37                     | FOR '(' var_definition ';' expression ')' statement
   38                     | FOR '(' ';' expression ';' expression ')' statement
   39                     | FOR '(' expression ';' ';' ')' statement
   40                     | FOR '(' var_definition ';' ')' statement
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

	.  reduce 3

	prog  goto 1
	top_level_definition_list  goto 2


state 1
	$accept : prog . $end  (0)

	$end  accept


state 2
	prog : top_level_definition_list .  (1)
	top_level_definition_list : top_level_definition_list . top_level_definition

	VOID  shift 3
	INT  shift 4
	BOOL  shift 5
	.  reduce 1

	top_level_definition  goto 6
	type  goto 7


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
	function_declarator  goto 11
	var_declarator  goto 12


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
	top_level_definition : type function_declarator . code_block

	LBRACE  shift 15

	code_block  goto 16


state 12
	top_level_declarator_list : var_declarator .  (7)
	top_level_declarator_list : var_declarator . ',' top_level_declarator_list
	var_declarator : var_declarator . '[' NUMBER ']'

	','  shift 17
	'['  shift 18
	.  reduce 7


state 13
	function_declarator : ID '(' . ')'
	function_declarator : ID '(' . param_list ')'

	')'  shift 19
	VOID  shift 3
	INT  shift 4
	BOOL  shift 5

	param_list  goto 20
	type  goto 21
	param  goto 22


state 14
	top_level_definition : type top_level_declarator_list ';' .  (4)

	.  reduce 4


state 15
	code_block : LBRACE . statement_list RBRACE

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 32
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	statement_list  goto 36
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 16
	top_level_definition : type function_declarator code_block .  (5)

	.  reduce 5


state 17
	top_level_declarator_list : var_declarator ',' . top_level_declarator_list

	ID  shift 44

	top_level_declarator_list  goto 45
	var_declarator  goto 12


state 18
	var_declarator : var_declarator '[' . NUMBER ']'

	NUMBER  shift 46


state 19
	function_declarator : ID '(' ')' .  (11)

	.  reduce 11


state 20
	function_declarator : ID '(' param_list . ')'

	')'  shift 47


state 21
	param : type . var_declarator

	ID  shift 44

	var_declarator  goto 48


state 22
	param_list : param .  (13)
	param_list : param . ',' param_list

	','  shift 49
	.  reduce 13


state 23
	expression : '(' . expression ')'

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 51
	expression_id_dec  goto 43


state 24
	expression : '-' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 52
	expression_id_dec  goto 43


state 25
	selection_statement : IF . '(' expression ')' statement
	selection_statement : IF . '(' expression ')' statement ELSE statement

	'('  shift 53


state 26
	while_loop_statement : WHILE . '(' expression ')' statement

	'('  shift 54


state 27
	for_loop_statement : FOR . '(' expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' ';' ')' statement
	for_loop_statement : FOR . '(' ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' expression ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' ')' statement

	'('  shift 55


state 28
	io_statement : SCAN . '(' expression ')'

	'('  shift 56


state 29
	io_statement : PRINT . '(' expression ')'

	'('  shift 57


state 30
	expression_id_dec : ID .  (73)
	expression : ID . '(' argument_list ')'
	expression : ID . '(' ')'

	'('  shift 58
	.  reduce 73


state 31
	expression : NUMBER .  (71)

	.  reduce 71


state 32
	statement_list : statement .  (20)

	.  reduce 20


state 33
	statement : while_loop_statement .  (23)

	.  reduce 23


state 34
	statement : for_loop_statement .  (24)

	.  reduce 24


state 35
	statement : assignment_expression . ';'
	expression : assignment_expression .  (52)

	';'  shift 59
	.  reduce 52


state 36
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	RBRACE  shift 60
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 61
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 37
	statement : io_statement . ';'

	';'  shift 62


state 38
	statement : code_block .  (28)

	.  reduce 28


state 39
	statement : var_definition .  (26)

	.  reduce 26


state 40
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 41
	var_definition : type . var_declaration_list ';'

	ID  shift 44

	var_declaration  goto 78
	var_declarator  goto 79
	var_declaration_list  goto 80


state 42
	statement : selection_statement .  (25)

	.  reduce 25


state 43
	expression_id_dec : expression_id_dec . '[' expression ']'
	expression : expression_id_dec .  (72)

	'['  shift 81
	.  reduce 72


state 44
	var_declarator : ID .  (9)

	.  reduce 9


state 45
	top_level_declarator_list : var_declarator ',' top_level_declarator_list .  (8)

	.  reduce 8


state 46
	var_declarator : var_declarator '[' NUMBER . ']'

	']'  shift 82


state 47
	function_declarator : ID '(' param_list ')' .  (12)

	.  reduce 12


state 48
	var_declarator : var_declarator . '[' NUMBER ']'
	param : type var_declarator .  (15)

	'['  shift 18
	.  reduce 15


state 49
	param_list : param ',' . param_list

	VOID  shift 3
	INT  shift 4
	BOOL  shift 5

	param_list  goto 83
	type  goto 21
	param  goto 22


state 50
	expression : assignment_expression .  (52)

	.  reduce 52


state 51
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : '(' expression . ')'

	'%'  shift 63
	')'  shift 84
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


52: shift-reduce conflict (shift 69, reduce 67) on '='
state 52
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression : '-' expression .  (67)

	'='  shift 69
	.  reduce 67


state 53
	selection_statement : IF '(' . expression ')' statement
	selection_statement : IF '(' . expression ')' statement ELSE statement

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 85
	expression_id_dec  goto 43


state 54
	while_loop_statement : WHILE '(' . expression ')' statement

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 86
	expression_id_dec  goto 43


state 55
	for_loop_statement : FOR '(' . expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' ';' ')' statement
	for_loop_statement : FOR '(' . ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' ')' statement

	'('  shift 23
	'-'  shift 24
	';'  shift 87
	VOID  shift 3
	INT  shift 4
	BOOL  shift 5
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	var_definition  goto 88
	expression  goto 89
	type  goto 41
	expression_id_dec  goto 43


state 56
	io_statement : SCAN '(' . expression ')'

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 90
	expression_id_dec  goto 43


state 57
	io_statement : PRINT '(' . expression ')'

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 91
	expression_id_dec  goto 43


state 58
	expression : ID '(' . argument_list ')'
	expression : ID '(' . ')'

	'('  shift 23
	')'  shift 92
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 93
	expression_id_dec  goto 43
	argument_list  goto 94


state 59
	statement : assignment_expression ';' .  (22)

	.  reduce 22


state 60
	code_block : LBRACE statement_list RBRACE .  (19)

	.  reduce 19


state 61
	statement_list : statement_list statement .  (21)

	.  reduce 21


state 62
	statement : io_statement ';' .  (27)

	.  reduce 27


state 63
	expression : expression '%' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 95
	expression_id_dec  goto 43


state 64
	expression : expression '*' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 96
	expression_id_dec  goto 43


state 65
	expression : expression '+' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 97
	expression_id_dec  goto 43


state 66
	expression : expression '-' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 98
	expression_id_dec  goto 43


state 67
	expression : expression '/' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 99
	expression_id_dec  goto 43


state 68
	expression : expression '<' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 100
	expression_id_dec  goto 43


state 69
	assignment_expression : expression '=' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 101
	expression_id_dec  goto 43


state 70
	expression : expression '>' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 102
	expression_id_dec  goto 43


state 71
	expression : expression '^' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 103
	expression_id_dec  goto 43


state 72
	expression : expression OR . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 104
	expression_id_dec  goto 43


state 73
	expression : expression AND . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 105
	expression_id_dec  goto 43


state 74
	expression : expression EQ . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 106
	expression_id_dec  goto 43


state 75
	expression : expression NE . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 107
	expression_id_dec  goto 43


state 76
	expression : expression LE . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 108
	expression_id_dec  goto 43


state 77
	expression : expression GE . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 109
	expression_id_dec  goto 43


state 78
	var_declaration_list : var_declaration .  (47)
	var_declaration_list : var_declaration . ',' var_declaration_list

	','  shift 110
	.  reduce 47


state 79
	var_declarator : var_declarator . '[' NUMBER ']'
	var_declaration : var_declarator . '=' expression
	var_declaration : var_declarator .  (49)

	'='  shift 111
	'['  shift 18
	.  reduce 49


state 80
	var_definition : type var_declaration_list . ';'

	';'  shift 112


state 81
	expression_id_dec : expression_id_dec '[' . expression ']'

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 113
	expression_id_dec  goto 43


state 82
	var_declarator : var_declarator '[' NUMBER ']' .  (10)

	.  reduce 10


state 83
	param_list : param ',' param_list .  (14)

	.  reduce 14


state 84
	expression : '(' expression ')' .  (68)

	.  reduce 68


state 85
	selection_statement : IF '(' expression . ')' statement
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	selection_statement : IF '(' expression . ')' statement ELSE statement
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 114
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 86
	while_loop_statement : WHILE '(' expression . ')' statement
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 115
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 87
	for_loop_statement : FOR '(' ';' . ';' ')' statement
	for_loop_statement : FOR '(' ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' ')' statement

	'('  shift 23
	'-'  shift 24
	';'  shift 116
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 117
	expression_id_dec  goto 43


state 88
	for_loop_statement : FOR '(' var_definition . expression ';' expression ')' statement
	for_loop_statement : FOR '(' var_definition . ';' expression ')' statement
	for_loop_statement : FOR '(' var_definition . ';' ')' statement
	for_loop_statement : FOR '(' var_definition . expression ';' ')' statement

	'('  shift 23
	'-'  shift 24
	';'  shift 118
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 119
	expression_id_dec  goto 43


state 89
	for_loop_statement : FOR '(' expression . ';' expression ';' expression ')' statement
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	for_loop_statement : FOR '(' expression . ';' ';' expression ')' statement
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	for_loop_statement : FOR '(' expression . ';' expression ';' ')' statement
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' expression . ';' ';' ')' statement
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	';'  shift 120
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 90
	io_statement : SCAN '(' expression . ')'
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 121
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 91
	io_statement : PRINT '(' expression . ')'
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 122
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 92
	expression : ID '(' ')' .  (69)

	.  reduce 69


state 93
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression
	argument_list : expression .  (75)
	argument_list : expression . ',' argument_list

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	','  shift 123
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77
	.  reduce 75


state 94
	expression : ID '(' argument_list . ')'

	')'  shift 124


95: shift-reduce conflict (shift 69, reduce 57) on '='
state 95
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression '%' expression .  (57)
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'='  shift 69
	'^'  shift 71
	.  reduce 57


96: shift-reduce conflict (shift 69, reduce 55) on '='
state 96
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression '*' expression .  (55)
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'='  shift 69
	'^'  shift 71
	.  reduce 55


97: shift-reduce conflict (shift 69, reduce 53) on '='
state 97
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression '+' expression .  (53)
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'/'  shift 67
	'='  shift 69
	'^'  shift 71
	.  reduce 53


98: shift-reduce conflict (shift 69, reduce 54) on '='
state 98
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression '-' expression .  (54)
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'/'  shift 67
	'='  shift 69
	'^'  shift 71
	.  reduce 54


99: shift-reduce conflict (shift 69, reduce 56) on '='
state 99
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression '/' expression .  (56)
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'='  shift 69
	'^'  shift 71
	.  reduce 56


100: shift-reduce conflict (shift 69, reduce 58) on '='
state 100
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression '<' expression .  (58)
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'='  shift 69
	'^'  shift 71
	.  reduce 58


101: shift-reduce conflict (shift 63, reduce 51) on '%'
101: shift-reduce conflict (shift 64, reduce 51) on '*'
101: shift-reduce conflict (shift 65, reduce 51) on '+'
101: shift-reduce conflict (shift 66, reduce 51) on '-'
101: shift-reduce conflict (shift 67, reduce 51) on '/'
101: shift-reduce conflict (shift 68, reduce 51) on '<'
101: shift-reduce conflict (shift 69, reduce 51) on '='
101: shift-reduce conflict (shift 70, reduce 51) on '>'
101: shift-reduce conflict (shift 71, reduce 51) on '^'
101: shift-reduce conflict (shift 72, reduce 51) on OR
101: shift-reduce conflict (shift 73, reduce 51) on AND
101: shift-reduce conflict (shift 74, reduce 51) on EQ
101: shift-reduce conflict (shift 75, reduce 51) on NE
101: shift-reduce conflict (shift 76, reduce 51) on LE
101: shift-reduce conflict (shift 77, reduce 51) on GE
state 101
	expression : expression . NE expression
	assignment_expression : expression '=' expression .  (51)
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77
	.  reduce 51


102: shift-reduce conflict (shift 69, reduce 59) on '='
state 102
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression '>' expression .  (59)
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'='  shift 69
	'^'  shift 71
	.  reduce 59


103: shift-reduce conflict (shift 69, reduce 66) on '='
state 103
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression '^' expression .  (66)
	expression : expression . '^' expression

	'='  shift 69
	'^'  shift 71
	.  reduce 66


104: shift-reduce conflict (shift 69, reduce 65) on '='
state 104
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression OR expression .  (65)
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77
	.  reduce 65


105: shift-reduce conflict (shift 69, reduce 64) on '='
state 105
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression AND expression .  (64)
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77
	.  reduce 64


106: shift-reduce conflict (shift 69, reduce 60) on '='
state 106
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression EQ expression .  (60)
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	LE  shift 76
	GE  shift 77
	.  reduce 60


107: shift-reduce conflict (shift 69, reduce 63) on '='
state 107
	expression : expression NE expression .  (63)
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	LE  shift 76
	GE  shift 77
	.  reduce 63


108: shift-reduce conflict (shift 69, reduce 61) on '='
state 108
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression LE expression .  (61)
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'='  shift 69
	'^'  shift 71
	.  reduce 61


109: shift-reduce conflict (shift 69, reduce 62) on '='
state 109
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression GE expression .  (62)
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'='  shift 69
	'^'  shift 71
	.  reduce 62


state 110
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 44

	var_declaration  goto 78
	var_declarator  goto 79
	var_declaration_list  goto 125


state 111
	var_declaration : var_declarator '=' . expression

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 126
	expression_id_dec  goto 43


state 112
	var_definition : type var_declaration_list ';' .  (46)

	.  reduce 46


state 113
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression
	expression_id_dec : expression_id_dec '[' expression . ']'

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	']'  shift 127
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 114
	selection_statement : IF '(' expression ')' . statement
	selection_statement : IF '(' expression ')' . statement ELSE statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 128
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 115
	while_loop_statement : WHILE '(' expression ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 129
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 116
	for_loop_statement : FOR '(' ';' ';' . ')' statement
	for_loop_statement : FOR '(' ';' ';' . expression ')' statement

	'('  shift 23
	')'  shift 130
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 131
	expression_id_dec  goto 43


state 117
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	for_loop_statement : FOR '(' ';' expression . ';' expression ')' statement
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' ';' expression . ';' ')' statement
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	';'  shift 132
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 118
	for_loop_statement : FOR '(' var_definition ';' . expression ')' statement
	for_loop_statement : FOR '(' var_definition ';' . ')' statement

	'('  shift 23
	')'  shift 133
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 134
	expression_id_dec  goto 43


state 119
	for_loop_statement : FOR '(' var_definition expression . ';' expression ')' statement
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' var_definition expression . ';' ')' statement
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	';'  shift 135
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 120
	for_loop_statement : FOR '(' expression ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' ')' statement

	'('  shift 23
	'-'  shift 24
	';'  shift 136
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 137
	expression_id_dec  goto 43


state 121
	io_statement : SCAN '(' expression ')' .  (29)

	.  reduce 29


state 122
	io_statement : PRINT '(' expression ')' .  (30)

	.  reduce 30


state 123
	argument_list : expression ',' . argument_list

	'('  shift 23
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 93
	expression_id_dec  goto 43
	argument_list  goto 138


state 124
	expression : ID '(' argument_list ')' .  (70)

	.  reduce 70


state 125
	var_declaration_list : var_declaration ',' var_declaration_list .  (48)

	.  reduce 48


state 126
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	var_declaration : var_declarator '=' expression .  (50)
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77
	.  reduce 50


state 127
	expression_id_dec : expression_id_dec '[' expression ']' .  (74)

	.  reduce 74


128: shift-reduce conflict (shift 139, reduce 44) on ELSE
state 128
	selection_statement : IF '(' expression ')' statement .  (44)
	selection_statement : IF '(' expression ')' statement . ELSE statement

	ELSE  shift 139
	.  reduce 44


state 129
	while_loop_statement : WHILE '(' expression ')' statement .  (31)

	.  reduce 31


state 130
	for_loop_statement : FOR '(' ';' ';' ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 140
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 131
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	for_loop_statement : FOR '(' ';' ';' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 141
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 132
	for_loop_statement : FOR '(' ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' ';' expression ';' . ')' statement

	'('  shift 23
	')'  shift 142
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 143
	expression_id_dec  goto 43


state 133
	for_loop_statement : FOR '(' var_definition ';' ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 144
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 134
	for_loop_statement : FOR '(' var_definition ';' expression . ')' statement
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 145
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 135
	for_loop_statement : FOR '(' var_definition expression ';' . expression ')' statement
	for_loop_statement : FOR '(' var_definition expression ';' . ')' statement

	'('  shift 23
	')'  shift 146
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 147
	expression_id_dec  goto 43


state 136
	for_loop_statement : FOR '(' expression ';' ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' ';' . ')' statement

	'('  shift 23
	')'  shift 148
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 149
	expression_id_dec  goto 43


state 137
	for_loop_statement : FOR '(' expression ';' expression . ';' expression ')' statement
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	for_loop_statement : FOR '(' expression ';' expression . ';' ')' statement
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	';'  shift 150
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 138
	argument_list : expression ',' argument_list .  (76)

	.  reduce 76


state 139
	selection_statement : IF '(' expression ')' statement ELSE . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 151
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 140
	for_loop_statement : FOR '(' ';' ';' ')' statement .  (43)

	.  reduce 43


state 141
	for_loop_statement : FOR '(' ';' ';' expression ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 152
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 142
	for_loop_statement : FOR '(' ';' expression ';' ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 153
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 143
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	for_loop_statement : FOR '(' ';' expression ';' expression . ')' statement
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 154
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 144
	for_loop_statement : FOR '(' var_definition ';' ')' statement .  (40)

	.  reduce 40


state 145
	for_loop_statement : FOR '(' var_definition ';' expression ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 155
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 146
	for_loop_statement : FOR '(' var_definition expression ';' ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 156
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 147
	for_loop_statement : FOR '(' var_definition expression ';' expression . ')' statement
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 157
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 148
	for_loop_statement : FOR '(' expression ';' ';' ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 158
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 149
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	for_loop_statement : FOR '(' expression ';' ';' expression . ')' statement
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 159
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 150
	for_loop_statement : FOR '(' expression ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' expression ';' . ')' statement

	'('  shift 23
	')'  shift 160
	'-'  shift 24
	ID  shift 30
	NUMBER  shift 31

	assignment_expression  goto 50
	expression  goto 161
	expression_id_dec  goto 43


state 151
	selection_statement : IF '(' expression ')' statement ELSE statement .  (45)

	.  reduce 45


state 152
	for_loop_statement : FOR '(' ';' ';' expression ')' statement .  (42)

	.  reduce 42


state 153
	for_loop_statement : FOR '(' ';' expression ';' ')' statement .  (41)

	.  reduce 41


state 154
	for_loop_statement : FOR '(' ';' expression ';' expression ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 162
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 155
	for_loop_statement : FOR '(' var_definition ';' expression ')' statement .  (37)

	.  reduce 37


state 156
	for_loop_statement : FOR '(' var_definition expression ';' ')' statement .  (35)

	.  reduce 35


state 157
	for_loop_statement : FOR '(' var_definition expression ';' expression ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 163
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 158
	for_loop_statement : FOR '(' expression ';' ';' ')' statement .  (39)

	.  reduce 39


state 159
	for_loop_statement : FOR '(' expression ';' ';' expression ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 164
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 160
	for_loop_statement : FOR '(' expression ';' expression ';' ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 165
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 161
	for_loop_statement : FOR '(' expression ';' expression ';' expression . ')' statement
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . GE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' expression

	'%'  shift 63
	')'  shift 166
	'*'  shift 64
	'+'  shift 65
	'-'  shift 66
	'/'  shift 67
	'<'  shift 68
	'='  shift 69
	'>'  shift 70
	'^'  shift 71
	OR  shift 72
	AND  shift 73
	EQ  shift 74
	NE  shift 75
	LE  shift 76
	GE  shift 77


state 162
	for_loop_statement : FOR '(' ';' expression ';' expression ')' statement .  (38)

	.  reduce 38


state 163
	for_loop_statement : FOR '(' var_definition expression ';' expression ')' statement .  (33)

	.  reduce 33


state 164
	for_loop_statement : FOR '(' expression ';' ';' expression ')' statement .  (36)

	.  reduce 36


state 165
	for_loop_statement : FOR '(' expression ';' expression ';' ')' statement .  (34)

	.  reduce 34


state 166
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' . statement

	'('  shift 23
	'-'  shift 24
	IF  shift 25
	VOID  shift 3
	LBRACE  shift 15
	INT  shift 4
	WHILE  shift 26
	FOR  shift 27
	BOOL  shift 5
	SCAN  shift 28
	PRINT  shift 29
	ID  shift 30
	NUMBER  shift 31

	statement  goto 167
	while_loop_statement  goto 33
	for_loop_statement  goto 34
	assignment_expression  goto 35
	io_statement  goto 37
	code_block  goto 38
	var_definition  goto 39
	expression  goto 40
	type  goto 41
	selection_statement  goto 42
	expression_id_dec  goto 43


state 167
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement .  (32)

	.  reduce 32


##############################################################################
# Summary
##############################################################################

State 52 contains 1 shift-reduce conflict(s)
State 95 contains 1 shift-reduce conflict(s)
State 96 contains 1 shift-reduce conflict(s)
State 97 contains 1 shift-reduce conflict(s)
State 98 contains 1 shift-reduce conflict(s)
State 99 contains 1 shift-reduce conflict(s)
State 100 contains 1 shift-reduce conflict(s)
State 101 contains 15 shift-reduce conflict(s)
State 102 contains 1 shift-reduce conflict(s)
State 103 contains 1 shift-reduce conflict(s)
State 104 contains 1 shift-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 106 contains 1 shift-reduce conflict(s)
State 107 contains 1 shift-reduce conflict(s)
State 108 contains 1 shift-reduce conflict(s)
State 109 contains 1 shift-reduce conflict(s)
State 128 contains 1 shift-reduce conflict(s)


37 token(s), 24 nonterminal(s)
77 grammar rule(s), 168 state(s)


##############################################################################
# End of File
##############################################################################
