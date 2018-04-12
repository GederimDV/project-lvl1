#include <stdio.h>

void viewField(char ** field, int fieldSize)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < fieldSize; i++)
    {
        printf("| ");
        for(j = 0; j < fieldSize; j++)
        {
            printf("%d |",field[i][j]);
        }
        printf("\n");
    }
}

