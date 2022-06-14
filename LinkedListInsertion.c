#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

//Linked list creation
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

//Case 1
struct Node * insertAtFirst (struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
};

//case 2
struct Node * insertAtIndex (struct Node * head, int data, int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//case 3
struct Node * insertAtEnd (struct Node * head, int data) {
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    
    while (p->next!=NULL)
    {
        p = p->next;
        
    }
    
    ptr->next = NULL;
    p->next = ptr;
    return head;
    
}

//Case 4
struct Node * insertAfterNode (struct Node * head, struct Node * prevNode, int data) {
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    
    ptr->next = prevNode->next; 
    prevNode->next = ptr;    
    return head;
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
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    //head = insertAtFirst(head, 5);
    //head = insertAtIndex(head, 5, 2);
    //head = insertAtEnd(head, 5);
    head = insertAfterNode(head, third, 15);

    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);
    
    
    return 0;
}