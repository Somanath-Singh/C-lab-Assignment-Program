#include "stdio.h"
#include "conio.h"
#include "string.h"
void main()
{
    char ch1[30];
    char ch2[30];
    puts("Enter your first name:");
    scanf("%s",ch1);
    puts("Enter your last name:");
    scanf("%s",ch2);
    puts(ch1);
    puts(ch2);
    strcat(ch1,ch2);
    puts(ch1);
    getch();
}
