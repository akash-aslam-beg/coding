#include <stdio.h>
int main(void)
{
    FILE *ptr;
    int i,j,r,c;
    printf("Enter row: ");
    if (scanf("%d",&r) != 1) return 1;
    printf("Enter columns: ");
    if (scanf("%d",&c) != 1) return 1;

    if (r < 1 || r > 100 || c < 1 || c > 100) return 1;
    int mat1[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          printf("Mat1[%d][%d]: ",i+1,j+1);
          if (scanf("%d",&mat1[i][j]) != 1) return 1;
        }
    }

    char filename[30];
    printf("Enter the file name:\n");
    if (scanf("%29s",filename) != 1) return 1;

    ptr=fopen(filename,"a");
    if (!ptr) return 1;

    fprintf(ptr,"\n\n\t\t");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
          fprintf(ptr,"%d  ",mat1[i][j]);
        }
        fprintf(ptr,"\n\t\t");
    }

    fclose(ptr);

}
