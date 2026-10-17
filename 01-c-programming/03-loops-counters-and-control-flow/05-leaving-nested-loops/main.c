#include <stdio.h>
int main(void)
{
    int i,j,num;

    for(i=0;i<6;i++){
    printf("%d *****\n",i);
        for(j=0;j<6;j++){
          printf("Enter the number, enter 0 to exit: ");
          if (scanf("%d",&num) != 1) return 1;
       
        if(num==0) goto end;
        }
    }

    end:;
}
