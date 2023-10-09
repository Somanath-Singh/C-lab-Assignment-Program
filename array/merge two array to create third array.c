#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,m,j,p,k,l;
   l=0;
   printf("Enter size of array 1\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the value of array 1:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("printing the array 1:\n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
   printf("\n");
   //second array
   printf("Enter size of array 2\n");
   scanf("%d",&m);
   int b[m];
   printf("Enter the value of array 2:\n");
   for(j=0;j<m;j++)
   {
       scanf("%d",&b[j]);
   }
   printf("printing the 2nd array:\n");
   for(j=0;j<m;j++)
   {
       printf("%d\t",b[j]);
   }
   printf("\n");
   p=n+m;
   //Declare 3rd array
   int c[p];
   //storing 1st array in 3rd array
   for(k=0;k<p;k++)
   {
       if(k<n)
       {
          c[k]=a[k];
       }
       else
       {
            c[k]=b[l];
            l++;
       }
   }
   printf("printing the 3rd array:\n");
   for(k=0;k<p;k++)
   {
       printf("%d\t",c[k]);
   }
   getch();
}

