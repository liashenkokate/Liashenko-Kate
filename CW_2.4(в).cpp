// CW_2.4(в)
#include <stdio.h>
#include <stdlib.h>
int main(){
	float x, x2, x3, x4, x5, y;
	printf("x=");
	scanf_s("%f", &x);
	x2 = x * x;
	x3 = x2 * x;
	x4 = x2 * x2;
	x5 = x4 * x;
	y = x5 + 5 * x4 + 10 * x3 + 10 * x2 + 5 * x + 1;
	printf("Answer = %0.1f", y);
}