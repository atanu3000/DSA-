#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

//linked list creation
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//case 1 : delete the first node 
struct Node * deleteFirstNode (struct Node *head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;

}

//case 2 : delete the node of the given index
struct Node * deleteAtIndex (struct Node *head, int index){
    struct Node * ptr = head;
    int i = 0;
    while (i!=index-1)
    {
        ptr = ptr->next;
        i++;
    }
    struct Node * q = ptr->next;
    ptr->next = q->next;
    free(q);
    return head;
    
}

//case 3 : delete the last node
struct Node * deleteAtEnd(struct Node * head) {
    struct Node * p = head;
    struct Node * q = head->next;
    
    while (q->next != NULL)
    {
        p = p->next;    
        q = q->next;    
         
    }
    p->next = q->next; // or,  p->next = NULL;
    free(q);    
    return head;
}

//case 4 : delete the first node with the given value
struct Node * deleteData (struct Node *head, int data){
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->data != data)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    
    free(q);
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
    second->data =8;
    second->next = third;

    // link third and fourth node
    third->data = 9;
    third->next = fourth;

    // Terminate the list at fourth node
    fourth->data = 66;
    fourth->next = NULL;
    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    printf("\nLinked list after deletion\n");
    //head = deleetFirstNode(head);
    //head = deleteAtIndex(head, 2);
    //head  = deleteAtEnd(head);
    head = deleteData(head, 9); //not use for the first node
    linkedListTraversal(head);
    return 0;
}