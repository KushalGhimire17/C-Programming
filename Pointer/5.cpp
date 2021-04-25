/* Call by value */

#include<stdio.h>
void swap(int a, int b)
{
	int t;
	t = a;
	a = b;
	b =t;
	printf("\n After swapping a=%d b=%d",a,b);
}

int main()
{
	int a = 100;
	int b = 200;
	printf("\n Before swapping a=%d b=%d",a,b);
	swap(a,b);	//call by value

	return 0;
}
