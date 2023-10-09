#include<stdio.h>
#include<conio.h>
#include<math.h.>
void main()
{
    int a,b,c,s;
    float area;
    printf("Enter value of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    s=a+b+c;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area=%f",area);
    getch();
}
