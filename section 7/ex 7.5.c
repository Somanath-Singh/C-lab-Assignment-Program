#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,choice;
    printf("Enter value of matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Printing matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //Second matrix
    printf("Enter value of matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Printing matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("1:A+B\n");
    printf("2:A-B\n");
    printf("3:B-A\n");
    printf("4:A*B\n");
    printf("Please enter above choice:\n");
    scanf("%d",&choice);


    switch(choice)
  {
    case 1:
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             c[i][j]=a[i][j]+b[i][j];
          }
        }
        printf("printing sum of A+B:\n");
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             printf("%d\t",c[i][j]);
          }
        }
        break;
    case 2:
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             c[i][j]=a[i][j]-b[i][j];
          }
          printf("\n");
        }
        printf("printing subtraction of A-B:\n");
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             printf("%d\t",c[i][j]);
          }
          printf("\n");
        }
        break;
    case 3:
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             c[i][j]=b[i][j]-a[i][j];
          }
          printf("\n");
        }
        printf("printing subtraction of B-A:\n");
         for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
          {
             printf("%d\t",c[i][j]);
          }
          printf("\n");
        }
        break;
    case 4:
         //Multiplication of two matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           c[i][j]=0;
           for(k=0;k<3;k++)
           {
               c[i][j]=c[i][j]+a[i][k]*b[k][j];
           }
        }
    }
    printf("printing multiplication matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    break;
    default:
        printf("Please enter between 1 to 4\n");
        break;
  }
     getch();

}



