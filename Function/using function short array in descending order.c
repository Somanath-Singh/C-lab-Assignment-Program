#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{

    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter value of array:\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
    }
    sort(array,n);
    printf("Enter array is in ascending order:\n");
    for(i=0;i<n;i++)
    {
       printf("%d",array[i]);
    }
    getch();

}

void sort(int abc[],int m)
{

    int i,j,temp;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
            {

                if(abc[i]>abc[j])
                {
                  /*swap(&abc[i],&abc[j]);
                   void swap(int *a,int *b)
                     int temp;
                        temp=*a;
                       *a=*b;
                      *b=temp;*///using through thefunction
                   temp=abc[i];
                   abc[i]=abc[j];
                   abc[j]=temp;
                }
            }
    }
}
