#include "stdio.h"
#include "conio.h"
#include "string.h"
void main()
{
    char ch[20];
    puts("Enter your name");
    gets(ch);
    strrev(ch);
    puts(ch);
    getch();
}
