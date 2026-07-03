#include <stdio.h>

void upper(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

        i++;
    }

    printf("Modified String = %s", str);
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    upper(str);

    return 0;
}
