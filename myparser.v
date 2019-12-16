#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 91 of your 30 day trial period.
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
# Date: 12/16/19
# Time: 14:10:46
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

   52  selection_statement : IF '(' expression ')' code_block
   53                      | IF '(' expression ')' statement
   54                      | IF '(' expression ')' code_block ELSE code_block
   55                      | IF '(' expression ')' code_block ELSE statement
   56                      | IF '(' expression ')' statement ELSE code_block
   57                      | IF '(' expression ')' statement ELSE statement

   58  var_definition : type var_declaration_list ';'

   59  var_declaration_list : var_declaration
   60                       | var_declaration ',' var_declaration_list

   61  var_declaration : var_declarator
   62                  | var_declarator '=' expression

   63  assignment_expression : expression '=' expression

   64  expression : assignment_expression
   65             | expression '+' expression
   66             | expression '-' expression
   67             | expression '*' expression
   68             | expression '/' expression
   69             | expression '%' expression
   70             | expression '<' expression
   71             | expression '>' expression
   72             | expression EQ expression
   73             | expression LE expression
   74             | expression GE expression
   75             | expression NE expression
   76             | expression AND expression
   77             | expression OR expression
   78             | expression '^' expression
   79             | '-' expression
   80             | '(' expression ')'
   81             | ID '(' ')'
   82             | ID '(' argument_list ')'
   83             | NUMBER
   84             | var_declarator

   85  argument_list : expression
   86                | expression ',' argument_list


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

	top_level_definition_list  goto 10
	prog  goto 11
	top_level_definition  goto 12
	type  goto 13


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
	prog : top_level_definition_list .  (1)

	.  reduce 1


state 11
	$accept : prog . $end  (0)

	$end  accept


state 12
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

	top_level_definition_list  goto 14
	top_level_definition  goto 12
	type  goto 13


state 13
	top_level_definition : type . top_level_declarator_list ';'
	top_level_definition : type . function_declarator code_block
	top_level_definition : type . ';'

	';'  shift 15
	ID  shift 16

	var_declarator  goto 17
	top_level_declarator_list  goto 18
	function_declarator  goto 19


state 14
	top_level_definition_list : top_level_definition top_level_definition_list .  (2)

	.  reduce 2


state 15
	top_level_definition : type ';' .  (6)

	.  reduce 6


state 16
	var_declarator : ID .  (9)
	var_declarator : ID . '[' NUMBER ']'
	function_declarator : ID . '(' param_list ')'
	function_declarator : ID . '(' ')'

	'('  shift 20
	'['  shift 21
	.  reduce 9


state 17
	top_level_declarator_list : var_declarator .  (7)
	top_level_declarator_list : var_declarator . ',' top_level_declarator_list

	','  shift 22
	.  reduce 7


state 18
	top_level_definition : type top_level_declarator_list . ';'

	';'  shift 23


state 19
	top_level_definition : type function_declarator . code_block

	LBRACE  shift 24

	code_block  goto 25


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
	param  goto 28
	type  goto 29


state 21
	var_declarator : ID '[' . NUMBER ']'

	NUMBER  shift 30


state 22
	top_level_declarator_list : var_declarator ',' . top_level_declarator_list

	ID  shift 31

	var_declarator  goto 17
	top_level_declarator_list  goto 32


state 23
	top_level_definition : type top_level_declarator_list ';' .  (4)

	.  reduce 4


state 24
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
	ID  shift 40
	NUMBER  shift 41

	statement_list  goto 42
	while_loop_statement  goto 43
	for_front  goto 44
	for_loop_statement  goto 45
	var_definition  goto 46
	statement  goto 47
	io_statement  goto 48
	assignment_expression  goto 49
	var_declarator  goto 50
	type  goto 51
	expression  goto 52
	selection_statement  goto 53


state 25
	top_level_definition : type function_declarator code_block .  (5)

	.  reduce 5


state 26
	function_declarator : ID '(' ')' .  (12)

	.  reduce 12


state 27
	function_declarator : ID '(' param_list . ')'

	')'  shift 54


