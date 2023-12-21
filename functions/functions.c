#include <stdio.h>
#include <stdlib.h>

void outer() {

    printf("in outer\n");
    void inner(){

        printf("in inner\n");
    }

    inner()
}


int main(int argc, char *argv[]) {

    /*if (argc!=3) {
        printf("please, enter with 2 numbers\n");
        return -1;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    printf("soma: %d\n", x+y);*/





    return 0;
}
