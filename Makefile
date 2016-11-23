CPP=g++

all: linky id3

linky: linky_main
	$(CPP) -o linky-bin src/linky/main.o

linky_main: src/linky/main.cpp
	cd src/linky && $(CPP) -c main.cpp

id3: id3_main
	$(CPP) -o id3-bin src/id3/main.o

id3_main: src/id3/main.cpp
	cd src/id3 && $(CPP) -c main.cpp

clean:
	find src/ -type f -iname "*.o" -print0 | xargs -0 rm -f *.o
