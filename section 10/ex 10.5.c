#include"stdio.h"
#include"conio.h"
void largestsmallest(int b,int c,int array1[][c]);

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
    //function call
    largestsmallest(m,n,mat);


    getch();
}
void largestsmallest(int b,int c,int array1[][c])
{
    int a[b*c];
    int p,q;
    int pos=0;
    int temp;
    printf("converting 2D matrix to 1D array:\n");
     for(p=0;p<b;p++)
     {
        for(q=0;q<c;q++)
        {
          a[pos]=array1[p][q];
          pos++;
        }
     }

     //printing 1D array
    for(p=0;p<b*c;p++)
    {
        printf("%d\t",a[p]);
    }
    //logic providing for descending order
   for(p=0;p<b*c;p++)
   {
       for(q=p+1;q<b*c;q++)
       {
           if(a[p]<a[q])
           {
               temp=a[p];
               a[p]=a[q];
               a[q]=temp;
           }
       }
   }
   printf("\n array in descending order:\n");
    for(p=0;p<b*c;p++)
    {
        printf("%d\t",a[p]);
    }
    printf("\n");
    printf("largest no of matrix element is is:%d\n",a[0]);
    printf("second largest no of matrix element is:%d\n",a[1]);
    printf("smallest no of matrix element is:%d\n",a[b*c-1]);
    printf("second smallest no of matrix element is:%d\n",a[b*c-2]);
}

