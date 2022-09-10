// C program for implementation of Bubble sort
#include <stdio.h>
 
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    printf("Enter Size Of Array : ");
	int n;
scanf("%d",&n);
cout<<"Enter Array : ";
int arr[n];
for(int i=0;i<n;i++) scanf("%d",&arr[i]);
cout<<"Enter Number Of Sorting Method To Be Used : 1. Bubble Sort ";
int ch; 
scanf("%d",&ch);
switch(ch)
{
	case 1:
	bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n)
	default:
            printf("Error! choice is not correct");
            break;
		
}
    
    return 0;
}