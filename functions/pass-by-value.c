#include<stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Swap: a = %d, b = %d\n", a, b);
}


int main() {

    int a = 10, b = 20;
    swap(a, b);
    printf("Main: a = %d, b = %d\n", a, b);
    /* the output will show that the values are passed by value, which means that,
    for example, in a scanf() funcion, it's required pass the adress of the variable,
    else, the c compiler won't be abble to modifie the value */
    return 0;
}