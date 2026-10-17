#include <stdio.h>
int main(void)
{
    int a,b;
    printf("Enter the total row of the matrix: ");
    if (scanf("%d",&a) != 1) return 1;
    printf("Enter the total column of the matrix: ");
    if (scanf("%d",&b) != 1) return 1;

    if (a < 1 || a > 100 || b < 1 || b > 100) return 1;
    int x[a][b];
    int i,j,sum;

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
        printf("x[%d][%d]: ",i+1,j+1);
        if (scanf("%d",&x[i][j]) != 1) return 1;
        }
    }

    printf("\n\nThe given matrix of row %d and column %d is:\n\n",a,b);
    for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                printf("%d ",x[i][j]);
                if(j==(b-1)){
                printf("\n");
                }
        }
     }
     printf("\n");
     for(i=0;i<a;i++){
            sum=0;
        for(j=0;j<b;j++){
        sum=sum+x[i][j];
        }
     printf("Sum of the %dth row is: %d\n",i+1,sum);
     }

     printf("\n");
     for(i=0;i<b;i++){
            sum=0;
        for(j=0;j<a;j++){
        sum=sum+x[j][i];
        }
     printf("Sum of the %dth column is: %d\n",i+1,sum);
     }

    return 0;
}
