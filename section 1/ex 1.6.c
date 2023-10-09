
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("Befour swaping values areL: %d %d ",a,b);
    c=b;
    b=a;
    a=c;
    printf("\n After swaping values are %d %d",a,b);
    getch();

}
