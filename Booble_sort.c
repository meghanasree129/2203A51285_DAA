#include <stdio.h>
void bubbleSort(int arr[], int n) 
{
	int i,j;
    for (i = 0; i < n-1; i++) 
	{
        for (j = 0; j < n-i-1; j++) 
		{
            if (arr[j] > arr[j+1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size) 
{
	int i;
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int i,n, arr[n];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
