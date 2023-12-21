#include <stdio.h>
#include <stdlib.h>



int main(void)
{

	int i,j,rows;

	printf("quantas linhas terá a piramide? \n");
	scanf("%d", &rows);

	for (i=1;i<=rows;i++) {
		for (j = rows-i;j>=1;j--) {
			printf(" ");
		}		
		for (j=1;j<=i*2-1;j++) {
			printf("*");
		}	
		printf("\n");
	}


	return EXIT_SUCCESS;
}
