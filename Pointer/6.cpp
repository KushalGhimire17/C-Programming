/* Call by reference */

#include<stdio.h>
void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b =t;
}

int main()
{
	int a = 100;
	int b = 200;
	printf("\n Before swapping a=%d b=%d",a,b);
	swap(&a,&b);	//call by reference
	printf("\n After swapping a=%d b=%d",a,b);
	return 0;
}
