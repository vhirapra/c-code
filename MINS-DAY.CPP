/*Enter total minutes and calculate days, hours and minutes */

#include<stdio.h>
#include<conio.h>

void main()
{
	int minutes;
	int d;
	int h;
	int m;

	clrscr();

	printf("Input minutes");
	scanf("%d", &minutes);

	d = minutes / 1440;

	h = (minutes%1440)/60;

	m = (minutes%1440)%60;

	printf("The entered minutes equal %d days, %d hours, and %d minutes. \n", d, h, m);

	getch();
}