state 28
	param_list : param .  (13)
	param_list : param . ',' param_list

	','  shift 55
	.  reduce 13


state 29
	param : type . var_declarator

	ID  shift 31

	var_declarator  goto 56


state 30
	var_declarator : ID '[' NUMBER . ']'

	']'  shift 57


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
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 58


state 34
	expression : '-' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 59


state 35
	selection_statement : IF . '(' expression ')' code_block
	selection_statement : IF . '(' expression ')' statement ELSE statement
	selection_statement : IF . '(' expression ')' code_block ELSE statement
	selection_statement : IF . '(' expression ')' statement ELSE code_block
	selection_statement : IF . '(' expression ')' statement
	selection_statement : IF . '(' expression ')' code_block ELSE code_block

	'('  shift 60


state 36
	while_loop_statement : WHILE . '(' expression ')' code_block
	while_loop_statement : WHILE . '(' expression ')' statement

	'('  shift 61


state 37
	for_front : FOR . '(' type assignment_expression ';' ';' expression ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' ';' ';' ')'
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' type assignment_expression ';' ';' ')'
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' type assignment_expression ';' expression ';' expression ')'
	for_front : FOR . '(' ';' ';' expression ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' type assignment_expression ';' expression ';' ')'

	'('  shift 62


state 38
	io_statement : SCAN . '(' expression ')'

	'('  shift 63


state 39
	io_statement : PRINT . '(' expression ')'

	'('  shift 64


state 40
	var_declarator : ID .  (9)
	var_declarator : ID . '[' NUMBER ']'
	expression : ID . '(' ')'
	expression : ID . '(' argument_list ')'

	'('  shift 65
	'['  shift 21
	.  reduce 9


state 41
	expression : NUMBER .  (83)

	.  reduce 83


state 42
	statement_list : statement_list . statement
	code_block : LBRACE statement_list . RBRACE

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	RBRACE  shift 66
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
	ID  shift 40
	NUMBER  shift 41

	while_loop_statement  goto 43
	for_front  goto 44
	for_loop_statement  goto 45
	var_definition  goto 46
	statement  goto 67
	io_statement  goto 48
	assignment_expression  goto 49
	var_declarator  goto 50
	type  goto 51
	expression  goto 52
	selection_statement  goto 53


state 43
	statement : while_loop_statement .  (29)

	.  reduce 29


state 44
	for_loop_statement : for_front . statement
	for_loop_statement : for_front . code_block

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 24
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
	ID  shift 40
	NUMBER  shift 41

	code_block  goto 68
	while_loop_statement  goto 43
	for_front  goto 44
	for_loop_statement  goto 45
	var_definition  goto 46
	statement  goto 69
	io_statement  goto 48
	assignment_expression  goto 49
	var_declarator  goto 50
	type  goto 51
	expression  goto 52
	selection_statement  goto 53


state 45
	statement : for_loop_statement .  (30)

	.  reduce 30


state 46
	statement : var_definition .  (32)

	.  reduce 32


state 47
	statement_list : statement .  (26)

	.  reduce 26


state 48
	statement : io_statement . ';'

	';'  shift 70


state 49
	expression : assignment_expression .  (64)

	.  reduce 64


state 50
	expression : var_declarator .  (84)

	.  reduce 84


state 51
	var_definition : type . var_declaration_list ';'

	ID  shift 31

	var_declaration_list  goto 71
	var_declaration  goto 72
	var_declarator  goto 73


state 52
	statement : expression . ';'
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	';'  shift 79
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 53
	statement : selection_statement .  (31)

	.  reduce 31


state 54
	function_declarator : ID '(' param_list ')' .  (11)

	.  reduce 11


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

	param_list  goto 90
	param  goto 28
	type  goto 29


state 56
	param : type var_declarator .  (15)

	.  reduce 15


state 57
	var_declarator : ID '[' NUMBER ']' .  (10)

	.  reduce 10


state 58
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : '(' expression . ')'
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 91
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


59: shift-reduce conflict (shift 81, reduce 79) on '='
state 59
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : '-' expression .  (79)
	expression : expression . '^' expression

	'='  shift 81
	.  reduce 79


