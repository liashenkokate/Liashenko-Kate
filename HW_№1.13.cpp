// HW_#1.13 Liashenko Kate
#include <stdio.h>
#include <math.h>
int main() {
	double y, function_result;
	printf("y = ");
	scanf_s("%lf", &y);
	function_result = log10(y);
	printf("Answer = %0.3f\n ", function_result);
}