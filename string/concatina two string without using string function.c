#include "stdio.h"
#include "conio.h"
#include "string.h"
void main()
{
    int len1,len2,i;
    char ch1[40];
    char ch2[20];
    printf("Enter 1st string:");
    gets(ch1);
    printf("Enter i2nd string:");
    gets(ch2);
    len1=strlen(ch1);
    len2=strlen(ch2);
    for(i=0;i<len1;i++)
    {
        ch1[len1+i]=ch2[i];
    }
    puts(ch1);
    getch();
}
