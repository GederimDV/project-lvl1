#ifndef FIELD
#define FIELD

char **createField(int size);
void deleteField(char **field, int size);
bool writeInField( char  **field, struct Point point, struct Player player);
struct Point
{
    int line;
    int column;
};

#endif 
