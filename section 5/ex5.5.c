#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,sum,i;
    sum=0;
    n1=100;
    n2=200;
    for(i=100;i<=n2;i++)
    {
        if(i%7==0)
        {
            sum=sum+i;
        }
    }
    printf("sum is=%d",sum);
    getch();
}
