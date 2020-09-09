output: main.o Animal.o Zebra.o Tiger.o Penguin.o Turtle.o Zoo.o
	g++ -std=c++11 main.o Animal.o Zebra.o Tiger.o Penguin.o Turtle.o Zoo.o -g -o Project2

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Animal.o:
	g++ -std=c++11 -c Animal.cpp

Zebra.o: 
	g++ -std=c++11 -c Zebra.cpp

Tiger.o: 
	g++ -std=c++11 -c Tiger.cpp

Penguin.o: 
	g++ -std=c++11 -c Penguin.cpp

Turtle.o: 
	g++ -std=c++11 -c Turtle.cpp

Zoo.o: 
	g++ -std=c++11 -c Zoo.cpp

clean:
	rm *.o Project2
