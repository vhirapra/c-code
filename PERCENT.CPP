/*Calculate % of result from five subject marks. Each subject is of 75 marks.*/


#include<stdio.h>
#include<conio.h>

void main()
{
	float subject_1;
	float subject_2;
	float subject_3;
	float subject_4;
	float subject_5;
	float total_marks;
	float percentage;

	clrscr();

	printf("Enter the total amount of marks obtained out of 75 in each subject.\n");
	scanf("%f", &subject_1);
	scanf("%f", &subject_2);
	scanf("%f", &subject_3);
	scanf("%f", &subject_4);
	scanf("%f", &subject_5);

	total_marks = subject_1 + subject_2 +subject_3 + subject_4 + subject_5;
	percentage = (total_marks/375) * 100;

	printf("The total percent of all the marks is: %f.\n", percentage);

   getch();
}