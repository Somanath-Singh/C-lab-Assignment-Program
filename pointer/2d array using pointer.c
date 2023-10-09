#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2];
    int i,j;
    printf("Enter value of 2*2 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          scanf("%d",(*(a+i)+j));
        }
    }
    printf("Printing the matrix using pointer\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          printf("a[%d][%d]  %u  %d\n",i,j,(*(a+i)+j),*(*(a+i)+j));
        }
    }
    getch();
}

