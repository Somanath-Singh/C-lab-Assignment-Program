
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter three no:");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf("%d is smaller",a);
    }
    else if(b<c)
    {
        printf("%d is smaller",b);
    }
    else
    {
        printf("%d is smaller",c);
    }
getch();
}
