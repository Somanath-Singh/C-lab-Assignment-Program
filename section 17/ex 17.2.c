#include"stdio.h"
#include"conio.h"
#include<stdlib.h>

void main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    char ch;
     fp1=fopen("Employeesinfo.txt","r");
     if(fp1==NULL)
      {
          printf("error1\n");
          exit(1);
      }
    fp2=fopen("pqr.txt","w");
     if(fp2==NULL)
      {
          printf("error2\n");
          exit(1);
      }
      while((ch=fgetc(fp1))!=EOF)
      {
          fprintf(fp2,"%c",ch);
      }
      fclose(fp1);
      fclose(fp2);
      getch();

}
