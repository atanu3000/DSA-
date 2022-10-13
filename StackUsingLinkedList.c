#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node {
    int info;
    struct node *link;
} *top = NULL;
void main()
{
    int ch;
    while(1)
    {
        printf("\n1. Push\n");
        printf("2. Pop]n\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\nEnter your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong Choice\n");
                break;
        }
    }
}
void push()
{
    int m;
    printf("Enter value: ");
    scanf("%d", &m);
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = m;
    tmp->link = top;
    top = tmp;
}
void pop()
{
    struct node *tmp;
    if(top == NULL)
    {
        printf("Under Flow Condition");
        return;
    }
    tmp = top;
    printf("%d is deleted",top->info );
    top = top->link;
    free(tmp);
}
void display()
{
    if(top == NULL)
    {
        printf("No Elements");
        return;
    }
    struct node *p;
    p = top;
    while(p != NULL)
    {
        printf("%d ", p->info);
        p = p->link;
    }
}