#include <stdio.h>
#include <stdlib.h>


int main() {

	int rows, cols, i, j, count;
	
	printf("type number of rows and columns: \n");
	printf("rows: ");
	scanf("%d", &rows);
	printf("\ncolumns: ");	
	scanf("%d", &cols);
	printf("\n");

	int** arr = (int**)(malloc(rows*sizeof(int*)));
	for (i=0; i<rows; i++) {
		arr[i] = (int*)(malloc(cols*sizeof(int)));
	}

	count = 0;
	for (i=0; i<rows; i++) {
		for (j=0;j<cols;j++) {
			*(*(arr+i)+j) = ++count; //or arr[i,j]
		}
	}
	
	for (i=0; i<rows; i++) {
		for (j=0;j<cols;j++) {
			printf("arr[%d][%d]: %d\n", i,j, arr[i][j]);
		}
	}


	

	return 0;
}
