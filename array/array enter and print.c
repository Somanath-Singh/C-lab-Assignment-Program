#include<stdio.h>
#include<conio.h>
void main()
{
    int num[6],i;
    printf("Enter value of array");
    for(i=0;i<6;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Values are printing:");
    for(i=0;i<6;i++)
    {
        printf("%d",num[i]);
    }
    getch();
}
