/*Convert length (foots) into meters*/


#include<stdio.h>
#include<conio.h>

void main()
{
	float foot;
	float meters;

	clrscr();

	printf("Enter the length in foot/feet: \n");
	scanf("%f",&foot);

	meters = (foot / 3.281);

	printf("%f foot is equal to %f meters.\n", foot, meters);

   getch();
}
