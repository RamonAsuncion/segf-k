CFLAGS=-Isrc -Wall -Wextra # -g -DDEBUG
SRC=src
BIN=bin

demo: src/main.c src/segfk.c src/segfk.h | mkbin
	$(CC) $(CFLAGS) src/main.c src/segfk.c -o $(BIN)/demo

mkbin:
	@ mkdir -p $(BIN)

doc:
	doxygen

.PHONY: demo mkbin doc clean
clean:
	@ rm -rf $(BIN)/* core* *~ src/*~ docs/* *.dSYM

