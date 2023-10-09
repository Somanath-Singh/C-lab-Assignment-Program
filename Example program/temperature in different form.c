#include<stdio.h>


int main()
{

    int temp;
   printf("enter tempreture:");
   scanf("%d",&temp);

   if(temp<=0)
   {

       printf("Freezing");
   }
   else
   {
       if(temp>=1)
       {
           if(temp<=10)
           {
               printf("very cold");
           }
           else
           {
               if(temp<=20)
               {
                   printf("cold");
               }
               else
               {
                   if(temp<=30)
                   {
                       printf("moderate");
                   }
                   else
                   {
                       printf("hot");
                   }
               }
           }
       }
   }
   return 0;
}
