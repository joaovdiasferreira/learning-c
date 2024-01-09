#include <stdio.h>


int main() {

	int (*ptr)[5];
	int* p;
	int arr[] = {1,2,3,4,5};

	p = arr;
	ptr = &arr;

	printf("p: %p\n"
				"ptr: %p\n", p, ptr);

	p++;
	ptr++;
	printf("p: %p\n"
				"ptr: %p\n", p, ptr);

	printf("%p, %p\n", arr, arr+1);
	printf("%p, %p\n", &arr, &arr+1);
	return 0;
}
