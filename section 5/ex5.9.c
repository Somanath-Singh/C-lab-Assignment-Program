#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp,sum,i;
    sum=0;
    printf("Enter a no:\n");
    scanf("%d",&num);
    temp=num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(temp==sum)
    {
        printf("Enter no perfect no:%d",sum);
    }
    else
    {
        printf("Enter no is not perfect no:%d",sum);
    }
    getch();
}
