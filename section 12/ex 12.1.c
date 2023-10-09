#include"stdio.h"
#include"conio.h"
#define number 5
union item
{
    char itemcode[20];
    char name[30];
    float price;
};
void main()
{
    int i;
    union item p[number];
    printf("Enter details of 5 item\n");
    printf("----------------------------\n");
   for(i=0;i<number;i++)
   {
       printf("Enter details of item %d\n",i+1);
       printf("----------**----------\n");
       printf("Enter item code of item %d\n",i+1);
       scanf("%s",p[i].itemcode);
       printf("item no of item %d  is %s\n",i+1,p[i].itemcode);
        printf("Enter name of item %d\n",i+1);
       scanf("%s",p[i].name);
       printf("item name of item %d  is %s\n",i+1,p[i].name);
       printf("Enter price of item %d\n",i+1);
       scanf("%f",&p[i].price);
       printf("price of item %d is %f\n",i+1,p[i].price);
       printf("----------**----------\n");
   }
   getch();
}
