/*Calculate age of person in months from  year & month of birth. 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int age_months;
	int year_of_birth;
	int month_of_birth;
	int current_year;
	int current_month;
	int conversion;

	clrscr();

	printf("Enter year of birth in years: ");
	scanf("%d",&year_of_birth);
	printf("Enter the month of birth using a number from (1 - 12) : ");
	scanf("%d",&month_of_birth);
	printf("Enter the current year: ");
	scanf("%i", &current_year);
	printf("Enter the current month useing a number from (1 - 12) : ");
	scanf("%i", &current_month);

	conversion= (current_year - year_of_birth) * 12;
	age_months =  (current_month - month_of_birth) + conversion;

	printf("Your age in months is: %d \n", age_months);

	printf("\n");
	getch();
}
