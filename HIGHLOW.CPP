/*Find highest number from three entered integer number.
*/

#include<stdio.h>
#include<conio.h>


void main()
{
	   int a;
	   int b;
	   int c;

	   clrscr();

	   printf("Enter value of a:");
	   scanf("%d", &a);

	   printf("Enter value of b:");
	   scanf("%d", &b);

	   printf("Enter value of c:");
	   scanf("%i", &c);

	if (a > b && a > c)
	{
	    printf("%d is greater than %d and %i.\n", a, b, c);
	}
	else if (b > a && b> c)
	{
	    printf("%d is greater than %d and %i.\n", b, a, c);
	}
	else
	{
	    printf("%i is greater than %d and %d.\n", c, a, b);
	}

    getch();

}