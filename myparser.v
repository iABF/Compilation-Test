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
# Date: 12/23/19
# Time: 11:11:50
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
   27            | code_block
   28            | ID '(' ')' ';'
   29            | ID '(' argument_list ')' ';'

   30  while_loop_statement : WHILE '(' expression ')' statement

   31  for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement
   32                     | FOR '(' var_definition expression ';' expression ')' statement
   33                     | FOR '(' expression ';' expression ';' ')' statement
   34                     | FOR '(' var_definition expression ';' ')' statement
   35                     | FOR '(' expression ';' ';' expression ')' statement
   36                     | FOR '(' var_definition ';' expression ')' statement
   37                     | FOR '(' ';' expression ';' expression ')' statement
   38                     | FOR '(' expression ';' ';' ')' statement
   39                     | FOR '(' var_definition ';' ')' statement
   40                     | FOR '(' ';' expression ';' ')' statement
   41                     | FOR '(' ';' ';' expression ')' statement
   42                     | FOR '(' ';' ';' ')' statement

   43  selection_statement : IF '(' expression ')' statement
   44                      | IF '(' expression ')' statement ELSE statement

   45  var_definition : type var_declaration_list ';'

   46  var_declaration_list : var_declaration
   47                       | var_declaration ',' var_declaration_list

   48  var_declaration : var_declarator
   49                  | var_declarator '=' expression

   50  assignment_expression : expression '=' expression

   51  expression : assignment_expression
   52             | expression '+' expression
   53             | expression '-' expression
   54             | expression '*' expression
   55             | expression '/' expression
   56             | expression '%' expression
   57             | expression '<' expression
   58             | expression '>' expression
   59             | expression EQ expression
   60             | expression LE expression
   61             | expression GE expression
   62             | expression NE expression
   63             | expression AND expression
   64             | expression OR expression
   65             | expression '^' NUMBER
   66             | '-' expression
   67             | '(' expression ')'
   68             | ID '(' ')'
   69             | ID '(' argument_list ')'
   70             | NUMBER
   71             | expression_id_dec

   72  expression_id_dec : ID
   73                    | expression_id_dec '[' expression ']'

   74  argument_list : expression
   75                | expression ',' argument_list


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

	var_declarator  goto 10
	top_level_declarator_list  goto 11
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
	top_level_declarator_list : var_declarator .  (7)
	top_level_declarator_list : var_declarator . ',' top_level_declarator_list
	var_declarator : var_declarator . '[' NUMBER ']'

	','  shift 14
	'['  shift 15
	.  reduce 7


state 11
	top_level_definition : type top_level_declarator_list . ';'

	';'  shift 16


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

	type  goto 20
	param_list  goto 21
	param  goto 22


state 14
	top_level_declarator_list : var_declarator ',' . top_level_declarator_list

	ID  shift 23

	var_declarator  goto 10
	top_level_declarator_list  goto 24


state 15
	var_declarator : var_declarator '[' . NUMBER ']'

	NUMBER  shift 25


state 16
	top_level_definition : type top_level_declarator_list ';' .  (4)

	.  reduce 4


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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	statement_list  goto 38
	code_block  goto 39
	statement  goto 40
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 18
	top_level_definition : type function_declarator code_block .  (5)

	.  reduce 5


state 19
	function_declarator : ID '(' ')' .  (11)

	.  reduce 11


state 20
	param : type . var_declarator

	ID  shift 23

	var_declarator  goto 44


state 21
	function_declarator : ID '(' param_list . ')'

	')'  shift 45


state 22
	param_list : param .  (13)
	param_list : param . ',' param_list

	','  shift 46
	.  reduce 13


state 23
	var_declarator : ID .  (9)

	.  reduce 9


state 24
	top_level_declarator_list : var_declarator ',' top_level_declarator_list .  (8)

	.  reduce 8


state 25
	var_declarator : var_declarator '[' NUMBER . ']'

	']'  shift 47


state 26
	expression : '(' . expression ')'

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 49
	assignment_expression  goto 50


