CC=g++
CFLAGS=-c -Wall -std=c++11
LDFLAGS=
CHARACTER=Model/Character/Player.cpp
SOURCES=main.cpp $(CHARACTER) UserInterface.cpp
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
