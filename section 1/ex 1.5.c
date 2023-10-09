#include<stdio.h>
#include<conio.h>
#define PI 3.141
void main()
{
int r;
float area,perimeter;
printf("Enter the value of radius\n");
scanf("%d",&r);
area=2*PI*r;
perimeter=PI*r*r;
printf("area=%f perimeter=%f",area, perimeter);
getch();

}



