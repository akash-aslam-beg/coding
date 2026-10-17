#include <stdio.h>
#include <math.h>
int Distance(void)
{
    float distance,X1,X2,Y1,Y2;

    printf("Input the co-ordinate point P(X1,Y1):\n");
    printf("X1: ");
    if (scanf("%f",&X1) != 1) return 1;
    printf("Y1: ");
    if (scanf("%f",&Y1) != 1) return 1;

    printf("Input the co-ordinate point Q(X2,Y2):\n");
    printf("X2: ");
    if (scanf("%f",&X2) != 1) return 1;
    printf("Y2: ");
    if (scanf("%f",&Y2) != 1) return 1;

    distance=sqrt((pow(X1-X2,2))+(pow(Y1-Y2,2)));
    printf("The distance between the pairs of coordinates: %f\n",distance);
    printf("\n");
    return 0;
}
int main(void)
{
    printf("\nInput 2 pairs of coordinate points to compute the distance:\n");
    for(int i=1;i<=2;i++){
        printf("\n*****Coordinate pair%d*****\n",i);
        if (Distance() != 0) return 1;

    }
}
