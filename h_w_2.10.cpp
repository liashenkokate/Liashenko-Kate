// h_w_2.10.cpp

#include <stdio.h>
#include <cmath>
#define M_PI 3.141592653589793

int main() {
	double a, b, c, alpha, beta, gamma, cos_alpha, cos_beta, cos_gamma, rad_alpha, rad_beta, rad_gamma;
	printf("a = ");
	scanf_s("%lf", &a);
	printf("b = ");
	scanf_s("%lf", &b);
	printf("c = ");
	scanf_s("%lf", &c);

	alpha = (b * b + c * c - a * a) / (2 * b * c);
	// printf("alpha: %0.1lf\n", alpha);

	cos_alpha = acos(alpha) * 180.0 / M_PI;
	// printf("cosalpha: %0.1lf\n", cos_alpha);

	beta =  (c*c + a*a - b*b) / (2 * a * c);
	// printf("beta: %0.1lf\n", beta);

	cos_beta = acos(beta) * 180.0 / M_PI;
	// printf("cosbeta: %0.1lf\n", cos_beta);

	gamma = (b*b + a*a - c*c) / (2 * a * b);
	// printf("gamma: %0.1lf\n", gamma);

	cos_gamma = acos(gamma) * 180.0 / M_PI;
	// printf("cosgamma: %0.1lf\n", cos_gamma);

	rad_alpha = cos_alpha * M_PI / 180.0;
	rad_beta = cos_beta * M_PI / 180.0;
	rad_gamma = cos_gamma * M_PI / 180.0;


	printf("Alpha in degrees: %0.1lf\n", cos_alpha);
	printf("Beta in degrees: %0.1lf\n", cos_beta);
	printf("Gamma in degrees: %0.1lf\n", cos_gamma);

	printf("Alpha in radians: %0.1lf\n", rad_alpha);
	printf("Beta in radians: %0.1lf\n", rad_beta);
	printf("Gamma in radians: %0.1lf\n", rad_gamma);
}