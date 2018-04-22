#include <stdio.h>

void viewField(char ** field, int fieldSize)
{
    for(int line = 0; line < fieldSize; line++)
    {
        printf("| ");
        for(int column = 0; column < fieldSize; column++)
        {
            printf("%c | ", field[line][column]);
        }
        printf("\n");
    }
    printf("\n");
}


