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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 12/16/19
# Time: 01:25:31
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

   15  goto

   16  getchar

   17  int

   18  void

   19  struct

   20  long[ ]int

   21  double

   22  long[ ]long[ ]int

   23  float

   24  bool

   25  short

   26  byte

   27  scan

   28  print

   29  [A-Za-z_]([A-Za-z_]|[0-9])*

   30  [0-9]+(\.[0-9]+)?(E[+-]?[0-9]+)?

   31  "<"

   32  "<="

   33  "=="

   34  "!="

   35  ">"

   36  ">="

   37  "||"

   38  "&&"

   39  "("

   40  ")"

   41  "{"

   42  "}"

   43  "["

   44  "]"

   45  "="

   46  ";"

   47  "!"

   48  "+"

   49  "-"

   50  "*"

   51  "/"

   52  "%"

   53  "^"

   54  "|"

   55  "&"

   56  ","

   57  "."

   58  ":"

   59  "+="

   60  "-="

   61  "/="

   62  "*="

   63  "%="

   64  "--"

   65  "++"


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
	0x63               goto 24
	0x64               goto 29
	0x65               goto 30
	0x66               goto 31
	0x67               goto 32
	0x68               goto 24
	0x69               goto 33
	0x6a - 0x6b (2)    goto 24
	0x6c               goto 34
	0x6d - 0x6f (3)    goto 24
	0x70               goto 35
	0x71               goto 24
	0x72               goto 36
	0x73               goto 37
	0x74 - 0x75 (2)    goto 24
	0x76               goto 38
	0x77               goto 39
	0x78 - 0x7a (3)    goto 24
	0x7b               goto 40
	0x7c               goto 41
	0x7d               goto 42


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
	0x63               goto 24
	0x64               goto 29
	0x65               goto 30
	0x66               goto 31
	0x67               goto 32
	0x68               goto 24
	0x69               goto 33
	0x6a - 0x6b (2)    goto 24
	0x6c               goto 34
	0x6d - 0x6f (3)    goto 24
	0x70               goto 35
	0x71               goto 24
	0x72               goto 36
	0x73               goto 37
	0x74 - 0x75 (2)    goto 24
	0x76               goto 38
	0x77               goto 39
	0x78 - 0x7a (3)    goto 24
	0x7b               goto 40
	0x7c               goto 41
	0x7d               goto 42


state 3
	0x09 - 0x0a (2)    goto 3
	0x20               goto 3

	match 1


state 4
	0x3d               goto 43

	match 47


state 5
	0x00 - 0x09 (10)   goto 5
	0x0b - 0x21 (23)   goto 5
	0x22               goto 44
	0x23 - 0xff (221)  goto 5


state 6
	0x44               goto 45
	0x49               goto 46
	0x64               goto 47
	0x69               goto 48


state 7
	0x3d               goto 49

	match 52


state 8
	0x26               goto 50

	match 55


state 9
	0x00 - 0x09 (10)   goto 9
	0x0b - 0x26 (28)   goto 9
	0x27               goto 51
	0x28 - 0xff (216)  goto 9


state 10
	match 39


state 11
	match 40


state 12
	0x3d               goto 52

	match 50


state 13
	0x2b               goto 53
	0x3d               goto 54

	match 48


state 14
	match 56


state 15
	0x2d               goto 55
	0x3d               goto 56

	match 49


state 16
	match 57


state 17
	0x2a               goto 57
	0x2f               goto 58
	0x3d               goto 59

	match 51


state 18
	0x2e               goto 60
	0x30 - 0x39 (10)   goto 18
	0x41 - 0x44 (4)    goto 61
	0x45               goto 62
	0x46 - 0x5a (21)   goto 61
	0x5f               goto 61
	0x61 - 0x7a (26)   goto 61

	match 30


state 19
	match 58


state 20
	match 46


state 21
	0x00 - 0x09 (10)   goto 63
	0x0b - 0x3c (50)   goto 63
	0x3d               goto 64
	0x3e               goto 65
	0x3f - 0xff (193)  goto 63

	match 31


state 22
	0x3d               goto 66

	match 45


state 23
	0x3d               goto 67

	match 35


state 24
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 29


state 25
	match 43


state 26
	match 44


state 27
	match 53


state 28
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 68
	0x70 - 0x78 (9)    goto 24
	0x79               goto 69
	0x7a               goto 24

	match 29


state 29
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 70
	0x70 - 0x7a (11)   goto 24

	match 29


state 30
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 71
	0x6d - 0x7a (14)   goto 24

	match 29


state 31
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 72
	0x6d - 0x6e (2)    goto 24
	0x6f               goto 73
	0x70 - 0x7a (11)   goto 24

	match 29


state 32
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 74
	0x66 - 0x6e (9)    goto 24
	0x6f               goto 75
	0x70 - 0x7a (11)   goto 24

	match 29


