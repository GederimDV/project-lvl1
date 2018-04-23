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



}
