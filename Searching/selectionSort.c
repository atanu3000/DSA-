#include<stdio.h>
void selectionSort(int [], int size);
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
    selectionSort(a, s);
    print(a, s);
    return 0;
}
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
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