CC=g++
CFLAGS=-c -Wall -std=c++11
LDFLAGS=
GAME=
MAP=Model/Map/Map.cpp Model/Map/Room.cpp
CHARACTER=Model/Character/Player.cpp Model/Character/Backpack.cpp
ITEMS=Model/Items/Item.cpp
MODEL=$(GAME) $(MAP) $(CHARACTER) $(ITEMS)
VIEW=View/UserInterface.cpp
VIEWMODEL=ViewModel/Commands.cpp
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
	rm ./Model/Items/*.o
	rm ./View/*.o
	rm ./ViewModel/*.o
#	rm ./Model/*.o
