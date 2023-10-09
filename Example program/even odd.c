#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*void main()
{
    FILE *fp1,*fp2;
    int num;
    fp1=NULL;
    fp1=fopen("num.txt","w");

    if(fp1==NULL)
    {
        printf("error");
        exit(0);
    }

    for(int i=1;i<=100;i++)
    {

        fprintf(fp1,"%d\n",i );
    }
     printf("file created successfully.");

     //2nd step

     fp1=NULL;
    fp1=fopen("even.txt","r");

     fp2=NULL;
    fp2=fopen("even.txt","w");
    //open the even file

    if(fp2==NULL)
    {
        printf("error");
        exit(0);
    }

     for(int i=1;i<=100;i++)
    {

       num=fscanf(fp1,"%d",i);
       if(num%2==0)
       {
            fprintf(fp2,"%d\n",num );
       }
    }
    printf("even no is copy from another file.");
    fclose(fp1);
     fclose(fp2);

    getch();

}*//*
void main()
{
    FILE *fp1,*fp2;
    int num;
     fp1=NULL;
    fp1=fopen("num.txt","r");

     fp2=NULL;
    fp2=fopen("even.txt","w");
    //open the even file

     if(fp1==NULL)
    {
        printf("error");
        exit(0);
    }

    if(fp2==NULL)
    {
        printf("error");
        exit(0);
    }
while((num=getw(fp1))!=EOF)
{
       if(num%2==0)
       {
            putw(num,fp2);
       }
    }
    printf("even no is copy from another file.");
    fclose(fp1);
     fclose(fp2);

    getch();

}
*/
void main()
{
    FILE *fp1,*fp2;
    int num;
     fp1=NULL;
    fp1=fopen("num.txt","r");

     fp2=NULL;
    fp2=fopen("even.txt","w");
    //open the even file

     if(fp1==NULL)
    {
        printf("error");
        exit(0);
    }

    if(fp2==NULL)
    {
        printf("error");
        exit(0);
    }
    num=getw(fp1);
while(num!=EOF)
{
       if(num%2==0)
       {
            putw(num,fp2);
       }
       num=getw(fp1);
    }
    printf("even no is copy from another file.");
    fclose(fp1);
     fclose(fp2);

    getch();

}
