#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  printf("Enter any character:");
  scanf("%c",&ch);
  (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')?(printf("Enter character is voiwel")):(printf("Enter character is consonant"));
  getch();
}