state 60
	selection_statement : IF '(' . expression ')' code_block
	selection_statement : IF '(' . expression ')' statement ELSE statement
	selection_statement : IF '(' . expression ')' code_block ELSE statement
	selection_statement : IF '(' . expression ')' statement ELSE code_block
	selection_statement : IF '(' . expression ')' statement
	selection_statement : IF '(' . expression ')' code_block ELSE code_block

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 92


state 61
	while_loop_statement : WHILE '(' . expression ')' code_block
	while_loop_statement : WHILE '(' . expression ')' statement

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 93


state 62
	for_front : FOR '(' . type assignment_expression ';' ';' expression ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . ';' ';' ')'
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . type assignment_expression ';' ';' ')'
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . type assignment_expression ';' expression ';' expression ')'
	for_front : FOR '(' . ';' ';' expression ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . type assignment_expression ';' expression ';' ')'

	'('  shift 33
	'-'  shift 34
	';'  shift 94
	VOID  shift 1
	INT  shift 2
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	type  goto 95
	expression  goto 96


state 63
	io_statement : SCAN '(' . expression ')'

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 97


state 64
	io_statement : PRINT '(' . expression ')'

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 98


state 65
	expression : ID '(' . ')'
	expression : ID '(' . argument_list ')'

	'('  shift 33
	')'  shift 99
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 100
	argument_list  goto 101


state 66
	code_block : LBRACE statement_list RBRACE .  (25)

	.  reduce 25


state 67
	statement_list : statement_list statement .  (27)

	.  reduce 27


state 68
	for_loop_statement : for_front code_block .  (38)

	.  reduce 38


state 69
	for_loop_statement : for_front statement .  (39)

	.  reduce 39


state 70
	statement : io_statement ';' .  (33)

	.  reduce 33


state 71
	var_definition : type var_declaration_list . ';'

	';'  shift 102


state 72
	var_declaration_list : var_declaration . ',' var_declaration_list
	var_declaration_list : var_declaration .  (59)

	','  shift 103
	.  reduce 59


state 73
	var_declaration : var_declarator . '=' expression
	var_declaration : var_declarator .  (61)

	'='  shift 104
	.  reduce 61


state 74
	expression : expression '%' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 105


state 75
	expression : expression '*' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 106


state 76
	expression : expression '+' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 107


state 77
	expression : expression '-' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 108


state 78
	expression : expression '/' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 109


state 79
	statement : expression ';' .  (28)

	.  reduce 28


state 80
	expression : expression '<' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 110


state 81
	assignment_expression : expression '=' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 111


state 82
	expression : expression '>' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 112


state 83
	expression : expression '^' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 113


state 84
	expression : expression OR . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 114


state 85
	expression : expression AND . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 115


state 86
	expression : expression EQ . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 116


state 87
	expression : expression NE . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 117


state 88
	expression : expression LE . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 118


state 89
	expression : expression GE . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 119


state 90
	param_list : param ',' param_list .  (14)

	.  reduce 14


state 91
	expression : '(' expression ')' .  (80)

	.  reduce 80


state 92
	selection_statement : IF '(' expression . ')' code_block
	selection_statement : IF '(' expression . ')' statement ELSE statement
	assignment_expression : expression . '=' expression
	selection_statement : IF '(' expression . ')' code_block ELSE statement
	expression : expression . '+' expression
	selection_statement : IF '(' expression . ')' statement ELSE code_block
	selection_statement : IF '(' expression . ')' statement
	selection_statement : IF '(' expression . ')' code_block ELSE code_block
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 120
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 93
	assignment_expression : expression . '=' expression
	while_loop_statement : WHILE '(' expression . ')' code_block
	expression : expression . '+' expression
	while_loop_statement : WHILE '(' expression . ')' statement
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 121
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 94
	for_front : FOR '(' ';' . ';' ')'
	for_front : FOR '(' ';' . expression ';' expression ')'
	for_front : FOR '(' ';' . ';' expression ')'
	for_front : FOR '(' ';' . expression ';' ')'

	'('  shift 33
	'-'  shift 34
	';'  shift 122
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 123


