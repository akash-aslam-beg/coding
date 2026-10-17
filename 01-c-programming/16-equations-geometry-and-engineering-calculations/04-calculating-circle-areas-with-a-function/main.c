#include <stdio.h>
#define pi 3.141592654
int area(void)
{
    float area,radius;
    printf("Input radius: ");
    if (scanf("%f",&radius) != 1) return 1;
    if (radius < 0) return 1;
    area=pi*radius*radius;
    printf("Area = %f \n",area);
    printf("\n");
    return 0;
}
int main(void)
{
    printf("\nEnter the radii of the 5 circles to find Area:\n");
    for(int i=1;i<=5;i++){
        printf("\n*****Circle%d*****\n",i);
        if (area() != 0) return 1;

    }
}
