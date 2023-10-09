#include "stdio.h"
#include "conio.h"
#include "string.h"
void main()
{
    char ch[20];
    puts("Enter something:");
    gets(ch);
    strlwr(ch);
    puts(ch);
    printf("%s",ch);
    getch();
}
