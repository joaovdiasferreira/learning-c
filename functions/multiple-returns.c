#include<stdio.h>

typedef struct greaterSmaller
{
    int greater, smaller;
} Struct;

Struct defineGreaterSmaller(int a, int b) {
    Struct s;
    if (a>b) {
        s.greater = a;
        s.smaller = b;
    } else {
        s.greater = b;
        s.smaller = a;
    }
    return s;
}

void pGreaterSmaller(int a, int b, int* greater, int* smaller) {
    if (a>b) {
        *greater = a;
        *smaller = b;
    } else {
        *greater = b;
        *smaller = a;
    }
}
void arrGreaterSmaller(int a, int b, int arr[]) {
    if (a>b) {
        arr[0] = a;
        arr[1] = b;
    } else {
        arr[0] = b;
        arr[1] = a;
    }
}

int main() {

    //using array
    int p = 70, q = 30;
    int arr[2];

    printf("using array:\n");
    arrGreaterSmaller(p, q, arr);
    printf("greater: %d, smaller: %d\n", arr[0], arr[1]);

    //using structs
    Struct result;
    int x = 10, y = 20;

    printf("using struct: \n");
    result = defineGreaterSmaller(x, y);
    printf("greater: %d, smaller: %d\n", result.greater, result.smaller);
    printf("\n");

    //using pointer
    int great, small;
    int m = 40, n = 60;

    printf("using pointers: \n");
    pGreaterSmaller(m,n, &great, &small);
    printf("greater: %d, smaller: %d\n", great, small);
    printf("\n");


    return 0;
}