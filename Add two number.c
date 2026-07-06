#include <stdio.h>

int main()
{
    int l1[] = {2, 4, 3};
    int l2[] = {5, 6, 4};
    int result[10];
    int carry = 0, sum, i;

    for(i = 0; i < 3; i++)
    {
        sum = l1[i] + l2[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }

    if(carry != 0)
    {
        result[i] = carry;
        i++;
    }


    
