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
# Time: 01:24:03
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

	top_level_definition  goto 10
	type  goto 11
	prog  goto 12
	top_level_definition_list  goto 13


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

	top_level_definition  goto 10
	type  goto 11
	top_level_definition_list  goto 14


state 11
	top_level_definition : type . top_level_declarator_list ';'
	top_level_definition : type . function_declarator code_block
	top_level_definition : type . ';'

	';'  shift 15
	ID  shift 16

	function_declarator  goto 17
	var_declarator  goto 18
	top_level_declarator_list  goto 19


state 12
	$accept : prog . $end  (0)

	$end  accept


state 13
	prog : top_level_definition_list .  (1)

	.  reduce 1


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
	top_level_definition : type function_declarator . code_block

	LBRACE  shift 22

	code_block  goto 23


state 18
	top_level_declarator_list : var_declarator .  (7)
	top_level_declarator_list : var_declarator . ',' top_level_declarator_list

	','  shift 24
	.  reduce 7


state 19
	top_level_definition : type top_level_declarator_list . ';'

	';'  shift 25


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

	type  goto 27
	param_list  goto 28
	param  goto 29


state 21
	var_declarator : ID '[' . NUMBER ']'

	NUMBER  shift 30


state 22
	code_block : LBRACE . statement_list RBRACE

	'('  shift 31
	'-'  shift 32
	IF  shift 33
	VOID  shift 1
	INT  shift 2
	WHILE  shift 34
	FOR  shift 35
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 36
	PRINT  shift 37
	ID  shift 38
	NUMBER  shift 39

	for_front  goto 40
	for_loop_statement  goto 41
	statement  goto 42
	assignment_expression  goto 43
	type  goto 44
	statement_list  goto 45
	var_definition  goto 46
	io_statement  goto 47
	var_declarator  goto 48
	while_loop_statement  goto 49
	expression  goto 50
	selection_statement  goto 51


state 23
	top_level_definition : type function_declarator code_block .  (5)

	.  reduce 5


state 24
	top_level_declarator_list : var_declarator ',' . top_level_declarator_list

	ID  shift 38

	var_declarator  goto 18
	top_level_declarator_list  goto 52


state 25
	top_level_definition : type top_level_declarator_list ';' .  (4)

	.  reduce 4


state 26
	function_declarator : ID '(' ')' .  (12)

	.  reduce 12


state 27
	param : type . var_declarator

	ID  shift 38

	var_declarator  goto 53


state 28
	function_declarator : ID '(' param_list . ')'

	')'  shift 54


state 29
	param_list : param .  (13)
	param_list : param . ',' param_list

	','  shift 55
	.  reduce 13


state 30
	var_declarator : ID '[' NUMBER . ']'

	']'  shift 56


state 31
	expression : '(' . expression ')'

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 57


state 32
	expression : '-' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 58


state 33
	selection_statement : IF . '(' expression ')' statement ELSE code_block
	selection_statement : IF . '(' expression ')' statement ELSE statement
	selection_statement : IF . '(' expression ')' code_block
	selection_statement : IF . '(' expression ')' code_block ELSE code_block
	selection_statement : IF . '(' expression ')' code_block ELSE statement
	selection_statement : IF . '(' expression ')' statement

	'('  shift 59


state 34
	while_loop_statement : WHILE . '(' expression ')' statement
	while_loop_statement : WHILE . '(' expression ')' code_block

	'('  shift 60


state 35
	for_front : FOR . '(' type assignment_expression ';' ';' ')'
	for_front : FOR . '(' expression ';' expression ';' ')'
	for_front : FOR . '(' ';' expression ';' ')'
	for_front : FOR . '(' type assignment_expression ';' expression ';' ')'
	for_front : FOR . '(' expression ';' expression ';' expression ')'
	for_front : FOR . '(' type assignment_expression ';' expression ';' expression ')'
	for_front : FOR . '(' ';' ';' expression ')'
	for_front : FOR . '(' ';' expression ';' expression ')'
	for_front : FOR . '(' expression ';' ';' ')'
	for_front : FOR . '(' expression ';' ';' expression ')'
	for_front : FOR . '(' ';' ';' ')'
	for_front : FOR . '(' type assignment_expression ';' ';' expression ')'

	'('  shift 61


state 36
	io_statement : SCAN . '(' expression ')'

	'('  shift 62


state 37
	io_statement : PRINT . '(' expression ')'

	'('  shift 63


