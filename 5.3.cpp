﻿// 5.3.cpp 

#include <stdio.h>
#include<stdbool.h>

int printAllKolatz(unsigned n, bool toPrint) {
	unsigned a = n;
	int i = 0;
	while (a != 1) {
		if (a % 2 == 0) {
			a = a / 2;

		}
		else {
			a = 3 * a + 1;
		}
		i++;
		if (toPrint)
			printf("a_%d=%u", i, a);
	}
	return 1;
}

int main() {
	unsigned koll, i, n;
	printf("n=");
	scanf_s("%u", &n);

	int max_m = 0, m;
	unsigned k;

	for (unsigned i = 1; i <= 1000; i++) {
		m = printAllKolatz(i, false);

		if (max_m < m) {
			max_m = m;
			k = 1;
		}
	}
	printf("k=%u", k);
	printAllKolatz(k, true);
}