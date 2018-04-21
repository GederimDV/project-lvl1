#include <stdio.h>
#include "model/field.h"
#include "consoleView/view.h"
#include <stdlib.h> 

int main()
{

    struct Point point;
    point.line = 3;
    point.column = 2;
    
    int size = 3;
    char** field = createField(size);

    viewField(field, size);

    char** field2 = createField(5);

    viewField(field2, 5);

    deleteField(field, size);
    deleteField(field2, 5);

    printf("HEllo world\n");
    return 0;
}
