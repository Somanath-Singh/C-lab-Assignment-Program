#include"stdio.h"
#include"conio.h"
#include<stdlib.h>
  void main()\
  {
      FILE *fp,*fpi;
      fp=NULL;
      fpi=NULL;
      char c;
      fp=fopen("abc.txt","r");
      if(fp==NULL)
      {
          printf("error1\n");
          exit(1);
      }
       fpi=fopen("destination.txt","w");
        if(fpi==NULL)
        {
          printf("error2\n");
          exit(1);
        }
      while((c=fgetc(fp))!=EOF)
      {
          fputc(c,fpi);
      }
      fclose(fp);
      fclose(fpi);
      getch();
  }
