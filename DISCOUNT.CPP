/*Calculate discount on total bill and show final bill amount as well as discount  
Rules: 
If bill amount is Rs 1000 and above then give 10%  discount 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float bill_amount;
	float total_bill;
	float money_saved;

	clrscr();

	printf("Enter the bill amount:\n");
	scanf("%f", &bill_amount);

	if (bill_amount < 1000)
	{
		printf("Sorry you will not get any discount.\n");
		printf("Your total bill is %f.\n", bill_amount);
	}
	if (bill_amount >= 1000)
	{
		money_saved = 0.1 * bill_amount;
		total_bill = (bill_amount- money_saved);

		printf("Congratulations, you will get a %10 discount!\n");
		printf("Your total bill is : %f\n", total_bill);
	}
   getch();
}