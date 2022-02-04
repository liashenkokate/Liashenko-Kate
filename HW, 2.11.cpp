// HW, 2.11, Liashenko Kateryna
#include <stdio.h>
#define M_PI 3.14159265358979323846
int main(){
	double r, r2, h, V;
	printf("r=");
	scanf_s("%lf", &r);
	printf("h=");
	scanf_s("%lf", &h);
	r2 = r * r;
	V =  M_PI * r2 * h;
	printf("Answer = %f", V);
}