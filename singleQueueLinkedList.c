// single queue implementation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
} *front = NULL, *rear = NULL;
void insert(int);
void del();
void display();
void main()
{
    int ch, elm;
    while (1)
    {
        printf("\n------MENU------\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the information: ");
            scanf("%d", &elm);
            insert(elm);
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    }
}
void insert(int data)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    if((front == NULL) || (rear == NULL))
    {
        rear = tmp;
        front = tmp;
        rear->link = NULL;
    }
    else
    {   
        rear->link = tmp;
        tmp->link = NULL;
        rear = tmp;
    }
}
void del()
{
    struct node *tmp;
    if(front == NULL)
    {
        printf("underflow\n");
        return;
    }
    else
    {
        tmp = front;
        front = front->link;
        free(tmp);
    }
}
void display()
{
    struct node *p = front;
    if(front == NULL)
    {
        printf("Empty\n");
        return;
    }   
    else
    {
        while (p != NULL)
        {
            printf("%d ", p->info);
            p = p->link;
        }
        
    }
}