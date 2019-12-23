#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 99 of your 30 day trial period.
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
# Time: 16:26:49
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
   30            | RETURN expression ';'

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
   66             | expression '^' NUMBER
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
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 39
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43
	statement_list  goto 44


state 18
	top_level_definition : type function_declarator code_block .  (5)

	.  reduce 5


state 19
	function_declarator : ID '(' ')' .  (11)

	.  reduce 11


state 20
	param_list : param .  (13)
	param_list : param . ',' param_list

	','  shift 45
	.  reduce 13


state 21
	param : type . var_declarator

	ID  shift 23

	var_declarator  goto 46


state 22
	function_declarator : ID '(' param_list . ')'

	')'  shift 47


state 23
	var_declarator : ID .  (9)

	.  reduce 9


state 24
	top_level_declarator_list : var_declarator ',' top_level_declarator_list .  (8)

	.  reduce 8


state 25
	var_declarator : var_declarator '[' NUMBER . ']'

	']'  shift 48


state 26
	expression : '(' . expression ')'

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 51
	expression_id_dec  goto 37


state 27
	expression : '-' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 52
	expression_id_dec  goto 37


state 28
	selection_statement : IF . '(' expression ')' statement ELSE statement
	selection_statement : IF . '(' expression ')' statement

	'('  shift 53


state 29
	while_loop_statement : WHILE . '(' expression ')' statement

	'('  shift 54


state 30
	for_loop_statement : FOR . '(' expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' expression ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' ';' ')' statement

	'('  shift 55


state 31
	statement : RETURN . expression ';'

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 56
	expression_id_dec  goto 37


state 32
	statement : ID . '(' argument_list ')' ';'
	statement : ID . '(' ')' ';'
	expression_id_dec : ID .  (73)
	expression : ID . '(' ')'
	expression : ID . '(' argument_list ')'

	'('  shift 57
	.  reduce 73


state 33
	expression : NUMBER .  (71)

	.  reduce 71


state 34
	statement : assignment_expression . ';'
	expression : assignment_expression .  (52)

	';'  shift 58
	.  reduce 52


state 35
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 36
	statement : selection_statement .  (25)

	.  reduce 25


state 37
	expression : expression_id_dec .  (72)
	expression_id_dec : expression_id_dec . '[' expression ']'

	'['  shift 74
	.  reduce 72


state 38
	statement : code_block .  (27)

	.  reduce 27


state 39
	statement_list : statement .  (20)

	.  reduce 20


state 40
	var_definition : type . var_declaration_list ';'

	ID  shift 23

	var_declarator  goto 75
	var_declaration  goto 76
	var_declaration_list  goto 77


state 41
	statement : var_definition .  (26)

	.  reduce 26


state 42
	statement : for_loop_statement .  (24)

	.  reduce 24


state 43
	statement : while_loop_statement .  (23)

	.  reduce 23


state 44
	code_block : LBRACE statement_list . RBRACE
	statement_list : statement_list . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	RBRACE  shift 78
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 79
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 45
	param_list : param ',' . param_list

	VOID  shift 3
	INT  shift 4
	BOOL  shift 5

	param  goto 20
	type  goto 21
	param_list  goto 80


state 46
	var_declarator : var_declarator . '[' NUMBER ']'
	param : type var_declarator .  (15)

	'['  shift 16
	.  reduce 15


state 47
	function_declarator : ID '(' param_list ')' .  (12)

	.  reduce 12


state 48
	var_declarator : var_declarator '[' NUMBER ']' .  (10)

	.  reduce 10


state 49
	expression_id_dec : ID .  (73)
	expression : ID . '(' ')'
	expression : ID . '(' argument_list ')'

	'('  shift 81
	.  reduce 73


state 50
	expression : assignment_expression .  (52)

	.  reduce 52


state 51
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : '(' expression . ')'
	expression : expression . '^' NUMBER

	'%'  shift 59
	')'  shift 82
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


52: shift-reduce conflict (shift 65, reduce 67) on '='
state 52
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER
	expression : '-' expression .  (67)

	'='  shift 65
	.  reduce 67


state 53
	selection_statement : IF '(' . expression ')' statement ELSE statement
	selection_statement : IF '(' . expression ')' statement

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 83
	expression_id_dec  goto 37


