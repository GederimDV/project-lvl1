#include <stdio.h>
#include "model/field.h"
#include "consoleView/view.h"
#include <stdlib.h> 

int main()
{
    int size = 3;
    char** field = 0;
    field = createField(size);

    //viewField(field, size);

    //field = (char **)malloc(size * sizeof(char *));
    //for(int i = 0; i < size; i++)
    //{
    //    field[i] = (char *)malloc(size * sizeof(char));
    //}

    viewField(field, size);

    deleteField(field, size);

    printf("HEllo world\n");
    return 0;
}
