CC=g++
CCFLAGS=

all:
	$(CC) $(CCFLAGS) src/calc.cpp -o calc

install: calc
	sudo mv calc /usr/bin

