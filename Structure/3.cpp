/* Create a structure named date that has day, month and year as its members. Include this structure as a member in another structure named employee that has name, 
   id, and salary as members. Assume appropriate types and size of members. Write a program using structure to read and display the data records of 5 students. 
   NESTED STRUCTURE */
   
   #include<stdio.h>
   #include<conio.h>
   
   int main()
   {
   	
   	// defining a structure
   	struct date {
   		int day;
   		int month;
   		int year;
	   };
   	struct employee{
   		char name[20];
   		int id;
   		struct date dob;
   		float salary;
	   } emp ;

	   // input logic
	   printf("\nEnter name: \t");
	   scanf("%s",emp.name);
	   printf("\nEnter id: \t");
	   scanf("%d", &emp.id);
	   printf("\nEnter day of birth: \t");
	   scanf("%d",&emp.dob.day);
	   printf("\nEnter month of birth: \t");
	   scanf("%d",&emp.dob.month);
	   printf("\nEnter year of birth: \t");
	   scanf("%d",&emp.dob.year);
	   printf("\nEnter salary: \t");
	   scanf("%f",&emp.salary);
	   
	   //output logic
	   printf("\nThe employee's information is\n");
	   printf("\nEMPLOYEE NAME \t\tEMPLOYEE ID \t\t\tDAY \tMONTH \tYEAR \t\t\tSALARY");
	   printf("\n-------------------------------------------------------------------------------------------------------------------\n");
	   printf("%s\t\t\t%d\t\t\t%d\t\t%d\tt%d\t\t%.2f",emp.name,emp.id,emp.dob.day,emp.dob.month, emp.dob.year, emp.salary);
	   printf("\n");
	   
	   getch();
	   return 0;    
   }
