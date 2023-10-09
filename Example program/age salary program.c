//wap to increase the salary whose age is less than 60
#include<stdio.h>
void main()
{

    int age,salary;
    salary=0;
    printf("Enter age and salary\n");
    scanf("%d %d",&age,&salary);
    if(age>50)
    {
        if(salary<60000)
        {
            salary=salary+10000;
        }
        else
        {
            salary=salary+5000;
        }
    }
    else
    {
     salary=salary+3000;
    }
    printf(" your salary is %d",salary);
    printf("End of program\n");
    getch();
}
