#include <stdio.h>

int main() {

	int arr[] = {1,2,3,4,5,6};

	printf("size of arr: %lu\n", sizeof(arr));
	printf("number of elements using sizeof: %lu\n", sizeof(arr)/sizeof(arr[0]));
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	printf("number of elements using poiter: %lu\n", *(&arr+1)-arr);


	return 0;

}