state 95
	for_front : FOR '(' type . assignment_expression ';' ';' expression ')'
	for_front : FOR '(' type . assignment_expression ';' ';' ')'
	for_front : FOR '(' type . assignment_expression ';' expression ';' expression ')'
	for_front : FOR '(' type . assignment_expression ';' expression ';' ')'

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 124
	var_declarator  goto 50
	expression  goto 125


state 96
	for_front : FOR '(' expression . ';' ';' expression ')'
	assignment_expression : expression . '=' expression
	for_front : FOR '(' expression . ';' ';' ')'
	expression : expression . '+' expression
	for_front : FOR '(' expression . ';' expression ';' ')'
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	';'  shift 126
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 97
	io_statement : SCAN '(' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 127
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 98
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	io_statement : PRINT '(' expression . ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 128
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 99
	expression : ID '(' ')' .  (81)

	.  reduce 81


state 100
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	argument_list : expression . ',' argument_list
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	argument_list : expression .  (85)
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	','  shift 129
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89
	.  reduce 85


state 101
	expression : ID '(' argument_list . ')'

	')'  shift 130


state 102
	var_definition : type var_declaration_list ';' .  (58)

	.  reduce 58


state 103
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 31

	var_declaration_list  goto 131
	var_declaration  goto 72
	var_declarator  goto 73


state 104
	var_declaration : var_declarator '=' . expression

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 132


105: shift-reduce conflict (shift 81, reduce 69) on '='
state 105
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression '%' expression .  (69)
	expression : expression . '%' expression
	expression : expression . '^' expression

	'='  shift 81
	'^'  shift 83
	.  reduce 69


106: shift-reduce conflict (shift 81, reduce 67) on '='
state 106
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression '*' expression .  (67)
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'='  shift 81
	'^'  shift 83
	.  reduce 67


107: shift-reduce conflict (shift 81, reduce 65) on '='
state 107
	assignment_expression : expression . '=' expression
	expression : expression '+' expression .  (65)
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'/'  shift 78
	'='  shift 81
	'^'  shift 83
	.  reduce 65


108: shift-reduce conflict (shift 81, reduce 66) on '='
state 108
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression '-' expression .  (66)
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'/'  shift 78
	'='  shift 81
	'^'  shift 83
	.  reduce 66


109: shift-reduce conflict (shift 81, reduce 68) on '='
state 109
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression '/' expression .  (68)
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'='  shift 81
	'^'  shift 83
	.  reduce 68


110: shift-reduce conflict (shift 81, reduce 70) on '='
state 110
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression '<' expression .  (70)
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'='  shift 81
	'^'  shift 83
	.  reduce 70


111: shift-reduce conflict (shift 74, reduce 63) on '%'
111: shift-reduce conflict (shift 75, reduce 63) on '*'
111: shift-reduce conflict (shift 76, reduce 63) on '+'
111: shift-reduce conflict (shift 77, reduce 63) on '-'
111: shift-reduce conflict (shift 78, reduce 63) on '/'
111: shift-reduce conflict (shift 80, reduce 63) on '<'
111: shift-reduce conflict (shift 81, reduce 63) on '='
111: shift-reduce conflict (shift 82, reduce 63) on '>'
111: shift-reduce conflict (shift 83, reduce 63) on '^'
111: shift-reduce conflict (shift 84, reduce 63) on OR
111: shift-reduce conflict (shift 85, reduce 63) on AND
111: shift-reduce conflict (shift 86, reduce 63) on EQ
111: shift-reduce conflict (shift 87, reduce 63) on NE
111: shift-reduce conflict (shift 88, reduce 63) on LE
111: shift-reduce conflict (shift 89, reduce 63) on GE
state 111
	assignment_expression : expression '=' expression .  (63)
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89
	.  reduce 63


112: shift-reduce conflict (shift 81, reduce 71) on '='
state 112
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression '>' expression .  (71)
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'='  shift 81
	'^'  shift 83
	.  reduce 71


