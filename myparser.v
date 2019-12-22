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
# Time: 02:22:18
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
   68             | expression '^' NUMBER
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

	type  goto 6
	top_level_definition  goto 7


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
	top_level_definition : type . top_level_declarator_list ';'
	top_level_definition : type . function_declarator code_block
	top_level_definition : type . ';'

	';'  shift 8
	ID  shift 9

	var_declarator  goto 10
	function_declarator  goto 11
	top_level_declarator_list  goto 12


state 7
	top_level_definition_list : top_level_definition_list top_level_definition .  (2)

	.  reduce 2


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
	top_level_definition : type function_declarator . code_block

	LBRACE  shift 16

	code_block  goto 17


state 12
	top_level_definition : type top_level_declarator_list . ';'

	';'  shift 18


state 13
	function_declarator : ID '(' . ')'
	function_declarator : ID '(' . param_list ')'

	')'  shift 19
	VOID  shift 3
	INT  shift 4
	BOOL  shift 5

	type  goto 20
	param  goto 21
	param_list  goto 22


state 14
	top_level_declarator_list : var_declarator ',' . top_level_declarator_list

	ID  shift 23

	var_declarator  goto 10
	top_level_declarator_list  goto 24


state 15
	var_declarator : var_declarator '[' . NUMBER ']'

	NUMBER  shift 25


state 16
	code_block : LBRACE . statement_list RBRACE

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	statement_list  goto 40
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 45
	while_loop_statement  goto 46


state 17
	top_level_definition : type function_declarator code_block .  (5)

	.  reduce 5


state 18
	top_level_definition : type top_level_declarator_list ';' .  (4)

	.  reduce 4


state 19
	function_declarator : ID '(' ')' .  (11)

	.  reduce 11


state 20
	param : type . var_declarator

	ID  shift 23

	var_declarator  goto 47


state 21
	param_list : param .  (13)
	param_list : param . ',' param_list

	','  shift 48
	.  reduce 13


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
	expression_id_dec  goto 37
	expression  goto 53


state 27
	expression : '-' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 54


state 28
	selection_statement : IF . '(' expression ')' statement ELSE statement
	selection_statement : IF . '(' expression ')' statement

	'('  shift 55


state 29
	while_loop_statement : WHILE . '(' expression ')' statement

	'('  shift 56


state 30
	for_loop_statement : FOR . '(' expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' expression ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' ')' statement
	for_loop_statement : FOR . '(' var_definition ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' var_definition ';' ')' statement
	for_loop_statement : FOR . '(' ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' var_definition expression ';' ')' statement
	for_loop_statement : FOR . '(' expression ';' ';' expression ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' ')' statement
	for_loop_statement : FOR . '(' ';' expression ';' expression ')' statement

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
	statement : assignment_expression . ';'
	expression : assignment_expression .  (54)

	';'  shift 61
	.  reduce 54


state 36
	statement : io_statement . ';'

	';'  shift 62


state 37
	expression : expression_id_dec .  (74)
	expression_id_dec : expression_id_dec . '[' expression ']'

	'['  shift 63
	.  reduce 74


state 38
	var_definition : type . var_declaration_list ';'

	ID  shift 23

	var_declaration  goto 64
	var_declarator  goto 65
	var_declaration_list  goto 66


state 39
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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


state 40
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	RBRACE  shift 82
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 83
	while_loop_statement  goto 46


state 41
	statement : var_definition .  (26)

	.  reduce 26


state 42
	statement : selection_statement .  (25)

	.  reduce 25


state 43
	statement : code_block .  (28)

	.  reduce 28


state 44
	statement : for_loop_statement .  (24)

	.  reduce 24


state 45
	statement_list : statement .  (20)

	.  reduce 20


state 46
	statement : while_loop_statement .  (23)

	.  reduce 23


state 47
	var_declarator : var_declarator . '[' NUMBER ']'
	param : type var_declarator .  (15)

	'['  shift 15
	.  reduce 15


state 48
	param_list : param ',' . param_list

	VOID  shift 3
	INT  shift 4
	BOOL  shift 5

	type  goto 20
	param  goto 21
	param_list  goto 84


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
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : '(' expression . ')'

	'%'  shift 67
	')'  shift 86
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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


54: shift-reduce conflict (shift 73, reduce 69) on '='
state 54
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression : '-' expression .  (69)

	'='  shift 73
	.  reduce 69


