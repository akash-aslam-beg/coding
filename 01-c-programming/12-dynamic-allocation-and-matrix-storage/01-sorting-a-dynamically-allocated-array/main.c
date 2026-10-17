#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,i,j,box;
    printf("Enter the total value of the array: ");
    if (scanf("%d",&n) != 1) return 1;

    if (n < 1 || n > 100) return 1;
    int *ptrarray;
    ptrarray=malloc(n*sizeof *ptrarray);
    if (!ptrarray) return 1;

    printf("\n");
    for(i=0;i<n;i++){
       printf("Enter the %dth number:  ",i+1);
       if (scanf("%d",(ptrarray+i)) != 1) return 1;
    }

    printf("\nThe given set of numbers are:\n");
    for(i=0;i<n;i++){
        printf("%d  ",*(ptrarray+i));
    }

      for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
           if(*(ptrarray+j)>*(ptrarray+(j+1))){
              box=*(ptrarray+j);
              *(ptrarray+j)=*(ptrarray+(j+1));
              *(ptrarray+(j+1))=box;
                }

            }
        }

        printf("\n\nThe ascending order of the given set of numbers is:\n");
    for(i=0;i<n;i++){
        printf("%d  ",*(ptrarray+i));
    }

    free(ptrarray);

}