113: shift-reduce conflict (shift 81, reduce 78) on '='
state 113
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression '^' expression .  (78)
	expression : expression . '^' expression

	'='  shift 81
	'^'  shift 83
	.  reduce 78


114: shift-reduce conflict (shift 81, reduce 77) on '='
state 114
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression OR expression .  (77)
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89
	.  reduce 77


115: shift-reduce conflict (shift 81, reduce 76) on '='
state 115
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression AND expression .  (76)
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89
	.  reduce 76


116: shift-reduce conflict (shift 81, reduce 72) on '='
state 116
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression EQ expression .  (72)
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	LE  shift 88
	GE  shift 89
	.  reduce 72


117: shift-reduce conflict (shift 81, reduce 75) on '='
state 117
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression NE expression .  (75)
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	LE  shift 88
	GE  shift 89
	.  reduce 75


118: shift-reduce conflict (shift 81, reduce 73) on '='
state 118
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression LE expression .  (73)
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'='  shift 81
	'^'  shift 83
	.  reduce 73


119: shift-reduce conflict (shift 81, reduce 74) on '='
state 119
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression GE expression .  (74)
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'='  shift 81
	'^'  shift 83
	.  reduce 74


state 120
	selection_statement : IF '(' expression ')' . code_block
	selection_statement : IF '(' expression ')' . statement ELSE statement
	selection_statement : IF '(' expression ')' . code_block ELSE statement
	selection_statement : IF '(' expression ')' . statement ELSE code_block
	selection_statement : IF '(' expression ')' . statement
	selection_statement : IF '(' expression ')' . code_block ELSE code_block

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 24
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
	ID  shift 40
	NUMBER  shift 41

	code_block  goto 133
	while_loop_statement  goto 43
	for_front  goto 44
	for_loop_statement  goto 45
	var_definition  goto 46
	statement  goto 134
	io_statement  goto 48
	assignment_expression  goto 49
	var_declarator  goto 50
	type  goto 51
	expression  goto 52
	selection_statement  goto 53


state 121
	while_loop_statement : WHILE '(' expression ')' . code_block
	while_loop_statement : WHILE '(' expression ')' . statement

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 24
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
	ID  shift 40
	NUMBER  shift 41

	code_block  goto 135
	while_loop_statement  goto 43
	for_front  goto 44
	for_loop_statement  goto 45
	var_definition  goto 46
	statement  goto 136
	io_statement  goto 48
	assignment_expression  goto 49
	var_declarator  goto 50
	type  goto 51
	expression  goto 52
	selection_statement  goto 53


state 122
	for_front : FOR '(' ';' ';' . ')'
	for_front : FOR '(' ';' ';' . expression ')'

	'('  shift 33
	')'  shift 137
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 138


state 123
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	for_front : FOR '(' ';' expression . ';' expression ')'
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	';'  shift 139
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 124
	for_front : FOR '(' type assignment_expression . ';' ';' expression ')'
	expression : assignment_expression .  (64)
	for_front : FOR '(' type assignment_expression . ';' ';' ')'
	for_front : FOR '(' type assignment_expression . ';' expression ';' expression ')'
	for_front : FOR '(' type assignment_expression . ';' expression ';' ')'

	';'  shift 140
	.  reduce 64


state 125
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 126
	for_front : FOR '(' expression ';' . ';' expression ')'
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . expression ';' ')'
	for_front : FOR '(' expression ';' . expression ';' expression ')'

	'('  shift 33
	'-'  shift 34
	';'  shift 141
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 142


state 127
	io_statement : SCAN '(' expression ')' .  (34)

	.  reduce 34


state 128
	io_statement : PRINT '(' expression ')' .  (35)

	.  reduce 35


state 129
	argument_list : expression ',' . argument_list

	'('  shift 33
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 100
	argument_list  goto 143


state 130
	expression : ID '(' argument_list ')' .  (82)

	.  reduce 82


state 131
	var_declaration_list : var_declaration ',' var_declaration_list .  (60)

	.  reduce 60


