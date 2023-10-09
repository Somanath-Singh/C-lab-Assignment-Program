#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//insert a node at beginning
void begin();
void end();
void location();
struct node
{
    int data;
    struct node *add;
};
struct node *head,*newnode,*temp;
void main()
{
    head=0;
    int choice;
    do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
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
   }while(choice);
   //traverse the node of linked list
   temp=head;
   while(temp!=0)
   {
       printf("%d\n",temp->data);
       temp=temp->add;
   }
   //insert data at beginning
   printf("insert a node at beginning of linked list\n");
   begin();
   printf("printing the data after insert a node at beginning\n");
   temp=head;
   while(temp!=0)
   {
       printf("%d\n",temp->data);
       temp=temp->add;
   }
   //insert at end
   printf("insert data at end of linked list\n");
   end();
   printf("printing the data after insert a node at beginning\n");
   temp=head;
   while(temp!=0)
   {
       printf("%d\n",temp->data);
       temp=temp->add;
   }
   //insert at given position
   printf("insert data at given position of linked list\n");
   location();
   printf("printing the data after insert a node at given position\n");
   temp=head;
   while(temp!=0)
   {
       printf("%d\n",temp->data);
       temp=temp->add;
   }
   getch();
}
void begin()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert at beginning of linked list\n");
    scanf("%d",&newnode->data);
    newnode->add=head;
    head=newnode;
}
void end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert at end of linked list\n");
    scanf("%d",&newnode->data);
    newnode->add=0;
    temp=head;
    while(temp->add!=0)
    {
        temp=temp->add;
    }
    temp->add=newnode;
}
void location()
{
    int pos,count=0,i=1;
    printf("Enter location where you want to add new node\n");
    scanf("%d",&pos);
    temp=head;
    while(temp!=0)
    {
        temp=temp->add;
        count++;
    }
    printf("count=%d\n",count);
    if(pos>count)
    {
        printf("Invalid position\n");
    }
    else
    {
        temp=head;
        if(i<pos-1)
        {
            temp=temp->add;
            i++;
        }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert at end of linked list\n");
    scanf("%d",&newnode->data);
     newnode->add=0;
    newnode->add=temp->add;
    temp->add=newnode;
    }
}
