#include <stdio.h>
#include <stdlib.h> /*malloc и т.д*/
#include <stdbool.h>
#include "player.h"
#include "field.h"

/* Создает поле определенной размерности и заполняет его пробелами */
char **createField(int fieldSize)
{
    char **field = (char **)malloc(fieldSize * sizeof(char *));
    for(int line = 0; line < fieldSize; line++) 
    {
        field[line] = (char *)malloc(fieldSize * sizeof(char));
    }  
    
    for(int line = 0; line < fieldSize; line++)
    {
        for(int column = 0; column < fieldSize; column++)
        {
            field[line][column] = ' ';   /* Заполнение пробелами */ 
        }
    }

    return field;
}

/* Удаляет поле */
void deleteField(char ** field, int fieldSize)
{
    for(int line = 0; line < fieldSize; line++) 
    {
        free(field[line]);
    }
    free(field);
}

/*Метод записывает символ в свободную ячейку поля, возвращает результат 
 * записи. Структура плеер содержит символ записи. */
bool writeInField(char **field, int fieldSize, struct Point point, struct Player player)
{
    if((point.line < fieldSize) && (point.column < fieldSize) && (field[point.line][point.column] == ' ')) /*если ячейка пуста и не произошло выхода*/
    {
        field[point.line][point.column] = player.figure;
        return true;   /*Запись в поле прошла успешно*/
    }
    else 
        return false;  /*Ячейка занята символом или произошел выход*/
}
