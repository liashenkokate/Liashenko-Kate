// СW_4
// task 3.1
#include <stdio.h>

void output_digits(unsigned n) {
	unsigned d1 = n % 10;
	unsigned d2 = (n / 10) % 10;
	unsigned d3 = (n / 100);
	printf("%u %u %u", d3, d2, d1);
}

int main() {
	unsigned n;
	scanf_s("%u", &n);

	if ((n<100) || (n>=1000)){
	   printf("%u is not 3-digit", n);
	   return 0;
    }
	output_digits(n);
}
    