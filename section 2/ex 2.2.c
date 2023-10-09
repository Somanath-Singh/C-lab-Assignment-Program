#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int P,R,T;
    float SI,CI;
    printf("Enter value of P,R and T \n");
    scanf("%d %d %d",&P,&R,&T);
    SI=(float)(P*R*T)/100;
    CI=(float)P*(pow(1+R/100,T)-P);
    printf("Simple intrest:%0.2f Compound intrest:%0.3f",SI,CI);
    getch();

}
