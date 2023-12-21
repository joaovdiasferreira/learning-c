#include <stdio.h>

int main()
{

    char str[50];
    int age;
    int* adr_age = &age;    
    printf("Enter your name: ");
    // read a string
    fgets(str, sizeof(str), stdin); 
    
    printf("Enter your age: ");
    scanf("%d", adr_age);

    printf("Your name is: ");
    // display the string
    puts(str);  
    printf("Your age is: %d\n", age);
    return 0;
}