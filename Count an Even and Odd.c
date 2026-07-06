#include <stdio.h>

void calculate(int *p, int n)
{
    int even = 0, odd = 0, sum = 0;

    while(n--)
    {
        if(*p % 2 == 0)
            even++;
        else
            odd++;

        sum += *p;
        p++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);
    printf("Sum = %d\n", sum);
}

int main()
{
    int arr[] = {10, 11, 12, 13, 14};

    calculate(arr, 5);

    return 0;
}
