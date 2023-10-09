#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    char ch1[20];
    puts("Enter 1st string:");
    gets(ch1);
    for(i=0;ch1[i]!='\0';i++)
    {
        if(ch1[i]>=65&&ch1[i]<=90)
        {
            ch1[i]=ch1[i]+32;
        }
    }
    puts(ch1);
    getch();
}
