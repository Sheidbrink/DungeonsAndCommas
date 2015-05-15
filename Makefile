CC=g++
CFLAGS=-c -Wall -std=c++11
LDFLAGS=
MAP=Model/Map/Room.cpp
CHARACTER=Model/Character/Player.cpp
TESTS=test.hpp
SOURCES=main.cpp $(MAP) $(CHARACTER) $(TESTS) UserInterface.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=Game

all:  $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm *.o Game
	rm ./Model/Character/*.o
