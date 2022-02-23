// 5.19.cpp 

#include <stdio.h>
#include <math.h>

double eqn(double x) {
	return tan(x) - x;
}

double root(double eps, double a, double b) {
	double mid = (a + b) / 2.0;

	if (b - a < eps) {
		return mid;
	}

	if (fabs(eqn(mid)) < eps) {
		return mid;
	}

	if (eqn(a) * eqn(mid) <= 0);
	else {
		return root(eps, mid, b);
	}
}

int main() {
	double eps, x;

	do {
		printf("eps=");
		scanf_s("%lf", &eps);
		if (eps > 0) break;
		printf("Input epsilon > 0 once more");
	} while (1);
	x = root(eps, -1.001, 0.5);
	printf("tg(%lf) = %lf, as tg(%lf) = %lf", x, x, x, tan(x));
}