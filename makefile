all: prog5a

prog4a: prog5a.o
	g++ prog45.o -o prog4a
	
prog4a.o: prog5a.cpp
	g++ -c prog5a.cpp

clean:
	rm -rf *.o prog5a
	
