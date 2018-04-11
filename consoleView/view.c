#include <stdio.h>
#include <stdlib.h>
main()
{
	int N,i,j;
	scanf("%d", &N);
	char A[N][N];
	for (i = 0; i < N; i++){
	for (j = 0; j < N; j++){
		/*A[i][j] = 10 + rand()% (20-10+1);*/
		if (j == 1){
			A[i][j] = *("|");
		}
		else if (j == 3) {
			A[i][j] = *("|");
		}
                else {
                        A[i][j] = *("-");
                }
		if (i == 1 && j != 1) {
        	        A[i][j] = *("_");
	        }
       		else if (i == 3 && j != 3) {
               		A[i][j] = *("_");
        	}
        	else {
            	    A[i][j] = *("-");
        	}

		printf("%c", A[i][j]);
		}
	puts("\n");
}
printf("%d ", A[0][1]); //Проверка
	return 0;
}
/*Хуево оформлен смотри мой код*/

void viewField(char ** A, int fieldSize)
{
    for(int i = 0; i < fieldSize; i++)
    {
        printf("| ");
        for(int j = 0; j < fieldSize; j++)
        {
            printf("%s |",field[i][j])      
        }
        printf("\n");
    }
}

/*Должно быть примерно вот так*/
