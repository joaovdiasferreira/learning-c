#include <stdio.h>

void print1(int arr[][3]) {
	printf("%d\n", arr[0][0]);
}

void print2(int (* arr)[3]) {
	printf("%d\n", arr[0][0]);
}

int main() {

	int arr[][3] = {{1,2,3}, {4,5,6}};
	print1(arr);
	print2(arr);

	return 0;
}
