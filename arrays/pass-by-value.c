#include <stdio.h>


#define SIZE 5

typedef struct arrWrapper {
	int arr[SIZE];
} arrWrapper;

void fun(arrWrapper new) {
	int i;
	
	printf("In fun() before modification: \n");
	for (i=0; i<SIZE; i++) {
		printf("%d ", new.arr[i]);
	}
	printf("\n\n");


	for (i=0; i<SIZE; i++) {
		new.arr[i] = 100;
	}


	printf("In fun() after modification: \n");
	for (i=0; i<SIZE; i++) {
		printf("%d ", new.arr[i]);
	}
	printf("\n");
	
}

int main() {
	
	int i;
	arrWrapper list;
	for (i=0; i<SIZE; i++) {
		list.arr[i] = 10;
	}

	fun(list);

	printf("\n\nIn main after fun() call: \n");
	for (i=0; i<SIZE; i++) {
		printf("%d ", list.arr[i]);
	}
	printf("\n");
	
	
	return 0;
}
