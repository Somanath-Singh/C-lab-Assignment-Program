#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

void main()
{
    int n,i,j,temp,*ptr;
    printf("Enter how many element you want to specify at run time:\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
   printf("arranging all the element in descending order:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i) < *(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    printf("Elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    printf("largest element of array is:%d\n",*(ptr+0));
    printf("smallest element of array is:%d\n",*(ptr+n-1));
    free(ptr);
    getch();
}
