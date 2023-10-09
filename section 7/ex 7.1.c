#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],i,j,flag=0;
    printf("Enter value of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is:\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("printing transpose of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("checking matrix is symmetric or not\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(a[i][j]!=b[i][j])
          {
           flag=1;
           break;
          }
        }
    }
    if(flag==1)
    {
        printf(" not symmetric");
    }
    else
    {
         printf(" symmetric");
    }
    getch();
}

