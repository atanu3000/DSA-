#include<stdio.h>

int linearSearch(int arr[], int size, int elm) {
    //searching start
    for (int i = 0; i < size; i++)
    {
        if(elm == arr[i]) {
            return i;
            break;
        }
    }
    return -1;
    
}

int binarySearch(int arr[], int size, int elm) {
    int low = 0, mid, high = size-1;
    //searching start
    while(low<=high){
        mid = (low + high) / 2;
    
        if(arr[mid] == elm){
         return mid;
        }
        if(arr[mid] > elm){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 8, 14, 23, 25, 38, 45, 50, 63, 70};
    int size = sizeof(arr)/sizeof(int);
    
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int elm;
    printf("Enter a element: ");
    scanf("%d",&elm);

    //linear search for sorted & unsorted array both
//    printf("Index: %d", linearSearch(arr, size, elm));

    //binary search only for sorted array
    printf("Index: %d", binarySearch(arr, size, elm));
 
    return 0;
    
}