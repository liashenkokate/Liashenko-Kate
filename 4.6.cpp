// 4.6.cpp 

#include <stdio.h>
#include <math.h>
int main() {
	unsigned n;
	scanf_s("%u", &n);
	double y = sqrt(3 * n);
	for (unsigned i = 3 * n; i > 3; i -= 3) {
		y = sqrt(y + i - 3);
	}
	printf("%lf", y);
}