// 1.20 Liashenko Kateryna
#include <stdio.h>
int main() {
	double A, B, C, SA1, SA, SG1, SG;
	printf("A=");
	scanf_s("%lf", &A);
	printf("B=");
	scanf_s("%lf", &B);
	printf("C=");
	scanf_s("%lf", &C);
	SA1 = A + B + C;
	SA = SA1 / 3;
	SG1 = (1 / A) + (1 / B) + (1 / C);
	SG = 3 / SG1;
	printf("Arithmetis mean:   %lf, %ef\nHarmonic mean:   %lf, %ef\n", SA, SA, SG, SA);



}