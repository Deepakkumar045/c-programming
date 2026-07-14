#include <stdio.h>

int main()
{
    FILE * fp;
    fp= fopen("sample.txt","w");

    if(fp=NULL)
    {
        printf("file cannot be opened");
        return 1;

    }

    fprintf(fp,"hello!,welcome to file handing in c.");
    fclose(fp);
    printf("Data written successfully");
    return 0;
}
