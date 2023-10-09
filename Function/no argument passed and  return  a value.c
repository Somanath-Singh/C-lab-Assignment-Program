#include<stdio.h>
#include<conio.h>
int Getno();
void main()
{
   int i,temp;
   int n=Getno();
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
    getch();
}


int Getno()
{
    int num;
    printf("Enter a no:\n");
    scanf("%d",&num);
    return num;
}

