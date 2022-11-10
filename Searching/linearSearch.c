#include <stdio.h>
int linearSearch(int[], int, int);
int main(void)
{
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);
    int result = linearSearch(array, x, size);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
    return 0;
}
int linearSearch(int array[], int x, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == x)
        {
            return i;
        }
    }
    return -1;
    
}