CPP=g++

all: main.o
	$(CPP) -o linky src/main.o

main.o: src/main.cpp
	cd src && $(CPP) -c main.cpp

id3: id3_main
	$(CPP) -o id3 src/id3/main.o

id3_main: src/id3/main.cpp
	cd src/id3 && $(CPP) -c main.cpp

clean:
	cd src && rm -f *.o
