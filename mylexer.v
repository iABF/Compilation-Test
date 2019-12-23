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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 12/23/19
# Time: 11:11:25
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

   19  [A-Za-z_]([A-Za-z_]|[0-9])*

   20  [0-9]+

   21  "<"

   22  "<="

   23  "=="

   24  "!="

   25  ">"

   26  ">="

   27  "||"

   28  "&&"

   29  "("

   30  ")"

   31  "{"

   32  "}"

   33  "["

   34  "]"

   35  "="

   36  ";"

   37  "!"

   38  "+"

   39  "-"

   40  "*"

   41  "/"

   42  "%"

   43  "^"

   44  "|"

   45  "&"

   46  ","

   47  "."

   48  ":"

   49  "+="

   50  "-="

   51  "/="

   52  "*="

   53  "%="

   54  "--"

   55  "++"


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
	0x6a - 0x71 (8)    goto 24
	0x72               goto 32
	0x73               goto 33
	0x74 - 0x75 (2)    goto 24
	0x76               goto 34
	0x77               goto 35
	0x78 - 0x7a (3)    goto 24
	0x7b               goto 36
	0x7c               goto 37
	0x7d               goto 38


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
	0x6a - 0x71 (8)    goto 24
	0x72               goto 32
	0x73               goto 33
	0x74 - 0x75 (2)    goto 24
	0x76               goto 34
	0x77               goto 35
	0x78 - 0x7a (3)    goto 24
	0x7b               goto 36
	0x7c               goto 37
	0x7d               goto 38


state 3
	0x09 - 0x0a (2)    goto 3
	0x20               goto 3

	match 1


state 4
	0x3d               goto 39

	match 37


state 5
	0x00 - 0x09 (10)   goto 5
	0x0b - 0x21 (23)   goto 5
	0x22               goto 40
	0x23 - 0xff (221)  goto 5


state 6
	0x44               goto 41
	0x49               goto 42
	0x64               goto 43
	0x69               goto 44


state 7
	0x3d               goto 45

	match 42


state 8
	0x26               goto 46

	match 45


state 9
	0x00 - 0x09 (10)   goto 9
	0x0b - 0x26 (28)   goto 9
	0x27               goto 47
	0x28 - 0xff (216)  goto 9


state 10
	match 29


state 11
	match 30


state 12
	0x3d               goto 48

	match 40


state 13
	0x2b               goto 49
	0x3d               goto 50

	match 38


state 14
	match 46


state 15
	0x2d               goto 51
	0x3d               goto 52

	match 39


state 16
	match 47


state 17
	0x2a               goto 53
	0x2f               goto 54
	0x3d               goto 55

	match 41


state 18
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x5a (26)   goto 56
	0x5f               goto 56
	0x61 - 0x7a (26)   goto 56

	match 20


state 19
	match 48


state 20
	match 36


state 21
	0x00 - 0x09 (10)   goto 57
	0x0b - 0x3c (50)   goto 57
	0x3d               goto 58
	0x3e               goto 59
	0x3f - 0xff (193)  goto 57

	match 21


state 22
	0x3d               goto 60

	match 35


state 23
	0x3d               goto 61

	match 25


state 24
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 19


state 25
	match 33


state 26
	match 34


state 27
	match 43


state 28
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 62
	0x70 - 0x7a (11)   goto 24

	match 19


state 29
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 63
	0x6d - 0x7a (14)   goto 24

	match 19


state 30
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 64
	0x70 - 0x7a (11)   goto 24

	match 19


state 31
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x65 (5)    goto 24
	0x66               goto 65
	0x67 - 0x6d (7)    goto 24
	0x6e               goto 66
	0x6f - 0x7a (12)   goto 24

	match 19


state 32
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 67
	0x66 - 0x7a (21)   goto 24

	match 19


state 33
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 68
	0x75 - 0x7a (6)    goto 24

	match 19


state 34
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 69
	0x70 - 0x7a (11)   goto 24

	match 19


state 35
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x67 (7)    goto 24
	0x68               goto 70
	0x69 - 0x7a (18)   goto 24

	match 19


state 36
	match 31


state 37
	0x7c               goto 71

	match 44


state 38
	match 32


state 39
	match 24


state 40
	0x00 - 0x09 (10)   goto 5
	0x0b - 0x21 (23)   goto 5
	0x22               goto 40
	0x23 - 0xff (221)  goto 5

	match 5


state 41
	0x45               goto 72


state 42
	0x4e               goto 73


state 43
	0x65               goto 74


state 44
	0x6e               goto 75


state 45
	match 53


