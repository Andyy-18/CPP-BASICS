// C program for implementation of Bubble sort
#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// A function to implement bubble sort
void bubbleSort(int a[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)

	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (a[j] > a[j+1])
			swap(&a[j], &a[j+1]);
}

/* Function to print an aay */
void printaay(int a[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
	int a[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(a)/sizeof(a[0]);
	bubbleSort(a, n);
	printf("Sorted aay: \n");
	printaay(a, n);
	return 0;
}
