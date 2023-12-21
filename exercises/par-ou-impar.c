#include<stdio.h>

void checkNum(int num) {
    if(num % 2 == 0) {
        printf("This number is even\n");
    } else {
        printf("This number is odd\n");
    }
}

int main() {

    int num;
    printf("enter with a number: ");
    scanf("%d", &num);
    checkNum(num);

    return 0;
}
