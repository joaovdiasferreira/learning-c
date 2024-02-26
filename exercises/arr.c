#include <stdio.h>
#include <stdlib.h>

#define INITIAL_SIZE 10
typedef struct {
	size_t size;
	size_t capacity;
	int* array;
} arr;

//initial steps
void initArr(arr** arr_ptr);
void freeArr(arr* container);

//basic operations
void insertItem(arr* container, int item);
void updateItem(arr* container, int index, int newItem);
int getItem(arr* container, int index);
void deleteItem(arr* container, int index);

void printArr(arr* container);

int main() {
	
	arr* array;
	initArr(&array);
	for (int i = 0; i<=10; i++) {
		insertItem(array, i);	
	}

	printf("array[%d]: %d\n", 3, getItem(array, 3));
	printArr(array);

	for (int i = 0; i<=10; i++) {
		updateItem(array, i, i+1);	
	}
	printf("array[%d]: %d\n", 3, getItem(array, 3));
	printArr(array);

	for (int i = 5; i<11; i++) {
		deleteItem(array, 5);
	}
	printArr(array);

	freeArr(array);

	return 0;
}


//initialization of array
void initArr(arr** arr_ptr) {
	arr* container;
	container = (arr*)(malloc(sizeof(arr)));
	if(!container) { printf("failed to allocate. \n"); exit(0); }

	container->size = 0;
	container->capacity = INITIAL_SIZE;
	container->array = (int*)(malloc(INITIAL_SIZE * sizeof(int)));	
	if(!container->array) { printf("failed to allocate array. \n"); exit(0); }

	*arr_ptr = container;
}


//insertion of itens 
void insertItem(arr* container, int item) {
	if(container->size == container->capacity) {
		int* temp = container->array;
		container->capacity <<= 1;
		container->array = realloc(container->array, container->capacity * sizeof(int));
		
		if(!container) { printf("out of memory.\n"); container->array = temp; return; }

	}

	container->array[container->size++] = item;
}


//get specific item from array
int getItem(arr* container, int index) {

	if(index >= container->size) { printf("index out of bounds.\n"); return -1;}
	
	return container->array[index];
}


//update specific item from array
void updateItem(arr* container, int index, int newItem){

	if(index >= container->size) { printf("index out of bounds.\n"); return;}
	
	container->array[index] = newItem;
}


//delete specific item from array
void deleteItem(arr* container, int index){

	if(index >= container->size) { printf("index out of bounds.\n"); return;}

	for (int i = index; i < container->size; i++) {
		container->array[i] = container->array[i+1];
	}
	container->size--;
}

//print array and additional informations
void printArr(arr* container) {	
	printf("array elements: ");

	for (int i = 0; i < container->size; i++) {
		printf("%d ", container->array[i]);
	}

	printf("\nSize: %lu", container->size);
	printf("\nCapacity: %lu\n", container->capacity);
	printf("\n");
}


void freeArr(arr* container) {
	free(container->array);
	free(container);
	printf("array freed successfully.\n");
}
