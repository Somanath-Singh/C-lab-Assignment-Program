#include<stdio.h>
#include<conio.h>
int avg(int[],int);
void main()
{

    int average,n,i;

    printf("Enter size of array:\n");
    scanf("%d",&n);
    int marks[n];
    printf("Enter values in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    /*int marks[]={12,21,23,24,25};
    n=sizeof(marks)/sizeof(marks[0]);*/
    average=avg(marks,n);
    printf("Average marks of all the student is:%d",average);
    getch();
}
int avg(int abc[],int m)
{
    int i,sum,Average;
    sum=0;
    Average=0;
    for(i=0;i<m;i++)
    {

        sum=sum+abc[i];
    }
    printf("sum=%d",sum);
    Average=sum/m;
    return Average;
}
