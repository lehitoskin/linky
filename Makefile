CPP=g++

LINKY_CPP=main.cpp DList.cpp
LINKY_O=src/linky/main.o src/linky/DList.o

all: linky id3

linky: linky_main
	$(CPP) -o linky-bin $(LINKY_O)

linky_main: src/linky/main.cpp src/linky/DList.cpp
	cd src/linky && $(CPP) -c $(LINKY_CPP)

id3: id3_main
	$(CPP) -o id3-bin src/id3/main.o

id3_main: src/id3/main.cpp
	cd src/id3 && $(CPP) -c main.cpp

clean:
	find src/ -type f -iname "*.o" -print0 | xargs -0 rm -f *.o
