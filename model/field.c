#include <stdio.h>
#include <stdlib.h> /*malloc и т.д*/
#include "field.h"

char** createField(int size)
{
    int *a = (int *) malloc(10 * sizeof(*a));//память для 10 элеметов типа int 

    if(a == 0)
        printf("Память какого-то хрена не выделилась");
    free(a);
    
    char **field = (char **)malloc(size * sizeof(char *));
    for(char i = 0; i < size; i++) 
    {
        field[i] = (char *)malloc(size * sizeof(char));
    }
//тут тип заполнение '\0'
    return field;
}

void deleteField(char ** field, int size)
{

}
