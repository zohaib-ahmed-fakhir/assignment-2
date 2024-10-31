#include<stdio.h>
#include<conio.h>

void main()
{
	float principle,rate,time,simple_intrest;
	printf("\t================ LEAP YEAR CHECKER ===============\n");
	printf("\n\t\t  Enter the principle amount :");
	scanf("%f",&principle);
	printf("\n\t\t  Enter the  rate of interest :");
	scanf("%f",&rate);
	printf("\n\t\t  Enter the time (in years) :");
	scanf("%f",&time);
	
	simple_intrest = (principle * rate * time)/100;
	
	printf("\n\n\t\t  The  simple interest is : %.2f\n",simple_intrest);
	
}