state 54
	while_loop_statement : WHILE '(' . expression ')' statement

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 84
	expression_id_dec  goto 37


state 55
	for_loop_statement : FOR '(' . expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' expression ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 85
	VOID  shift 3
	INT  shift 4
	BOOL  shift 5
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 86
	expression_id_dec  goto 37
	type  goto 40
	var_definition  goto 87


state 56
	statement : RETURN expression . ';'
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	';'  shift 88
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 57
	statement : ID '(' . argument_list ')' ';'
	statement : ID '(' . ')' ';'
	expression : ID '(' . ')'
	expression : ID '(' . argument_list ')'

	'('  shift 26
	')'  shift 89
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 90
	expression_id_dec  goto 37
	argument_list  goto 91


state 58
	statement : assignment_expression ';' .  (22)

	.  reduce 22


state 59
	expression : expression '%' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 92
	expression_id_dec  goto 37


state 60
	expression : expression '*' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 93
	expression_id_dec  goto 37


state 61
	expression : expression '+' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 94
	expression_id_dec  goto 37


state 62
	expression : expression '-' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 95
	expression_id_dec  goto 37


state 63
	expression : expression '/' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 96
	expression_id_dec  goto 37


state 64
	expression : expression '<' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 97
	expression_id_dec  goto 37


state 65
	assignment_expression : expression '=' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 98
	expression_id_dec  goto 37


state 66
	expression : expression '>' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 99
	expression_id_dec  goto 37


state 67
	expression : expression '^' . NUMBER

	NUMBER  shift 100


state 68
	expression : expression OR . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 101
	expression_id_dec  goto 37


state 69
	expression : expression AND . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 102
	expression_id_dec  goto 37


state 70
	expression : expression EQ . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 103
	expression_id_dec  goto 37


state 71
	expression : expression NE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 104
	expression_id_dec  goto 37


state 72
	expression : expression LE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 105
	expression_id_dec  goto 37


state 73
	expression : expression GE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 106
	expression_id_dec  goto 37


state 74
	expression_id_dec : expression_id_dec '[' . expression ']'

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 107
	expression_id_dec  goto 37


state 75
	var_declarator : var_declarator . '[' NUMBER ']'
	var_declaration : var_declarator .  (49)
	var_declaration : var_declarator . '=' expression

	'='  shift 108
	'['  shift 16
	.  reduce 49


state 76
	var_declaration_list : var_declaration .  (47)
	var_declaration_list : var_declaration . ',' var_declaration_list

	','  shift 109
	.  reduce 47


state 77
	var_definition : type var_declaration_list . ';'

	';'  shift 110


state 78
	code_block : LBRACE statement_list RBRACE .  (19)

	.  reduce 19


state 79
	statement_list : statement_list statement .  (21)

	.  reduce 21


state 80
	param_list : param ',' param_list .  (14)

	.  reduce 14


state 81
	expression : ID '(' . ')'
	expression : ID '(' . argument_list ')'

	'('  shift 26
	')'  shift 111
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 90
	expression_id_dec  goto 37
	argument_list  goto 112


state 82
	expression : '(' expression ')' .  (68)

	.  reduce 68


state 83
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	selection_statement : IF '(' expression . ')' statement ELSE statement
	selection_statement : IF '(' expression . ')' statement
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	')'  shift 113
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 84
	while_loop_statement : WHILE '(' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	')'  shift 114
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 85
	for_loop_statement : FOR '(' ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 115
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 116
	expression_id_dec  goto 37


state 86
	for_loop_statement : FOR '(' expression . ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression . ';' ';' ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' expression . ';' ';' expression ')' statement
	for_loop_statement : FOR '(' expression . ';' expression ';' ')' statement
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	';'  shift 117
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 87
	for_loop_statement : FOR '(' var_definition . expression ';' expression ')' statement
	for_loop_statement : FOR '(' var_definition . expression ';' ')' statement
	for_loop_statement : FOR '(' var_definition . ';' ')' statement
	for_loop_statement : FOR '(' var_definition . ';' expression ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 118
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 119
	expression_id_dec  goto 37


state 88
	statement : RETURN expression ';' .  (30)

	.  reduce 30


