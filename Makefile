CC=gcc
CFLAGS=-I./include -std=gnu99 -Wall -g #-DDEBUG
LDFLAGS=

#CC=g++ -I ./include
#CFLAGS=-std=c++20 -Wall -g #-DDEBUG

INC=./include
SRC=./src
OBJ=./obj
DOC=./doc
BIN=./bin

vpath %.h ./include
vpath %.c ./src

EXECS = segfk

all: mkpaths $(EXECS)

mkpaths:
	@ mkdir -p $(OBJ)
	@ mkdir -p $(BIN)
doc:
	doxygen

segfk: segfk.c
	@ mkdir -p $(BIN)
	$(CC) $(CFLAGS) $(SRC)/segfk.c -o $(BIN)/$@ $(LDFLAGS)

.PHONY: clean
clean:
	/bin/rm -rf $(BIN)/* $(OBJ)/* core* *~ $(SRC)/*~ $(INC)/*~ $(DOC)/*

