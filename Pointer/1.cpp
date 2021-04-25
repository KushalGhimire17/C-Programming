/* Pointer Basic */

#include<stdio.h>

int main()
{
	// simple integer value declaration
	int a;
	
	// pointer integer declaration
	int *p;
	
	// assign value of a to address of p
	p = &a;
	
	//initialization of simple integer variable
	a = 5;
	
	//output of different variables
	printf("\n The value of *p is %d ", *p);		//dereferencing
	printf("\n The address of &a is %d ", &a);
	printf("\n The address of &p is %d ", &p);
	printf("\n The address of p is %d ", p);
	
	return 0;
}
