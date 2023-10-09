#include"stdio.h"
#include"conio.h"
#include"string.h"
void main()
{
    int len,i;
    char ch1[20];
    char cha;
    puts("Enter the string:");
    gets(ch1);
    len=strlen(ch1);
    for(i=0;i<len/2;i++)
    {
        cha=ch1[i];
        ch1[i]=ch1[len-1-i];
        ch1[len-1-i]=cha;
    }

    printf("%s",ch1);
    getch();

}
