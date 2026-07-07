#include <stdio.h>
#include <string.h>

int main()
{
    char strs[3][20] = {"flower", "flow", "flight"};
    char prefix[20];
    int i, j;

    strcpy(prefix, strs[0]);   

    for (i = 1; i < 3; i++)
    {
        j = 0;

        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix[j] = '\0'; 

        if (prefix[0] == '\0')
            break;
    }

    printf("Longest Common Prefix: %s\n", prefix);

    return 0;
}
