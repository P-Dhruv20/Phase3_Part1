miniL.y: CPPFLAGS-=-Wwrite-strings
all:
	bison -v -d --file-prefix=y miniL.y
	flex miniL.lex
	g++ -std=c++11 -o parser y.tab.c lex.yy.c -lfl
