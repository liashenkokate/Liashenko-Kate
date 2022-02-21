// 3.23(д).cpp

#include <stdio.h>

double sReLu( double x, double tl,double tr, double al, double ar) {
    double res;
    if (x < tl) {
        res = tl + al * (x - tl);
    }
    if (x > tl && x < tr) {
        res = 0;
    }
    if (x >= tr ) {
        res = tr + ar * (x - tr);
    }
    return res;
}

double derivative_sReLu(double x, double tl, double tr, double al, double ar) {
    double res;
    if (x < tl) {
        res = al;
    }
    if (x > tl && x < tr) {
        res = 0;
    }
    if (x >= tr) {
        res = ar;
    }
    return res;
}

int main() {
    double x, tl, tr, al, ar, function, derivative;

    printf("x = ");
    scanf_s("%lf", &x);

    printf("tl = ");
    scanf_s("%lf", &tl);

    printf("tr = ");
    scanf_s("%lf", &tr);

    printf("al = ");
    scanf_s("%lf", &al);

    printf("ar = ");
    scanf_s("%lf", &ar);

    /*
    double x = 1
    double tl = 3;
    double tr = 4;
    double al = 0;
    double ar = 1;
    */

    function = sReLu(x, tl,tr,al,ar);
    derivative = derivative_sReLu(x, tl, tr, al, ar);
    printf("Function value is %0.1lf\n", function);
    printf("Derivative value is %0.1lf", derivative);
}