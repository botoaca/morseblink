CC = gcc
CFLAGS = -Wall

all: build build/output

build:
	mkdir build

build/output: build/main.o build/util.o build/morse.o
	$(CC) $(CFLAGS) $^ -o $@

build/main.o: src/main.c
	$(CC) $(CFLAGS) -c $< -o $@

build/util.o: src/util.c src/include/util.h
	$(CC) $(CFLAGS) -c $< -o $@

build/morse.o: src/morse.c src/include/morse.h
	$(CC) $(CFLAGS) -c $< -o $@