state 55
	selection_statement : IF '(' . expression ')' statement ELSE statement
	selection_statement : IF '(' . expression ')' statement

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 87


state 56
	while_loop_statement : WHILE '(' . expression ')' statement

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 88


state 57
	for_loop_statement : FOR '(' . expression ';' expression ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' expression ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' ')' statement
	for_loop_statement : FOR '(' . var_definition ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . var_definition ';' ')' statement
	for_loop_statement : FOR '(' . ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . var_definition expression ';' ')' statement
	for_loop_statement : FOR '(' . expression ';' ';' expression ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' ')' statement
	for_loop_statement : FOR '(' . ';' expression ';' expression ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 89
	VOID  shift 3
	INT  shift 4
	BOOL  shift 5
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 90
	var_definition  goto 91


state 58
	io_statement : SCAN '(' . expression ')'

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 92


state 59
	io_statement : PRINT '(' . expression ')'

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 93


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
	expression_id_dec  goto 37
	argument_list  goto 95
	expression  goto 96


state 61
	statement : assignment_expression ';' .  (22)

	.  reduce 22


state 62
	statement : io_statement ';' .  (27)

	.  reduce 27


state 63
	expression_id_dec : expression_id_dec '[' . expression ']'

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 97


state 64
	var_declaration_list : var_declaration .  (49)
	var_declaration_list : var_declaration . ',' var_declaration_list

	','  shift 98
	.  reduce 49


state 65
	var_declarator : var_declarator . '[' NUMBER ']'
	var_declaration : var_declarator .  (51)
	var_declaration : var_declarator . '=' expression

	'='  shift 99
	'['  shift 15
	.  reduce 51


state 66
	var_definition : type var_declaration_list . ';'

	';'  shift 100


state 67
	expression : expression '%' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 101


state 68
	expression : expression '*' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 102


state 69
	expression : expression '+' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 103


state 70
	expression : expression '-' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 104


state 71
	expression : expression '/' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 105


state 72
	expression : expression '<' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 106


state 73
	assignment_expression : expression '=' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 107


state 74
	expression : expression '>' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 108


state 75
	expression : expression '^' . NUMBER

	NUMBER  shift 109


state 76
	expression : expression OR . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 110


state 77
	expression : expression AND . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 111


state 78
	expression : expression EQ . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 112


state 79
	expression : expression NE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 113


state 80
	expression : expression LE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 114


state 81
	expression : expression GE . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 115


state 82
	code_block : LBRACE statement_list RBRACE .  (19)

	.  reduce 19


state 83
	statement_list : statement_list statement .  (21)

	.  reduce 21


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
	expression_id_dec  goto 37
	argument_list  goto 117
	expression  goto 96


state 86
	expression : '(' expression ')' .  (70)

	.  reduce 70


state 87
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	selection_statement : IF '(' expression . ')' statement ELSE statement
	assignment_expression : expression . '=' expression
	selection_statement : IF '(' expression . ')' statement
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 118
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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


state 88
	while_loop_statement : WHILE '(' expression . ')' statement
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 119
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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


state 89
	for_loop_statement : FOR '(' ';' . ';' ')' statement
	for_loop_statement : FOR '(' ';' . ';' expression ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' ';' . expression ';' expression ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 120
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 121


state 90
	for_loop_statement : FOR '(' expression . ';' expression ';' expression ')' statement
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	for_loop_statement : FOR '(' expression . ';' ';' ')' statement
	for_loop_statement : FOR '(' expression . ';' expression ';' ')' statement
	for_loop_statement : FOR '(' expression . ';' ';' expression ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	';'  shift 122
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
	for_loop_statement : FOR '(' var_definition . expression ';' expression ')' statement
	for_loop_statement : FOR '(' var_definition . ';' expression ')' statement
	for_loop_statement : FOR '(' var_definition . ';' ')' statement
	for_loop_statement : FOR '(' var_definition . expression ';' ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 123
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 124


state 92
	io_statement : SCAN '(' expression . ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 125
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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


state 93
	io_statement : PRINT '(' expression . ')'
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 126
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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
	statement : ID '(' ')' . ';'
	expression : ID '(' ')' .  (71)

	';'  shift 127
	.  reduce 71


state 95
	statement : ID '(' argument_list . ')' ';'
	expression : ID '(' argument_list . ')'

	')'  shift 128


state 96
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	argument_list : expression .  (77)
	argument_list : expression . ',' argument_list

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	','  shift 129
	'-'  shift 70
	'/'  shift 71
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
	.  reduce 77


