CC = gcc
CFLAGS = -std=c11 -Wall -Werror
RM = rm -f

default: all

all: build

build: rot13.c
	$(CC) $(CFLAGS) -o rot13 rot13.c

clean:
	$(RM) rot13

install: build
	cp rot13 $(HOME)/bin

