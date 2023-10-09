#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,value;
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
   printf("Which element you want to search:\n");
   scanf("%d\n",&value);
   for(i=0;i<n;i++)
   {
       if(a[i]==value)
       {
           printf("Value found at index %d\n",i);
       }
   }
   getch();
}