state 89
	statement : ID '(' ')' . ';'
	expression : ID '(' ')' .  (69)

	';'  shift 120
	.  reduce 69


state 90
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER
	argument_list : expression . ',' argument_list
	argument_list : expression .  (75)

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	','  shift 121
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73
	.  reduce 75


state 91
	statement : ID '(' argument_list . ')' ';'
	expression : ID '(' argument_list . ')'

	')'  shift 122


92: shift-reduce conflict (shift 65, reduce 57) on '='
state 92
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression '%' expression .  (57)
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'='  shift 65
	'^'  shift 67
	.  reduce 57


93: shift-reduce conflict (shift 65, reduce 55) on '='
state 93
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression '*' expression .  (55)
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'='  shift 65
	'^'  shift 67
	.  reduce 55


94: shift-reduce conflict (shift 65, reduce 53) on '='
state 94
	assignment_expression : expression . '=' expression
	expression : expression '+' expression .  (53)
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'/'  shift 63
	'='  shift 65
	'^'  shift 67
	.  reduce 53


95: shift-reduce conflict (shift 65, reduce 54) on '='
state 95
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression '-' expression .  (54)
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'/'  shift 63
	'='  shift 65
	'^'  shift 67
	.  reduce 54


96: shift-reduce conflict (shift 65, reduce 56) on '='
state 96
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression '/' expression .  (56)
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'='  shift 65
	'^'  shift 67
	.  reduce 56


97: shift-reduce conflict (shift 65, reduce 58) on '='
state 97
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression '<' expression .  (58)
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'='  shift 65
	'^'  shift 67
	.  reduce 58


98: shift-reduce conflict (shift 59, reduce 51) on '%'
98: shift-reduce conflict (shift 60, reduce 51) on '*'
98: shift-reduce conflict (shift 61, reduce 51) on '+'
98: shift-reduce conflict (shift 62, reduce 51) on '-'
98: shift-reduce conflict (shift 63, reduce 51) on '/'
98: shift-reduce conflict (shift 64, reduce 51) on '<'
98: shift-reduce conflict (shift 65, reduce 51) on '='
98: shift-reduce conflict (shift 66, reduce 51) on '>'
98: shift-reduce conflict (shift 67, reduce 51) on '^'
98: shift-reduce conflict (shift 68, reduce 51) on OR
98: shift-reduce conflict (shift 69, reduce 51) on AND
98: shift-reduce conflict (shift 70, reduce 51) on EQ
98: shift-reduce conflict (shift 71, reduce 51) on NE
98: shift-reduce conflict (shift 72, reduce 51) on LE
98: shift-reduce conflict (shift 73, reduce 51) on GE
state 98
	assignment_expression : expression '=' expression .  (51)
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73
	.  reduce 51


99: shift-reduce conflict (shift 65, reduce 59) on '='
state 99
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression '>' expression .  (59)
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'='  shift 65
	'^'  shift 67
	.  reduce 59


state 100
	expression : expression '^' NUMBER .  (66)

	.  reduce 66


101: shift-reduce conflict (shift 65, reduce 65) on '='
state 101
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression OR expression .  (65)
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73
	.  reduce 65


102: shift-reduce conflict (shift 65, reduce 64) on '='
state 102
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression AND expression .  (64)
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73
	.  reduce 64


103: shift-reduce conflict (shift 65, reduce 60) on '='
state 103
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression EQ expression .  (60)
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	LE  shift 72
	GE  shift 73
	.  reduce 60


104: shift-reduce conflict (shift 65, reduce 63) on '='
state 104
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression NE expression .  (63)
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	LE  shift 72
	GE  shift 73
	.  reduce 63


105: shift-reduce conflict (shift 65, reduce 61) on '='
state 105
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression LE expression .  (61)
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'='  shift 65
	'^'  shift 67
	.  reduce 61


106: shift-reduce conflict (shift 65, reduce 62) on '='
state 106
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression GE expression .  (62)
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'='  shift 65
	'^'  shift 67
	.  reduce 62


state 107
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER
	expression_id_dec : expression_id_dec '[' expression . ']'

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	']'  shift 123
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 108
	var_declaration : var_declarator '=' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 124
	expression_id_dec  goto 37


