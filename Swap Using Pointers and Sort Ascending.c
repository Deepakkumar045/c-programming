#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void sortAscending(int arr[], int n)
{
    int i, j;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}

int main()
{
    int arr[] = {9, 4, 8, 2, 6};
    int i;

    sortAscending(arr, 5);

    printf("Sorted Array:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
