#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void doublyCircularLinkedList(struct Node *head){    //print doubly Circular linked list in decent order
    struct Node *ptr = head;
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}

void reverseLinkedList(struct Node *head){   //print doubly Circular linked list in reverse order
    struct Node *ptr = head;
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->prev;
    }while(ptr != head);
}

int main() {
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;
    struct Node *n4;

    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));
    n3 = (struct Node*)malloc(sizeof(struct Node));
    n4 = (struct Node*)malloc(sizeof(struct Node));

    n1->data = 5;
    n1->prev = n4;
    n1->next = n2;

    n2->data = 8;
    n2->prev = n1;
    n2->next = n3;

    n3->data = 12;
    n3->prev = n2;
    n3->next = n4;

    n4->data = 17;
    n4->prev = n3;
    n4->next = n1;

    //doublyCircularLinkedList(n1);
    reverseLinkedList(n4);
    return 0;
}