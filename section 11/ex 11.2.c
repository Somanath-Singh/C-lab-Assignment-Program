#include"stdio.h"
#include"conio.h"
#define number 2
struct complex
{
    int rel;
    int img;
};
void main()
{
   struct complex c[number];
   int i;
   int sumrel=0,sumimg=0;
   for(i=0;i<number;i++)
   {
       printf("Enter the real part of complex no %d\n",i+1);
       scanf("%d",&c[i].rel);
       printf("Enter the imaginary part of complex no %d\n",i+1);
       scanf("%d",&c[i].img);
   }
   //printing the complex no
    for(i=0;i<number;i++)
    {
        printf("\n complex no %d is:\n",i+1);
        printf("%d + %di",c[i].rel,c[i].img);
    }
    //addition of two complex no
    for(i=0;i<number;i++)
    {
        sumrel=sumrel+c[i].rel;
        sumimg=sumimg+c[i].img;
    }
    //printing the sum of complex no
    printf("\n sum of two complex no is: %d + %di",sumrel,sumimg);
    getch();

}
