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
# Date: 12/21/19
# Time: 20:39:30
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

	top_level_definition_list  goto 4
	top_level_definition  goto 5
	prog  goto 6
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
	prog : top_level_definition_list .  (1)

	.  reduce 1


state 5
	top_level_definition_list : top_level_definition . top_level_definition_list
	top_level_definition_list : .  (3)

	VOID  shift 1
	INT  shift 2
	BOOL  shift 3
	.  reduce 3

	top_level_definition_list  goto 8
	top_level_definition  goto 5
	type  goto 7


state 6
	$accept : prog . $end  (0)

	$end  accept


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
	type  goto 22
	param_list  goto 23


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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 41
	code_block  goto 42
	statement_list  goto 43
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
	param : type . var_declarator

	ID  shift 45

	var_declarator  goto 49


state 23
	function_declarator : ID '(' param_list . ')'

	')'  shift 50


state 24
	expression : '(' . expression ')'

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 52


state 25
	expression : '-' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 53


state 26
	selection_statement : IF . '(' expression ')' statement ELSE statement
	selection_statement : IF . '(' expression ')' statement

	'('  shift 54


state 27
	while_loop_statement : WHILE . '(' expression ')' statement

	'('  shift 55


state 28
	for_loop_statement : FOR . '(' expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' type assignment_expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' type assignment_expression ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' type assignment_expression ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' ';' ';' ')' statement
	for_loop_statement : FOR . '(' type assignment_expression ';' ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' ')' statement

	'('  shift 56


state 29
	io_statement : SCAN . '(' expression ')'

	'('  shift 57


state 30
	io_statement : PRINT . '(' expression ')'

	'('  shift 58


state 31
	expression : ID . '(' argument_list ')'
	expression_id_dec : ID .  (73)
	expression : ID . '(' ')'

	'('  shift 59
	.  reduce 73


state 32
	expression : NUMBER .  (71)

	.  reduce 71


state 33
	statement : var_definition .  (26)

	.  reduce 26


state 34
	statement : assignment_expression . ';'
	expression : assignment_expression .  (52)

	';'  shift 60
	.  reduce 52


state 35
	expression : expression_id_dec .  (72)
	expression_id_dec : expression_id_dec . '[' expression ']'

	'['  shift 61
	.  reduce 72


state 36
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


state 37
	statement : selection_statement .  (25)

	.  reduce 25


state 38
	statement : while_loop_statement .  (23)

	.  reduce 23


state 39
	statement : for_loop_statement .  (24)

	.  reduce 24


state 40
	var_definition : type . var_declaration_list ';'

	ID  shift 45

	var_declaration  goto 77
	var_declaration_list  goto 78
	var_declarator  goto 79


state 41
	statement_list : statement .  (20)

	.  reduce 20


state 42
	statement : code_block .  (28)

	.  reduce 28


state 43
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE

	'('  shift 24
	'-'  shift 25
	IF  shift 26
	VOID  shift 1
	LBRACE  shift 16
	RBRACE  shift 80
	INT  shift 2
	WHILE  shift 27
	FOR  shift 28
	BOOL  shift 3
	SCAN  shift 29
	PRINT  shift 30
	ID  shift 31
	NUMBER  shift 32

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 81
	code_block  goto 42
	io_statement  goto 44


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
	type  goto 22
	param_list  goto 84


state 49
	var_declarator : var_declarator . '[' NUMBER ']'
	param : type var_declarator .  (15)

	'['  shift 19
	.  reduce 15


state 50
	function_declarator : ID '(' param_list ')' .  (12)

	.  reduce 12


state 51
	expression : assignment_expression .  (52)

	.  reduce 52


state 52
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : '(' expression . ')'
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 85
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


53: shift-reduce conflict (shift 68, reduce 67) on '='
state 53
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : '-' expression .  (67)
	expression : expression . '^' expression

	'='  shift 68
	.  reduce 67


state 54
	selection_statement : IF '(' . expression ')' statement ELSE statement
	selection_statement : IF '(' . expression ')' statement

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 86


state 55
	while_loop_statement : WHILE '(' . expression ')' statement

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 87


