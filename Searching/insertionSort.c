#include<stdio.h>
void insertionSort(int [], int);
void print(int [], int);
int a[20];
int main()
{
    int s;
    printf("Enter the size of array: ");
    scanf("%d", &s);
    printf("Enter the elements: \n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    insertionSort(a, s);
    print(a, s);
    return 0;
}
void insertionSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j <= i+1; j++)
        {
            if(a[j] > a[i+1])
            {
                int temp = a[j];
                a[j] = a[i+1];
                a[i+1] = temp;
            }
        }
        
    }
    
}
void print(int arr[], int size)
{
    printf("The elements are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}