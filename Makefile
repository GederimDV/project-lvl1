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

main.o: view model main.c
	$(CC) $(CFLAGS) -c main.c -o ./build/main.o

model: field.o
view: consoleView.o

consoleView.o: ./consoleView/view.c ./consoleView/view.h
	$(CC) $(CFLAGS) -c ./consoleView/view.c -o $(PATH_BUILD_CON_VIEW)view.o

field.o: ./model/field.c ./model/field.h
	$(CC) $(CFLAGS) -c ./model/field.c -o $(PATH_BUILD_MODEL)field.o

clean:
	$(CLEAN) $(OBJECTS) $(PROG_NAME)
