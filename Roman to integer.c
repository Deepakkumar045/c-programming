#include<stdio.h>
#include<string.h>

int value(char ch)
{
    switch (ch)
    {
        case'I': return 1;
        case'V': return 5;
        case'X': return 10;
        case'L': return 50;
        case'C': return 100;
        case'D': return 500;
        case'M': return 1000;
        default : return;

    
    }
}

int main()
{
    char roman[20];
    int i,sum=0;

    printf("enter Roman numeric:");
    scanf("%s",roman);

    for(i=0;i<strlen(roman);i++)
    {
        if(value(roman[i] < value(roman[i+1]))
        sum-=value(roman[i]);

        else
        sum+=value(roman[i]);
    }
    printf("Integer number=%d",sum);
}
