#include<stdio.h>
#include<conio.h>

void main()
{
	int year;
	printf("\t================ LEAP YEAR CHECKER ===============\n");
	printf("\n\t\t\tEnter any year :");
	scanf("%d",&year);
	
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("\n\t\t\t%d is a leap year.\n",year);
	}
	else 
	{
		printf("\n\t\t\t%d is not a leap year .\n",year);
	}
}