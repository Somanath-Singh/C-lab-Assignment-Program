#include<stdio.h>
#include<stdlib.h>
void main()
{
    int m,n;
    n=500;
    m=100;
    start:
    if(n%2!=0)
    {
        printf("%d\n",n);
        n--;
    }
  /*  if(n==m)
    {
        exit(0);
    }*/
    if(n>=m)
    {
          goto start;
    }
    getch();
}
