#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k = 0, num = 10;
	int size[2] = {2,4};
	int* jagged[2];
	jagged[0] = malloc(sizeof(int)*size[0]);
	jagged[1] = malloc(sizeof(int)*size[1]);

	for (i=0; i<2; i++) {
		int* ptr = jagged[i]; //row0 and row1
		
		for (j=0; j<size[k]; j++) { //j<2 and j<4
			*ptr = num++;
			ptr++;
		}
		k++;
	}

	k=0;
	for (i=0; i<2; i++) {
		int* ptr = jagged[i]; //row0 and row1
		
		for (j=0; j<size[k]; j++) { //j<2 and j<4
			printf("%d ", *ptr); 
			ptr++;
		}
		printf("\n");
		k++;
	}



	return 0;
}
