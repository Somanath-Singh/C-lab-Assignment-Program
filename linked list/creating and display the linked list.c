#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *add;
};

void main()
{
    struct node *head,*newnode,*temp;
    head=0;
    int choice;
   do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:\n");
    scanf("%d",&newnode->data);
    newnode->add=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->add=newnode;
        temp=newnode;
    }
    printf("Do you want to store more data if YES enter 1, if NO enter 0\n");
    scanf("%d",&choice);
    } while(choice);
    //traverse the node
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->add;
    }
    getch();
}
