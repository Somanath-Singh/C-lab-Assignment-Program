
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[5],arr2[5],sumarr[5],i;
    printf("Enter value of array 1:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter value of array 2:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Values of sumarray is printing\n");
    for(i=0;i<5;i++)
    {
       sumarr[i]=arr1[i]+arr2[i];
        printf("sumarr element at index %d is=%d\n",i,sumarr[i]);
    }

    getch();
}
