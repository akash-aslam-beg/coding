#include <stdio.h>
int main(void)
{
    int i,j,temp,X[11];

    for(i=0;i<11;i++){
        printf("Enter value %d of list X: ",i+1);
        if (scanf("%d",&X[i]) != 1) return 1;
    }

    printf("\nThe values in list is:\n");
    for(i=0;i<11;i++){
        printf("%d  ",X[i]);
    }

    for(i=0;i<10;i++){
        for(j=0;j<(10-i);j++){
            if(X[j]>X[j+1]){
                temp=X[j];
                X[j]=X[j+1];
                X[j+1]=temp;
            }
        }
    }

    printf("\n\nArranged value in order of magnitude:\n");
    for(i=0;i<11;i++){
        printf("%d. %d\n",i+1,X[i]);
    }
    printf("\n\nMiddle value of the ordered list is: %d\n",X[5]);

    return 0;
}
