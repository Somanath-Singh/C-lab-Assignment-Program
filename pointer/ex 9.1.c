#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array value\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
     printf("printing array value using pointer\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] %u %d\n",i,(a+i),*(a+i));
    }
    printf("Display array value in simple mathod\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]  %u  %d\n",i,&a[i],a[i]);
    }
    getch();
}
