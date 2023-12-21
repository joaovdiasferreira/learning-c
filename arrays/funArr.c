#include <stdio.h>

void printArr(int m, int n, int arr[][n]) {
	int i,j;
	for (i=0; i<m; i++) {
		printf("row %d: ", i);
		for (j=0; j<n; j++) {
			printf(" %d,", arr[i][j]);
		}
		printf("\n");
	}

}

int main() {

	int m = 2, n = 3;
	int arr[][3] = {{1,2,3}, {4,5,6}};
	printArr(m, n, arr);

	return 0;
}
