#include <stdio.h>


int main(void)
{
	
	int arr[2][3] = {{1,2,3}, {4,5,6}};

	int arr3[3][3][3] = { 
												{ { 1,2,3 },{ 4,5,6 },{ 7,8,9 } }, 
												{ { 10,11,12 }, { 13,14,15 }, {16, 17, 18 } },
												{ { 19, 20, 21}, { 22, 23, 24 }, { 25, 26, 27} }
											}; 


	int i, j, k;
	for (i=0; i<=1; i++) {
		for (j=0; j<=2; j++) {
			printf("arr[%d][%d]: %d\n", i,j, arr[i][j]);
		}
	}

	printf("\n");	
	printf("array 3d:\n");
	

	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			for (k=0;k<3; k++) {
				printf("arr3[%d][%d][%d]: %d\n", i,j,k, arr3[i][j][k]);

			}
		}
					
	}

	return 0;
}
