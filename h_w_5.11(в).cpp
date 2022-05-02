// h_w_5.11(в).cpp 

#include <stdio.h>
#include <math.h>

double sum(const unsigned n, const double x, const double y) {
	double res = 0;
	double x1 = 1;
	double y1 = 1;

	for (unsigned i = 0; i <= n; i++) {
		res += x1 * y1;
		x1 *= x * x;
		y1 *= y;
	}
	return res;
}

double main_sum(const unsigned n) {
	unsigned a = 2;
	unsigned a2 = 8;
	double b = 1;
	double S = 3;
	if (n == 1) return 1;
	for (unsigned k = 3; k <= n; k++) {
		b = b + b / a2;
		a *= k;
		S += a / b;
		a2 *= 2;
	}
	return S;
}

int main() {
	unsigned n;
	printf("n = ");
	scanf_s("%u", &n);
	printf("Suma %u = %g\n", n, main_sum(n));
}