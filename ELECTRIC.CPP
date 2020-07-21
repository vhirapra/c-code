/* Calculate electricity bill for consumed units as per below rules: 
First 50 units, fix 100 Rs 
1.75 Rs per unit for next 150 units 
1.5 Rs per unit for all next units 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float electricity_bill;
	float units;

	clrscr();
	printf("Enter the amount of units consumed: \n");
	scanf("%f", &units);

	if(units <= 50)
	{
		electricity_bill = 100;
		printf("The electricity bill is %f Rupees. \n", electricity_bill);
	}
	else if(units > 50 && units <= 150)
	{
		electricity_bill = 100 + ( units * 1.75);
		printf("The electricity bill is %f Rupees. \n", electricity_bill);
	}
	else
	{
		electricity_bill = 100 + (units * 1.5);
		printf("The electricity bill is %f Rupees. \n", electricity_bill);
	}
  getch();
}