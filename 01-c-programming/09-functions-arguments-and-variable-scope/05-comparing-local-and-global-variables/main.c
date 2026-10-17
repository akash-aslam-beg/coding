#include <stdio.h>
double pi=3.14;
void my_func(double pi)
{
    pi=3.14159;
    printf("Local value: %f\n", pi);

    return;
}
int main(void)
{
    printf("%lf\n",pi);

    my_func(pi);
    printf("%lf\n",pi);

    return 0;

}
