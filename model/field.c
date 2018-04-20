#include <stdio.h>
#include <stdlib.h> /*malloc и т.д*/

char **createField(int fieldSize)
{
    char **field = (char **)malloc(fieldSize * sizeof(char *));
    for(int line = 0; line < fieldSize; line++) 
    {
        field[line] = (char *)malloc(fieldSize * sizeof(char));
    }  
    
    for(int line = 0; line < fieldSize; line++)
    {
        for(int column = 0; column < fieldSize; column++)
        {
            field[line][column] = ' ';   /* Заполнение пробелами */ 
        }
    }

    return field;
}

void deleteField(char ** field, int fieldSize)
{
    for(int line = 0; line < fieldSize; line++) 
    {
        free(field[line]);
    }
    free(field);
}


