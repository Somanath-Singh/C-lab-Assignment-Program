#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

void main()
{
    int n,m,i,j,choice,*ptr1;
       int a,b;
    int *ptr2;
    int temp;
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
   // free(ptr1);
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
    //free(ptr2);
    //menu provided
    printf("------------------------------------------------------------------------------------------------------\n");
    printf("1.-----insert an element in the 1st and 2nd array and ask user to how many element want to store--------\n");
    printf("2.-----sort the 1st array-------\n");
    printf("3.------sort the 2nd array-------\n");
    printf("4.------merge the two array-------\n");
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("Enter your choice in between 1 to 4 to perform operation\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter the modify size of array one:\n");
            scanf("%d",&a);
            int *p1=realloc(ptr1,a*sizeof(int));
            printf("Enter %d elements\n",a-n);
             for(i=n;i<a;i++)
             {
              scanf("%d",(p1+i));
              }
              printf("Elements of 1st array are\n");
             for(i=0;i<a;i++)
             {
              printf("%d\t",*(p1+i));
              }
             printf("\n");
             free(p1);
             //2nd array
             printf("Enter the modify size of array two:\n");
            scanf("%d",&b);
            int *p2=realloc(ptr2,b*sizeof(int));
            printf("Enter %d elements\n",b-m);
             for(i=m;i<b;i++)
             {
              scanf("%d",(p2+i));
              }
              printf("Elements of 2nd array are\n");
             for(i=0;i<b;i++)
             {
              printf("%d\t",*(p2+i));
              }
             printf("\n");
             free(p2);
             break;
      case 2:
         printf("sorting the 1st array in descending order\n");
          for(i=0;i<n;i++)
          {
            for(j=i+1;j<n;j++)
             {
             if(*(ptr1+i) < *(ptr1+j))
              {
                temp=*(ptr1+i);
                *(ptr1+i)=*(ptr1+j);
                *(ptr1+j)=temp;
              }
            }
           }
        printf("Elements are:\n");
        for(i=0;i<n;i++)
          {
          printf("%d\t",*(ptr1+i));
          }
         break;
    case 3:
         printf("sorting the 2nd array in descending order\n");
          for(i=0;i<m;i++)
          {
            for(j=i+1;j<m;j++)
             {
             if(*(ptr2+i) < *(ptr2+j))
              {
                temp=*(ptr2+i);
                *(ptr2+i)=*(ptr2+j);
                *(ptr2+j)=temp;
              }
            }
           }
        printf("Elements are:\n");
        for(i=0;i<m;i++)
          {
          printf("%d\t",*(ptr2+i));
          }
         break;
    case 4:
        printf("Merge two arrays:\n");
        int *p3=(int*)realloc(ptr1,(n+m)*sizeof(int));
        int k=0;
        for(i=n;i<(m+n);i++)
        {
           *(p3+i)=*(ptr2+k);
           k++;
        }
        printf("Arrays are :\n");
        for(i=0;i<(m+n);i++)
        {
           printf("%d\t",*(p3+i));
        }
        free(p3);
        break;
    default:
        printf("please enter between 1 to 4 \n");
        break;
   }
   free(ptr1);
   free(ptr2);
    getch();
}

