#include <stdio.h>

/*
* a - address of an first element.
* b - address of second element
*/
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
/*
* arr[] -- array that needs to be sorted
* length -- length of an array.
*/
void selectionsort(int arr[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        int j;
        int min = i;
        for (j = i; j < length ; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}
//print the values in array.
void print(int a[], int size)
{
    int i;
    printf("List is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {100,233,6452,2313,566};
    int length =  sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort : \n");
    print(arr,length); 
    selectionsort(arr,length);
    printf("After Sort : \n");
    print(arr,length);
    return 0;
}