state 56
	for_loop_statement : FOR '(' . expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . type assignment_expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . type assignment_expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . type assignment_expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . ';' ';' ')' statement
	for_loop_statement : FOR '(' . type assignment_expression ';' ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' ')' statement

	'('  shift 24
	'-'  shift 25
	';'  shift 88
	VOID  shift 1
	INT  shift 2
	BOOL  shift 3
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 89
	type  goto 90


state 57
	io_statement : SCAN '(' . expression ')'

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 91


state 58
	io_statement : PRINT '(' . expression ')'

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 92


state 59
	expression : ID '(' . argument_list ')'
	expression : ID '(' . ')'

	'('  shift 24
	')'  shift 93
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 94
	argument_list  goto 95


state 60
	statement : assignment_expression ';' .  (22)

	.  reduce 22


state 61
	expression_id_dec : expression_id_dec '[' . expression ']'

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 96


state 62
	expression : expression '%' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 97


state 63
	expression : expression '*' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 98


state 64
	expression : expression '+' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 99


state 65
	expression : expression '-' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 100


state 66
	expression : expression '/' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 101


state 67
	expression : expression '<' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 102


state 68
	assignment_expression : expression '=' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 103


state 69
	expression : expression '>' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 104


state 70
	expression : expression '^' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 105


state 71
	expression : expression OR . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 106


state 72
	expression : expression AND . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 107


state 73
	expression : expression EQ . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 108


state 74
	expression : expression NE . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 109


state 75
	expression : expression LE . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 110


state 76
	expression : expression GE . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 111


state 77
	var_declaration_list : var_declaration .  (47)
	var_declaration_list : var_declaration . ',' var_declaration_list

	','  shift 112
	.  reduce 47


state 78
	var_definition : type var_declaration_list . ';'

	';'  shift 113


state 79
	var_declarator : var_declarator . '[' NUMBER ']'
	var_declaration : var_declarator .  (49)
	var_declaration : var_declarator . '=' expression

	'='  shift 114
	'['  shift 19
	.  reduce 49


state 80
	code_block : LBRACE statement_list RBRACE .  (19)

	.  reduce 19


state 81
	statement_list : statement_list statement .  (21)

	.  reduce 21


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
	expression : expression . '+' expression
	selection_statement : IF '(' expression . ')' statement ELSE statement
	selection_statement : IF '(' expression . ')' statement
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 115
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


state 87
	while_loop_statement : WHILE '(' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 116
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


state 88
	for_loop_statement : FOR '(' ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' ';' . ';' ')' statement

	'('  shift 24
	'-'  shift 25
	';'  shift 117
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 118


state 89
	for_loop_statement : FOR '(' expression . ';' expression ';' expression ')' statement
	expression : expression . '+' expression
	for_loop_statement : FOR '(' expression . ';' ';' expression ')' statement
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	for_loop_statement : FOR '(' expression . ';' expression ';' ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	for_loop_statement : FOR '(' expression . ';' ';' ')' statement
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	';'  shift 119
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


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
	expression_id_dec  goto 35
	expression  goto 36


state 91
	io_statement : SCAN '(' expression . ')'
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 121
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


state 92
	io_statement : PRINT '(' expression . ')'
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 122
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


state 93
	expression : ID '(' ')' .  (69)

	.  reduce 69


state 94
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression
	argument_list : expression . ',' argument_list
	argument_list : expression .  (75)

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	','  shift 123
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76
	.  reduce 75


state 95
	expression : ID '(' argument_list . ')'

	')'  shift 124


state 96
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression
	expression_id_dec : expression_id_dec '[' expression . ']'

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	']'  shift 125
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


97: shift-reduce conflict (shift 68, reduce 57) on '='
state 97
	expression : expression . '+' expression
	expression : expression '%' expression .  (57)
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'='  shift 68
	'^'  shift 70
	.  reduce 57


98: shift-reduce conflict (shift 68, reduce 55) on '='
state 98
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression '*' expression .  (55)
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'='  shift 68
	'^'  shift 70
	.  reduce 55


99: shift-reduce conflict (shift 68, reduce 53) on '='
state 99
	expression : expression '+' expression .  (53)
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'/'  shift 66
	'='  shift 68
	'^'  shift 70
	.  reduce 53


100: shift-reduce conflict (shift 68, reduce 54) on '='
state 100
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression '-' expression .  (54)
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'/'  shift 66
	'='  shift 68
	'^'  shift 70
	.  reduce 54


