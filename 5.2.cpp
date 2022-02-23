// 5.2.cpp

#include <stdio.h>

int Fib(int n) {
	int F0, F1, F;
	F0 = F1 = 1;
	for (int i = 2; i <= n; i++) {
		F = F0 + F1;
		F0 = F1;
		F1 = F;
	}
	return F;
}

int main() {
	int n;
	scanf_s("%d", &n);
	printf("Fib(%d)=%d", n, Fib(n));

}