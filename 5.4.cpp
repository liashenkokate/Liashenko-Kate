// 5.4.cpp

#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);

	double p = 1.0;
	double P = 1.0;

	for (int i = 1; i <= n; i++) {
		P *= (1 + p);
		p /= i;
	}

	printf("%lf", P);
}