#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,sub,min,div;
    char n;
    printf("enter in between symbols :+,-,*,/\n");
    scanf("%c",&n);
    printf("enter the value of a,b : \n");
    scanf("%d %d",&a,&b);
    switch (n)
    {
    case 43:
        sum=a+b;
        printf("sum=%d",sum);
        break;

    case 45:
        sub=a-b;
        printf("sub=%d",sub);
        break;

    case 42:
        min=a*b;
        printf("product=%d",min);
        break;

    case 47:
        div=a/b;
        printf("quotient=%d",div);
        break;
    default:
        printf( "Enter valid symbols");


    }return 0;
}
