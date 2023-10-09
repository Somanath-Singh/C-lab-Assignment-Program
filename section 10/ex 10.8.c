#include"stdio.h"
#include"conio.h"
int compare(int m,int n,int mat1[][n],int mat2[][n]);
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
    int (*ptr)(int m,int n,int mat1[][n],int mat2[][n])=&compare;
    int equal=(*ptr)(m,n,mat1,mat2);
    if(equal==1)
    {
        printf("both the array are identical.\n");
    }
    else
    {
        printf("both the array are not identical.\n");
    }
    getch();
}
int compare(int m,int n,int mat1[][n],int mat2[][n])
{
    int i,j,equal;
    equal=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if(mat1[i][j]!=mat2[i][j])
           {
             equal=0;
             break;
           }
        }
    }
    return equal;
}
