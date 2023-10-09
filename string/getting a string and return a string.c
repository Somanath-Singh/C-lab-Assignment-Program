#include"stdio.h"
#include"conio.h"
char *returns();
void main()
{
   char *ch;
    ch=returns();;
   printf("%s",ch);
    getch();
}
char *returns()
{
      static char *str[30];
    puts("Enter something");
    gets(str);
    return str;
}
