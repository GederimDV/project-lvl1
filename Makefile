CC=gcc
MAKE=make
CFLAGS=-g -Wall
CLEAN=rm -f
PROG_NAME=project_lvl1
PATH_BUILD_MODEL=./build/model/
PATH_BUILD_CON_VIEW=./build/consoleView/
OBJECTS=$(PATH_BUILD_MODEL)*.o $(PATH_BUILD_CON_VIEW)*.o ./build/main.o

prog: main.o 
	$(CC) $(CFLAGS) $(OBJECTS) -o $(PROG_NAME) 

main.o: view model ./src/main.c
	$(CC) $(CFLAGS) -c ./src/main.c -o ./build/main.o

model: field.o
view: consoleView.o

consoleView.o: ./src/consoleView/view.c ./src/consoleView/view.h
	$(CC) $(CFLAGS) -c ./src/consoleView/view.c -o $(PATH_BUILD_CON_VIEW)view.o

field.o: ./src/model/field.c ./src/model/field.h
	$(CC) $(CFLAGS) -c ./src/model/field.c -o $(PATH_BUILD_MODEL)field.o

clean:
	$(CLEAN) $(OBJECTS) $(PROG_NAME)
