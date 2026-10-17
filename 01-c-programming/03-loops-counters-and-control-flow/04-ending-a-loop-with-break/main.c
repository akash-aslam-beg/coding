#include <stdio.h>
int main ()
{
    int n=1;
    while (n<=100){
        printf("  %d ",n);
        n=n+2;
        if (n>91){
            break;
        }
    }

}