state 33
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x65 (5)    goto 24
	0x66               goto 76
	0x67 - 0x6d (7)    goto 24
	0x6e               goto 77
	0x6f - 0x7a (12)   goto 24

	match 29


state 34
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 78
	0x70 - 0x7a (11)   goto 24

	match 29


state 35
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 79
	0x73 - 0x7a (8)    goto 24

	match 29


state 36
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 80
	0x66 - 0x7a (21)   goto 24

	match 29


state 37
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x62 (2)    goto 24
	0x63               goto 81
	0x64 - 0x67 (4)    goto 24
	0x68               goto 82
	0x69 - 0x73 (11)   goto 24
	0x74               goto 83
	0x75 - 0x7a (6)    goto 24

	match 29


state 38
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 84
	0x70 - 0x7a (11)   goto 24

	match 29


state 39
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x67 (7)    goto 24
	0x68               goto 85
	0x69 - 0x7a (18)   goto 24

	match 29


state 40
	match 41


state 41
	0x7c               goto 86

	match 54


state 42
	match 42


state 43
	match 34


state 44
	0x00 - 0x09 (10)   goto 5
	0x0b - 0x21 (23)   goto 5
	0x22               goto 44
	0x23 - 0xff (221)  goto 5

	match 5


state 45
	0x45               goto 87


state 46
	0x4e               goto 88


state 47
	0x65               goto 89


state 48
	0x6e               goto 90


state 49
	match 63


state 50
	match 38


state 51
	0x00 - 0x09 (10)   goto 9
	0x0b - 0x26 (28)   goto 9
	0x27               goto 51
	0x28 - 0xff (216)  goto 9

	match 6


state 52
	match 62


state 53
	match 65


state 54
	match 59


state 55
	match 64


state 56
	match 60


state 57
	0x00 - 0x29 (42)   goto 57
	0x2a               goto 91
	0x2b - 0xff (213)  goto 57


state 58
	0x00 - 0x09 (10)   goto 58
	0x0a               goto 92
	0x0b - 0xff (245)  goto 58


state 59
	match 61


state 60
	0x30 - 0x39 (10)   goto 93


state 61
	0x30 - 0x39 (10)   goto 61
	0x41 - 0x5a (26)   goto 61
	0x5f               goto 61
	0x61 - 0x7a (26)   goto 61

	match 9


state 62
	0x2b               goto 94
	0x2d               goto 94
	0x30 - 0x39 (10)   goto 61
	0x41 - 0x5a (26)   goto 61
	0x5f               goto 61
	0x61 - 0x7a (26)   goto 61

	match 9


state 63
	0x00 - 0x09 (10)   goto 63
	0x0b - 0x3d (51)   goto 63
	0x3e               goto 65
	0x3f - 0xff (193)  goto 63


state 64
	0x00 - 0x09 (10)   goto 63
	0x0b - 0x3d (51)   goto 63
	0x3e               goto 65
	0x3f - 0xff (193)  goto 63

	match 32


state 65
	0x00 - 0x09 (10)   goto 63
	0x0b - 0x3d (51)   goto 63
	0x3e               goto 65
	0x3f - 0xff (193)  goto 63

	match 7


state 66
	match 33


state 67
	match 36


state 68
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 95
	0x70 - 0x7a (11)   goto 24

	match 29


state 69
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 96
	0x75 - 0x7a (6)    goto 24

	match 29


state 70
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x74 (20)   goto 24
	0x75               goto 97
	0x76 - 0x7a (5)    goto 24

	match 29


state 71
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x72 (18)   goto 24
	0x73               goto 98
	0x74 - 0x7a (7)    goto 24

	match 29


state 72
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 99
	0x70 - 0x7a (11)   goto 24

	match 29


state 73
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 100
	0x73 - 0x7a (8)    goto 24

	match 29


state 74
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 101
	0x75 - 0x7a (6)    goto 24

	match 29


state 75
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 102
	0x75 - 0x7a (6)    goto 24

	match 29


state 76
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 10


state 77
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 103
	0x75 - 0x7a (6)    goto 24

	match 29


state 78
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 104
	0x6f - 0x7a (12)   goto 24

	match 29


state 79
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 105
	0x6a - 0x7a (17)   goto 24

	match 29


state 80
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 106
	0x75 - 0x7a (6)    goto 24

	match 29


state 81
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61               goto 107
	0x62 - 0x7a (25)   goto 24

	match 29


state 82
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 108
	0x70 - 0x7a (11)   goto 24

	match 29


state 83
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 109
	0x73 - 0x7a (8)    goto 24

	match 29


state 84
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 110
	0x6a - 0x7a (17)   goto 24

	match 29


state 85
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 111
	0x6a - 0x7a (17)   goto 24

	match 29


state 86
	match 37


state 87
	0x46               goto 112


state 88
	0x43               goto 113


state 89
	0x66               goto 114


state 90
	0x63               goto 115