state 132
	var_declaration : var_declarator '=' expression .  (62)
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89
	.  reduce 62


133: shift-reduce conflict (shift 144, reduce 52) on ELSE
state 133
	selection_statement : IF '(' expression ')' code_block .  (52)
	selection_statement : IF '(' expression ')' code_block . ELSE statement
	selection_statement : IF '(' expression ')' code_block . ELSE code_block

	ELSE  shift 144
	.  reduce 52


134: shift-reduce conflict (shift 145, reduce 53) on ELSE
state 134
	selection_statement : IF '(' expression ')' statement . ELSE statement
	selection_statement : IF '(' expression ')' statement . ELSE code_block
	selection_statement : IF '(' expression ')' statement .  (53)

	ELSE  shift 145
	.  reduce 53


state 135
	while_loop_statement : WHILE '(' expression ')' code_block .  (36)

	.  reduce 36


state 136
	while_loop_statement : WHILE '(' expression ')' statement .  (37)

	.  reduce 37


state 137
	for_front : FOR '(' ';' ';' ')' .  (51)

	.  reduce 51


state 138
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 146
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 139
	for_front : FOR '(' ';' expression ';' . expression ')'
	for_front : FOR '(' ';' expression ';' . ')'

	'('  shift 33
	')'  shift 147
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 148


state 140
	for_front : FOR '(' type assignment_expression ';' . ';' expression ')'
	for_front : FOR '(' type assignment_expression ';' . ';' ')'
	for_front : FOR '(' type assignment_expression ';' . expression ';' expression ')'
	for_front : FOR '(' type assignment_expression ';' . expression ';' ')'

	'('  shift 33
	'-'  shift 34
	';'  shift 149
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 150


state 141
	for_front : FOR '(' expression ';' ';' . expression ')'
	for_front : FOR '(' expression ';' ';' . ')'

	'('  shift 33
	')'  shift 151
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 152


state 142
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	for_front : FOR '(' expression ';' expression . ';' ')'
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	';'  shift 153
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 143
	argument_list : expression ',' argument_list .  (86)

	.  reduce 86


state 144
	selection_statement : IF '(' expression ')' code_block ELSE . statement
	selection_statement : IF '(' expression ')' code_block ELSE . code_block

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 24
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
	ID  shift 40
	NUMBER  shift 41

	code_block  goto 154
	while_loop_statement  goto 43
	for_front  goto 44
	for_loop_statement  goto 45
	var_definition  goto 46
	statement  goto 155
	io_statement  goto 48
	assignment_expression  goto 49
	var_declarator  goto 50
	type  goto 51
	expression  goto 52
	selection_statement  goto 53


state 145
	selection_statement : IF '(' expression ')' statement ELSE . statement
	selection_statement : IF '(' expression ')' statement ELSE . code_block

	'('  shift 33
	'-'  shift 34
	IF  shift 35
	VOID  shift 1
	LBRACE  shift 24
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
	ID  shift 40
	NUMBER  shift 41

	code_block  goto 156
	while_loop_statement  goto 43
	for_front  goto 44
	for_loop_statement  goto 45
	var_definition  goto 46
	statement  goto 157
	io_statement  goto 48
	assignment_expression  goto 49
	var_declarator  goto 50
	type  goto 51
	expression  goto 52
	selection_statement  goto 53


state 146
	for_front : FOR '(' ';' ';' expression ')' .  (50)

	.  reduce 50


state 147
	for_front : FOR '(' ';' expression ';' ')' .  (49)

	.  reduce 49


state 148
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 158
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 149
	for_front : FOR '(' type assignment_expression ';' ';' . expression ')'
	for_front : FOR '(' type assignment_expression ';' ';' . ')'

	'('  shift 33
	')'  shift 159
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 160


state 150
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	for_front : FOR '(' type assignment_expression ';' expression . ';' expression ')'
	for_front : FOR '(' type assignment_expression ';' expression . ';' ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	';'  shift 161
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 151
	for_front : FOR '(' expression ';' ';' ')' .  (47)

	.  reduce 47


