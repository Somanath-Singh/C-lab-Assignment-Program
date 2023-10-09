#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,sum,temp;
    sum=0;
    printf("Enter any no:\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("Enter no is palindrome %d",sum);
    }
    else
    {
        printf("Enter no is not palindrome %d",sum);
    }
    getch();

}
