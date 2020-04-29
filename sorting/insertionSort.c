#include <stdio.h>

/*
*arr[] -  input array that needs to be sorted
*length - array length
*
*/
void insertionSort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int idx = i;
        int temp = arr[idx];
        while (idx > 0 && (arr[idx - 1] > temp))
        {
            arr[idx] = arr[idx - 1];
            idx--;
        }
        arr[idx] = temp;
    }
}

//print all the elements in array;
void print(int arr[], int length)
{
    printf("List is  : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[] = {5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Before Sorting ");
    print(arr, length);
    insertionSort(arr, length);
    printf("After sorting ");
    print(arr, length);
    return 0;
}