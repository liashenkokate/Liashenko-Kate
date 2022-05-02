// h_w_4.23(b).cpp :

#include <iostream>
#include <float.h>
#include<math.h>


int main(int argc, char** argv) {
	int i;
	int n;
	double y;
	double k;
	printf("n=");
	scanf_s("%d", &n);
	i = 1;
	k = 100000;
	while (1) {
		printf("y[%d]=", i);
		scanf_s("%lf", &y);
		y = (fabs(y));
		if (y < 1) {
			y = 2;
		}
		if (k < y) {
			k = k;
		}
		if (k > y) {
			k = y;
		}
		if (i == n)break;
		i++;

	}
	printf("min = %lf", k);
}