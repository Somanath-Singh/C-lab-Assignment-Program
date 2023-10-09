#include"stdio.h"
#include"conio.h"
void transpose(int b,int c,int [][c]);

void main()
{
    int m,n,i,j;
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
    transpose(m,n,mat);
    getch();
}
void transpose(int b,int c,int a[][c])
{
    int p,q;
    printf("transpose of matrix is:\n");
     for(p=0;p<c;p++)
    {

        for(q=0;q<b;q++)
        {
            printf("%d\t",a[q][p]);
        }
        printf("\n");
    }

}
