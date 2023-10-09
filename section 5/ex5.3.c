#include<stdio.h>
#include<conio.h>
void main()
{
    long num;
    int count;
    count=0;
    printf("Enter value of num:");
    scanf("%ld",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("no of digit is:%d",count);
    getch();
}
