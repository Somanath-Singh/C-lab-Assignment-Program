#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
void  mergetwo(int *ptr1,int *ptr2,int n,int a);
void main()
{
    int n,m,i,j,choice,*ptr1;
    int *ptr2;
    printf("Enter size of array one:\n");
    scanf("%d",&n);
    ptr1=(int*)calloc(n,sizeof(int));
    printf("Enter %d elements\n",n);
             for(i=0;i<n;i++)
             {
              scanf("%d",(ptr1+i));
              }
              printf("Elements of 1st array are\n");
             for(i=0;i<n;i++)
             {
              printf("%d\t",*(ptr1+i));
              }
             printf("\n");
    //2nd matrix
    printf("Enter size of array two:\n");
    scanf("%d",&m);
    ptr2=(int*)malloc(m*sizeof(int));
    printf("Enter %d elements\n",m);
             for(i=0;i<m;i++)
             {
              scanf("%d",(ptr2+i));
              }
              printf("Elements of 2nd array are\n");
             for(i=0;i<m;i++)
             {
              printf("%d\t",*(ptr2+i));
              }
        printf("\n");
          int a=n+m;

        mergetwo(ptr1,ptr2,n,a);
        free(ptr1);
        free(ptr2);
        getch();
}
void  mergetwo(int *ptr1,int *ptr2,int n,int a)
{
      int i,k=0;
     int *ptr=(int*)realloc(ptr1,a*sizeof(int));
    for(i=n;i<a;i++)
    {
        *(ptr+i)=*(ptr2+k);
        k++;
    }
    printf("Printing the merged array\n");
    for(i=0;i<a;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
}




