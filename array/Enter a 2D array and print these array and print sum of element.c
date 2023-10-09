#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,sum;
    sum=0;
    int a[2][3];
    printf("Enter value of matrix\n");
    for(i=0;i<2;i++)//for row execution
    {
        for(j=0;j<3;j++)//for column execution
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("value of matrix is:\n");
    for(i=0;i<2;i++)//for row execution
    {
        for(j=0;j<3;j++)//for column execution
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)//for row execution
    {
        for(j=0;j<3;j++)//for column execution
        {
            sum=sum+a[i][j];
        }
    }
    printf("sum of matrix is %d",sum);
    getch();
}