state 97
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER
	expression_id_dec : expression_id_dec '[' expression . ']'

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	']'  shift 130
	'^'  shift 75
	OR  shift 76
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81


state 98
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 23

	var_declaration  goto 64
	var_declarator  goto 65
	var_declaration_list  goto 131


state 99
	var_declaration : var_declarator '=' . expression

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 132


state 100
	var_definition : type var_declaration_list ';' .  (48)

	.  reduce 48


101: shift-reduce conflict (shift 73, reduce 59) on '='
state 101
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression '%' expression .  (59)
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'='  shift 73
	'^'  shift 75
	.  reduce 59


102: shift-reduce conflict (shift 73, reduce 57) on '='
state 102
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression '*' expression .  (57)
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'='  shift 73
	'^'  shift 75
	.  reduce 57


103: shift-reduce conflict (shift 73, reduce 55) on '='
state 103
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression '+' expression .  (55)
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'/'  shift 71
	'='  shift 73
	'^'  shift 75
	.  reduce 55


104: shift-reduce conflict (shift 73, reduce 56) on '='
state 104
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression '-' expression .  (56)
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'/'  shift 71
	'='  shift 73
	'^'  shift 75
	.  reduce 56


105: shift-reduce conflict (shift 73, reduce 58) on '='
state 105
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression '/' expression .  (58)
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'='  shift 73
	'^'  shift 75
	.  reduce 58


106: shift-reduce conflict (shift 73, reduce 60) on '='
state 106
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression '<' expression .  (60)
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	'='  shift 73
	'^'  shift 75
	.  reduce 60


107: shift-reduce conflict (shift 67, reduce 53) on '%'
107: shift-reduce conflict (shift 68, reduce 53) on '*'
107: shift-reduce conflict (shift 69, reduce 53) on '+'
107: shift-reduce conflict (shift 70, reduce 53) on '-'
107: shift-reduce conflict (shift 71, reduce 53) on '/'
107: shift-reduce conflict (shift 72, reduce 53) on '<'
107: shift-reduce conflict (shift 73, reduce 53) on '='
107: shift-reduce conflict (shift 74, reduce 53) on '>'
107: shift-reduce conflict (shift 75, reduce 53) on '^'
107: shift-reduce conflict (shift 76, reduce 53) on OR
107: shift-reduce conflict (shift 77, reduce 53) on AND
107: shift-reduce conflict (shift 78, reduce 53) on EQ
107: shift-reduce conflict (shift 79, reduce 53) on NE
107: shift-reduce conflict (shift 80, reduce 53) on LE
107: shift-reduce conflict (shift 81, reduce 53) on GE
state 107
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression '=' expression .  (53)
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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
	.  reduce 53


108: shift-reduce conflict (shift 73, reduce 61) on '='
state 108
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression '>' expression .  (61)
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	'='  shift 73
	'^'  shift 75
	.  reduce 61


state 109
	expression : expression '^' NUMBER .  (68)

	.  reduce 68


110: shift-reduce conflict (shift 73, reduce 67) on '='
state 110
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression OR expression .  (67)
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	AND  shift 77
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81
	.  reduce 67


111: shift-reduce conflict (shift 73, reduce 66) on '='
state 111
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression AND expression .  (66)
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	EQ  shift 78
	NE  shift 79
	LE  shift 80
	GE  shift 81
	.  reduce 66


112: shift-reduce conflict (shift 73, reduce 62) on '='
state 112
	expression : expression EQ expression .  (62)
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	LE  shift 80
	GE  shift 81
	.  reduce 62


113: shift-reduce conflict (shift 73, reduce 65) on '='
state 113
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression NE expression .  (65)
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	'<'  shift 72
	'='  shift 73
	'>'  shift 74
	'^'  shift 75
	LE  shift 80
	GE  shift 81
	.  reduce 65


114: shift-reduce conflict (shift 73, reduce 63) on '='
state 114
	expression : expression . EQ expression
	expression : expression LE expression .  (63)
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	'='  shift 73
	'^'  shift 75
	.  reduce 63


115: shift-reduce conflict (shift 73, reduce 64) on '='
state 115
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression GE expression .  (64)
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	'='  shift 73
	'^'  shift 75
	.  reduce 64


state 116
	expression : ID '(' ')' .  (71)

	.  reduce 71


state 117
	expression : ID '(' argument_list . ')'

	')'  shift 133


