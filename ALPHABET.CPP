/*Check whether entered character is small alphabet or capital alphabet. 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char character;

	clrscr();

	printf("Enter a character: \n");
	scanf("%c", &character);

	if(character >= 'a' && character <= 'z')
	{
		printf(" '%c' is a small alphabet. \n", character);
	}
    else if(character >= 'A' && character <= 'Z')
	{
		printf(" '%c' is a big alphabet. \n", character);
	}
	else
	{
		printf("The character entered was not a letter. \n");
	}
  getch();
}