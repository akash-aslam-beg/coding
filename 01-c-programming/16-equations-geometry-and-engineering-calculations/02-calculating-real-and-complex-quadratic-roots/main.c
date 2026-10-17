#include <stdio.h>
#include <math.h>
int main(void)
{
    float a,b,c,D,X1,X2;
    float R,I;

    printf("Enter the value of a: ");
    if (scanf("%f",&a) != 1) return 1;
    printf("Enter the value of b: ");
    if (scanf("%f",&b) != 1) return 1;
    printf("Enter the value of c: ");
    if (scanf("%f",&c) != 1) return 1;

    if (a == 0) { printf("A quadratic requires nonzero a\n"); return 1; }
    D=(b*b-4*a*c);

    printf("\n\n");
    if(D==0){
        X1=X2=(-b)/(2*a);
        printf("X1=%f\nX2=%f\n",X1,X2);
    }
    else if(D>0){
        X1=(-b+sqrt(D))/(2*a);
        X2=(-b-sqrt(D))/(2*a);
        printf("X1=%f\nX2=%f\n",X1,X2);
    }

    else if(D<0){
        R=(-b)/(2*a);
        I=sqrt(-D)/fabs(2*a);
        printf("X1 = %f + %fi \nX2 = %f - %fi\n",R,I,R,I);
    }
}
