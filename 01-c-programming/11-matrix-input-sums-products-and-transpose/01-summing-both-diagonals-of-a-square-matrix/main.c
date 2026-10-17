#include <stdio.h>
int main(void)
{
    int i,j,r,c,sum1=0,sum2=0;
    printf("Enter the total rows of the matrix: ");
    if (scanf("%d",&r) != 1) return 1;
    printf("Enter the total columns of the matrix: ");
    if (scanf("%d",&c) != 1) return 1;

    if (r != c || r < 1 || r > 100) { printf("A square matrix is required\n"); return 1; }
    int mat[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Mat[%d][%d]: ",i+1,j+1);
            if (scanf("%d",&mat[i][j]) != 1) return 1;
        }
    }

    printf("\nThe matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                sum1=sum1+mat[i][j];
            }
        }
    }

    for(i=0,j=c-1;i<r;i++,j--){
        sum2=sum2+mat[i][j];
    }

    printf("\nSum of the first diagonal elements: %d\n",sum1);
    printf("\nSum of the second diagonal elements: %d\n",sum2);

}
