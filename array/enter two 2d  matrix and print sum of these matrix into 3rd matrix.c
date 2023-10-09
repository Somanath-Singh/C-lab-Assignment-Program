#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int arr1[5];
    int arr2[5];
    int arr3[5];
    puts("Enter 1st array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1);
    }
    puts("Enter 2nd array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr2);
    }
    for(i=0;i<5;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        printf("sumarray elements at indexed %d is=%d\n",i,arr3[i]);
    }
    getch();
}
