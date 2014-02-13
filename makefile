#makefile

all: transposition-encr transposition-decr

transposition-encr: keyReader.o encrMain.o encrypt.o
	g++ encrMain.o keyReader.o encrypt.o -o transposition-encr

transposition-decr: keyReader.o decrMain.o decrypt.o
	g++ decrMain.o keyReader.o decrypt.o -o transposition-decr

decrMain.o: decrMain.cpp decrypt.h keyReader.h
	g++ -c decrMain.cpp decrypt.h keyReader.h

encrMain.o: encrMain.cpp encrypt.h keyReader.h
	g++ -c encrMain.cpp encrypt.h keyReader.h

decrypt.o: decrypt.h decrypt.cpp
	g++ -c decrypt.cpp decrypt.h -std=c++11

encrypt.o: encrypt.h encrypt.cpp
	g++ -c encrypt.cpp encrypt.h -std=c++11
	
keyReader.o: keyReader.cpp keyReader.h
	g++ -c keyReader.cpp keyReader.h
	
clean:
	rm -rf *.o crypto transposition-encr transposition-decr
