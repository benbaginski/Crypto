#makefile

all: crypto

crypto: keyReader.o main.o
	g++ main.o keyReader.o -o crypto
	
main.o: main.cpp
	g++ -c main.cpp
	
keyReader.o: keyReader.cpp keyReader.h
	g++ -c keyReader.cpp keyReader.h -std=c++11
	
clean:
	rm -rf *.o crypto 