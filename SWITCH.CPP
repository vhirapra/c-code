#include<stdio.h>
#include<conio.h>

void main()
{
	int x = 3 + 2;
	clrscr();

	switch(x) {
		case 8:
			printf("Eight\n");
		case 10:
			printf("Ten\n");
		case 4:
			printf("Four\n");
		case 5:
			printf("Five\n");
		break;
	}

	getch();
}