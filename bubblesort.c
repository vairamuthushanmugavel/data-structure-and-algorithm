#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int length)
{
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}
//printing all the elements in an array
void print(int arr[], int length)
{
    printf("List Is : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5, 2, 6, 4, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Before sort \n");
    print(arr, length);
    bubblesort(arr, length);
    print(arr, length);

    return 0;
}
