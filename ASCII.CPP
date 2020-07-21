/*Find ASCII code (value ) of character using C program. (Hint - Print char variable using %d) */

#include<stdio.h>
#include<conio.h>

void main() 
{  
    clrscr();
    char c;
    printf("Enter a character: \n");
    scanf("%c", &c);



    printf("ASCII value of %c = %d \n", c, c);

 getch();
}
