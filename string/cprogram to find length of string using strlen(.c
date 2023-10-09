#include "stdio.h"
#include "conio.h"
#include "string.h"
void main()
{
    int len;
    char ch[30];
    puts("Enter your name:");
    gets(ch);
    len =strlen(ch);
    printf("length is:%d",len);
    getch();
}
