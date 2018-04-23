#ifndef FIELD
#define FIELD
#include "player.h"
#include <stdbool.h>

struct Point
{
    int line;
    int column;
};

char **createField(int size);
void deleteField(char **field, int size);
bool writeInField( char  **field, int fieldSize, struct Point point, struct Player player);

#endif 
