#include <stdio.h>
int main(void)
{
    int i,j,n,box;

    printf("Enter the total numbers of the array: ");
    if (scanf("%d",&n) != 1) return 1;

    if (n < 1 || n > 100) return 1;
    int array[n];

    for(i=0;i<n;i++){
        printf("Enter the %dth element of the array: ",i+1);
        if (scanf("%d",&array[i]) != 1) return 1;
    }

    printf("The original array is: \n");
    for(i=0;i<n;i++){
        printf("%d  ",array[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(*(array+i)>*(array+j)){
                box=*(array+i);
                *(array+i)=*(array+j);
                *(array+j)=box;
            }
        }
    }

    printf("\nThe ascending sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d ",*(array+i));
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(*(array+i)<*(array+j)){
                box=*(array+i);
                *(array+i)=*(array+j);
                *(array+j)=box;
            }
        }
    }

    printf("\nThe descending sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d ",*(array+i));
    }

    return 0;
}
