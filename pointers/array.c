#include <stdio.h>

int add(int a, int b) {return a+b;}
int sub(int a, int b) {return a-b;}
int mult(int a, int b) {return a*b;}

int main() {
	unsigned int ch;
	int (*funArr[3])(int, int) = {add, sub, mult};

	printf("choice: 0 for add, 1 for sub, 2 for mult: ");
	scanf("%d", &ch);

	if (ch<=2) {
		printf("%d\n", (funArr[ch])(10,5));
	}
	return 0;
}

