/* WAP to CREATE a file named test.txt and DISPLAY content of this file  */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	FILE *fptr;
	char s[100];
	fptr = fopen("test.txt","r");
	if(fptr==NULL)
	{
		printf("\n File cannot be opened.");
		exit(1);
	}
	
	fgets(s,100,fptr);
	printf("\n The text from file is : \t%s",s);
	fclose(fptr);
	getch();
	return 0;
}
