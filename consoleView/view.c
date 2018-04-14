#include <stdio.h>

void viewField(char ** field, int fieldSize)
{
    for(int i = 0; i < fieldSize; i++)
    {
        printf("| ");
        for(int j = 0; j < fieldSize; j++)
        {
            printf("%s | ", *field[i][j]);
        }
        printf("\n");
    }
}

