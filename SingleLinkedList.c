#include <stdio.h>
#include <stdlib.h>

void create();
void display();

struct node
{
    int info;
    struct node *link;
} * start;

void main()
{
    int ch, n, i, j, elm;
    start = NULL;
    while (1)
    {
        printf("\n---------MENU----------\n");
        printf("1. Create \n");
        printf("2. Dispaly \n");
        printf("3. Insert at beg \n");
        printf("4. Insert in between \n");
        printf("5. Insert at last \n");
        printf("6. Delete \n");
        printf("7. Sorting \n");
        printf("8. Reverse \n");
        printf("9. Exit \n");
        printf("\n Enter your choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the no. of nodes to create: ");
            scanf("%d", &n);
            printf("Enter informations: ");
            for (int i = 1; i <= n; i++)
            {
                scanf("%d", &elm);
                create(elm);
            }
            break;
        case 2:
            display();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Invalid Choise");
            break;
        }
    }
}
void create(int data)
{
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        q = start;
        while (q->link != NULL)
        {
            q = q->link;
        }
        q->link = temp;
    }
}

void display()
{
    struct node *q;
    if (start == NULL)
    {
        printf("List is Empty");
    }
    q = start;
    while (q != NULL)
    {
        printf("%d -> ", q->info);
        q = q->link;
    }
}
