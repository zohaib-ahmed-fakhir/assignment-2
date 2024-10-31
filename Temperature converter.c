#include<stdio.h>
#include<conio.h>

void main ()
{
	float temperature, convertedtemperature;
	int choice;
		printf("\t================ TEMPERATURE CONVERTER ===============\n");
	printf("\n\t\t\t1. Celsius to fahrenhiet \n");
	printf("\n\t\t\t2. Fahrenhiet to celsius \n");
	printf("\n\t  Choose any one option from above choices 1/2 : ");
	scanf("%d",&choice);
	
	if (choice == 1)
	{
		printf("\n\t\t  Enter temperature in celsius :");
		scanf("%f",&temperature);
		convertedtemperature = (temperature * 9 / 5) + 32;
		printf("\n\t\t  Temperature in fahrenhiet : %.2f fahrenhiet\n",convertedtemperature); 
	}
	else if (choice == 2)
	{
		printf("\n\t\t  Enter temperature in fahrenhiet :");
		scanf("%f",&temperature);
		convertedtemperature = (temperature - 32)*5/9;
		printf("\n\t\t  Temperature in celsius : %.2f celsius\n",convertedtemperature);
	}
	else {
		printf("\n\t\t  Invalid choice! Please select 1 or 2\n");
	}
}