state 38
	var_declarator : ID .  (9)
	var_declarator : ID . '[' NUMBER ']'

	'['  shift 21
	.  reduce 9


state 39
	expression : NUMBER .  (75)

	.  reduce 75


state 40
	for_loop_statement : for_front . statement
	for_loop_statement : for_front . code_block

	'('  shift 31
	'-'  shift 32
	IF  shift 33
	VOID  shift 1
	LBRACE  shift 22
	INT  shift 2
	WHILE  shift 34
	FOR  shift 35
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 36
	PRINT  shift 37
	ID  shift 38
	NUMBER  shift 39

	for_front  goto 40
	for_loop_statement  goto 41
	statement  goto 64
	assignment_expression  goto 43
	code_block  goto 65
	type  goto 44
	var_definition  goto 46
	io_statement  goto 47
	var_declarator  goto 48
	while_loop_statement  goto 49
	expression  goto 50
	selection_statement  goto 51


state 41
	statement : for_loop_statement .  (30)

	.  reduce 30


state 42
	statement_list : statement .  (26)

	.  reduce 26


state 43
	expression : assignment_expression .  (58)

	.  reduce 58


state 44
	var_definition : type . var_declaration_list ';'

	ID  shift 38

	var_declaration  goto 66
	var_declaration_list  goto 67
	var_declarator  goto 68


state 45
	code_block : LBRACE statement_list . RBRACE
	statement_list : statement_list . statement

	'('  shift 31
	'-'  shift 32
	IF  shift 33
	VOID  shift 1
	RBRACE  shift 69
	INT  shift 2
	WHILE  shift 34
	FOR  shift 35
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 36
	PRINT  shift 37
	ID  shift 38
	NUMBER  shift 39

	for_front  goto 40
	for_loop_statement  goto 41
	statement  goto 70
	assignment_expression  goto 43
	type  goto 44
	var_definition  goto 46
	io_statement  goto 47
	var_declarator  goto 48
	while_loop_statement  goto 49
	expression  goto 50
	selection_statement  goto 51


state 46
	statement : var_definition .  (32)

	.  reduce 32


state 47
	statement : io_statement . ';'

	';'  shift 71


state 48
	expression : var_declarator .  (76)

	.  reduce 76


state 49
	statement : while_loop_statement .  (29)

	.  reduce 29


state 50
	statement : expression . ';'
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	';'  shift 77
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 51
	statement : selection_statement .  (31)

	.  reduce 31


state 52
	top_level_declarator_list : var_declarator ',' top_level_declarator_list .  (8)

	.  reduce 8


state 53
	param : type var_declarator .  (15)

	.  reduce 15


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

	type  goto 27
	param_list  goto 88
	param  goto 29


state 56
	var_declarator : ID '[' NUMBER ']' .  (10)

	.  reduce 10


state 57
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression
	expression : '(' expression . ')'

	'%'  shift 72
	')'  shift 89
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


58: shift-reduce conflict (shift 79, reduce 73) on '='
state 58
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression
	expression : '-' expression .  (73)

	'='  shift 79
	.  reduce 73


state 59
	selection_statement : IF '(' . expression ')' statement ELSE code_block
	selection_statement : IF '(' . expression ')' statement ELSE statement
	selection_statement : IF '(' . expression ')' code_block
	selection_statement : IF '(' . expression ')' code_block ELSE code_block
	selection_statement : IF '(' . expression ')' code_block ELSE statement
	selection_statement : IF '(' . expression ')' statement

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 90


state 60
	while_loop_statement : WHILE '(' . expression ')' statement
	while_loop_statement : WHILE '(' . expression ')' code_block

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 91


state 61
	for_front : FOR '(' . type assignment_expression ';' ';' ')'
	for_front : FOR '(' . expression ';' expression ';' ')'
	for_front : FOR '(' . ';' expression ';' ')'
	for_front : FOR '(' . type assignment_expression ';' expression ';' ')'
	for_front : FOR '(' . expression ';' expression ';' expression ')'
	for_front : FOR '(' . type assignment_expression ';' expression ';' expression ')'
	for_front : FOR '(' . ';' ';' expression ')'
	for_front : FOR '(' . ';' expression ';' expression ')'
	for_front : FOR '(' . expression ';' ';' ')'
	for_front : FOR '(' . expression ';' ';' expression ')'
	for_front : FOR '(' . ';' ';' ')'
	for_front : FOR '(' . type assignment_expression ';' ';' expression ')'

	'('  shift 31
	'-'  shift 32
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
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	type  goto 93
	var_declarator  goto 48
	expression  goto 94


