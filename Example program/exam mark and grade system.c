#include<stdio.h>
void main()
{
    int sub1,sub2,sub3,sub4,sub5,sub6,sum,percentage;
    printf("Enter all six subject marks\n");
    scanf("%d %d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
    sum=sub1+sub2+sub3+sub4+sub5+sub6;
    percentage=((sum*100)/600);
    if(percentage>80)
        printf("Grade 'A'");
    else if(percentage>70)
    printf("Grade 'B'");
    else if(percentage>60)
    printf("Grade 'C'");
    else
    printf("Grade 'D");
    getch();
}
