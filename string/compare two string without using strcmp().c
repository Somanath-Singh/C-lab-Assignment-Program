#include "stdio.h"
#include "conio.h"
#include "string.h"
void main()
{
    int flag,i;
    flag=0;
    char ch1[20];
    char ch2[20];
    puts("Enter 1st string:\n");
    gets(ch1);
    puts("Enter 2nd string:\n");
    gets(ch2);
    for(i=0;ch1[i]!='\0'||ch2[i]!='\0';i++)
    {
        if(ch1[i]!=ch2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("string is not equal");
    }
    else
    {
        printf("string is equal");
    }
}
