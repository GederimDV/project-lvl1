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
    
}
