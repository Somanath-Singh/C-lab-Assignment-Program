#include<stdio.h>
#include<conio.h>
void CheckPrimeno(int);
void main()
{
    int num;
    printf("Enter a no:\n");
    scanf("%d",&num);
    CheckPrimeno(num);
    getch();
}


void CheckPrimeno(int n)
{
    int temp,i;
    for(i=2;i<n/2;i++)
    {

        if(n%i==0)
        {

            temp=1;
            break;
        }
    }
    if(temp==1)
    {

        printf("Enter no is not prime no\n");
    }
    else
    {
        printf("Enter no is prime no\n");
    }

}
