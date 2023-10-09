#include"stdio.h"
#include"conio.h"
int addmatrix(int m,int n,int mat1[][n],int mat2[][n],int mat3[][n]);
void main()
{
    int m,n,i,j;
    printf("Enter the value of row:\n");
    scanf("%d",&m);
    printf("Enter the value of column:\n");
    scanf("%d",&n);
    int mat1[m][n],mat2[m][n];
    printf("Enter the value of matrix 1:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the value of matrix 2:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    //declare a 3rd matrix to get the sum of resultant matrix and pass this matrix to the function to store the result
    int mat3[m][n];
    //declaration of pointer to using this pointer providing the value to the function
    int (*ptr)(int m,int n,int mat1[][n],int mat2[][n],int mat3[][n])=&addmatrix;
   (*ptr)(m,n,mat1,mat2,mat3);
    //printing the sum of two matrix
    printf("sum of two matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
    getch();
}
int addmatrix(int m,int n,int mat1[][n],int mat2[][n],int mat3[][n])
{
    int i,j;
    //addition of two matrix
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}
