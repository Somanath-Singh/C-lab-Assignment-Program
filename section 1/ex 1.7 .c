#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("Befour swaping values areL: %d %d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swaping values are %d %d",a,b);
    getch();S

}
