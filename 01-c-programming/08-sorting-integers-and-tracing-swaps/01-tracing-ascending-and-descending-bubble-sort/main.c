#include <stdio.h>
int  main(void)
{
    int n,i,j,m,box;

    printf("Enter the total numbers: ");
    if (scanf("%d",&n) != 1) return 1;

    if (n < 1 || n > 100) return 1;
    int array[n];

    printf("\n");
    for(i=0;i<n;i++){
       printf("Enter the %dth number:  ",i+1);
       if (scanf("%d",&array[i]) != 1) return 1;
    }

    printf("\nThe given set of numbers are:\n");
    for(i=0;i<n;i++){
        printf("%d  ",array[i]);
    }

     printf("\n\nThe whole process of bubble ascending sorting step by step:\n");

      for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
           if(array[j]>array[j+1]){
              box=array[j];
              array[j]=array[j+1];
              array[j+1]=box;
                   for(m=0;m<n;m++){   
                     printf("%d  ",array[m]);
                   if(m==(n-1))printf("\n");
                  }
         }
     }
     }

   printf("\n\nThe ascending order of the given set of numbers is:\n");
    for(i=0;i<n;i++){
        printf("%d  ",array[i]);
    }

     printf("\n\nThe whole process of bubble descending sorting step by step:\n");

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (array[j] < array[j + 1]) {
                box = array[j];
                array[j] = array[j + 1];
                array[j + 1] = box;
                for (m = 0; m < n; m++) {
                    printf("%d  ", array[m]);
                    if (m == (n - 1)) printf("\n");
                }
            }

}
    }

    printf("\n\nThe descending order of the given set of numbers is:\n");
    for (i = 0; i < n; i++) {
        printf("%d  ", array[i]);
    }

  return 0;

}
