// 4.11.cpp
#include <stdio.h>
#include <float.h>
#include <math.h>

int main(int argc, char** argv) {
	int i;
	double x, sum = 0., sum_harm = 0.;
	i = 0;
	do {
		printf("a[%d]=", i);
		scanf("%lf", &x);
		if (fabs(x)) <= DBL_EPSILON) break;
		sum += x;
		sum_harm += 1 / x;
		i++;
	} while (1);

	printf("avg=%lf,harm=%lf", sum / i, i / sum_harm);
}