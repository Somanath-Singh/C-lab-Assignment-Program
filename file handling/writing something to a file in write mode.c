#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
void main()
{
    FILE *fp;
    fp=NULL;
    /*char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
     char str[20];
    printf("Enter a string\n");
    gets(str);
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error\n");
        exit(1);
    }
    fputc(ch,fp);
    fclose(fp);
     */
     fp=fopen("abcd.txt","w");
    if(fp==NULL)
    {
        printf("error\n");
        exit(1);
    }
    fputs(str,fp);
    fclose(fp);
    getch();
}
