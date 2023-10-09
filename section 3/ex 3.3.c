#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  printf("Enter any character");
  scanf("%c",&ch);
  (ch>='A'&&ch<='Z')?(printf("Enter character is upper case")):(printf("Enter character is lower case"));
  getch();
}
