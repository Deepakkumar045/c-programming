#include <stdio.h>

int main()
{
    FILE * fp;
    char str[50];
    fp= fopen("sample.txt","a");
    if(fp==NULL)
    {


        printf("error");
        return 1;

    }

    printf("error");
    return 1;

    printf("enter the append to add:");
    fflush(stdout);
    fgets(str,sizeof(str),stdin);

    fputs(str,fp);
    printf("\n appended successfully");
    fclose(fp);
    return 0;
}
