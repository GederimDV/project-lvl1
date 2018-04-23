#include <stdio.h>
#include "model/field.h"
#include "consoleView/view.h"
#include <stdlib.h> 
#include "model/player.h"

int main()
{
    /* т.к. в этой игре не может быть больше двух игроков */
    struct Player player1; 
    player1.name = "Player 1"; //Функция которая запрашивает и возвращает имя
    player1.figure = 'X'; //Лучше конечно сделать enum

    struct Player player2;
    player2.name = "Player 2";
    player2.figure = 'O';

    struct Point point;
    point.line = 2;
    point.column = 2;
    
    int fieldSize = 3;//запрос размеров таблицы
    char** field = createField(fieldSize);
    viewField(field, fieldSize);

    writeInField(field, fieldSize, point, player1);
    
    viewField(field, fieldSize);

    return 0;
}
