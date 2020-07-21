/*Calculate tax on income for different slabs according to below rules- 
Income upto 1 lac( lakh), no tax. 
Income between 1 and 2.5 lacs - income tax is 10 % of excessive of 1 lakh. 
Income above 2.5 lacs, income tax is  20% of excessive of 2.5 lakhs 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float income;
	float tax;
	float excesive;

	clrscr();

	printf("Enter your income in decimals(lacs) : \n");
	scanf("%f", &income);

	if(income < 1)
	{
		printf("You don't need to pay taxes. \n");
	}
	else if(income >= 1.5 && income <= 2.50)
	{
		excesive = income - 1;
		tax = excesive * 0.1;
		printf("You need to pay %f lacs Rupees of tax. \n",tax);
	}
	else
	{
		excesive  = income - 2.50;
		tax = excesive * 0.2;
		printf("You need to pay %f lacs Rupees of tax. \n",tax);
	}

  getch();
}