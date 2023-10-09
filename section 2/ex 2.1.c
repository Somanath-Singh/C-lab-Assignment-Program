#include<stdio.h>
#include<conio.h>
void main()
{
    int base, height;
    float area;
    printf("enter the value of base : ");
    scanf("%d",&base);
    printf("enter the value of height : ");
    scanf("%d",&height);
    area = (float)(base*height)/2;
    printf("area of triangle is %f",area);
    getch();
}
