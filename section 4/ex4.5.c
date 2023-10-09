
#include<stdio.h>
#include<conio.h>
void main()
{
    int unit,extra;
    float charges,electricbill;
    char ch[20];
    puts("enter your name:");
    gets(ch);
    printf("Enter the unit consumed by user:");
    scanf("%d",&unit);
    if(unit<=200)
    {
        electricbill=unit*0.8+100;
    }
    else if(unit>200&&unit<=300)
    {
        extra=unit%200;
        electricbill=200*0.8+extra*1.30+100;
    }
    else
    {
        extra=unit%300;
        electricbill=200*0.8+100*1.30+extra*2+100;
        printf("Electric bill=%f",electricbill);
        if(electricbill>400)
        {
            electricbill=electricbill+(electricbill/100)*15;
        }

    }
      printf("Electric bill of consumer=%f",electricbill);
    getch();
}
