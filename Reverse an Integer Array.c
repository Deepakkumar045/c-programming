#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *start = arr;
    int *end = arr + 4;
    int temp;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed Array:\n");

    int *p = arr;

    while(p < arr + 5)
    {
        printf("%d ", *p);
        p++;
    }

    return 0;
}
