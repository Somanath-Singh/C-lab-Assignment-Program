#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

void main()
{
    int n,i,*ptr;
    int sum=0;
    float avg=0;
    printf("Enter how many no you want to specify at run time:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
   printf("sum of all array element is:\n");
    for(i=0;i<n;i++)
    {
       sum=sum + *(ptr+i);
    }
    printf("%d\n",sum);
    avg=sum/n;
    printf("Average of array element is:%d",avg);
    free(ptr);
    getch();
}
