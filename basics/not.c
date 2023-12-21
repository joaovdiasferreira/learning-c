#include<stdio.h>

void trueFalse(int a) {
    if (!a) {
            printf("a is zero\n");
        } else {
            printf("a is different of zero\n");
        }
}

int main() {

    unsigned int x = 4;
    printf("signed x: %d\n", ~x);
    printf("unsigned x: %u\n", ~x);

    trueFalse(0);
    trueFalse(10);
    
    return 0;
}