state 62
	io_statement : SCAN '(' . expression ')'

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 95


state 63
	io_statement : PRINT '(' . expression ')'

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 96


state 64
	for_loop_statement : for_front statement .  (39)

	.  reduce 39


state 65
	for_loop_statement : for_front code_block .  (38)

	.  reduce 38


state 66
	var_declaration_list : var_declaration . ',' var_declaration_list
	var_declaration_list : var_declaration .  (53)

	','  shift 97
	.  reduce 53


state 67
	var_definition : type var_declaration_list . ';'

	';'  shift 98


state 68
	var_declaration : var_declarator .  (55)
	var_declaration : var_declarator . '=' expression

	'='  shift 99
	.  reduce 55


state 69
	code_block : LBRACE statement_list RBRACE .  (25)

	.  reduce 25


state 70
	statement_list : statement_list statement .  (27)

	.  reduce 27


state 71
	statement : io_statement ';' .  (33)

	.  reduce 33


state 72
	expression : expression '%' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 100


state 73
	expression : expression '*' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 101


state 74
	expression : expression '+' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 102


state 75
	expression : expression '-' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 103


state 76
	expression : expression '/' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 104


state 77
	statement : expression ';' .  (28)

	.  reduce 28


state 78
	expression : expression '<' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 105


state 79
	assignment_expression : expression '=' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 106


state 80
	expression : expression '>' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 107


state 81
	expression : expression '^' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 108


state 82
	expression : expression OR . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 109


state 83
	expression : expression AND . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 110


state 84
	expression : expression EQ . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 111


state 85
	expression : expression NE . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 112


state 86
	expression : expression LE . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 113


state 87
	expression : expression GE . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 114


state 88
	param_list : param ',' param_list .  (14)

	.  reduce 14


state 89
	expression : '(' expression ')' .  (74)

	.  reduce 74


state 90
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	selection_statement : IF '(' expression . ')' statement ELSE code_block
	selection_statement : IF '(' expression . ')' statement ELSE statement
	expression : expression . OR expression
	selection_statement : IF '(' expression . ')' code_block
	selection_statement : IF '(' expression . ')' code_block ELSE code_block
	selection_statement : IF '(' expression . ')' code_block ELSE statement
	selection_statement : IF '(' expression . ')' statement
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 115
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 91
	while_loop_statement : WHILE '(' expression . ')' statement
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	while_loop_statement : WHILE '(' expression . ')' code_block
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 116
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 92
	for_front : FOR '(' ';' . expression ';' ')'
	for_front : FOR '(' ';' . ';' expression ')'
	for_front : FOR '(' ';' . expression ';' expression ')'
	for_front : FOR '(' ';' . ';' ')'

	'('  shift 31
	'-'  shift 32
	';'  shift 117
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 118


state 93
	for_front : FOR '(' type . assignment_expression ';' ';' ')'
	for_front : FOR '(' type . assignment_expression ';' expression ';' ')'
	for_front : FOR '(' type . assignment_expression ';' expression ';' expression ')'
	for_front : FOR '(' type . assignment_expression ';' ';' expression ')'

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 119
	var_declarator  goto 48
	expression  goto 120


state 94
	for_front : FOR '(' expression . ';' expression ';' ')'
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	for_front : FOR '(' expression . ';' expression ';' expression ')'
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' expression . ';' ';' ')'
	expression : expression . '*' expression
	for_front : FOR '(' expression . ';' ';' expression ')'
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	';'  shift 121
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 95
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	io_statement : SCAN '(' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 122
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 96
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	io_statement : PRINT '(' expression . ')'
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 123
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 97
	var_declaration_list : var_declaration ',' . var_declaration_list

	ID  shift 38

	var_declaration  goto 66
	var_declaration_list  goto 124
	var_declarator  goto 68


state 98
	var_definition : type var_declaration_list ';' .  (52)

	.  reduce 52


state 99
	var_declaration : var_declarator '=' . expression

	'('  shift 31
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 125


100: shift-reduce conflict (shift 79, reduce 63) on '='
state 100
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression '%' expression .  (63)
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'='  shift 79
	'^'  shift 81
	.  reduce 63


101: shift-reduce conflict (shift 79, reduce 61) on '='
state 101
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression '*' expression .  (61)
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'='  shift 79
	'^'  shift 81
	.  reduce 61


