
#include"stdio.h"
#include"conio.h"
int fun(int *,int *);
void main()
{
     int x=5,y=7;
     fun(&x,&y);
     printf("x=%d y=%d",x,y);
    getch();
}
 int fun(int *x,int *y)
{

    *x=7;
    *y=5;
    printf("x=%d y=%d",*x,*y);
}
