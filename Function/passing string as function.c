#include<stdio.h>
#include<conio.h>
#include<string.h>
void modify(char[],char[]);
void main()
{
    char str1[30],str2[30];
    printf("Enter something:\n");
    gets(str1);
    printf("Enter your name:\n");
    gets(str2);
    modify(str1,str2);
    getch();
}
void modify(char s1[],char s2[])
{

    int i,len=0;
    for(i=0;s1[i]!='\0';i++)
    {
        len=len+1;
    }
    printf("length of string one is %d\n",len);

    printf("Would you like to reverse your name\n");
    printf("if yes press 'y' and if no press 'N':\n");
    char ch,temp;
    scanf("%c",&ch);
    int l=strlen(s2);
    printf("you enter %c\n",ch);
    if(ch=='y'||ch=='Y')
    {
        for(i=0;i<l/2;i++)
        {
            temp=s2[i];
            s2[i]=s2[l-1-i];
            s2[l-1-i]=temp;
        }
        printf("Your name in reverse order %s",s2);
    }
    else
    {

        printf("you enter 'No'.");
    }
}
