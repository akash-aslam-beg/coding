#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i,n;

    printf("Enter the size of the array: ");
    if (scanf("%d",&n) != 1) return 1;

    int *ptr;
    if (n < 1 || n > 1000) return 1;
    ptr=calloc(n,sizeof *ptr);
    if (!ptr) return 1;

    for(i=0;i<n;i++)
    {
        printf("Enter the value no %d of the array: ",i);
        if (scanf("%d",&*(ptr+i)) != 1) { free(ptr); return 1; }
    }

    for(i=0;i<n;i++)
    {
        printf("The value at %d of this array is %d\n",i,*(ptr+i));
    }

    printf("\nEnter the new sizeof the array: ");
    if (scanf("%d",&n) != 1) return 1;

    if (n < 1 || n > 1000) { free(ptr); return 1; }
    int *resized = realloc(ptr,n*sizeof *ptr);
    if (!resized) { free(ptr); return 1; }
    ptr=resized;

    for(i=0;i<n;i++)
    {
        printf("Enter the new value no %d of the array: ",i);
        if (scanf("%d",&*(ptr+i)) != 1) { free(ptr); return 1; }
    }

    for(i=0;i<n;i++)
    {
        printf("The new value at %d of this array is %d\n",i,*(ptr+i));
    }

    free(ptr); 
    return 0;
}
