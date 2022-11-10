#include<stdio.h>
void quickSort(int, int);
int split(int, int);
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
    quickSort(0, s-1);
    print(a, s);
    return 0;
}
void quickSort(int start, int end)
{
    int s;
    if(start >= end)
        return;
    s = split(start, end);
    quickSort(start, s-1);  //takes left sub array to split point
    quickSort(s+1, end);    // takes right sub array to split point
    
}
int split(int start, int end)
{
    int p = a[start];
    int i = start, j = end, temp;
    while (i < j)
    {
        while (a[i] <= p)
        {
            i++;
        }
        while (a[j] > p)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        a[start] = a[j];
        a[j] = p;
        return j;
    }
    
}
void print(int arr[], int size)
{
    printf("The elements are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%2d ", arr[i]);
    }
}