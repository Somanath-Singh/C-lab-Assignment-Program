#include<stdio.h>
void main()
{
    int num,i,equal;
    printf("Enter an no\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {

        equal=num*i;
        printf("%d*%d=%d\n",num,i,equal);
    }
    getch();
}
