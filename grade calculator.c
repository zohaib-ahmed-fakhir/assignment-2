#include<conio.h>
#include<stdio.h>

int main()
{
	int marks1,marks2,marks3,marks4,marks5;
	
	printf("\n|=========================GRADE CALCULATOR=========================|\n|\n");
	printf("|\t\t\tMarks Of Chemistry = ");
	scanf("%d" , &marks1);
	printf("|\n");
	printf("|\t\t\tMarks Of Physics = ");
	scanf("%d" , &marks2);
	printf("|\n");
	printf("|\t\t\tMarks Of Maths = ");
	scanf("%d" , &marks3);
	printf("|\n");
	printf("|\t\t\tMarks Of English = ");
	scanf("%d" , &marks4);
	printf("|\n");
	printf("|\t\t\tMarks Of P.Studies = ");
	scanf("%d" , &marks5);
	printf("|\n");
	
	float obtain_marks= marks1 + marks2 + marks3 + marks4 + marks5;
	printf("|\t\t\tTotal marks is = %f\n|\n" ,obtain_marks);
	
	float percentage = (obtain_marks/500)*100;
	printf("|\t\t\tPercentage = %f\n|\n",percentage);
	
	if(percentage>=80)
	{
		printf("|\t\t\tGrade = A1\n|");
	}
	else if(percentage>=70)
	{
		printf("|\t\t\tGrade = A");
	}
	else if(percentage>=60)
	{
		printf("|\t\t\tGrade = B");
	}
	else if(percentage>=50)
	{
		printf("|\t\t\tGrade = C");
	}
	else
	{
		printf("|\t\t\tFail");
	}
	printf("\n|");
	printf("==================================================================|");
	
	
	
	
	
	getch();		
}