

#include<stdio.h>
int main()
{

    int year,day,month;
    year=2015;
    day=5;
    month=8;
    int m=month/4;
    int y=year-2000;
            int calc=(day+m+y+(int)(y/4))/7;
            printf("%d",calc);
    return 0;
}
