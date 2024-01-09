#include <stdio.h>

int func(int a, int b) {
	return a+b;
}

int main() {

	printf("adress of func: %p\n", &func);
	printf("adress of func: %p\n", func);

	return 0;
}
