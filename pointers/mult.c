#include <stdio.h>

int main() {


	int arr[3][4] = { {10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33} };

	int (*ptr)[4] = arr;

	printf("arr[0][0]: %d\n"
			"arr[1][3]: %d\n"
			"arr[2][1]: %d\n", **ptr, *(*(ptr+1) + 3), *(*(ptr+2)+1));


	return 0;
}
