#include<stdio.h>
#include<conio.h>
void main()
{
   int x, y, temp, gcd, lcm,mul;
   printf("Enter two integers");
   scanf("%d %d", &x, &y);
   mul=x*y;
   while (y != 0)
    {
      temp = y;
      y = x % y;
      x = temp;
    }
   gcd = x;
   lcm = mul/gcd;
   printf("GCD is:%d\n", gcd);
   printf("LCM is:%d\n", lcm);
   getch();
}
