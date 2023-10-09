/*#include"stdio.h"
#include"conio.h"
typedef struct
{
    int rollno;
    char name[30];
    float marks[6];
}student;
void main()
{
    int n,m,i,j;
    float avg=0,sum=0;
    printf("How many student data you want to store:\n");
    scanf("%d",&n);
   student s[n];
   for(i=0;i<n;i++)
   {
       printf("Enter information for student %d\n",i+1);

       printf("Enter roll no of student %d\n",i+1);
       scanf("%d",&s[i].rollno);
       printf("Enter name of student %d\n",i+1);
       gets(s[i].name);
       printf("How many subject marks you want to enter:\n");
       scanf("%d",&m);
       for(j=1;j<=m;j++)
       {
          printf("Enter the marks of sub%d of student %d\n",j,i+1);
          scanf("%f",&s[i].marks[j]);
       }
   }
    for(i=0;i<n;i++)
    {
        printf("details of student %d\n",i+1);
        printf("rollno of student is %d",s[i].rollno);
        puts("name of student is:");
        puts(s[i].name);
         for(j=1;j<=m;j++)
       {
          printf("marks of sub%d of student %d\n",j,i+1);
          printf("%f",s[i].marks[j]);
       }
       //calculating total marks
       float total=0;
       for(j=1;j<=m;j++)
       {
           total=total+s[i].marks[j];
           sum=sum+total;
       }
       printf("total marks of student %d is %.2f:\n",i+1);
    }
     //calculating average marks of all student
    avg=sum/n;
    printf("Average marks of all student is %.2f",sum);
    getch();

}*/
#include"stdio.h"
#include"conio.h"
#define subject 3
typedef struct
{
    int rollno;
    char name[30];
    float marks[subject];
}student;
void main()
{
    int n,i,j;
    float avg=0;
    float sum=0;
    printf("\nHow many student data you want to store:\n");
    scanf("%d",&n);
   student s[n];
   for(i=0;i<n;i++)
   {
       printf("\nEnter information for student %d\n",i+1);

       printf("\nEnter roll no of student %d\n",i+1);
       scanf("%d",&s[i].rollno);
       printf("Enter name of student %d\n",i+1);
       scanf("%s",s[i].name);
       for(j=0;j<subject;j++)
       {
          printf("\nEnter the marks of sub%d of student %d\n",j+1,i+1);
          scanf("%f",&s[i].marks[j]);
       }
   }
    for(i=0;i<n;i++)
    {
        printf("details of student %d\n",i+1);
        printf("roll no of student is %d\n",s[i].rollno);
        puts("name of student is:");
        printf("%s",s[i].name);
         for(j=0;j<subject;j++)
       {
          printf("marks of sub%d of student %d is %.2f\n",j+1,i+1,s[i].marks[j]);
       }
       //calculating total marks
       float total=0;
       for(j=0;j<subject;j++)
       {
           total=total+s[i].marks[j];
       }
       printf("total marks of student %d is %.2f:\n",i+1,total);
       sum=sum+total;
    }
     //calculating average marks of all student
    avg=sum/n;
    printf("sum=%f",sum);
    printf("Average marks of %d student is %.2f\n",n,avg);
    getch();

}

