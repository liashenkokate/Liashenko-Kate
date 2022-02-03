#include <iostream>
#include <math.h>

int main()
{
    double m1, m2, G, r, F;
    scanf_s("%lf", &m1);
    scanf_s("%lf", &m2);
    scanf_s("%lf", &G);
    scanf_s("%lf", &r);
    F =  G * ((m1 * m2) / (r * r));
    printf("F = %lf \n F = %le", F, F);
}
