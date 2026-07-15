#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i,n;

    printf("Enter the no of element:");
    scanf("%d",&n);

    ptr=(int *)malloc(n* sizeof(int));

    if(ptr==NULL)
    {
        printf("memory allocation is failed");
        return 1;
    }

    printf("enter %d element:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("enter the element:\n",n);

    for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);

    }
    free(ptr);

    return 0;
}
