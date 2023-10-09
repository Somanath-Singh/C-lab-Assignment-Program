#include<stdio.h>
#include<conio.h>
int CheckPrimeno(int);
void main()
{
    int num,temp;
    printf("Enter a no:\n");
    scanf("%d",&num);
    temp=CheckPrimeno(num);
     if(temp==1)
    {

        printf("Enter no is not prime no\n");
    }
    else
    {
        printf("Enter no is prime no\n");
    }
    getch();
}
int CheckPrimeno(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {

        if(n%i==0)
        {

            return 1;
        }
    }
    return 0;
}
