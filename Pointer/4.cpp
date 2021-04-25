/* WAP to input n numbers, allocate memory dynamically and display the largest one using pointer */
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
	// variable declaration
	int n,*p,i,h=0;
	
	// input logic for 'n' number
	printf("\nHOW MANY NUMBERS: ");
	scanf("%d",&n);
	
	// The malloc() function reserves a block of memory of the specified number of bytes. And, it returns a pointer of void which can be casted into pointers of any form.
	p=(int *) malloc(n*2);

	// checking validity of address assigned
	if(p==NULL)
	{
		printf("\nMEMORY ALLOCATION UNSUCCCESSFUL");
		exit(0);
	}
	
	// Main input logic
	for(i=0;i<n;i++)
	{
		printf("\nENTER NUMBER %d: ",i+1);
		scanf("%d",(p+i));
	}
	
	// Comparison logic
	h=*p;
	for(i=1;i<n;i++)
	{
		if(*(p+i)>h)
			h=*(p+i);
	}
	
	//display logic
	printf("\nTHE HIGHEST NUMBER IS %d",h);
	
	getch();
	return 0;
}