state 27
	expression : '-' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 51
	assignment_expression  goto 50


state 28
	selection_statement : IF . '(' expression ')' statement ELSE statement
	selection_statement : IF . '(' expression ')' statement

	'('  shift 52


state 29
	while_loop_statement : WHILE . '(' expression ')' statement

	'('  shift 53


state 30
	for_loop_statement : FOR . '(' expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' expression ')' statement
	for_loop_statement : FOR . '(' expression ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' ')' statement
	for_loop_statement : FOR . '(' var_definition ';' ')' statement
	for_loop_statement : FOR . '(' var_definition ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' ';' ')' statement
	for_loop_statement : FOR . '(' ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' ')' statement

	'('  shift 54


state 31
	statement : ID . '(' ')' ';'
	statement : ID . '(' argument_list ')' ';'
	expression : ID . '(' ')'
	expression : ID . '(' argument_list ')'
	expression_id_dec : ID .  (72)

	'('  shift 55
	.  reduce 72


state 32
	expression : NUMBER .  (70)

	.  reduce 70


state 33
	expression_id_dec : expression_id_dec . '[' expression ']'
	expression : expression_id_dec .  (71)

	'['  shift 56
	.  reduce 71


state 34
	statement : selection_statement .  (25)

	.  reduce 25


state 35
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 36
	statement : assignment_expression . ';'
	expression : assignment_expression .  (51)

	';'  shift 72
	.  reduce 51


state 37
	var_definition : type . var_declaration_list ';'

	ID  shift 23

	var_declarator  goto 73
	var_declaration  goto 74
	var_declaration_list  goto 75


state 38
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	RBRACE  shift 76
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 77
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 39
	statement : code_block .  (27)

	.  reduce 27


state 40
	statement_list : statement .  (20)

	.  reduce 20


state 41
	statement : while_loop_statement .  (23)

	.  reduce 23


state 42
	statement : for_loop_statement .  (24)

	.  reduce 24


state 43
	statement : var_definition .  (26)

	.  reduce 26


state 44
	var_declarator : var_declarator . '[' NUMBER ']'
	param : type var_declarator .  (15)

	'['  shift 15
	.  reduce 15


state 45
	function_declarator : ID '(' param_list ')' .  (12)

	.  reduce 12


state 46
	param_list : param ',' . param_list

	VOID  shift 3
	INT  shift 4
	BOOL  shift 5

	type  goto 20
	param_list  goto 78
	param  goto 22


state 47
	var_declarator : var_declarator '[' NUMBER ']' .  (10)

	.  reduce 10


state 48
	expression : ID . '(' ')'
	expression : ID . '(' argument_list ')'
	expression_id_dec : ID .  (72)

	'('  shift 79
	.  reduce 72


state 49
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression
	expression : '(' expression . ')'

	'%'  shift 57
	')'  shift 80
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 50
	expression : assignment_expression .  (51)

	.  reduce 51


51: shift-reduce conflict (shift 63, reduce 66) on '='
state 51
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression
	expression : '-' expression .  (66)

	'='  shift 63
	.  reduce 66


state 52
	selection_statement : IF '(' . expression ')' statement ELSE statement
	selection_statement : IF '(' . expression ')' statement

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 81
	assignment_expression  goto 50


state 53
	while_loop_statement : WHILE '(' . expression ')' statement

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 82
	assignment_expression  goto 50


state 54
	for_loop_statement : FOR '(' . expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' expression ')' statement
	for_loop_statement : FOR '(' . expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' ')' statement
	for_loop_statement : FOR '(' . var_definition ';' ')' statement
	for_loop_statement : FOR '(' . var_definition ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' ';' ')' statement
	for_loop_statement : FOR '(' . ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 83
	VOID  shift 3
	INT  shift 4
	BOOL  shift 5
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 84
	assignment_expression  goto 50
	type  goto 37
	var_definition  goto 85


