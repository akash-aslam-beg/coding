#include <stdio.h>
double pi=3.14;
double p=4.44554;
void my_func()
{
    pi=3.14159;
    p=4.33333;

    return;
}
int main(void)
{
    printf("%lf\n",pi);
    printf("%lf\n",p);

    my_func();
    printf("%lf\n",pi);
    printf("%lf\n",p);

    return 0;

}
