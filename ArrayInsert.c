#include<stdio.h>

void display(int arr[], int n) {
    //Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}

int indInsert(int arr[], int size, int elm, int ind, int capacity) {
    //Insertion
    if(size>=capacity) {
        return -1;
    }
    
    for (int i = size-1; i >= ind; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[ind] = elm;
    return 1;
    
}

int main(){
    int size, arr[100];
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    int elm, ind;
    printf("Enter an element & index: ");
    scanf("%d%d", &elm, &ind);
    
    indInsert(arr, size, elm, ind, 100);
    display(arr, size+1);
    return 0;
}