state 55
	statement : ID '(' . ')' ';'
	statement : ID '(' . argument_list ')' ';'
	expression : ID '(' . ')'
	expression : ID '(' . argument_list ')'

	'('  shift 26
	')'  shift 86
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 87
	argument_list  goto 88
	assignment_expression  goto 50


state 56
	expression_id_dec : expression_id_dec '[' . expression ']'

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 89
	assignment_expression  goto 50


state 57
	expression : expression '%' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 90
	assignment_expression  goto 50


state 58
	expression : expression '*' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 91
	assignment_expression  goto 50


state 59
	expression : expression '+' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 92
	assignment_expression  goto 50


state 60
	expression : expression '-' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 93
	assignment_expression  goto 50


state 61
	expression : expression '/' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 94
	assignment_expression  goto 50


state 62
	expression : expression '<' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 95
	assignment_expression  goto 50


state 63
	assignment_expression : expression '=' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 96
	assignment_expression  goto 50


state 64
	expression : expression '>' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 97
	assignment_expression  goto 50


state 65
	expression : expression '^' . NUMBER

	NUMBER  shift 98


state 66
	expression : expression OR . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 99
	assignment_expression  goto 50


state 67
	expression : expression AND . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 100
	assignment_expression  goto 50


state 68
	expression : expression EQ . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 101
	assignment_expression  goto 50


state 69
	expression : expression NE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 102
	assignment_expression  goto 50


state 70
	expression : expression LE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 103
	assignment_expression  goto 50


state 71
	expression : expression GE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 104
	assignment_expression  goto 50


state 72
	statement : assignment_expression ';' .  (22)

	.  reduce 22


state 73
	var_declarator : var_declarator . '[' NUMBER ']'
	var_declaration : var_declarator .  (48)
	var_declaration : var_declarator . '=' expression

	'='  shift 105
	'['  shift 15
	.  reduce 48


state 74
	var_declaration_list : var_declaration .  (46)
	var_declaration_list : var_declaration . ',' var_declaration_list

	','  shift 106
	.  reduce 46


state 75
	var_definition : type var_declaration_list . ';'

	';'  shift 107


state 76
	code_block : LBRACE statement_list RBRACE .  (19)

	.  reduce 19


state 77
	statement_list : statement_list statement .  (21)

	.  reduce 21


state 78
	param_list : param ',' param_list .  (14)

	.  reduce 14


state 79
	expression : ID '(' . ')'
	expression : ID '(' . argument_list ')'

	'('  shift 26
	')'  shift 108
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 87
	argument_list  goto 109
	assignment_expression  goto 50


state 80
	expression : '(' expression ')' .  (67)

	.  reduce 67


state 81
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	selection_statement : IF '(' expression . ')' statement ELSE statement
	selection_statement : IF '(' expression . ')' statement
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	')'  shift 110
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 82
	while_loop_statement : WHILE '(' expression . ')' statement
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	')'  shift 111
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 83
	for_loop_statement : FOR '(' ';' . ';' ')' statement
	for_loop_statement : FOR '(' ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 112
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 113
	assignment_expression  goto 50


state 84
	for_loop_statement : FOR '(' expression . ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression . ';' expression ';' ')' statement
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	for_loop_statement : FOR '(' expression . ';' ';' expression ')' statement
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	for_loop_statement : FOR '(' expression . ';' ';' ')' statement
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	';'  shift 114
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 85
	for_loop_statement : FOR '(' var_definition . expression ';' expression ')' statement
	for_loop_statement : FOR '(' var_definition . expression ';' ')' statement
	for_loop_statement : FOR '(' var_definition . ';' ')' statement
	for_loop_statement : FOR '(' var_definition . ';' expression ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 115
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 116
	assignment_expression  goto 50


state 86
	statement : ID '(' ')' . ';'
	expression : ID '(' ')' .  (68)

	';'  shift 117
	.  reduce 68


state 87
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression
	argument_list : expression .  (74)
	argument_list : expression . ',' argument_list

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	','  shift 118
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71
	.  reduce 74


state 88
	statement : ID '(' argument_list . ')' ';'
	expression : ID '(' argument_list . ')'

	')'  shift 119


