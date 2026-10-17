#include <stdio.h>
int main(void)
{
    int i,j,a,b,c,d;
    printf("Enter the total rows of the first matrix ");
    if (scanf("%d",&a) != 1) return 1;
    printf("Enter the total columns of the first matrix ");
    if (scanf("%d",&b) != 1) return 1;
    printf("Enter the total rows of the second matrix ");
    if (scanf("%d",&c) != 1) return 1;
    printf("Enter the total columns of the second matrix ");
    if (scanf("%d",&d) != 1) return 1;
    if (a < 1 || b < 1 || c < 1 || d < 1 || a > 100 || b > 100 || c > 100 || d > 100) return 1;
    if (a != c || b != d) { printf("The addition is undefined\n"); return 1; }
    int x[a][b];
    int y[c][d];
    int z[c][d];

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("x[%d][%d]: ",i+1,j+1);
            if (scanf("%d", &x[i][j]) != 1) return 1;
        }
    }
    printf("\nThe first matrix is:\n");
    printf("--------------\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d ",x[i][j]);
            if(j==(b-1)){
                printf("\n");
            }
        }
    }

    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("y[%d][%d]: ",i+1,j+1);
            if (scanf("%d", &y[i][j]) != 1) return 1;
        }
    }
    printf("\nThe second matrix is:\n");
    printf("--------------\n");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d ",y[i][j]);
            if(j==(d-1)){
                printf("\n");
            }
        }
    }

    if(a==c && b==d){
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                z[i][j]=x[i][j]+y[i][j];
            }
        }
    }
    else{
        printf("The addition is undefined");
    }
   printf("\n\n The added matrix:\n");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d  ",z[i][j]);
            if(j==(d-1)){
                printf("\n");
            }
        }
    }

    return 0;
}
