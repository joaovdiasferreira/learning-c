#include <stdio.h>

void staticClass() {

	int i;
	for (i=0; i<10; i++) {
		static int x = 10;
		int y = 5;

		x++;
		y++;

		printf("x in the %d° iteration= %d\n", i+1, x);
		printf("y in the %d° iteration= %d\n", i+1, y);
		printf("---------------------------\n");
	}


}



int main() {

	staticClass();

	return 0;
}
