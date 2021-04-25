/* Pointer Arithmetic */

#include<stdio.h>

int main()
{
	// simple integer value declaration and initialization
	int a = 5;
	
	// pointer integer declaration
	int *p;
	
	// assign value of a to address of p
	p = &a;
	
	//output of different variables
	printf("\n The address of p is %d ", p);
	printf("\n The size of integer is %d bytes",sizeof(int));
	printf("\n The address of p+1 is %d ", p+1);
	
	return 0;
}
