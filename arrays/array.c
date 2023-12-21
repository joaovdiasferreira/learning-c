#include <stdio.h>

int main()
{

	int arr[] = {5, 10, 15, 20, 25};

	int* ptr1 = arr;
	int* ptr2 = &arr[0];	
	printf("ptr1: %p\n", ptr1);
	printf("ptr2: %p\n", ptr2);
	//output will be the same, when an array is passed as argument it decays to a pointer
	

	int arr2[] = {1,2,3,4,5};
	int* ptr3 = arr2;

	printf("Array in index 3: %d\n", arr2[3]);
	printf("Array in index 3 using ptr: %d\n", *(ptr3 + 3));

	return 0;
}
