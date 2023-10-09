#include"stdio.h"
#include"conio.h"
void largestsmallest(int [],int);

void main()
{
    int m,n,i,j,c;
    printf("Enter size of row\n");
    scanf("%d",&m);
    printf("Enter size of column\n");
    scanf("%d",&n);
    int mat[m][n];
    printf("Enter value of matrix\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("value of matrix is:\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    //declaration of 1D array
    int array2[m*n];
     c=0;
    printf("converting 2D matrix to 1D matrix:\n");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
          array2[c]=mat[i][j];
          c++;
        }
     }
   //printing value of 1D matrix
    for(i=0;i<m*n;i++)
    {
        printf("%d\t",array2[i]);
    }
    printf("\n");
    //calling of function to arrange matrix in descending order
    largestsmallest(array2,m*n);

    printf("matrix in descending order:\n");
    for(i=0;i<m*n;i++)
    {
        printf("%d\t",array2[i]);
    }
    printf("\n");
    printf("largest no of matrix is:%d\n",array2[0]);
    printf("second largest no of matrix is:%d\n",array2[1]);
    printf("smallest no of matrix is:%d\n",array2[m*n-1]);
    printf("second smallest no of matrix is:%d\n",array2[m*n-2]);
    getch();
}
void largestsmallest(int a[],int b)
{
    int p,q;
   for(p=0;p<b;p++)
   {
       for(q=p+1;q<b;q++)
       {
           if(a[p]<a[q])
           {

               int temp=a[p];
               a[p]=a[q];
               a[q]=temp;
           }
       }
   }
}


