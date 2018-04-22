#include <stdio.h>

void viewField(char ** field, int fieldSize)
{
    for(int line = 0; line < fieldSize; line++)
    {
        printf("| ");
        for(int column = 0; column < fieldSize; column++)
        {
            printf("%c | ", field[line][column]);
        }
        printf("\n");
    }
    printf("\n");
}

/*------------мой вариант---------------

#include <stdio.h>
#include <stdlib.h>
main()
{
	int N,i,j;
	char A[7];
	puts("-------");
	for (i = 0; i < 3; i++){
	for (j = 0; j < 7; j++){
		if (j == 0 || j == 2 || j == 4 || j == 6) {
			A[j] = *("|");
		}
                else {
                        A[j] = *("#");
                }
		
		printf("%c", A[j]);
		}

	printf("\n-------\n");
}
	return 0;
}

