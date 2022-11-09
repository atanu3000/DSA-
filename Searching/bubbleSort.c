#include<stdio.h>
void bubbleSort(int [], int size);
void print(int [], int size);
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
    bubbleSort(a, s);
    print(a, s);
    return 0;
}
void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
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