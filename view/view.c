#include <stdio.h>
#include <stdlib.h>
main()
{
	int N,i,j;
	char A[7];
	puts("-------");
	for (i = 0; i < 3; i++){
	for (j = 0; j < 7; j++){
		if (j == 0){
			A[j] = *("|");
		}
		else if (j == 2) {
			A[j] = *("|");
		}
		else if (j == 4) {
			A[j] = *("|");
		}
		else if (j == 6) {
			A [j] = *("|");
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
