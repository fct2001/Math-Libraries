complex.o:
	g++ -c complex/complex.cpp
vector.o:
	g++ -c vector/vector.cpp
matrix.o:
	g++ -c matrix/matrix.cpp
main: complex.o vector.o matrix.o
	g++ -c main.cpp
	g++ -o main main.o complex.o vector.o matrix.o
clean:
	rm -f main *.o