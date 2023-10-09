#include<stdio.h>
#include<conio.h>
void main()
{
    int mat[3][3],i,j,sum,add;

    printf("Enter value of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Printing matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("Printing  sum of each row and column of a matrix:\n");
    for(i=0;i<3;i++)
    {
        sum=0;
        add=0;
        for(j=0;j<3;j++)
        {
            sum=sum+mat[i][j];
            add=add+mat[j][i];
        }
        printf("----------------------------------------\n");
        printf("Sum of row %d is %d\n",i+1,sum);
        printf("----------------------------------------\n");
        printf("Sum of column %d is %d\n",i+1,add);
    }
    getch();
}
