#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[3][3],i,j,sum;
    sum=0;
    printf("Enter value of 2d matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",arr[i][j]);
           sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("sum=%d",sum);
    getch();
}
