#ifndef FIELD
#define FIELD

char **createField(int size);
void deleteField(char **field, int size);

struct Point
{
    int line;
    int column;
};

#endif 