state 109
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 23

	var_declarator  goto 75
	var_declaration  goto 76
	var_declaration_list  goto 125


state 110
	var_definition : type var_declaration_list ';' .  (46)

	.  reduce 46


state 111
	expression : ID '(' ')' .  (69)

	.  reduce 69


state 112
	expression : ID '(' argument_list . ')'

	')'  shift 126


state 113
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
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 127
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 114
	while_loop_statement : WHILE '(' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 128
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 115
	for_loop_statement : FOR '(' ';' ';' . expression ')' statement
	for_loop_statement : FOR '(' ';' ';' . ')' statement

	'('  shift 26
	')'  shift 129
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 130
	expression_id_dec  goto 37


state 116
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	for_loop_statement : FOR '(' ';' expression . ';' expression ')' statement
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' ';' expression . ';' ')' statement
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	';'  shift 131
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 117
	for_loop_statement : FOR '(' expression ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . expression ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 132
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 133
	expression_id_dec  goto 37


state 118
	for_loop_statement : FOR '(' var_definition ';' . ')' statement
	for_loop_statement : FOR '(' var_definition ';' . expression ')' statement

	'('  shift 26
	')'  shift 134
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 135
	expression_id_dec  goto 37


state 119
	for_loop_statement : FOR '(' var_definition expression . ';' expression ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	for_loop_statement : FOR '(' var_definition expression . ';' ')' statement
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	';'  shift 136
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 120
	statement : ID '(' ')' ';' .  (28)

	.  reduce 28


state 121
	argument_list : expression ',' . argument_list

	'('  shift 26
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 90
	expression_id_dec  goto 37
	argument_list  goto 137


state 122
	statement : ID '(' argument_list ')' . ';'
	expression : ID '(' argument_list ')' .  (70)

	';'  shift 138
	.  reduce 70


state 123
	expression_id_dec : expression_id_dec '[' expression ']' .  (74)

	.  reduce 74


state 124
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	var_declaration : var_declarator '=' expression .  (50)
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73
	.  reduce 50


state 125
	var_declaration_list : var_declaration ',' var_declaration_list .  (48)

	.  reduce 48


state 126
	expression : ID '(' argument_list ')' .  (70)

	.  reduce 70


127: shift-reduce conflict (shift 139, reduce 44) on ELSE
state 127
	selection_statement : IF '(' expression ')' statement . ELSE statement
	selection_statement : IF '(' expression ')' statement .  (44)

	ELSE  shift 139
	.  reduce 44


state 128
	while_loop_statement : WHILE '(' expression ')' statement .  (31)

	.  reduce 31


state 129
	for_loop_statement : FOR '(' ';' ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 140
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 130
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' ';' ';' expression . ')' statement
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	')'  shift 141
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 131
	for_loop_statement : FOR '(' ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' ';' expression ';' . ')' statement

	'('  shift 26
	')'  shift 142
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 143
	expression_id_dec  goto 37


state 132
	for_loop_statement : FOR '(' expression ';' ';' . ')' statement
	for_loop_statement : FOR '(' expression ';' ';' . expression ')' statement

	'('  shift 26
	')'  shift 144
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 145
	expression_id_dec  goto 37


state 133
	for_loop_statement : FOR '(' expression ';' expression . ';' expression ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' expression ';' expression . ';' ')' statement
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	';'  shift 146
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 134
	for_loop_statement : FOR '(' var_definition ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 147
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 135
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	for_loop_statement : FOR '(' var_definition ';' expression . ')' statement
	expression : expression . '^' NUMBER

	'%'  shift 59
	')'  shift 148
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 136
	for_loop_statement : FOR '(' var_definition expression ';' . expression ')' statement
	for_loop_statement : FOR '(' var_definition expression ';' . ')' statement

	'('  shift 26
	')'  shift 149
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 150
	expression_id_dec  goto 37


state 137
	argument_list : expression ',' argument_list .  (76)

	.  reduce 76


state 138
	statement : ID '(' argument_list ')' ';' .  (29)

	.  reduce 29


state 139
	selection_statement : IF '(' expression ')' statement ELSE . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 151
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 140
	for_loop_statement : FOR '(' ';' ';' ')' statement .  (43)

	.  reduce 43


