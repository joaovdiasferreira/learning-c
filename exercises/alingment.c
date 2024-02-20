#include <stdio.h>
typedef struct Sla {
	char a;
	short int b;
	int c;
} Sla;

int main() {
	
	int a = 10, b = 5, c = 20;

	Sla sla;

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("%lu\n", sizeof(sla));
	return 0;
}
