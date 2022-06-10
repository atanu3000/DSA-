#include<stdio.h>
#include<stdlib.h>

struct myArray {
	int totalSize;
	int usedSize;
	int *ptr;
};

void creatArray(struct myArray* a, int tSize, int uSize) {
	//(*a).totalSize = tSize;
	//(*a).usedSize = uSize;
	//(*a).ptr = (int *)malloc(tSize * sizeof(int));	
	
	a->totalSize = tSize;
	a->usedSize = uSize;
	a->ptr = (int *)malloc(a->totalSize * sizeof(int));	
}

void show(struct myArray *a) {
	for (int i = 0; i < a->usedSize; i++)
	{
		printf("%d\n", (a->ptr)[i]);
	}
	
}

void setVal(struct myArray *a) {
	int n;
	for (int i = 0; i < a->usedSize; i++)
	{
		printf("Enter element %d: ", i);
		scanf("%d", &n);
		(a->ptr)[i] = n;
	}
	
}

int main() {
	struct myArray marks;
	creatArray(&marks, 10, 3);
	printf("We are running setVal now\n");
	setVal(&marks);
	printf("We are running show now\n");
	show(&marks);
	
	return 0;
}