state 118
	selection_statement : IF '(' expression ')' . statement ELSE statement
	selection_statement : IF '(' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 134
	while_loop_statement  goto 46


state 119
	while_loop_statement : WHILE '(' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 135
	while_loop_statement  goto 46


state 120
	for_loop_statement : FOR '(' ';' ';' . ')' statement
	for_loop_statement : FOR '(' ';' ';' . expression ')' statement

	'('  shift 26
	')'  shift 136
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 137


state 121
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	for_loop_statement : FOR '(' ';' expression . ';' ')' statement
	expression : expression . '-' expression
	expression : expression . '+' expression
	for_loop_statement : FOR '(' ';' expression . ';' expression ')' statement
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	';'  shift 138
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


state 122
	for_loop_statement : FOR '(' expression ';' . expression ';' expression ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' ')' statement
	for_loop_statement : FOR '(' expression ';' . expression ';' ')' statement
	for_loop_statement : FOR '(' expression ';' . ';' expression ')' statement

	'('  shift 26
	'-'  shift 27
	';'  shift 139
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 140


state 123
	for_loop_statement : FOR '(' var_definition ';' . expression ')' statement
	for_loop_statement : FOR '(' var_definition ';' . ')' statement

	'('  shift 26
	')'  shift 141
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 142


state 124
	expression : expression . EQ expression
	expression : expression . LE expression
	for_loop_statement : FOR '(' var_definition expression . ';' expression ')' statement
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	for_loop_statement : FOR '(' var_definition expression . ';' ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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
	statement : ID '(' argument_list ')' . ';'
	expression : ID '(' argument_list ')' .  (72)

	';'  shift 144
	.  reduce 72


state 129
	argument_list : expression ',' . argument_list

	'('  shift 26
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	argument_list  goto 145
	expression  goto 96


state 130
	expression_id_dec : expression_id_dec '[' expression ']' .  (76)

	.  reduce 76


state 131
	var_declaration_list : var_declaration ',' var_declaration_list .  (50)

	.  reduce 50


state 132
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	var_declaration : var_declarator '=' expression .  (52)
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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
	.  reduce 52


state 133
	expression : ID '(' argument_list ')' .  (72)

	.  reduce 72


134: shift-reduce conflict (shift 146, reduce 46) on ELSE
state 134
	selection_statement : IF '(' expression ')' statement . ELSE statement
	selection_statement : IF '(' expression ')' statement .  (46)

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
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 147
	while_loop_statement  goto 46


state 137
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	for_loop_statement : FOR '(' ';' ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 148
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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


state 138
	for_loop_statement : FOR '(' ';' expression ';' . ')' statement
	for_loop_statement : FOR '(' ';' expression ';' . expression ')' statement

	'('  shift 26
	')'  shift 149
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 150


state 139
	for_loop_statement : FOR '(' expression ';' ';' . ')' statement
	for_loop_statement : FOR '(' expression ';' ';' . expression ')' statement

	'('  shift 26
	')'  shift 151
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 152


state 140
	for_loop_statement : FOR '(' expression ';' expression . ';' expression ')' statement
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	for_loop_statement : FOR '(' expression ';' expression . ';' ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
	';'  shift 153
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
	for_loop_statement : FOR '(' var_definition ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 154
	while_loop_statement  goto 46


state 142
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	for_loop_statement : FOR '(' var_definition ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 155
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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
	for_loop_statement : FOR '(' var_definition expression ';' . expression ')' statement
	for_loop_statement : FOR '(' var_definition expression ';' . ')' statement

	'('  shift 26
	')'  shift 156
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 157


state 144
	statement : ID '(' argument_list ')' ';' .  (30)

	.  reduce 30


state 145
	argument_list : expression ',' argument_list .  (78)

	.  reduce 78


state 146
	selection_statement : IF '(' expression ')' statement ELSE . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 158
	while_loop_statement  goto 46


state 147
	for_loop_statement : FOR '(' ';' ';' ')' statement .  (45)

	.  reduce 45


state 148
	for_loop_statement : FOR '(' ';' ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 159
	while_loop_statement  goto 46


state 149
	for_loop_statement : FOR '(' ';' expression ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 160
	while_loop_statement  goto 46


state 150
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	for_loop_statement : FOR '(' ';' expression ';' expression . ')' statement
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 161
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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


state 151
	for_loop_statement : FOR '(' expression ';' ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 162
	while_loop_statement  goto 46


state 152
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	for_loop_statement : FOR '(' expression ';' ';' expression . ')' statement
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 163
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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