state 89
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression
	expression_id_dec : expression_id_dec '[' expression . ']'

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	']'  shift 120
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


90: shift-reduce conflict (shift 63, reduce 56) on '='
state 90
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression '%' expression .  (56)
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'='  shift 63
	'^'  shift 65
	.  reduce 56


91: shift-reduce conflict (shift 63, reduce 54) on '='
state 91
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression '*' expression .  (54)
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'='  shift 63
	'^'  shift 65
	.  reduce 54


92: shift-reduce conflict (shift 63, reduce 52) on '='
state 92
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression '+' expression .  (52)
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'/'  shift 61
	'='  shift 63
	'^'  shift 65
	.  reduce 52


93: shift-reduce conflict (shift 63, reduce 53) on '='
state 93
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression '-' expression .  (53)
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'/'  shift 61
	'='  shift 63
	'^'  shift 65
	.  reduce 53


94: shift-reduce conflict (shift 63, reduce 55) on '='
state 94
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression '/' expression .  (55)
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'='  shift 63
	'^'  shift 65
	.  reduce 55


95: shift-reduce conflict (shift 63, reduce 57) on '='
state 95
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression '<' expression .  (57)
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'='  shift 63
	'^'  shift 65
	.  reduce 57


96: shift-reduce conflict (shift 57, reduce 50) on '%'
96: shift-reduce conflict (shift 58, reduce 50) on '*'
96: shift-reduce conflict (shift 59, reduce 50) on '+'
96: shift-reduce conflict (shift 60, reduce 50) on '-'
96: shift-reduce conflict (shift 61, reduce 50) on '/'
96: shift-reduce conflict (shift 62, reduce 50) on '<'
96: shift-reduce conflict (shift 63, reduce 50) on '='
96: shift-reduce conflict (shift 64, reduce 50) on '>'
96: shift-reduce conflict (shift 65, reduce 50) on '^'
96: shift-reduce conflict (shift 66, reduce 50) on OR
96: shift-reduce conflict (shift 67, reduce 50) on AND
96: shift-reduce conflict (shift 68, reduce 50) on EQ
96: shift-reduce conflict (shift 69, reduce 50) on NE
96: shift-reduce conflict (shift 70, reduce 50) on LE
96: shift-reduce conflict (shift 71, reduce 50) on GE
state 96
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression '=' expression .  (50)
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71
	.  reduce 50


97: shift-reduce conflict (shift 63, reduce 58) on '='
state 97
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression '>' expression .  (58)
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'='  shift 63
	'^'  shift 65
	.  reduce 58


state 98
	expression : expression '^' NUMBER .  (65)

	.  reduce 65


99: shift-reduce conflict (shift 63, reduce 64) on '='
state 99
	expression : expression OR expression .  (64)
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71
	.  reduce 64


100: shift-reduce conflict (shift 63, reduce 63) on '='
state 100
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression AND expression .  (63)
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71
	.  reduce 63


101: shift-reduce conflict (shift 63, reduce 59) on '='
state 101
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression EQ expression .  (59)
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	LE  shift 70
	GE  shift 71
	.  reduce 59


102: shift-reduce conflict (shift 63, reduce 62) on '='
state 102
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression NE expression .  (62)
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	LE  shift 70
	GE  shift 71
	.  reduce 62


103: shift-reduce conflict (shift 63, reduce 60) on '='
state 103
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression LE expression .  (60)
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'='  shift 63
	'^'  shift 65
	.  reduce 60


104: shift-reduce conflict (shift 63, reduce 61) on '='
state 104
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression GE expression .  (61)
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'='  shift 63
	'^'  shift 65
	.  reduce 61


state 105
	var_declaration : var_declarator '=' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 121
	assignment_expression  goto 50


state 106
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 23

	var_declarator  goto 73
	var_declaration  goto 74
	var_declaration_list  goto 122


state 107
	var_definition : type var_declaration_list ';' .  (45)

	.  reduce 45


