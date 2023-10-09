#include"stdio.h"
#include<conio.h>
void main()
{
    int a,b,c,d,e;
    (a=(b=(c=(d=6))));
    e=(printf("enter your age:"),scanf("%d",&e),8);
    printf("value of e is %d\n",e);
    printf("a=%d\n",a);
    printf("b=%d\n",c);
    printf("d=%d\n",d);
    getch();
}
