#include<stdio.h>
#include<conio.h>
void main()
{
    int mat[4][4],i,j;
    printf("Enter value of 4 into 4 matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Printing 4 into 4 matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    //logic given
    for(i=0;i<4;i++)//row
    {
        for(j=0;j<4;j++)//column
        {
          if(i>j)
          {
              mat[i][j]=0;
          }
        }
    }
    printf("Printing upper trangular matrix:\n");
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    getch();
}
