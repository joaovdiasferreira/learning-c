#include <stdio.h>

void print(int* arr[4]) {
	int i;
	for (i=0; i<4; i++) {
		printf("arr[%d]: %d\n", i, *arr[i]);
	}

}


int main() {

	int a = 1, b = 2, c = 3, d = 4;
	int* arr[] = {&a, &b, &c, &d};
	print(arr);

	return 0;
}
