#include "unity.h"
#include "field.h"

void test_createField_deleteField(void )
{
    int fieldSize = 3;
    char **field = createField(fieldSize);
    for(int line=0; line < fieldSize; line++)
    {
        for(int column=0; column < fieldSize; column++)
        {
            TEST_ASSERT_EQUAL(' ', field[line][column]);
        }
    }

    deleteField(field, fieldSize);
    field = NULL;
    TEST_ASSERT_EQUAL(NULL, field);

    fieldSize = 10;
    field = createField(fieldSize);
    for(int line=0; line < fieldSize; line++)
    {
        for(int column=0; column < fieldSize; column++)
        {
            TEST_ASSERT_EQUAL(' ', field[line][column]);
        }
    }

    deleteField(field, fieldSize);
    field = NULL;
    TEST_ASSERT_EQUAL(NULL, field);
}

void test_writeInField(void)
{
    int fieldSize = 3;
    char **field = createField(fieldSize);
    struct Player player1;
    player1.name = "Player 1";
    player1.figure = 'X';
    struct Point point;
    point.line = 1;
    point.column = 1;

    TEST_ASSERT_EQUAL(true, writeInField(field, fieldSize, point, player1));
    TEST_ASSERT_EQUAL(false, writeInField(field, fieldSize, point, player1));
    point.line = 3; 
    point.column =3; 
    TEST_ASSERT_EQUAL(false, writeInField(field, fieldSize, point, player1));

}
