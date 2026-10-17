#include <stdio.h>
int main(void)
{
    int a,b,c;
    for (a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            if(b==a){
            continue;
            }
            for(c=1;c<=3;c++){
                    if(c==a||c==b){
                        continue;
                    }
                printf("%d %d %d\n", a,b,c);
            }
        }
    }
    return 0;
}
