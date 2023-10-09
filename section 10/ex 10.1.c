#include"stdio.h"
#include"conio.h"
void leapyear(int year);//function prototype
void main()
{

    int y;
    printf("Enter any year to check it is leap year or not:\n");
    scanf("%d",&y);
    leapyear(y);//function call
    getch();
}
void leapyear(int year)//function defination
{

    if((year%4==0 && year%100!=0)||(year%400==0))
    {

        printf("year %d is leap year",year);
    }
    else
    {
        printf("year %d is not leap year",year);
    }
}
