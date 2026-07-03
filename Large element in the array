#include <stdio.h>

int largest(int arr[], int n)
{
    int i, max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int arr[] = {12, 45, 23, 89, 34};
    int n = 5;

    printf("Largest element = %d", largest(arr, n));

    return 0;
}
