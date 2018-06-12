INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
LIB_DIR = lib
BIN = bin

CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -I$(INC_DIR)
ARCHIEVE = ar

linux: mathbasic.a mathbasic.so prog_estatico prog_dinamico

mathbasic.a: $(SRC_DIR)/mathbasic.cpp $(INC_DIR)/mathbasic.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/mathbasic.cpp -o $(OBJ_DIR)/mathbasic.o 
	$(ARCHIEVE) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/mathbasic.o
	@echo "+++ [Biblioteca estática criada em $(LIB_DIR)/$@] +++"

mathbasic.so: $(SRC_DIR)/mathbasic.cpp $(INC_DIR)/mathbasic.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/mathbasic.cpp -o $(OBJ_DIR)/mathbasic.o 
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/mathbasic.o
	@echo "+++ [Biblioteca dinâmica criada em $(LIB_DIR)/$@] +++"

prog_estatico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mathbasic.a -o $(BIN)/$@

prog_dinamico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/mathbasic.so -o $(BIN)/$@

clean:
	rm build/*.o