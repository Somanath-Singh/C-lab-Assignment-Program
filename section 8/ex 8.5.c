#include"stdio.h"
#include"conio.h"
void main()
{
    char ch[30],temp;
    int i,j;
    puts("Enter something:\n");
    gets(ch);
    puts("Enter string is:\n");
    puts(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        for(j=i+1;ch[j]!='\0';j++)
        {
            if(ch[i]>ch[j])
            {
                temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
            }
        }
    }
    puts(ch);
    getch();
}
