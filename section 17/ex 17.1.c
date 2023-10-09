#include"stdio.h"
#include"conio.h"
#include<stdlib.h>
struct day
{
    int d;
    char m[10];
    int y;
};
struct employee
{
    int empid;
    char name[20];
    struct day date;
    int salary;
};
void main()
{
    struct employee e[1];
    int i;
    for(i=0;i<1;i++)
    {
       printf("Enter value of employee %d\n",i);
       printf("Enter empid\n");
       scanf("%d",&e[i].empid);
       printf("Enter emp name\n");
       scanf("%s",e[i].name);
       printf("Enter date of joining\n");
       scanf("%d %s %d",&e[i].date.d,&e[i].date.m,&e[i].date.y);
       printf("Enter salary\n");
       scanf("%d",&e[i].salary);
    }
     FILE *fp;
    fp=fopen("Employeesinfo.txt","w");
     if(fp==NULL)
      {
          printf("error1\n");
          exit(1);
      }
   for(i=0;i<1;i++)
    {
       fprintf(fp,"%d\n",e[i].empid);
       fputs(e[i].name,fp);
       fprintf(fp,"\n%d\n",e[i].date.d);
       fputs(e[i].date.m,fp);
       fprintf(fp,"\n%d\n",e[i].date.y);
        fprintf(fp,"%d\n",e[i].salary);
    }
    fclose(fp);
     getch();
}