state 108
	expression : ID '(' ')' .  (68)

	.  reduce 68


state 109
	expression : ID '(' argument_list . ')'

	')'  shift 123


state 110
	selection_statement : IF '(' expression ')' . statement ELSE statement
	selection_statement : IF '(' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 124
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 111
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 125
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 112
	for_loop_statement : FOR '(' ';' ';' . ')' statement
	for_loop_statement : FOR '(' ';' ';' . expression ')' statement

	'('  shift 26
	')'  shift 126
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 127
	assignment_expression  goto 50


state 113
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	for_loop_statement : FOR '(' ';' expression . ';' expression ')' statement
	expression : expression . NE expression
	expression : expression . AND expression
	for_loop_statement : FOR '(' ';' expression . ';' ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	';'  shift 128
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 114
	for_loop_statement : FOR '(' expression ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 129
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 130
	assignment_expression  goto 50


state 115
	for_loop_statement : FOR '(' var_definition ';' . ')' statement
	for_loop_statement : FOR '(' var_definition ';' . expression ')' statement

	'('  shift 26
	')'  shift 131
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 132
	assignment_expression  goto 50


state 116
	for_loop_statement : FOR '(' var_definition expression . ';' expression ')' statement
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	for_loop_statement : FOR '(' var_definition expression . ';' ')' statement
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	';'  shift 133
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 117
	statement : ID '(' ')' ';' .  (28)

	.  reduce 28


state 118
	argument_list : expression ',' . argument_list

	'('  shift 26
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 87
	argument_list  goto 134
	assignment_expression  goto 50


state 119
	statement : ID '(' argument_list ')' . ';'
	expression : ID '(' argument_list ')' .  (69)

	';'  shift 135
	.  reduce 69


state 120
	expression_id_dec : expression_id_dec '[' expression ']' .  (73)

	.  reduce 73


state 121
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	var_declaration : var_declarator '=' expression .  (49)
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71
	.  reduce 49


state 122
	var_declaration_list : var_declaration ',' var_declaration_list .  (47)

	.  reduce 47


state 123
	expression : ID '(' argument_list ')' .  (69)

	.  reduce 69


124: shift-reduce conflict (shift 136, reduce 43) on ELSE
state 124
	selection_statement : IF '(' expression ')' statement . ELSE statement
	selection_statement : IF '(' expression ')' statement .  (43)

	ELSE  shift 136
	.  reduce 43


state 125
	while_loop_statement : WHILE '(' expression ')' statement .  (30)

	.  reduce 30


state 126
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 137
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 127
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	for_loop_statement : FOR '(' ';' ';' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	')'  shift 138
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 128
	for_loop_statement : FOR '(' ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' ';' expression ';' . ')' statement

	'('  shift 26
	')'  shift 139
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 140
	assignment_expression  goto 50


state 129
	for_loop_statement : FOR '(' expression ';' ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' ';' . ')' statement

	'('  shift 26
	')'  shift 141
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 142
	assignment_expression  goto 50


state 130
	for_loop_statement : FOR '(' expression ';' expression . ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' expression . ';' ')' statement
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	';'  shift 143
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 131
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 144
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 132
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	for_loop_statement : FOR '(' var_definition ';' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	')'  shift 145
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 133
	for_loop_statement : FOR '(' var_definition expression ';' . expression ')' statement
	for_loop_statement : FOR '(' var_definition expression ';' . ')' statement

	'('  shift 26
	')'  shift 146
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 147
	assignment_expression  goto 50


state 134
	argument_list : expression ',' argument_list .  (75)

	.  reduce 75


state 135
	statement : ID '(' argument_list ')' ';' .  (29)

	.  reduce 29


state 136
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 148
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 137
	for_loop_statement : FOR '(' ';' ';' ')' statement .  (42)

	.  reduce 42


