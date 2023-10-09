#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void begin();
void end();
void position();

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
        printf("Do you want to store more data if yes enter 1,if no enter 0\n");
        scanf("%d",&choice);
    }while(choice);
    printf("Printing the element of linked list\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->add;
    }
    //delet the starting node
    printf("delet the starting node of linked list\n");
    begin();
    printf("printing the data after delet the first node in the linked list\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->add;
    }
    //delet the end node
    printf("delet the end node of linked list\n");
    end();
    printf("printing the data after delet the end node in the linked list\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->add;
    }
    //enter position of node to delet it
    printf("delet the node of linked list which position is given by user \n");
    position();
    printf("printing the data after delet the position node in the linked list\n");
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
    if(head==0)
    {
        printf("there is no node in the list\n");
    }
    else
    {
        temp=head;
        head=temp->add;
        free(temp);
    }
}
/*this logic is not work if in the linked list 2 node is present or it is working for all other condition
void end()
{
    struct node *endnode;
    temp=head;
    int count=0,i=1;
    while(temp!=0)
    {
        temp=temp->add;
        count++;
    }
    printf("count=%d\n",count);
    temp=head;
    while(i<count-1)//(i==count-1) condition is provided for if 2 node is present in the linked list then only this condition is executed
    {
        temp=temp->add;
        i++;
    }
    if(temp==head)
    {
        head=0;
        free(temp);
    }
    else
    {
        endnode=temp->add;
        temp->add=0;
        free(endnode);
    }
}*/
void end()
{
    struct node *previous;
    temp=head;
    while(temp->add!=0)
    {
        previous=temp;
        temp=temp->add;
    }
    if(temp==head)
    {
        head=0;
        free(temp);
    }
    else
    {
       previous->add=0;
        free(temp);
    }
}

void position()
{
    struct node *nextnode;
    int pos,i=1,count=0;
    printf("Enter position of node to delet it:\n");
    scanf("%d",&pos);
    temp=head;
    while(temp!=0)
    {
        temp=temp->add;
        count++;
    }
    if(pos>count)
    {
        printf("invalid position\n");
    }
    else
    {
        temp=head;
        while(i<pos-1)
        {
            temp=temp->add;
            i++;
        }
        nextnode=temp->add;
        temp->add=nextnode->add;
        free(nextnode);
    }
}
