#include "stdio.h"
#include "conio.h"
#include "string.h"
void main()
{
    int count,i;
    i=0;
    count=0;
    char ch[20];
    printf("Enter something:\n");
    gets(ch);
    while(ch[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
    getch();

}
