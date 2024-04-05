main : Adder.o Calculator.o main.o
	g++ Adder.o Calculator.o main.o -o main

Adder.o : Adder.cpp
	g++ -c Adder.cpp

Calculator.o : Calculator.cpp
	g++ -c Calculator.cpp

main.o : main.cpp
	g++ -c main.cpp

clean :
	rm * .o main
