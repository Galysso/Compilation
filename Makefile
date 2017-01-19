CXX = g++
SOURCES = Operations/Operation.cpp Operations/Concatenation.cpp
CFLAGS = -Wall -g -O3
LDFLAGS =
.PHONY = clean

all: main

main: $(SOURCES:.cpp=.o) $(LDFLAGS)

clean: 
	rm ./Operations/*.o
