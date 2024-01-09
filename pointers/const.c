#include <stdio.h>

int main(void){

	int a = 10;
	int b = 20;
	const int* ptr = &a; //poiter to constant
	ptr = &b; //it's fine
	//*ptr = 20; it's wrong

	int* const ptr2 = &a; // constant pointer
	//ptr2 = &b; will give error
	*ptr2 = 20; //it's okay

	const int c = 10;
	const int d = 20;
	const int* const ptr3 = &c; //constant pointer to a constant; 
	int const* ptr4 = &c;
	
	//ptr3 = &d; will give error
	//*ptr3 = 20; will give error

	ptr4 = &d; //it's okay
	//*ptr4 = 10; it's wrong
	return 0;

}
