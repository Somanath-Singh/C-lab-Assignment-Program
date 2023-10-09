#include"stdio.h"
#include"conio.h"
void main()
{
    int m,n,i,j,k;
    k=1;
    int nonezero=0;
    printf("Enter row size of sparse matrix\n");
    scanf("%d",&m);
    printf("Enter column size of sparse matrix\n");
    scanf("%d",&n);
    int mat[m][n];
    printf("Enter value of sparse matrix\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("sparse matrix is:\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    //find the no of non zero element is present in sparse matrix
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            if(mat[i][j]!=0)
            {
                nonezero++;
            }
        }
    }
    printf("none zero element present in the above sparse matrix is :%d\n",nonezero);
    //create a matrix which can store 3 tuple form of sparse matrix
    int spa[nonezero+1][3];

    //Entering the value of first row in 3 tuple form
    spa[0][0]=m;
    spa[0][1]=n;
    spa[0][2]=nonezero;
    //Entering the value into sparse matrix of 3 tuple form
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            if(mat[i][j]!=0)
            {
             spa[k][0]=i;
             spa[k][1]=j;
             spa[k][2]=mat[i][j];
             k++;
            }
        }
    }
    printf("printing the matrix of 3 tuple form\n");
    for(i=0;i<nonezero+1;i++)
    {

        for(j=0;j<3;j++)
        {
          printf("%d\t",spa[i][j]);
        }
        printf("\n");
    }
getch();
}
