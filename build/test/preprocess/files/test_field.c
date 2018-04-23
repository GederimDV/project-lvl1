#include "build/temp/_test_field.c"
#include "field.h"
#include "unity.h"


void test_createField_deleteField(void )

{

    int fieldSize = 3;

    char **field = createField(fieldSize);

    for(int line=0; line < fieldSize; line++)

    {

        for(int column=0; column < fieldSize; column++)

        {

            UnityAssertEqualNumber((UNITY_INT)((' ')), (UNITY_INT)((field[line][column])), (

           ((void *)0)

           ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

        }

    }



    deleteField(field, fieldSize);

    field = 

           ((void *)0)

               ;

    UnityAssertEqualNumber((UNITY_INT)((

   ((void *)0)

   )), (UNITY_INT)((field)), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);



    fieldSize = 10;

    field = createField(fieldSize);

    for(int line=0; line < fieldSize; line++)

    {

        for(int column=0; column < fieldSize; column++)

        {

            UnityAssertEqualNumber((UNITY_INT)((' ')), (UNITY_INT)((field[line][column])), (

           ((void *)0)

           ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

        }

    }



    deleteField(field, fieldSize);

    field = 

           ((void *)0)

               ;

    UnityAssertEqualNumber((UNITY_INT)((

   ((void *)0)

   )), (UNITY_INT)((field)), (

   ((void *)0)

   ), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

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



    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((writeInField(field, fieldSize, point, player1))), (

   ((void *)0)

   ), (UNITY_UINT)(46), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((writeInField(field, fieldSize, point, player1))), (

   ((void *)0)

   ), (UNITY_UINT)(47), UNITY_DISPLAY_STYLE_INT);

    point.line = 3;

    point.column =3;

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((writeInField(field, fieldSize, point, player1))), (

   ((void *)0)

   ), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);





}
