#include"stdio.h"
#include"conio.h"
void main()
{
    char ch[30],c;
    int count=0,i;
    puts("Enter something:\n");
    gets(ch);
    puts("Enter string is:\n");
    puts(ch);
    printf("Enter any character to know how many times it will repeat in a string:\n");
    scanf("%c",&c);
    for(i=0;ch[i]!='\0';i++)
    {
        if(c==ch[i])
        {
            count++;
        }
    }
    printf("Character %c is repeat %d times",c,count);
    getch();
}
