/*Calculate total seconds from a time of a day (hh:mm:ss) 
*/


#include<stdio.h>
#include<conio.h>


void main()
{
	int sec;
	int h;
	int m;
	int s;

	clrscr();

	printf("Input seconds: ");
	scanf("%d", &sec);

	h = (sec/3600);

	m = (sec -(3600*h))/60;

	s = (sec -(3600*h)-(m*60));

	printf("H:M:S - %d:%d:%d\n",h,m,s);

    getch();	
}