101: shift-reduce conflict (shift 68, reduce 56) on '='
state 101
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression '/' expression .  (56)
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'='  shift 68
	'^'  shift 70
	.  reduce 56


102: shift-reduce conflict (shift 68, reduce 58) on '='
state 102
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression '<' expression .  (58)
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'='  shift 68
	'^'  shift 70
	.  reduce 58


103: shift-reduce conflict (shift 62, reduce 51) on '%'
103: shift-reduce conflict (shift 63, reduce 51) on '*'
103: shift-reduce conflict (shift 64, reduce 51) on '+'
103: shift-reduce conflict (shift 65, reduce 51) on '-'
103: shift-reduce conflict (shift 66, reduce 51) on '/'
103: shift-reduce conflict (shift 67, reduce 51) on '<'
103: shift-reduce conflict (shift 68, reduce 51) on '='
103: shift-reduce conflict (shift 69, reduce 51) on '>'
103: shift-reduce conflict (shift 70, reduce 51) on '^'
103: shift-reduce conflict (shift 71, reduce 51) on OR
103: shift-reduce conflict (shift 72, reduce 51) on AND
103: shift-reduce conflict (shift 73, reduce 51) on EQ
103: shift-reduce conflict (shift 74, reduce 51) on NE
103: shift-reduce conflict (shift 75, reduce 51) on LE
103: shift-reduce conflict (shift 76, reduce 51) on GE
state 103
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression '=' expression .  (51)
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76
	.  reduce 51


104: shift-reduce conflict (shift 68, reduce 59) on '='
state 104
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression '>' expression .  (59)
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'='  shift 68
	'^'  shift 70
	.  reduce 59


105: shift-reduce conflict (shift 68, reduce 66) on '='
state 105
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression '^' expression .  (66)
	expression : expression . '^' expression

	'='  shift 68
	'^'  shift 70
	.  reduce 66


106: shift-reduce conflict (shift 68, reduce 65) on '='
state 106
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression OR expression .  (65)
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76
	.  reduce 65


107: shift-reduce conflict (shift 68, reduce 64) on '='
state 107
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression AND expression .  (64)
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76
	.  reduce 64


108: shift-reduce conflict (shift 68, reduce 60) on '='
state 108
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression EQ expression .  (60)
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	LE  shift 75
	GE  shift 76
	.  reduce 60


109: shift-reduce conflict (shift 68, reduce 63) on '='
state 109
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression NE expression .  (63)
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	LE  shift 75
	GE  shift 76
	.  reduce 63


110: shift-reduce conflict (shift 68, reduce 61) on '='
state 110
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression LE expression .  (61)
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'='  shift 68
	'^'  shift 70
	.  reduce 61


111: shift-reduce conflict (shift 68, reduce 62) on '='
state 111
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression GE expression .  (62)
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'='  shift 68
	'^'  shift 70
	.  reduce 62


state 112
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 45

	var_declaration  goto 77
	var_declaration_list  goto 126
	var_declarator  goto 79


state 113
	var_definition : type var_declaration_list ';' .  (46)

	.  reduce 46


state 114
	var_declaration : var_declarator '=' . expression

	'('  shift 24
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 127


state 115
	selection_statement : IF '(' expression ')' . statement ELSE statement
	selection_statement : IF '(' expression ')' . statement

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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 128
	code_block  goto 42
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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 129
	code_block  goto 42
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
	expression_id_dec  goto 35
	expression  goto 131


state 118
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	for_loop_statement : FOR '(' ';' expression . ';' expression ')' statement
	for_loop_statement : FOR '(' ';' expression . ';' ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	';'  shift 132
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


state 119
	for_loop_statement : FOR '(' expression ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' ')' statement

	'('  shift 24
	'-'  shift 25
	';'  shift 133
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 134


state 120
	for_loop_statement : FOR '(' type assignment_expression . ';' expression ';' expression ')' statement
	expression : assignment_expression .  (52)
	for_loop_statement : FOR '(' type assignment_expression . ';' expression ';' ')' statement
	for_loop_statement : FOR '(' type assignment_expression . ';' ';' expression ')' statement
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
	expression_id_dec  goto 35
	expression  goto 94
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
	expression : expression . '+' expression
	var_declaration : var_declarator '=' expression .  (50)
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76
	.  reduce 50