state 152
	for_front : FOR '(' expression ';' ';' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 162
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 153
	for_front : FOR '(' expression ';' expression ';' . ')'
	for_front : FOR '(' expression ';' expression ';' . expression ')'

	'('  shift 33
	')'  shift 163
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 164


state 154
	selection_statement : IF '(' expression ')' code_block ELSE code_block .  (54)

	.  reduce 54


state 155
	selection_statement : IF '(' expression ')' code_block ELSE statement .  (55)

	.  reduce 55


state 156
	selection_statement : IF '(' expression ')' statement ELSE code_block .  (56)

	.  reduce 56


state 157
	selection_statement : IF '(' expression ')' statement ELSE statement .  (57)

	.  reduce 57


state 158
	for_front : FOR '(' ';' expression ';' expression ')' .  (46)

	.  reduce 46


state 159
	for_front : FOR '(' type assignment_expression ';' ';' ')' .  (48)

	.  reduce 48


state 160
	for_front : FOR '(' type assignment_expression ';' ';' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 165
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 161
	for_front : FOR '(' type assignment_expression ';' expression ';' . expression ')'
	for_front : FOR '(' type assignment_expression ';' expression ';' . ')'

	'('  shift 33
	')'  shift 166
	'-'  shift 34
	ID  shift 40
	NUMBER  shift 41

	assignment_expression  goto 49
	var_declarator  goto 50
	expression  goto 167


state 162
	for_front : FOR '(' expression ';' ';' expression ')' .  (44)

	.  reduce 44


state 163
	for_front : FOR '(' expression ';' expression ';' ')' .  (42)

	.  reduce 42


state 164
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 168
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 165
	for_front : FOR '(' type assignment_expression ';' ';' expression ')' .  (45)

	.  reduce 45


state 166
	for_front : FOR '(' type assignment_expression ';' expression ';' ')' .  (43)

	.  reduce 43


state 167
	assignment_expression : expression . '=' expression
	expression : expression . '+' expression
	for_front : FOR '(' type assignment_expression ';' expression ';' expression . ')'
	expression : expression . '/' expression
	expression : expression . '*' expression
	expression : expression . '-' expression
	expression : expression . NE expression
	expression : expression . EQ expression
	expression : expression . OR expression
	expression : expression . '<' expression
	expression : expression . AND expression
	expression : expression . LE expression
	expression : expression . '>' expression
	expression : expression . GE expression
	expression : expression . '%' expression
	expression : expression . '^' expression

	'%'  shift 74
	')'  shift 169
	'*'  shift 75
	'+'  shift 76
	'-'  shift 77
	'/'  shift 78
	'<'  shift 80
	'='  shift 81
	'>'  shift 82
	'^'  shift 83
	OR  shift 84
	AND  shift 85
	EQ  shift 86
	NE  shift 87
	LE  shift 88
	GE  shift 89


state 168
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (40)

	.  reduce 40


state 169
	for_front : FOR '(' type assignment_expression ';' expression ';' expression ')' .  (41)

	.  reduce 41


##############################################################################
# Summary
##############################################################################

State 59 contains 1 shift-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 106 contains 1 shift-reduce conflict(s)
State 107 contains 1 shift-reduce conflict(s)
State 108 contains 1 shift-reduce conflict(s)
State 109 contains 1 shift-reduce conflict(s)
State 110 contains 1 shift-reduce conflict(s)
State 111 contains 15 shift-reduce conflict(s)
State 112 contains 1 shift-reduce conflict(s)
State 113 contains 1 shift-reduce conflict(s)
State 114 contains 1 shift-reduce conflict(s)
State 115 contains 1 shift-reduce conflict(s)
State 116 contains 1 shift-reduce conflict(s)
State 117 contains 1 shift-reduce conflict(s)
State 118 contains 1 shift-reduce conflict(s)
State 119 contains 1 shift-reduce conflict(s)
State 133 contains 1 shift-reduce conflict(s)
State 134 contains 1 shift-reduce conflict(s)


43 token(s), 24 nonterminal(s)
87 grammar rule(s), 170 state(s)


##############################################################################
# End of File
##############################################################################
