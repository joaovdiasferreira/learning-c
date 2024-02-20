#include <stdio.h>
#include <stdlib.h>


int main() {

	int rows = 3, cols = 4, i, j, count = 0;

	int** arr = (int**)(malloc(rows + sizeof(int*) + rows*cols*sizeof(int))); //size of row pointers and 2d array
	int* ptr = (int*)(arr+rows); //ptr will point to first location after row pointers

	for (i=0; i<rows; i++) {
		arr[i] = (ptr+cols*i); //each row pointer will point to i-th col
	}


	for (i=0; i<rows; i++) {
		for (j=0; j<cols; j++) {
			arr[i][j] = count;
			count++;
		}
	}

	for (i=0; i<rows; i++) {
		for (j=0; j<cols; j++) {
			printf("arr[%d][%d]: %d\n", i,j,arr[i][j]);
		}
	}

	return 0;
}
