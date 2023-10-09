//wap using pointer to read an array and print its reverse order

#include"stdio.h"
#include"conio.h"
void main()
{
    int n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    printf("Print value of array is:\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    printf("\nPrinting array in reverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",*(a+i));
    }
    getch();
}
