#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 96 of your 30 day trial period.
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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 12/20/19
# Time: 23:38:41
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [ \t\n]+

    2  \/\/(.)*\n

    3  \/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/

    4  (#define)|(#DEFINE)

    5  \"(.)*\"

    6  \'(.)*\'

    7  \<(.)*\>

    8  (#include)|(#INCLUDE)

    9  [0-9]+[A-Za-z_]+([A-Za-z_]|[0-9])*

   10  if

   11  else

   12  while

   13  for

   14  return

   15  int

   16  void

   17  struct

   18  bool

   19  scan

   20  print

   21  [A-Za-z_]([A-Za-z_]|[0-9])*

   22  [0-9]+

   23  "<"

   24  "<="

   25  "=="

   26  "!="

   27  ">"

   28  ">="

   29  "||"

   30  "&&"

   31  "("

   32  ")"

   33  "{"

   34  "}"

   35  "["

   36  "]"

   37  "="

   38  ";"

   39  "!"

   40  "+"

   41  "-"

   42  "*"

   43  "/"

   44  "%"

   45  "^"

   46  "|"

   47  "&"

   48  ","

   49  "."

   50  ":"

   51  "+="

   52  "-="

   53  "/="

   54  "*="

   55  "%="

   56  "--"

   57  "++"


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09 - 0x0a (2)    goto 3
	0x20               goto 3
	0x21               goto 4
	0x22               goto 5
	0x23               goto 6
	0x25               goto 7
	0x26               goto 8
	0x27               goto 9
	0x28               goto 10
	0x29               goto 11
	0x2a               goto 12
	0x2b               goto 13
	0x2c               goto 14
	0x2d               goto 15
	0x2e               goto 16
	0x2f               goto 17
	0x30 - 0x39 (10)   goto 18
	0x3a               goto 19
	0x3b               goto 20
	0x3c               goto 21
	0x3d               goto 22
	0x3e               goto 23
	0x41 - 0x5a (26)   goto 24
	0x5b               goto 25
	0x5d               goto 26
	0x5e               goto 27
	0x5f               goto 24
	0x61               goto 24
	0x62               goto 28
	0x63 - 0x64 (2)    goto 24
	0x65               goto 29
	0x66               goto 30
	0x67 - 0x68 (2)    goto 24
	0x69               goto 31
	0x6a - 0x6f (6)    goto 24
	0x70               goto 32
	0x71               goto 24
	0x72               goto 33
	0x73               goto 34
	0x74 - 0x75 (2)    goto 24
	0x76               goto 35
	0x77               goto 36
	0x78 - 0x7a (3)    goto 24
	0x7b               goto 37
	0x7c               goto 38
	0x7d               goto 39


state 2
	^INITIAL

	0x09 - 0x0a (2)    goto 3
	0x20               goto 3
	0x21               goto 4
	0x22               goto 5
	0x23               goto 6
	0x25               goto 7
	0x26               goto 8
	0x27               goto 9
	0x28               goto 10
	0x29               goto 11
	0x2a               goto 12
	0x2b               goto 13
	0x2c               goto 14
	0x2d               goto 15
	0x2e               goto 16
	0x2f               goto 17
	0x30 - 0x39 (10)   goto 18
	0x3a               goto 19
	0x3b               goto 20
	0x3c               goto 21
	0x3d               goto 22
	0x3e               goto 23
	0x41 - 0x5a (26)   goto 24
	0x5b               goto 25
	0x5d               goto 26
	0x5e               goto 27
	0x5f               goto 24
	0x61               goto 24
	0x62               goto 28
	0x63 - 0x64 (2)    goto 24
	0x65               goto 29
	0x66               goto 30
	0x67 - 0x68 (2)    goto 24
	0x69               goto 31
	0x6a - 0x6f (6)    goto 24
	0x70               goto 32
	0x71               goto 24
	0x72               goto 33
	0x73               goto 34
	0x74 - 0x75 (2)    goto 24
	0x76               goto 35
	0x77               goto 36
	0x78 - 0x7a (3)    goto 24
	0x7b               goto 37
	0x7c               goto 38
	0x7d               goto 39


state 3
	0x09 - 0x0a (2)    goto 3
	0x20               goto 3

	match 1


state 4
	0x3d               goto 40

	match 39


state 5
	0x00 - 0x09 (10)   goto 5
	0x0b - 0x21 (23)   goto 5
	0x22               goto 41
	0x23 - 0xff (221)  goto 5


state 6
	0x44               goto 42
	0x49               goto 43
	0x64               goto 44
	0x69               goto 45


state 7
	0x3d               goto 46

	match 44


state 8
	0x26               goto 47

	match 47


state 9
	0x00 - 0x09 (10)   goto 9
	0x0b - 0x26 (28)   goto 9
	0x27               goto 48
	0x28 - 0xff (216)  goto 9


state 10
	match 31


state 11
	match 32


state 12
	0x3d               goto 49

	match 42


state 13
	0x2b               goto 50
	0x3d               goto 51

	match 40


state 14
	match 48


state 15
	0x2d               goto 52
	0x3d               goto 53

	match 41


state 16
	match 49


state 17
	0x2a               goto 54
	0x2f               goto 55
	0x3d               goto 56

	match 43


state 18
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 57
	0x5f               goto 57
	0x61 - 0x7a (26)   goto 57

	match 22


state 19
	match 50


state 20
	match 38


state 21
	0x00 - 0x09 (10)   goto 58
	0x0b - 0x3c (50)   goto 58
	0x3d               goto 59
	0x3e               goto 60
	0x3f - 0xff (193)  goto 58

	match 23


state 22
	0x3d               goto 61

	match 37


state 23
	0x3d               goto 62

	match 27


state 24
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 21


state 25
	match 35


state 26
	match 36


state 27
	match 45


state 28
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 63
	0x70 - 0x7a (11)   goto 24

	match 21


state 29
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 64
	0x6d - 0x7a (14)   goto 24

	match 21


state 30
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 65
	0x70 - 0x7a (11)   goto 24

	match 21


state 31
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x65 (5)    goto 24
	0x66               goto 66
	0x67 - 0x6d (7)    goto 24
	0x6e               goto 67
	0x6f - 0x7a (12)   goto 24

	match 21


state 32
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 68
	0x73 - 0x7a (8)    goto 24

	match 21


state 33
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 69
	0x66 - 0x7a (21)   goto 24

	match 21


state 34
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x62 (2)    goto 24
	0x63               goto 70
	0x64 - 0x73 (16)   goto 24
	0x74               goto 71
	0x75 - 0x7a (6)    goto 24

	match 21


state 35
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 72
	0x70 - 0x7a (11)   goto 24

	match 21


state 36
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x67 (7)    goto 24
	0x68               goto 73
	0x69 - 0x7a (18)   goto 24

	match 21


state 37
	match 33


state 38
	0x7c               goto 74

	match 46


state 39
	match 34


state 40
	match 26


state 41
	0x00 - 0x09 (10)   goto 5
	0x0b - 0x21 (23)   goto 5
	0x22               goto 41
	0x23 - 0xff (221)  goto 5

	match 5


state 42
	0x45               goto 75


state 43
	0x4e               goto 76


state 44
	0x65               goto 77


state 45
	0x6e               goto 78


state 46
	match 55


state 47
	match 30


state 48
	0x00 - 0x09 (10)   goto 9
	0x0b - 0x26 (28)   goto 9
	0x27               goto 48
	0x28 - 0xff (216)  goto 9

	match 6


state 49
	match 54


state 50
	match 57


state 51
	match 51


state 52
	match 56


state 53
	match 52


state 54
	0x00 - 0x29 (42)   goto 54
	0x2a               goto 79
	0x2b - 0xff (213)  goto 54


state 55
	0x00 - 0x09 (10)   goto 55
	0x0a               goto 80
	0x0b - 0xff (245)  goto 55


state 56
	match 53


state 57
	0x30 - 0x39 (10)   goto 57
	0x41 - 0x5a (26)   goto 57
	0x5f               goto 57
	0x61 - 0x7a (26)   goto 57

	match 9


state 58
	0x00 - 0x09 (10)   goto 58
	0x0b - 0x3d (51)   goto 58
	0x3e               goto 60
	0x3f - 0xff (193)  goto 58


state 59
	0x00 - 0x09 (10)   goto 58
	0x0b - 0x3d (51)   goto 58
	0x3e               goto 60
	0x3f - 0xff (193)  goto 58

	match 24


state 60
	0x00 - 0x09 (10)   goto 58
	0x0b - 0x3d (51)   goto 58
	0x3e               goto 60
	0x3f - 0xff (193)  goto 58

	match 7


state 61
	match 25


state 62
	match 28


state 63
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 81
	0x70 - 0x7a (11)   goto 24

	match 21


state 64
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x72 (18)   goto 24
	0x73               goto 82
	0x74 - 0x7a (7)    goto 24

	match 21


state 65
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 83
	0x73 - 0x7a (8)    goto 24

	match 21


state 66
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 10


state 67
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 84
	0x75 - 0x7a (6)    goto 24

	match 21


state 68
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 85
	0x6a - 0x7a (17)   goto 24

	match 21


state 69
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 86
	0x75 - 0x7a (6)    goto 24

	match 21


state 70
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61               goto 87
	0x62 - 0x7a (25)   goto 24

	match 21


state 71
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 88
	0x73 - 0x7a (8)    goto 24

	match 21


state 72
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 89
	0x6a - 0x7a (17)   goto 24

	match 21


state 73
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 90
	0x6a - 0x7a (17)   goto 24

	match 21


state 74
	match 29


state 75
	0x46               goto 91


state 76
	0x43               goto 92


state 77
	0x66               goto 93


state 78
	0x63               goto 94


state 79
	0x00 - 0x29 (42)   goto 54
	0x2a               goto 79
	0x2b - 0x2e (4)    goto 54
	0x2f               goto 95
	0x30 - 0xff (208)  goto 54


state 80
	match 2


state 81
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 96
	0x6d - 0x7a (14)   goto 24

	match 21


state 82
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 97
	0x66 - 0x7a (21)   goto 24

	match 21


state 83
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 13


state 84
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 15


state 85
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 98
	0x6f - 0x7a (12)   goto 24

	match 21


state 86
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x74 (20)   goto 24
	0x75               goto 99
	0x76 - 0x7a (5)    goto 24

	match 21


state 87
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 100
	0x6f - 0x7a (12)   goto 24

	match 21


state 88
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x74 (20)   goto 24
	0x75               goto 101
	0x76 - 0x7a (5)    goto 24

	match 21


state 89
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x63 (3)    goto 24
	0x64               goto 102
	0x65 - 0x7a (22)   goto 24

	match 21


state 90
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 103
	0x6d - 0x7a (14)   goto 24

	match 21


state 91
	0x49               goto 104


state 92
	0x4c               goto 105


state 93
	0x69               goto 106


state 94
	0x6c               goto 107


state 95
	match 3


state 96
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 18


state 97
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 11


state 98
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 108
	0x75 - 0x7a (6)    goto 24

	match 21


state 99
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 109
	0x73 - 0x7a (8)    goto 24

	match 21


state 100
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 19


state 101
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x62 (2)    goto 24
	0x63               goto 110
	0x64 - 0x7a (23)   goto 24

	match 21


state 102
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 16


state 103
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 111
	0x66 - 0x7a (21)   goto 24

	match 21


state 104
	0x4e               goto 112


state 105
	0x55               goto 113


state 106
	0x6e               goto 114


state 107
	0x75               goto 115


state 108
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 20


state 109
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 116
	0x6f - 0x7a (12)   goto 24

	match 21


state 110
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 117
	0x75 - 0x7a (6)    goto 24

	match 21


state 111
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 12


state 112
	0x45               goto 118


state 113
	0x44               goto 119


state 114
	0x65               goto 118


state 115
	0x64               goto 120


state 116
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 14


state 117
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 17


state 118
	match 4


state 119
	0x45               goto 121


state 120
	0x65               goto 121


state 121
	match 8


#############################################################################
# Summary
#############################################################################

1 start state(s)
57 expression(s), 121 state(s)


#############################################################################
# End of File
#############################################################################