state 153
	for_loop_statement : FOR '(' expression ';' expression ';' . expression ')' statement
	for_loop_statement : FOR '(' expression ';' expression ';' . ')' statement

	'('  shift 26
	')'  shift 164
	'-'  shift 27
	ID  shift 51
	NUMBER  shift 34

	assignment_expression  goto 52
	expression_id_dec  goto 37
	expression  goto 165


state 154
	for_loop_statement : FOR '(' var_definition ';' ')' statement .  (42)

	.  reduce 42


state 155
	for_loop_statement : FOR '(' var_definition ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 166
	while_loop_statement  goto 46


state 156
	for_loop_statement : FOR '(' var_definition expression ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 167
	while_loop_statement  goto 46


state 157
	expression : expression . EQ expression
	expression : expression . LE expression
	for_loop_statement : FOR '(' var_definition expression ';' expression . ')' statement
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 168
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 169
	while_loop_statement  goto 46


state 162
	for_loop_statement : FOR '(' expression ';' ';' ')' statement .  (41)

	.  reduce 41


state 163
	for_loop_statement : FOR '(' expression ';' ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 170
	while_loop_statement  goto 46


state 164
	for_loop_statement : FOR '(' expression ';' expression ';' ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 171
	while_loop_statement  goto 46


state 165
	for_loop_statement : FOR '(' expression ';' expression ';' expression . ')' statement
	expression : expression . EQ expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . '*' expression
	expression : expression . NE expression
	assignment_expression : expression . '=' expression
	expression : expression . '-' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '%' expression
	expression : expression . '<' expression
	expression : expression . '>' expression
	expression : expression . AND expression
	expression : expression . OR expression
	expression : expression . '^' NUMBER

	'%'  shift 67
	')'  shift 172
	'*'  shift 68
	'+'  shift 69
	'-'  shift 70
	'/'  shift 71
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


state 166
	for_loop_statement : FOR '(' var_definition ';' expression ')' statement .  (39)

	.  reduce 39


state 167
	for_loop_statement : FOR '(' var_definition expression ';' ')' statement .  (37)

	.  reduce 37


state 168
	for_loop_statement : FOR '(' var_definition expression ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 173
	while_loop_statement  goto 46


state 169
	for_loop_statement : FOR '(' ';' expression ';' expression ')' statement .  (40)

	.  reduce 40


state 170
	for_loop_statement : FOR '(' expression ';' ';' expression ')' statement .  (38)

	.  reduce 38


state 171
	for_loop_statement : FOR '(' expression ';' expression ';' ')' statement .  (36)

	.  reduce 36


state 172
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' . statement

	'('  shift 26
	'-'  shift 27
	IF  shift 28
	VOID  shift 3
	LBRACE  shift 16
	INT  shift 4
	WHILE  shift 29
	FOR  shift 30
	BOOL  shift 5
	SCAN  shift 31
	PRINT  shift 32
	ID  shift 33
	NUMBER  shift 34

	assignment_expression  goto 35
	io_statement  goto 36
	expression_id_dec  goto 37
	type  goto 38
	expression  goto 39
	var_definition  goto 41
	selection_statement  goto 42
	code_block  goto 43
	for_loop_statement  goto 44
	statement  goto 174
	while_loop_statement  goto 46


state 173
	for_loop_statement : FOR '(' var_definition expression ';' expression ')' statement .  (35)

	.  reduce 35


state 174
	for_loop_statement : FOR '(' expression ';' expression ';' expression ')' statement .  (34)

	.  reduce 34


##############################################################################
# Summary
##############################################################################

State 54 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 102 contains 1 shift-reduce conflict(s)
State 103 contains 1 shift-reduce conflict(s)
State 104 contains 1 shift-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 106 contains 1 shift-reduce conflict(s)
State 107 contains 15 shift-reduce conflict(s)
State 108 contains 1 shift-reduce conflict(s)
State 110 contains 1 shift-reduce conflict(s)
State 111 contains 1 shift-reduce conflict(s)
State 112 contains 1 shift-reduce conflict(s)
State 113 contains 1 shift-reduce conflict(s)
State 114 contains 1 shift-reduce conflict(s)
State 115 contains 1 shift-reduce conflict(s)
State 134 contains 1 shift-reduce conflict(s)


37 token(s), 24 nonterminal(s)
79 grammar rule(s), 175 state(s)


##############################################################################
# End of File
##############################################################################
