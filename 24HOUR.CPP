/*Greetings for a time (hour )in a day as per below rules- 
Midnight to noon - Good morning  
Noon to 5 pm - Good afternoon  
5 pm to midnight - Good evening  
(Hint enter time in hours in 24 hour format) 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();

	printf("Enter a time in 24-hour format\n");
	scanf("%d", &x);

	if(x>=1 && x<=11)
	{
		printf("Good morning!\n");
	}
	else if(x>=12 && x<=17)
	{
		printf("Good afternoon!\n");
	}
	else if(x>=18 && x<=24)
	{
		printf("Good Night!\n");
	}

	else
	{
		printf("Time entered does not match the 24-hour format");
	}
	getch();
}
