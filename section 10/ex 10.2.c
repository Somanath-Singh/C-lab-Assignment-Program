#include"stdio.h"
#include"conio.h"
void stringconvert(char []);
void main()
{

    char ch[30];
    puts("Enter your name\n");
    gets(ch);
    printf("String befour converting upper case is:%s\n",ch);
    stringconvert(ch);
     printf("String after converting upper case is:%s\n",ch);
    getch();

}
void stringconvert(char str[])
{

    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=127)
        {
            str[i]=str[i]-32;
        }
    }
}
