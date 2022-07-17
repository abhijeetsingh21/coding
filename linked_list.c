#include <stdio.h>
#include <stdlib.h>
struct node addAtFirst(int a);
struct node delFirstNode();
struct node addAtPos(int pos, int data);
struct node delAtPos(int pos);
struct node addNodeAtLast(int data1);
struct node delLastNode();
struct node print();

typedef struct node
{
    int data;
    struct node *link;
};
struct node *head, *pre, *post, *temp, *ptr;

struct node delFirstNode()
{
    temp = head;
    temp = temp->link;
    head->link = NULL;
    head = temp;

    return *head;
}
struct node delAtPos(int pos)
{
    ptr = head;
    while (pos != 1)
    {
        ptr = ptr->link;
    }
    ptr = ptr->link->link;

    return *head;
}

struct node addNodeAtLast(int data1)
{

    ptr = head;
    temp = malloc(sizeof(struct node));
    temp->data = data1;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = temp;
    return *head;
}

struct node delLastNode()
{
    temp = head;
    while (temp->link->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = NULL;
}

struct node addAtPos(int pos, int data3)
{
    ptr = head->link;
    pre = head;
    temp = malloc(sizeof(struct node));
    temp->data = data3;
    temp->link = NULL;

    while (pos != 1)
    {
        pre = ptr;
        ptr = ptr->link;
        pos -= 1;
    }
    temp->link = ptr;
    pre->link = temp;

    return *head;
}

struct node addAtFirst(int a)
{
    temp = malloc(sizeof(struct node));
    temp->data = a;
    temp->link = NULL;
    temp->link = head;
    head = temp;

    return *head;
}

struct node print()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");

    return *head;
}

int main()
{
    int n, data1, data2;
    scanf("%d", &n);
    scanf("%d", &data2);

    head = malloc(sizeof(struct node));
    head->data = data2;
    head->link = NULL;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data1);
        addNodeAtLast(data1);
    }

    addAtFirst(8);
    addAtPos(2, 9);
    delLastNode();
    delFirstNode();
    delAtPos(3);
    print();

    return 0;
}