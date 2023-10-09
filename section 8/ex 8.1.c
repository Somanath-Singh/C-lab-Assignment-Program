#include<stdio.h>
#include<conio.h>
void main()
{
    char str[30];
    int count,i;
    count=1;
    puts("Enter something:\n");
    gets(str);
    puts("printing the enter string\n");
    puts(str);
    for(i=1;str[i]!='\0';i++)
    {
        count=count+1;
    }
    printf("Length of string is %d",count);
    getch();
}
