#include<stdio.h>
#include<conio.h>

void main()
{
	float amount,discount=0.0,total_amount;
	printf("\t================ DISCOUNT CALCULATOR ===============\n");
	printf("\n\t\tEnter the total shopping amount : ");
	scanf("%f",&amount);
	
	if (amount > 5000)
	{
		discount = amount * 0.20;
	}
	
	else if (amount >= 3000);
	{
		discount = amount *0.10;
	}
	
	total_amount = amount - discount;
	
	printf("\n\t\t   Original amount : %.2f\n",amount);
	printf("\n\t\t\t Discount: %.2f\n",discount);
	printf("\n\t\t Final amount after discount: %.2f\n",total_amount);
	
}