state 46
	match 28


state 47
	0x00 - 0x09 (10)   goto 9
	0x0b - 0x26 (28)   goto 9
	0x27               goto 47
	0x28 - 0xff (216)  goto 9

	match 6


state 48
	match 52


state 49
	match 55


state 50
	match 49


state 51
	match 54


state 52
	match 50


state 53
	0x00 - 0x29 (42)   goto 53
	0x2a               goto 76
	0x2b - 0xff (213)  goto 53


state 54
	0x00 - 0x09 (10)   goto 54
	0x0a               goto 77
	0x0b - 0xff (245)  goto 54


state 55
	match 51


state 56
	0x30 - 0x39 (10)   goto 56
	0x41 - 0x5a (26)   goto 56
	0x5f               goto 56
	0x61 - 0x7a (26)   goto 56

	match 9


state 57
	0x00 - 0x09 (10)   goto 57
	0x0b - 0x3d (51)   goto 57
	0x3e               goto 59
	0x3f - 0xff (193)  goto 57


state 58
	0x00 - 0x09 (10)   goto 57
	0x0b - 0x3d (51)   goto 57
	0x3e               goto 59
	0x3f - 0xff (193)  goto 57

	match 22


state 59
	0x00 - 0x09 (10)   goto 57
	0x0b - 0x3d (51)   goto 57
	0x3e               goto 59
	0x3f - 0xff (193)  goto 57

	match 7


state 60
	match 23


state 61
	match 26


state 62
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 78
	0x70 - 0x7a (11)   goto 24

	match 19


state 63
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x72 (18)   goto 24
	0x73               goto 79
	0x74 - 0x7a (7)    goto 24

	match 19


state 64
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 80
	0x73 - 0x7a (8)    goto 24

	match 19


state 65
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 10


state 66
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 81
	0x75 - 0x7a (6)    goto 24

	match 19


state 67
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 82
	0x75 - 0x7a (6)    goto 24

	match 19


state 68
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 83
	0x73 - 0x7a (8)    goto 24

	match 19


state 69
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 84
	0x6a - 0x7a (17)   goto 24

	match 19


state 70
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 85
	0x6a - 0x7a (17)   goto 24

	match 19


state 71
	match 27


state 72
	0x46               goto 86


state 73
	0x43               goto 87


state 74
	0x66               goto 88


state 75
	0x63               goto 89


state 76
	0x00 - 0x29 (42)   goto 53
	0x2a               goto 76
	0x2b - 0x2e (4)    goto 53
	0x2f               goto 90
	0x30 - 0xff (208)  goto 53


state 77
	match 2


state 78
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 91
	0x6d - 0x7a (14)   goto 24

	match 19


state 79
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 92
	0x66 - 0x7a (21)   goto 24

	match 19


state 80
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 13


state 81
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 15


state 82
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x74 (20)   goto 24
	0x75               goto 93
	0x76 - 0x7a (5)    goto 24

	match 19


state 83
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x74 (20)   goto 24
	0x75               goto 94
	0x76 - 0x7a (5)    goto 24

	match 19


state 84
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x63 (3)    goto 24
	0x64               goto 95
	0x65 - 0x7a (22)   goto 24

	match 19


state 85
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 96
	0x6d - 0x7a (14)   goto 24

	match 19


state 86
	0x49               goto 97


state 87
	0x4c               goto 98


state 88
	0x69               goto 99


state 89
	0x6c               goto 100


state 90
	match 3


state 91
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 18


state 92
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 11


state 93
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 101
	0x73 - 0x7a (8)    goto 24

	match 19


state 94
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x62 (2)    goto 24
	0x63               goto 102
	0x64 - 0x7a (23)   goto 24

	match 19


state 95
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 16


state 96
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 103
	0x66 - 0x7a (21)   goto 24

	match 19


state 97
	0x4e               goto 104


state 98
	0x55               goto 105


state 99
	0x6e               goto 106


state 100
	0x75               goto 107


state 101
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 108
	0x6f - 0x7a (12)   goto 24

	match 19


state 102
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 109
	0x75 - 0x7a (6)    goto 24

	match 19


state 103
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 12


state 104
	0x45               goto 110


state 105
	0x44               goto 111


state 106
	0x65               goto 110


state 107
	0x64               goto 112


state 108
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 14


state 109
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 17


state 110
	match 4


state 111
	0x45               goto 113


state 112
	0x65               goto 113


state 113
	match 8


#############################################################################
# Summary
#############################################################################

1 start state(s)
55 expression(s), 113 state(s)


#############################################################################
# End of File
#############################################################################
