
#include<stdio.h>
#include<conio.h>
void main()
{
  int num,sum,rem;
  sum=0;
  printf("Enter any number");
  scanf("%4d",&num);

  rem=num%10;
  sum=sum+rem;
  num=num/10;

  rem=num%10;
  sum=sum+rem;
  num=num/10;

  rem=num%10;
  sum=sum+rem;
  num=num/10;

  rem=num%10;
  sum=sum+rem;
  num=num/10;
  printf("sum=%d",sum);
  getch();
}

