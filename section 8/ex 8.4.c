#include"stdio.h"
#include"conio.h"
void main()
{
    char ch1[30],ch2[30];
    int flag=0,i;
    puts("Enter something in string one:\n");
    gets(ch1);
    puts("Enter string is:\n");
    puts(ch1);

    puts("Enter something in string two:\n");
    gets(ch2);
    puts("Enter string is:\n");
    puts(ch2);
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
        printf("Both the string is not equal.");
    }
    else
    {
        printf("Both the string is equal.");
    }
    getch();

}