102: shift-reduce conflict (shift 79, reduce 59) on '='
state 102
	expression : expression '+' expression .  (59)
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'/'  shift 76
	'='  shift 79
	'^'  shift 81
	.  reduce 59


103: shift-reduce conflict (shift 79, reduce 60) on '='
state 103
	expression : expression . '+' expression
	expression : expression '-' expression .  (60)
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'/'  shift 76
	'='  shift 79
	'^'  shift 81
	.  reduce 60


104: shift-reduce conflict (shift 79, reduce 62) on '='
state 104
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression '/' expression .  (62)
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'='  shift 79
	'^'  shift 81
	.  reduce 62


105: shift-reduce conflict (shift 79, reduce 64) on '='
state 105
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression '<' expression .  (64)
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'='  shift 79
	'^'  shift 81
	.  reduce 64


106: shift-reduce conflict (shift 72, reduce 57) on '%'
106: shift-reduce conflict (shift 73, reduce 57) on '*'
106: shift-reduce conflict (shift 74, reduce 57) on '+'
106: shift-reduce conflict (shift 75, reduce 57) on '-'
106: shift-reduce conflict (shift 76, reduce 57) on '/'
106: shift-reduce conflict (shift 78, reduce 57) on '<'
106: shift-reduce conflict (shift 79, reduce 57) on '='
106: shift-reduce conflict (shift 80, reduce 57) on '>'
106: shift-reduce conflict (shift 81, reduce 57) on '^'
106: shift-reduce conflict (shift 82, reduce 57) on OR
106: shift-reduce conflict (shift 83, reduce 57) on AND
106: shift-reduce conflict (shift 84, reduce 57) on EQ
106: shift-reduce conflict (shift 85, reduce 57) on NE
106: shift-reduce conflict (shift 86, reduce 57) on LE
106: shift-reduce conflict (shift 87, reduce 57) on GE
state 106
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression '=' expression .  (57)
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87
	.  reduce 57


107: shift-reduce conflict (shift 79, reduce 65) on '='
state 107
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression '>' expression .  (65)
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'='  shift 79
	'^'  shift 81
	.  reduce 65


108: shift-reduce conflict (shift 79, reduce 72) on '='
state 108
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression '^' expression .  (72)
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'='  shift 79
	'^'  shift 81
	.  reduce 72


109: shift-reduce conflict (shift 79, reduce 71) on '='
state 109
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression OR expression .  (71)
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87
	.  reduce 71


110: shift-reduce conflict (shift 79, reduce 70) on '='
state 110
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression AND expression .  (70)
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87
	.  reduce 70


111: shift-reduce conflict (shift 79, reduce 66) on '='
state 111
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression EQ expression .  (66)
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	LE  shift 86
	GE  shift 87
	.  reduce 66


112: shift-reduce conflict (shift 79, reduce 69) on '='
state 112
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression NE expression .  (69)
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	LE  shift 86
	GE  shift 87
	.  reduce 69


113: shift-reduce conflict (shift 79, reduce 67) on '='
state 113
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression LE expression .  (67)
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'='  shift 79
	'^'  shift 81
	.  reduce 67


114: shift-reduce conflict (shift 79, reduce 68) on '='
state 114
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression GE expression .  (68)
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'='  shift 79
	'^'  shift 81
	.  reduce 68


state 115
	selection_statement : IF '(' expression ')' . statement ELSE code_block
	selection_statement : IF '(' expression ')' . statement ELSE statement
	selection_statement : IF '(' expression ')' . code_block
	selection_statement : IF '(' expression ')' . code_block ELSE code_block
	selection_statement : IF '(' expression ')' . code_block ELSE statement
	selection_statement : IF '(' expression ')' . statement

	'('  shift 31
	'-'  shift 32
	IF  shift 33
	VOID  shift 1
	LBRACE  shift 22
	INT  shift 2
	WHILE  shift 34
	FOR  shift 35
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 36
	PRINT  shift 37
	ID  shift 38
	NUMBER  shift 39

	for_front  goto 40
	for_loop_statement  goto 41
	statement  goto 126
	assignment_expression  goto 43
	code_block  goto 127
	type  goto 44
	var_definition  goto 46
	io_statement  goto 47
	var_declarator  goto 48
	while_loop_statement  goto 49
	expression  goto 50
	selection_statement  goto 51


