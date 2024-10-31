#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,num3;
		printf("\t================ LARGER NUMBER CHECKER ===============\n");
	printf("\n\t\t  You have to enter any three numbers.\n");
	printf("\n\t\t\t   Enter 1st number: ");
	scanf("%d",&num1);
	printf("\t\t\t   Enter 2nd number: ");
	scanf("%d",&num2);
	printf("\t\t\t   Enter 3rd number: ");
	scanf("%d",&num3);
	
	if (num1 >= num2){
		if (num2 >= num3) 
		{
			printf("\n\t\t\t The largest number is : %d\n",num1);
		}
		else 
		{
			printf("\n\t\t\t The largest number is :%d\n",num3);
		}
	}
	else if (num2 >= num3){
		printf("\n\t\t\t The largest number is :%d\n",num2);
	}
	else
	{
		printf("\n\t\t\t The largest number is : %d\n",num3);
	}
}