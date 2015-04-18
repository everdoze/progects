all: pr3

pr3: main.o getAnswer.o
	g++ main.o getAnswer.o -o pr3

main.o: main.cpp
	g++ main.cpp -o main.o

getAnswer.o: getAnswer.ASM
	fasm getAnswer.ASM