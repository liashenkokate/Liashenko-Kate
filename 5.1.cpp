// 5.1.cpp 

#include <stdio.h>
int get_harm(double a) {
	double z = 1.0, s = 1.0;
	while (s < a) {
		z++;
		s += 1 / z;

	}
	printf("s=%lf\n", s);
	return(int)z;
}

int main() {
	double a;
	scanf_s("%lf", &a);
	printf("n = &d\n", get_harm(a));
}