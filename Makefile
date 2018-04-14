CC=gcc
MAKE=make
CLEAN=rm -f
PROGRAM_NAME=project_lvl1
PATH_BUILD_MODEL=./build/model/
PATH_BUILD_CON_VIEW=./build/consoleView/
OBJECTS=$(PATH_BUILD_MODEL)*.o $(PATH_BUILD_CON_VIEW)*.o

all: main
	$(CC) -o $(PROGRAM_NAME) $(OBJECTS) ./build/main.o

main: main.c consoleView model 
	$(CC) -c main.c -o ./build/main.o

consoleView: ./consoleView/view.c ./consoleView/view.h
	$(CC) -c ./consoleView/view.c -o $(PATH_BUILD_CON_VIEW)view.o

model: ./model/field.c ./model/field.h
	$(CC) -c ./model/field.c -o $(PATH_BUILD_MODEL)field.o

