
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,pos;
   printf("Enter size of array\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the value of array:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("printing the array:\n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
   printf("\n");
   printf("Enter the location of array to be deleted:\n");
   scanf("%d",&pos);
   for(i=pos-1;i<n-1;i++)
   {
       a[i]=a[i+1];
   }
   printf("printing the resultant array:\n");
   for(i=0;i<n-1;i++)
   {
       printf("%d\t",a[i]);
   }
   getch();
}
