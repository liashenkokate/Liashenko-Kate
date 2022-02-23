﻿// 5.8.cpp
#include <stdio.h>
#include <math.h>

double my_exp(double x, double eps) {
	double y = 1.0;
	double t = 1.0;
	int k = 0;

	while (fabs(t) > eps) {
		k++;
		t *= x / k;
		y += t;
	}
	return y;
}

double my_Phi(double x, double eps) {
	double t = -x * x * x / 3;
	double y = x + t;
	int k = 1;

	while (fabs(t) > eps) {
		k++;
		t *= -x * x / (2 * k + 1) / (2 * k - 2);
		y += t;
	}
	return y;
}

int main() {
	double eps, x;
	printf("x=");
	scanf_s("%lf", &x);

	do {
		printf("eps=");
		scanf_s("%lf", &eps);
	} while (eps <= 0);

	printf("my_exp(%lf) = %lf, \nreal exp(%lf) = %lf\n", x, my_exp(x, eps), x, exp(x));
	printf("Phi(%lf) = %lf", x, my_Phi(x, eps));
}