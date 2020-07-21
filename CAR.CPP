/*Calculate car rent as per below rules 
For 300 km trip, rent is fix 3000 Rs. For trip longer than 300 km, rate is 9 Rs per km for entire trip. 100 Rs is driver tip for a rental trip. 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float total_rent;
	float km_traveled;
	char entered_answer;

	clrscr();

	printf("Enter the killometers travalled. \n");
	scanf("%f", &km_traveled);

	printf("Did you rent a driver(y/n)?\n");
	entered_answer = getch();

	if( km_traveled <= 300)
	{
		if( entered_answer == 'y')
		{
			total_rent = 3000 + 100;
		}
		else
		{
			total_rent = 3000;
		}
	}
	else
	{
		if(entered_answer == 'y')
		{
			total_rent = (km_traveled * 9) + 100;
		}
		else
		{
			total_rent = (km_traveled * 9);
		}
	}
	printf("Your total rent cost is %f Rs.\n", total_rent);

   getch();
}