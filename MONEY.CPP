/*Convert American dollars into Indian Rupees (Rule - $1 = 75.13 Rs) 
*/


#include<stdio.h>
#include<conio.h>

void main()
{
	float US_Dollar;
	float IND_Rupee;
	clrscr();
	printf("Enter the amount of money in US Dollars: \n");
	scanf("%f", &US_Dollar);

	IND_Rupee = US_Dollar * 75.13;

	printf("%f US Dollars equal %f Indian Rupees. \n", US_Dollar, IND_Rupee);
  getch();
}

