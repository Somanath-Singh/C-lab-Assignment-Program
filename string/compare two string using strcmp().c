#include "stdio.h"
#include "conio.h"
#include "string.h"
void main()
{
    int value;
    char ch1[20];
    char ch2[20];
    printf("Enter value of 1st string;\n");
    scanf("%s",ch1);
    printf("Enter value of 2nd string;\n");
    scanf("%s",ch2);
    value=strcmp(ch1,ch2);
    if(value==0)
    {
        printf("string is equal");
    }
    else
    {
        printf("string is not equal");
    }
    getch();
}
