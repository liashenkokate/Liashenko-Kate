// 5.20.cpp 

#include <stdio.h>
#include <math.h>

double fun(double x) {
	return x * x * x + 4 * x * x + x - 6;
}


double root2(double eps, double a, double b) {
	double un, u1 = (a + b) / 2.0, u0 = a;
	un = u0 + 2 * eps;
	u1 = un;

	while (fabs(un - u0) > eps) {
		un = u0 - fun(u0) * (u1 - u0) / (fun(u1) - fun(u0));
		u0 = u1;
		u1 = un;
	}
	return un;
}

int main() {
	double eps, x;
	do {
		printf("eps=");
		scanf_s("%lf", &eps);
		if (eps > 0) break;
		printf("Input epsilon > 0 once more");
	} while (1);
	x = root2(eps, 0, 2.0);
	printf("f(%lf) = %lf, as f(%lf) = %lf", x, x, x, fun(x));
}