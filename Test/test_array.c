#include <stdio.h>

// ---- Print Original Array Function
void printOrgArray(int arr[], int size)
{
	int i;
    printf("Original Array \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// ---- Sort Original Array Function
void sortArray(int arr[], int size)
{
	int i,j,a;
    for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (arr[i] > arr[j])
            {   
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}

// ---- Print Sorted Array Function
void printSortArray(int arr[], int size)
{
	int i;
    printf("\nSorted Array \n");
    for (i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ---- MAIN
int main()
{
    // Array
    int arr[] = { 1, 23, 14, 12, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printOrgArray(arr, size);  
    sortArray(arr, size);
    printSortArray(arr, size);  
}