state 91
	0x00 - 0x29 (42)   goto 57
	0x2a               goto 91
	0x2b - 0x2e (4)    goto 57
	0x2f               goto 116
	0x30 - 0xff (208)  goto 57


state 92
	match 2


state 93
	0x30 - 0x39 (10)   goto 93
	0x45               goto 117

	match 30


state 94
	0x30 - 0x39 (10)   goto 118


state 95
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 119
	0x6d - 0x7a (14)   goto 24

	match 29


state 96
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 120
	0x66 - 0x7a (21)   goto 24

	match 29


state 97
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61               goto 24
	0x62               goto 121
	0x63 - 0x7a (24)   goto 24

	match 29


state 98
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 122
	0x66 - 0x7a (21)   goto 24

	match 29


state 99
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61               goto 123
	0x62 - 0x7a (25)   goto 24

	match 29


state 100
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 13


state 101
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x62 (2)    goto 24
	0x63               goto 124
	0x64 - 0x7a (23)   goto 24

	match 29


state 102
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 125
	0x70 - 0x7a (11)   goto 24

	match 29


state 103
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 17


state 104
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x66 (6)    goto 24
	0x67               goto 126
	0x68 - 0x7a (19)   goto 24

	match 29


state 105
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 127
	0x6f - 0x7a (12)   goto 24

	match 29


state 106
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x74 (20)   goto 24
	0x75               goto 128
	0x76 - 0x7a (5)    goto 24

	match 29


state 107
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 129
	0x6f - 0x7a (12)   goto 24

	match 29


state 108
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 130
	0x73 - 0x7a (8)    goto 24

	match 29


state 109
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x74 (20)   goto 24
	0x75               goto 131
	0x76 - 0x7a (5)    goto 24

	match 29


state 110
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x63 (3)    goto 24
	0x64               goto 132
	0x65 - 0x7a (22)   goto 24

	match 29


state 111
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 133
	0x6d - 0x7a (14)   goto 24

	match 29


state 112
	0x49               goto 134


state 113
	0x4c               goto 135


state 114
	0x69               goto 136


state 115
	0x6c               goto 137


state 116
	match 3


state 117
	0x2b               goto 94
	0x2d               goto 94
	0x30 - 0x39 (10)   goto 118


state 118
	0x30 - 0x39 (10)   goto 118

	match 30


state 119
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 24


state 120
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 26


state 121
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 138
	0x6d - 0x7a (14)   goto 24

	match 29


state 122
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 11


state 123
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 139
	0x75 - 0x7a (6)    goto 24

	match 29


state 124
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x67 (7)    goto 24
	0x68               goto 140
	0x69 - 0x7a (18)   goto 24

	match 29


state 125
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 15


state 126
	0x20               goto 141
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 29


state 127
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 142
	0x75 - 0x7a (6)    goto 24

	match 29


state 128
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 143
	0x73 - 0x7a (8)    goto 24

	match 29


state 129
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 27


state 130
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 144
	0x75 - 0x7a (6)    goto 24

	match 29


state 131
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x62 (2)    goto 24
	0x63               goto 145
	0x64 - 0x7a (23)   goto 24

	match 29


state 132
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 18


state 133
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 146
	0x66 - 0x7a (21)   goto 24

	match 29


state 134
	0x4e               goto 147


state 135
	0x55               goto 148


state 136
	0x6e               goto 149


state 137
	0x75               goto 150


state 138
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 151
	0x66 - 0x7a (21)   goto 24

	match 29


state 139
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 23


state 140
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61               goto 152
	0x62 - 0x7a (25)   goto 24

	match 29


state 141
	0x69               goto 153
	0x6c               goto 154


state 142
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 28


state 143
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 155
	0x6f - 0x7a (12)   goto 24

	match 29


state 144
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 25


state 145
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 156
	0x75 - 0x7a (6)    goto 24

	match 29


state 146
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 12


state 147
	0x45               goto 157


state 148
	0x44               goto 158


state 149
	0x65               goto 157


state 150
	0x64               goto 159


state 151
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 21


state 152
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 160
	0x73 - 0x7a (8)    goto 24

	match 29


state 153
	0x6e               goto 161


state 154
	0x6f               goto 162


state 155
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 14


state 156
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 19


state 157
	match 4


state 158
	0x45               goto 163


state 159
	0x65               goto 163


state 160
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x5f               goto 24
	0x61 - 0x7a (26)   goto 24

	match 16


state 161
	0x74               goto 164


state 162
	0x6e               goto 165


state 163
	match 8


state 164
	match 20


state 165
	0x67               goto 166


state 166
	0x20               goto 167


state 167
	0x69               goto 168


state 168
	0x6e               goto 169


state 169
	0x74               goto 170


state 170
	match 22


#############################################################################
# Summary
#############################################################################

1 start state(s)
65 expression(s), 170 state(s)


#############################################################################
# End of File
#############################################################################
