#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("Enter value of x:");
    scanf("%d",&x);
    if(x>0)
        printf("y value is: 1");
    else if(x==0)
        printf("y value is :0");
    else
        printf("y value is :-1");
    getch();
}