state 138
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 149
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 139
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 150
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 140
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	for_loop_statement : FOR '(' ';' expression ';' expression . ')' statement
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	')'  shift 151
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 141
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 152
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 142
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	for_loop_statement : FOR '(' expression ';' ';' expression . ')' statement
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	')'  shift 153
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 143
	for_loop_statement : FOR '(' expression ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' expression ';' . ')' statement

	'('  shift 26
	')'  shift 154
	'-'  shift 27
	ID  shift 48
	NUMBER  shift 32

	expression_id_dec  goto 33
	expression  goto 155
	assignment_expression  goto 50


state 144
	for_loop_statement : FOR '(' var_definition ';' ')' statement .  (39)

	.  reduce 39


state 145
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 156
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 146
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 157
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 147
	for_loop_statement : FOR '(' var_definition expression ';' expression . ')' statement
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	')'  shift 158
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 148
	selection_statement : IF '(' expression ')' statement ELSE statement .  (44)

	.  reduce 44


state 149
	for_loop_statement : FOR '(' ';' ';' expression ')' statement .  (41)

	.  reduce 41


state 150
	for_loop_statement : FOR '(' ';' expression ';' ')' statement .  (40)

	.  reduce 40


state 151
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 159
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 152
	for_loop_statement : FOR '(' expression ';' ';' ')' statement .  (38)

	.  reduce 38


state 153
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 160
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 154
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 161
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 155
	for_loop_statement : FOR '(' expression ';' expression ';' expression . ')' statement
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : expression . '%' expression
	expression : expression . '*' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . LE expression
	expression : expression . '/' expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	assignment_expression : expression . '=' expression
	expression : expression . EQ expression

	'%'  shift 57
	')'  shift 162
	'*'  shift 58
	'+'  shift 59
	'-'  shift 60
	'/'  shift 61
	'<'  shift 62
	'='  shift 63
	'>'  shift 64
	'^'  shift 65
	OR  shift 66
	AND  shift 67
	EQ  shift 68
	NE  shift 69
	LE  shift 70
	GE  shift 71


state 156
	for_loop_statement : FOR '(' var_definition ';' expression ')' statement .  (36)

	.  reduce 36


state 157
	for_loop_statement : FOR '(' var_definition expression ';' ')' statement .  (34)

	.  reduce 34


state 158
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 163
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 159
	for_loop_statement : FOR '(' ';' expression ';' expression ')' statement .  (37)

	.  reduce 37


state 160
	for_loop_statement : FOR '(' expression ';' ';' expression ')' statement .  (35)

	.  reduce 35


state 161
	for_loop_statement : FOR '(' expression ';' expression ';' ')' statement .  (33)

	.  reduce 33


state 162
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
	ID  shift 31
	NUMBER  shift 32

	expression_id_dec  goto 33
	selection_statement  goto 34
	expression  goto 35
	assignment_expression  goto 36
	type  goto 37
	code_block  goto 39
	statement  goto 164
	while_loop_statement  goto 41
	for_loop_statement  goto 42
	var_definition  goto 43


state 163
	for_loop_statement : FOR '(' var_definition expression ';' expression ')' statement .  (32)

	.  reduce 32


state 164
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement .  (31)

	.  reduce 31


##############################################################################
# Summary
##############################################################################

State 51 contains 1 shift-reduce conflict(s)
State 90 contains 1 shift-reduce conflict(s)
State 91 contains 1 shift-reduce conflict(s)
State 92 contains 1 shift-reduce conflict(s)
State 93 contains 1 shift-reduce conflict(s)
State 94 contains 1 shift-reduce conflict(s)
State 95 contains 1 shift-reduce conflict(s)
State 96 contains 15 shift-reduce conflict(s)
State 97 contains 1 shift-reduce conflict(s)
State 99 contains 1 shift-reduce conflict(s)
State 100 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 102 contains 1 shift-reduce conflict(s)
State 103 contains 1 shift-reduce conflict(s)
State 104 contains 1 shift-reduce conflict(s)
State 124 contains 1 shift-reduce conflict(s)


35 token(s), 23 nonterminal(s)
76 grammar rule(s), 165 state(s)


##############################################################################
# End of File
##############################################################################
