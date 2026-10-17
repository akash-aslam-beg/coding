#include <stdio.h>
void test_fnc(int ara[])
{
    ara[0]=100;

}
int main(void)
{
    int ara[]={1,2,3,4,5};
    printf("%d\n", ara[0]);

    test_fnc(ara);
    printf("%d\n", ara[0]);

    return 0;

}
