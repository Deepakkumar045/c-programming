#include <stdio.h>
#include <string.h>

int validatePassword(char pass[])
{
    int i;
    int upper = 0, lower = 0, digit = 0;

    if(strlen(pass) < 8)
        return 0;

    for(i = 0; pass[i] != '\0'; i++)
    {
        if(pass[i] >= 'A' && pass[i] <= 'Z')
            upper = 1;

        else if(pass[i] >= 'a' && pass[i] <= 'z')
            lower = 1;

        else if(pass[i] >= '0' && pass[i] <= '9')
            digit = 1;
    }

    if(upper && lower && digit)
        return 1;

    return 0;
}

int main()
{
    char password[100];

    printf("Enter password: ");
    scanf("%s", password);

    if(validatePassword(password))
        printf("Valid Password");
    else
        printf("Invalid Password");

    return 0;
}
