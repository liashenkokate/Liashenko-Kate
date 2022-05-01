// h_w_4.18(є).cpp 
#include <stdio.h>

int my_pow(const int number, const int power)
{
	int result = 1;
	for (int i = 0; i < power; ++i)
		result *= number;
	return result;
}
int main() {
	int k;
	int i = 1;
	double x;
	double b = 1;
	printf("k= ");
	scanf_s("%d", &k);
	printf("x= ");
	scanf_s("%lf", &x);
	while (i <= k) {
		printf("a[%d] = %lf\n", i, my_pow(-x, i) / b);
		i++;
		b *= i;
	}
}