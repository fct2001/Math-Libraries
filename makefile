complex.o:
	g++ -c complex/complex.cpp
main: complex.o
	g++ -c main.cpp
	g++ -o main main.o complex.o
clean:
	rm -f main *.o