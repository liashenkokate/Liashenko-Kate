// 4.3.cpp 
#include <stdio.h>
int main() {
    int n;
    float x, y, t;
    printf("x, n:");
    scanf("%f %d", &x, &n);

    t = 1;// t = x^0
    y = 1;
    for (int i = 0; i < n; i++) {
        t *= x;// t = x^{i+1}
        y += t;
    }

    printf("y=%f", y);
}