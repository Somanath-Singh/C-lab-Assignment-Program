
#include<stdio.h>
#include<conio.h>
void main()
{
    int mark[5],i,sum;
    float avg;
    printf("Enter marks of five student:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&mark[i]);
    }
    for(i=0;i<5;i++)
    {
       sum=sum+mark[i];
    }
    avg=sum/5;
    printf("sum=%d",sum);
    printf("average=%f",avg);
    getch();
}
