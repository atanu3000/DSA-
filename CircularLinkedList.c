#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node * head)
{
    struct Node * ptr = head;
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    while (ptr != head);
}

int insertAtFirst(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = head->data;
    head->data = data;
    
    ptr->next = head->next;
    head->next = ptr;

    /*ptr->data = data;
    struct Node * p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
        
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;*/
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for Nodes in the Linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second node
    head->data = 7;
    head->next = second;

    // link second and third node
    second->data = 11;
    second->next = third;

    // link third and fourth node
    third->data = 21;
    third->next = fourth;

    // Terminate the list at fourth node
    fourth->data = 66;
    fourth->next = head;

    printf("Linked List before insertion\n");
    linkedListTraversal(head);
    head = insertAtFirst(head, 4);

    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}