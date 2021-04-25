/* WAP to CREATE a file named test.txt and write text "Hello World" to this file */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	fptr = fopen("test.txt","w");
	if(fptr==NULL)
	{
		printf("\n File cannot be created.");
		exit(1);
	}
	else
	{
		printf("File has been successfully created");
	}
	
	fputs("Hello World",fptr);
	fclose(fptr);
	return 0;
}
