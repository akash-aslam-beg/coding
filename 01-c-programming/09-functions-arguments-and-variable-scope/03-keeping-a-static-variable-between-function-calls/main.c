#include <stdio.h>

int func()
{
    static int a=8;
    a++;

    return a;
}

int main(void)
{
    int b;
    b=func();
    printf("%d\n",b);

    b=func();
    printf("%d\n",b);

    b=func();
    printf("%d\n",b);

}