128: shift-reduce conflict (shift 137, reduce 44) on ELSE
state 128
	selection_statement : IF '(' expression ')' statement . ELSE statement
	selection_statement : IF '(' expression ')' statement .  (44)

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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 138
	code_block  goto 42
	io_statement  goto 44


state 131
	expression : expression . '+' expression
	for_loop_statement : FOR '(' ';' ';' expression . ')' statement
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 139
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


state 132
	for_loop_statement : FOR '(' ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' ';' expression ';' . ')' statement

	'('  shift 24
	')'  shift 140
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 141


state 133
	for_loop_statement : FOR '(' expression ';' ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' ';' . ')' statement

	'('  shift 24
	')'  shift 142
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 143


state 134
	for_loop_statement : FOR '(' expression ';' expression . ';' expression ')' statement
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	for_loop_statement : FOR '(' expression ';' expression . ';' ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	';'  shift 144
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


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
	expression_id_dec  goto 35
	expression  goto 146


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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 147
	code_block  goto 42
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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 148
	code_block  goto 42
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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 149
	code_block  goto 42
	io_statement  goto 44


state 141
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	for_loop_statement : FOR '(' ';' expression ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 150
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 151
	code_block  goto 42
	io_statement  goto 44


state 143
	expression : expression . '+' expression
	for_loop_statement : FOR '(' expression ';' ';' expression . ')' statement
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 152
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


state 144
	for_loop_statement : FOR '(' expression ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' expression ';' . ')' statement

	'('  shift 24
	')'  shift 153
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 154


state 145
	for_loop_statement : FOR '(' type assignment_expression ';' ';' . expression ')' statement
	for_loop_statement : FOR '(' type assignment_expression ';' ';' . ')' statement

	'('  shift 24
	')'  shift 155
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 156


state 146
	for_loop_statement : FOR '(' type assignment_expression ';' expression . ';' expression ')' statement
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	for_loop_statement : FOR '(' type assignment_expression ';' expression . ';' ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	';'  shift 157
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 158
	code_block  goto 42
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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 159
	code_block  goto 42
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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 160
	code_block  goto 42
	io_statement  goto 44


state 154
	for_loop_statement : FOR '(' expression ';' expression ';' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 161
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 162
	code_block  goto 42
	io_statement  goto 44


state 156
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	for_loop_statement : FOR '(' type assignment_expression ';' ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 163
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


state 157
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' . ')' statement

	'('  shift 24
	')'  shift 164
	'-'  shift 25
	ID  shift 31
	NUMBER  shift 32

	assignment_expression  goto 51
	expression_id_dec  goto 35
	expression  goto 165


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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 166
	code_block  goto 42
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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 167
	code_block  goto 42
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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 168
	code_block  goto 42
	io_statement  goto 44


state 165
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . NE expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '-' expression
	expression : expression . '<' expression
	assignment_expression : expression . '=' expression
	expression : expression . '*' expression
	expression : expression . '/' expression
	expression : expression . LE expression
	expression : expression . EQ expression
	expression : expression . GE expression
	expression : expression . '^' expression

	'%'  shift 62
	')'  shift 169
	'*'  shift 63
	'+'  shift 64
	'-'  shift 65
	'/'  shift 66
	'<'  shift 67
	'='  shift 68
	'>'  shift 69
	'^'  shift 70
	OR  shift 71
	AND  shift 72
	EQ  shift 73
	NE  shift 74
	LE  shift 75
	GE  shift 76


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

	var_definition  goto 33
	assignment_expression  goto 34
	expression_id_dec  goto 35
	expression  goto 36
	selection_statement  goto 37
	while_loop_statement  goto 38
	for_loop_statement  goto 39
	type  goto 40
	statement  goto 170
	code_block  goto 42
	io_statement  goto 44


state 170
	for_loop_statement : FOR '(' type assignment_expression ';' expression ';' expression ')' statement .  (33)

	.  reduce 33


##############################################################################
# Summary
##############################################################################

State 53 contains 1 shift-reduce conflict(s)
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
State 128 contains 1 shift-reduce conflict(s)


37 token(s), 24 nonterminal(s)
77 grammar rule(s), 171 state(s)


##############################################################################
# End of File
##############################################################################
