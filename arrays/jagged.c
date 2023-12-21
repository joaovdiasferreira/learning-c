#include <stdio.h>


int main() {
	int i,j;
	int size[2] = {2,4};
	int row0[2] = {1,2};
	int row1[4] = {3,4,5,6};
	int* jagged[2] = {row0, row1}, k = 0;

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
