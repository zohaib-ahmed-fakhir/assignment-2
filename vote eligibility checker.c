#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	printf("\t================ VOTE ELIGIBILITY CHECKER ===============\n");
	printf("\n\t\t\t   Enter your age = 1");
	scanf("%d",&age);
	if (age >= 18)
	{
		printf("\n\t\t You are eligible for casting your vote.\n ");
	}
	else
	{
		printf("\n\t\t You are not eligible for casting your vote.\n ");
	}
}