CC=g++
CFLAGS=-c -Wall -std=c++11
LDFLAGS=
MAP=Model/Map/Map.cpp Model/Map/Room.cpp
CHARACTER=Model/Character/Player.cpp Model/Character/Backpack.cpp
ITEMS=Model/Items/Item.cpp
MODEL=$(MAP) $(CHARACTER) $(ITEMS)
VIEW=View/UserInterface.cpp
VIEWMODEL=
TESTS=test.hpp
SOURCES=main.cpp $(MODEL) $(VIEW) $(VIEWMODEL) $(TESTS)
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
	rm ./Model/Map/*.o
	rm ./View/*.o
