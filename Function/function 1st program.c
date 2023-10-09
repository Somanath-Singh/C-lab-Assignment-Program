#include"stdio.h"
#include"conio.h"
void sum();
void main()
{

    sum();
    getch();
}
void sum()
{

    int a,b,sum=0;
    printf("Enter two value:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}
