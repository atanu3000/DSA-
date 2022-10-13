#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void push();
void pop();
void display();
int top = -1, a[MAX];
void main()
{
    int ch;
    while(1)
    {
        printf("\n-----MENU-----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
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
    if(top==MAX-1)
    {
        printf("Over Flow Condition\n");
        return;
    }
    else
    {
        printf("Enter value: ");
        scanf("%d",&m);
        // top++;
        a[++top] = m;
    }
}
void pop()
{
    int x;
    if(top==-1)
    {
        printf("Under Flow Condition\n");
        return;
    }
    else
    {
        printf("%d is deleted\n", a[top]);
        top--;
    }
}
void display()
{
    for(int i = top; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}