
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,a,div,nth,d,term,sum;
    n1=100;
    n2=200;
    printf("Enter no you want find divisible of that no:\n");
    scanf("%d",&div);
    a=n1+(div-n1%div);
    printf("First term is:%d\n",a);
    nth=n2-(n2%div);
    printf("last term is:%d\n",nth);
     d=(a+div)-a;
     printf("common difference is:%d\n",d);
      term=(nth-a)/d+1;
      printf("series include %d term\n",term);
      sum=term*(a+nth)/2;
      printf("sum of all divisible no is:%d\n",sum);
      getch();


}
