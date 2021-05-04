#include<stdio.h>
#include<conio.h>
struct date
{
	int  day;
	int month;
	int year;
};
struct student 
{
	char name[20];
	int id;
	float salary;
	struct date d;
};

int main ()
{
	struct student s[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("\n enter  name :\n");
		scanf("%s",s[i].name);
		printf("\nenter id:\n");
		scanf("%d",&s[i].id);
		printf("\nEnter day of birth: \t");
	    scanf("%d",&s[i].d.day);
	    printf("\nEnter month of birth: \t");
	    scanf("%d",&s[i].d.month);
	    printf("\nEnter year of birth: \t");
	    scanf("%d",&s[i].d.year);
		printf("\n enter the salary :");
		scanf("%f",&s[i].salary);
	}
	for(i=0;i<2;i++)
	{
		printf("\n name =%s \n Id=%d\n dob=%d-%d-%d \n salary =%f",s[i].name,s[i].id,s[i].d.year,s[i].d.month,s[i].d.day,s[i].salary);
	}
	return 0;
}
