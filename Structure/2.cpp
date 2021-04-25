/* Create a structure named student that has name, roll, marks and remarks as members. Assume appropriate types and size of members. 
   Write a program using structure to read and display the data records of 5 students. */
   
   #include<stdio.h>
   #include<conio.h>
   
   int main()
   {
   	
   	// defining a structure using typedef
   	typedef struct {
   		char name[20];
   		int roll;x
   		float marks;
   		char remark;
	   } student ;
	   
	   // declaration array of structure variable 's'
	   student s[5];
	   
	   //local variables
	   int i;
	   float tempForMarks;
	   
	   // input logic
	   for(i=0;i<5;i++)
	   {
		   printf("\nEnter name: \t");
		   scanf("%s",s[i].name);
		   printf("\nEnter roll number: \t");
		   scanf("%d", &s[i].roll);
		   printf("\nEnter marks: \t");
		   scanf("%f",&tempForMarks);
		   s[i].marks = tempForMarks;
		   printf("\nEnter remarks P/F: \t");
		   s[i].remark = getche();
	   }
	   
	   //output logic
	   printf("\nThe student's information is\n");
	   printf("\nSTUDENT NAME \t\tROLL NO \t\t\tMARKS \t\t\tREMARKS");
	   printf("\n-------------------------------------------------------------------------------------------------------------------\n");
	   
	   for(i=0;i<5;i++)
	   {
		   printf("%s\t\t\t%d\t\t\t\t%.2f\t\t\t%c",s[i].name,s[i].roll,s[i].marks,s[i].remark);
		   printf("\n");
	   }
	   
	   getch();
	   return 0;    
   }
