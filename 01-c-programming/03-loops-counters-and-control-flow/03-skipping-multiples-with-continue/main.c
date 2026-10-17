#include <stdio.h>
int main ()
{
    int i,n;
    if (scanf("%d", &n) != 1) return 1;

    for(i=10;i<=n;i++){
            if (i%11==0){
                continue;
            }
            printf("%d\n",i);

    }
    return 0;

}