state 116
	while_loop_statement : WHILE '(' expression ')' . statement
	while_loop_statement : WHILE '(' expression ')' . code_block

	'('  shift 31
	'-'  shift 32
	IF  shift 33
	VOID  shift 1
	LBRACE  shift 22
	INT  shift 2
	WHILE  shift 34
	FOR  shift 35
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 36
	PRINT  shift 37
	ID  shift 38
	NUMBER  shift 39

	for_front  goto 40
	for_loop_statement  goto 41
	statement  goto 128
	assignment_expression  goto 43
	code_block  goto 129
	type  goto 44
	var_definition  goto 46
	io_statement  goto 47
	var_declarator  goto 48
	while_loop_statement  goto 49
	expression  goto 50
	selection_statement  goto 51


state 117
	for_front : FOR '(' ';' ';' . expression ')'
	for_front : FOR '(' ';' ';' . ')'

	'('  shift 31
	')'  shift 130
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 131


state 118
	for_front : FOR '(' ';' expression . ';' ')'
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' ';' expression . ';' expression ')'
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	';'  shift 132
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 119
	for_front : FOR '(' type assignment_expression . ';' ';' ')'
	expression : assignment_expression .  (58)
	for_front : FOR '(' type assignment_expression . ';' expression ';' ')'
	for_front : FOR '(' type assignment_expression . ';' expression ';' expression ')'
	for_front : FOR '(' type assignment_expression . ';' ';' expression ')'

	';'  shift 133
	.  reduce 58


state 120
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 121
	for_front : FOR '(' expression ';' . expression ';' ')'
	for_front : FOR '(' expression ';' . expression ';' expression ')'
	for_front : FOR '(' expression ';' . ';' ')'
	for_front : FOR '(' expression ';' . ';' expression ')'

	'('  shift 31
	'-'  shift 32
	';'  shift 134
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 135


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
	var_declaration : var_declarator '=' expression .  (56)
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87
	.  reduce 56


126: shift-reduce conflict (shift 136, reduce 78) on ELSE
state 126
	selection_statement : IF '(' expression ')' statement . ELSE code_block
	selection_statement : IF '(' expression ')' statement . ELSE statement
	selection_statement : IF '(' expression ')' statement .  (78)

	ELSE  shift 136
	.  reduce 78


127: shift-reduce conflict (shift 137, reduce 77) on ELSE
state 127
	selection_statement : IF '(' expression ')' code_block .  (77)
	selection_statement : IF '(' expression ')' code_block . ELSE code_block
	selection_statement : IF '(' expression ')' code_block . ELSE statement

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
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	for_front : FOR '(' ';' ';' expression . ')'
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 138
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 132
	for_front : FOR '(' ';' expression ';' . ')'
	for_front : FOR '(' ';' expression ';' . expression ')'

	'('  shift 31
	')'  shift 139
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 140


state 133
	for_front : FOR '(' type assignment_expression ';' . ';' ')'
	for_front : FOR '(' type assignment_expression ';' . expression ';' ')'
	for_front : FOR '(' type assignment_expression ';' . expression ';' expression ')'
	for_front : FOR '(' type assignment_expression ';' . ';' expression ')'

	'('  shift 31
	'-'  shift 32
	';'  shift 141
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 142


state 134
	for_front : FOR '(' expression ';' ';' . ')'
	for_front : FOR '(' expression ';' ';' . expression ')'

	'('  shift 31
	')'  shift 143
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 144


state 135
	for_front : FOR '(' expression ';' expression . ';' ')'
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	for_front : FOR '(' expression ';' expression . ';' expression ')'
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	';'  shift 145
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 136
	selection_statement : IF '(' expression ')' statement ELSE . code_block
	selection_statement : IF '(' expression ')' statement ELSE . statement

	'('  shift 31
	'-'  shift 32
	IF  shift 33
	VOID  shift 1
	LBRACE  shift 22
	INT  shift 2
	WHILE  shift 34
	FOR  shift 35
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 36
	PRINT  shift 37
	ID  shift 38
	NUMBER  shift 39

	for_front  goto 40
	for_loop_statement  goto 41
	statement  goto 146
	assignment_expression  goto 43
	code_block  goto 147
	type  goto 44
	var_definition  goto 46
	io_statement  goto 47
	var_declarator  goto 48
	while_loop_statement  goto 49
	expression  goto 50
	selection_statement  goto 51


