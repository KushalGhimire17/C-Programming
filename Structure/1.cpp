/* Create a structure named student that has name, roll, marks and remarks as members. Assume appropriate types and size of members.
   Write a program using structure to read and display the data entered by the user. */

#include<stdio.h>
#include<conio.h>

int main() {

	// defining a structure
	struct student {
		char name[20];
		int roll;
		float marks;
		char remark;
	};

	// declaration of structure variable 's'
	struct student s;

	// input logic
	printf("\nEnter name: \t");
	gets(s.name);						// structure variable 's' is accessing it's member 'name'using unformatted input i.e. gets()
	printf("\nEnter roll number: \t");
	scanf("%d", &s.roll);
	printf("\nEnter marks: \t");
	scanf("%f",&s.marks);
	printf("\nEnter remarks P/F: \t");
	s.remark = getch();

	//output logic
	printf("\nThe student's information is\n");
	printf("\nSTUDENT NAME \t\tROLL NO \t\t\tMARKS \t\t\tREMARKS");
	printf("\n-------------------------------------------------------------------------------------------------------------------\n");
	printf("%s\t\t\t%d\t\t\t\t%.2f\t\t\t%c",s.name,s.roll,s.marks,s.remark);
	getch();
	return 0;
}
