#include<stdio.h>
#include<stdlib.h>
int a[100];
int n, val, i, j, element, pos, temp;
void create();
void display();
void insert();
void delet();
void sort();
void search();

void main()
{
    int ch;
    while (1)
    {
        printf("\n......Menu.......\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Insert\n");
        printf("4. Delete\n");
        printf("5. Sort\n");
        printf("6. Search\n");
        printf("7. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delet();
            break;
        case 5:
            sort();
            break;
        case 6:
            search();
            break;
        case 7:
            exit(0);
            break;

        default:
            printf("Invalid option.\n");
            break;
        }
    }
}
void create()
{
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the values:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display()
{
    printf("The elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void insert()
{
    printf("Enter the new value:\n");
    scanf("%d", &val);
    printf("Enter the positon:\n");
    scanf("%d", &pos);
    for (i = n; i >= pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos - 1] = val;
    n = n + 1;
    display();
}
void delet() 
{
    printf("Enter the position to delete:\n");
    scanf("%d", &pos);
    for(i=pos-1; i <=n-1; i++)
    {
        a[i]= a[i +1];
    }
    n = n-1;
    display();
}
void sort()
{
    for(i = 0; i < n; i++)
    {
        for(j = i +1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] =temp;
            }
        }
    }
    display();
}
void search()
{
    printf("Enter the element:\n");
    scanf("%d", &element);
    for(i = 0; i < n; i++)
    {
        if(a[i] == element)
        {
            pos = i;
            break;
        }
    }
    printf("The position of the element is %d", pos+1);
}