state 137
	selection_statement : IF '(' expression ')' code_block ELSE . code_block
	selection_statement : IF '(' expression ')' code_block ELSE . statement

	'('  shift 31
	'-'  shift 32
	IF  shift 33
	VOID  shift 1
	LBRACE  shift 22
	INT  shift 2
	WHILE  shift 34
	FOR  shift 35
	STRUCT  shift 3
	LONGINT  shift 4
	DOUBLE  shift 5
	LONGLONGINT  shift 6
	FLOAT  shift 7
	BOOL  shift 8
	BYTE  shift 9
	SCAN  shift 36
	PRINT  shift 37
	ID  shift 38
	NUMBER  shift 39

	for_front  goto 40
	for_loop_statement  goto 41
	statement  goto 148
	assignment_expression  goto 43
	code_block  goto 149
	type  goto 44
	var_definition  goto 46
	io_statement  goto 47
	var_declarator  goto 48
	while_loop_statement  goto 49
	expression  goto 50
	selection_statement  goto 51


state 138
	for_front : FOR '(' ';' ';' expression ')' .  (50)

	.  reduce 50


state 139
	for_front : FOR '(' ';' expression ';' ')' .  (49)

	.  reduce 49


state 140
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	for_front : FOR '(' ';' expression ';' expression . ')'
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 150
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 141
	for_front : FOR '(' type assignment_expression ';' ';' . ')'
	for_front : FOR '(' type assignment_expression ';' ';' . expression ')'

	'('  shift 31
	')'  shift 151
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 152


state 142
	for_front : FOR '(' type assignment_expression ';' expression . ';' ')'
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	for_front : FOR '(' type assignment_expression ';' expression . ';' expression ')'
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	';'  shift 153
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 143
	for_front : FOR '(' expression ';' ';' ')' .  (47)

	.  reduce 47


state 144
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	for_front : FOR '(' expression ';' ';' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 154
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 145
	for_front : FOR '(' expression ';' expression ';' . ')'
	for_front : FOR '(' expression ';' expression ';' . expression ')'

	'('  shift 31
	')'  shift 155
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 156


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
	for_front : FOR '(' type assignment_expression ';' ';' ')' .  (48)

	.  reduce 48


state 152
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	for_front : FOR '(' type assignment_expression ';' ';' expression . ')'
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 157
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 153
	for_front : FOR '(' type assignment_expression ';' expression ';' . ')'
	for_front : FOR '(' type assignment_expression ';' expression ';' . expression ')'

	'('  shift 31
	')'  shift 158
	'-'  shift 32
	ID  shift 38
	NUMBER  shift 39

	assignment_expression  goto 43
	var_declarator  goto 48
	expression  goto 159


state 154
	for_front : FOR '(' expression ';' ';' expression ')' .  (44)

	.  reduce 44


state 155
	for_front : FOR '(' expression ';' expression ';' ')' .  (42)

	.  reduce 42


state 156
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	for_front : FOR '(' expression ';' expression ';' expression . ')'
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 160
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 157
	for_front : FOR '(' type assignment_expression ';' ';' expression ')' .  (45)

	.  reduce 45


state 158
	for_front : FOR '(' type assignment_expression ';' expression ';' ')' .  (43)

	.  reduce 43


state 159
	expression : expression . '+' expression
	expression : expression . '-' expression
	expression : expression . '/' expression
	expression : expression . '<' expression
	for_front : FOR '(' type assignment_expression ';' expression ';' expression . ')'
	expression : expression . '%' expression
	expression : expression . '>' expression
	expression : expression . '*' expression
	assignment_expression : expression . '=' expression
	expression : expression . LE expression
	expression : expression . GE expression
	expression : expression . EQ expression
	expression : expression . AND expression
	expression : expression . '^' expression
	expression : expression . OR expression
	expression : expression . NE expression

	'%'  shift 72
	')'  shift 161
	'*'  shift 73
	'+'  shift 74
	'-'  shift 75
	'/'  shift 76
	'<'  shift 78
	'='  shift 79
	'>'  shift 80
	'^'  shift 81
	OR  shift 82
	AND  shift 83
	EQ  shift 84
	NE  shift 85
	LE  shift 86
	GE  shift 87


state 160
	for_front : FOR '(' expression ';' expression ';' expression ')' .  (40)

	.  reduce 40


state 161
	for_front : FOR '(' type assignment_expression ';' expression ';' expression ')' .  (41)

	.  reduce 41


##############################################################################
# Summary
##############################################################################

State 58 contains 1 shift-reduce conflict(s)
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
State 126 contains 1 shift-reduce conflict(s)
State 127 contains 1 shift-reduce conflict(s)


43 token(s), 23 nonterminal(s)
83 grammar rule(s), 162 state(s)


##############################################################################
# End of File
##############################################################################
