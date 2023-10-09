#include<stdio.h>
#include<conio.h>
void main()
{

    int num,rem,cube,sum,temp;
    sum=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        cube=rem*rem*rem;
        sum=sum+cube;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("Enter no is armstrong  no:%d",sum);
    }
    else
    {
        printf("Enter no is not armstrong no:%d",sum);
    }
    getch();
}
