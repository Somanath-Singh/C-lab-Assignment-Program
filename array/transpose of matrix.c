
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[2][3],i,j,sum;
    sum=0;
    printf("Enter value of 2d matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)//column is execute 1st in transpose of matrix
    {
        for(j=0;j<2;j++)
        {
           printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    getch();
}
