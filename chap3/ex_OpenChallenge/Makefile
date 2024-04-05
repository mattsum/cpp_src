main : Exp.o main.o
	g++ Exp.o main.o -o main

Exp.o : Exp.cpp
	g++ -c Exp.cpp

main.o : main.cpp
	g++ -c main.cpp

clean :
	rm *.o main