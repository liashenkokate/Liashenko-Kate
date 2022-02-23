// 5.6.cpp

#include <stdio.h>
void item_a() {
	double b, y;
	int n;
	printf("n=");
	scanf_s("%d", &n);

	printf("b=");
	scanf_s("%lf", &b);

	y = b;
	for (int i = 1; i < n; i++) {
		y = b + 1 / y;
	}
	printf("y=&lf", y);
}

int main() {
	item_a();
}