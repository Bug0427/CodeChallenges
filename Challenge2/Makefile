main: main.o LargestElement.o
	g++ -o main -std=c++11 main.o LargestElement.o

main.o: main.cpp LargestElement.h
	g++ -c -std=c++11 main.cpp

LargestElement.o: LargestElement.cpp LargestElement.h
	g++ -c -std=c++11 LargestElement.cpp

clean:
	rm -f *.o main