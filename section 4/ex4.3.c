#include<stdio.h>
#include<conio.h>
void main()
{
    int math,physics,chemistry,totalmarks;
    printf("Enter marks of three subject:");
    scanf("%d %d %d",&math,&physics,&chemistry);
    totalmarks=math+physics+chemistry;
    if(math>=60&&physics>=50&&chemistry>=40)
        printf("Admited");
    else if(totalmarks>=200)
        printf("admited");
    else
        printf("not admited");
    getch();

}