state 141
	for_loop_statement : FOR '(' ';' ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 152
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 142
	for_loop_statement : FOR '(' ';' expression ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 153
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 143
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	for_loop_statement : FOR '(' ';' expression ';' expression . ')' statement
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	')'  shift 154
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 144
	for_loop_statement : FOR '(' expression ';' ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 155
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 145
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	for_loop_statement : FOR '(' expression ';' ';' expression . ')' statement
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	')'  shift 156
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 146
	for_loop_statement : FOR '(' expression ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' expression ';' . ')' statement

	'('  shift 26
	')'  shift 157
	'-'  shift 27
	ID  shift 49
	NUMBER  shift 33

	assignment_expression  goto 50
	expression  goto 158
	expression_id_dec  goto 37


state 147
	for_loop_statement : FOR '(' var_definition ';' ')' statement .  (40)

	.  reduce 40


state 148
	for_loop_statement : FOR '(' var_definition ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 159
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 149
	for_loop_statement : FOR '(' var_definition expression ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 160
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 150
	for_loop_statement : FOR '(' var_definition expression ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	')'  shift 161
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


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

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 162
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 155
	for_loop_statement : FOR '(' expression ';' ';' ')' statement .  (39)

	.  reduce 39


state 156
	for_loop_statement : FOR '(' expression ';' ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 163
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 157
	for_loop_statement : FOR '(' expression ';' expression ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 164
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 158
	for_loop_statement : FOR '(' expression ';' expression ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . OR expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . '>' expression
	expression : expression . LE expression
	expression : expression . '^' NUMBER

	'%'  shift 59
	')'  shift 165
	'*'  shift 60
	'+'  shift 61
	'-'  shift 62
	'/'  shift 63
	'<'  shift 64
	'='  shift 65
	'>'  shift 66
	'^'  shift 67
	OR  shift 68
	AND  shift 69
	EQ  shift 70
	NE  shift 71
	LE  shift 72
	GE  shift 73


state 159
	for_loop_statement : FOR '(' var_definition ';' expression ')' statement .  (37)

	.  reduce 37


state 160
	for_loop_statement : FOR '(' var_definition expression ';' ')' statement .  (35)

	.  reduce 35


state 161
	for_loop_statement : FOR '(' var_definition expression ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 166
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 162
	for_loop_statement : FOR '(' ';' expression ';' expression ')' statement .  (38)

	.  reduce 38


state 163
	for_loop_statement : FOR '(' expression ';' ';' expression ')' statement .  (36)

	.  reduce 36


state 164
	for_loop_statement : FOR '(' expression ';' expression ';' ')' statement .  (34)

	.  reduce 34


state 165
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 17
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	RETURN  shift 31
	BOOL  shift 5
	ID  shift 32
	NUMBER  shift 33

	assignment_expression  goto 34
	expression  goto 35
	selection_statement  goto 36
	expression_id_dec  goto 37
	code_block  goto 38
	statement  goto 167
	type  goto 40
	var_definition  goto 41
	for_loop_statement  goto 42
	while_loop_statement  goto 43


state 166
	for_loop_statement : FOR '(' var_definition expression ';' expression ')' statement .  (33)

	.  reduce 33


state 167
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement .  (32)

	.  reduce 32


##############################################################################
# Summary
##############################################################################

State 52 contains 1 shift-reduce conflict(s)
State 92 contains 1 shift-reduce conflict(s)
State 93 contains 1 shift-reduce conflict(s)
State 94 contains 1 shift-reduce conflict(s)
State 95 contains 1 shift-reduce conflict(s)
State 96 contains 1 shift-reduce conflict(s)
State 97 contains 1 shift-reduce conflict(s)
State 98 contains 15 shift-reduce conflict(s)
State 99 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 102 contains 1 shift-reduce conflict(s)
State 103 contains 1 shift-reduce conflict(s)
State 104 contains 1 shift-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 106 contains 1 shift-reduce conflict(s)
State 127 contains 1 shift-reduce conflict(s)


36 token(s), 23 nonterminal(s)
77 grammar rule(s), 168 state(s)


##############################################################################
# End of File
##############################################################################
