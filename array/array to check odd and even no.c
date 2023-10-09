#include<stdio.h>
#include<conio.h>
void main()
{
    int num[10],i,even,odd;
    even=0;
    odd=0;
    printf("Enter value of array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("checking how many is odd and even:\n");
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf("even no is %d",even);
    printf("odd no is %d",odd);
    getch();
}


