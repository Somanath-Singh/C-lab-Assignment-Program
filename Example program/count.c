#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp=0,count=0;
    printf("enter a num:");
    scanf("%d",&num);
       while(num>0)
       {
           temp=num%10;
           count++;
           num=num/10;
       }
       printf("%d",count);
}
