#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	
	printf("|\t\t======= EVEN ODD NUMBER CHECK =======\n|\n|\n");
	printf("|\t\tEnter the number you want to check: ");
	scanf("%d",&num);
	printf("|\n");
	
	if (num%2 ==0)
	{
		printf("|\t\t\t   %d is even number\n|",num);
	}
	else {
		printf("|\t\t\t   %d is odd number\n|",num);
	}
	printf("\n======================================================================");
}