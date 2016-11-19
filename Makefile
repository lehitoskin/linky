CPP=g++

all: main.o
	$(CPP) -o linky src/main.o

main.o: src/main.cpp
	cd src && $(CPP) -c main.cpp

clean:
	cd src && rm -f *.o
