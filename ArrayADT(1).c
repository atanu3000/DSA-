#include<stdio.h>
#include<stdlib.h>

void creatArr(int **a, int tSize) {
    a = (int**)malloc(tSize * sizeof(int));
}

void setArr(int **a,int uSize) {
    int n;
    for (int i = 0; i < uSize; i++)
    {
        printf("Enter the element %d: ", i);
        scanf("%d",&n);
        (a)[i] = n;
    }
    
}

void showArr(int **a, int uSize) {
    for (int i = 0; i < uSize; i++)
    {
        printf("%d\n", (a)[i]);
    }
    
}

int main() {
    int *ptr;
    int tSize, uSize;
    printf("Enter total size of array: ");
    scanf("%d", &tSize);
    creatArr(&ptr, tSize);
    printf("Enter usable size of array: ");
    scanf("%d", &uSize);
    printf("We are running setArr now\n");
    setArr(&ptr, uSize);
    printf("We are running setArr now\n");
    showArr(&ptr, uSize);

}