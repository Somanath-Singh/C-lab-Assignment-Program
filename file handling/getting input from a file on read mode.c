#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
void main()
{
    FILE *fp;
    fp=NULL;
    char ch;
    char str[20];
    //reading a single character
    fp=fopen("abcd.txt","r");
    if(fp==NULL)
    {
        printf("error\n");
        exit(1);
    }
    ch=fgetc(fp);
    printf("%c\n",ch);
    fclose(fp);
    //reading a string from file
    fp=fopen("abcd.txt","r");
    if(fp==NULL)
    {
        printf("error\n");
        exit(1);
    }
    fgets(str,14,fp);
    printf("string is:%s\n",str);
    fclose(fp);
    getch();
}
