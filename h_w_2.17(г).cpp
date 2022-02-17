// 2.17(г).cpp
#include <stdio.h>
#include <cmath>
double tan_f(double x){
	double y;
	y = 1 / tan(x);
	return y;
}
double derivative(double x){
	double y, k;
	k = -1 * (1 / (sin(x)));
	y = pow(k, 2);
	return y;
}
int main() {
	printf("Function in x0 is:%f, derivative in this x0 is: %lf\n", tan_f(-2), derivative(-2));
	printf("Function in x0 is:%f, derivative in this x0 is:%lf\n", tan_f(0), derivative(0));
	printf("Function in x0 is:%f, derivative in this x0 is: %lf\n", tan_f(1), derivative(1));
}