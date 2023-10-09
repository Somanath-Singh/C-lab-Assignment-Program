#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter any no:");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is even\n",num);
    else
        printf("%d is odd\n",num);
    getch();
}
