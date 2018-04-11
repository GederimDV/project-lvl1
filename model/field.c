#include <stdio.h>
#include <stdlib.h> /*malloc и т.д*/
#include "field.h"

char** createField(int size)
{
    char **field = (char **)malloc(size * sizeof(char *));
    for(int i = 0; i < size; i++) 
    {
        field[i] = (char *)malloc(size * sizeof(char));
    }
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; i < size; j++)
                field[i][j] = ' ';   /* Заполнение пробелами */ 
    }

    return field;
}

void deleteField(char ** field, int size)
{
    for(int i = 0; i < size; i++) 
    {
        free(field[i]);

    }
    free(field);
}
