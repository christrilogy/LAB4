all: prog4a

prog4a: prog4a.o
	g++ prog4a.o -o prog4a
	
prog4a.o: prog4a.cpp
	g++ -c prog4a.cpp

clean:
	rm -rf *.o prog4a
	
