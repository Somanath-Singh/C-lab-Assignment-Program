#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4][5];
    int i,j;
    printf("Enter value of 4*5 matrix\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
          scanf("%d",(*(a+i)+j));
        }
    }
    printf("Printing the matrix using pointer\n");
     for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
          printf("a[%d][%d]  %u  %d\t",i,j,(*(a+i)+j),*(*(a+i)+j));
        }
        printf("\n");
    }
}

