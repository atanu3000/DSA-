// Array implementation of singe Queue
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void insert();
void del();
void display();
int a[MAX], front = -1, rear = -1;
void main()
{
    int ch;
    while(1)
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
            insert();
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
void insert(){
    int m;
    printf("Enter element: ");
    scanf("%d",&m);
    if(rear == MAX-1)
    {
        printf("Overflow");
        return;
    }
    else{
        if((front == -1) && (rear == -1))
        {
            front = 0;
            rear = 0;
            a[rear] = m;
        }
        else
        {
            a[++rear] = m;
        }
    }

}
void del()
{
    if((front == -1) || (front > rear))
    {
        printf("Underflow");
        return;
    }
    else{
        printf("%d is deleted", a[front] );
        front++;
    }
}
void display()
{
    if(front == -1)
    {
        printf("under flow");
        return;
    }
    printf("Elements are :\n");
    for(int i = front; i <= rear; i++)
    {
        printf("%d ",a[i]);
    }
}