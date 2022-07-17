#include<stdio.h>
#include<stdlib.h>
void print(head);
void add(struct node *head, int data);
struct  node 

{
    int data;
    struct node *link;
};

int main()

{
    struct node *head=NULL;
    head = malloc(sizeof(struct node));

    head -> data =45;
    head -> link = NULL;
    
    struct node *current =malloc (sizeof(struct node));
    current->data  =98;
    current->link =NULL;
    head->link = current;
    
    
    current=malloc(sizeof(struct node));
    current->data =3;
    current -> link =NULL;
    head -> link->link=current;

    add(head,67);
    print(head);

    return 0;
}

void add(struct node *head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp ->data=data;
    temp ->link =NULL;
    while(ptr->link != NULL)
    ptr = ptr->link;
    ptr->link=temp;
    
}

void print(struct node *head)

{
    if (head ==NULL)
        printf("Linked List is Empty");
    struct node *ptr =NULL;
    ptr = head;
    while (ptr != NULL)

    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;

    }
        
}