// 4.4.cpp 

#include <stdio.h>

int main() {
	double x, y, t;
	unsigned n;
	printf("n=");
	scanf_s("%u", &n);

	printf("x=");
	scanf_s("%lf", &x);
	t = 1;
	y = 0;
	for (unsigned i = 1; i <= n; i++) {
		t *= x;
		y += i * t;
	}
	printf("y=%lf", y);
}