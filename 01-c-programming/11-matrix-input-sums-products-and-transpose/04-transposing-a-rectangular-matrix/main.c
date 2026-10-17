#include <stdio.h>
int main(void)
{
    int a,b,i,j;
    printf("Enter total rows of the matrix: ");
    if (scanf("%d",&a) != 1) return 1;
    printf("Enter total columns of the matrix: ");
    if (scanf("%d",&b) != 1) return 1;

    if (a < 1 || a > 100 || b < 1 || b > 100) return 1;
    int Mat1[a][b];
    int Mat2[b][a];

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("Mat1[%d][%d]: ",i+1,j+1);
            if (scanf("%d",&Mat1[i][j]) != 1) return 1;
        }
    }

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
           Mat2[j][i]=Mat1[i][j];
        }
    }
    printf("\nThe first input matrix Mat1 is:\n");
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                printf("%d ",Mat1[i][j]);
                if(j==(b-1)){
                    printf("\n");
                }
            }
        }

        printf("\nTranspose of Mat1 is Mat2:\n");
        for(i=0;i<b;i++){
            for(j=0;j<a;j++){
                printf("%d ",Mat2[i][j]);
                if(j==(a-1)){
                    printf("\n");
                }
            }
        }

        return 0;
}
