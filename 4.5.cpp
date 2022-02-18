// 4.5.cpp
#include <stdio.h>

int main() {
    unsigned n;
    scanf("%u", &n);
    unsigned long long m = 1UL; // 1 unsigned long, m=1
    for (unsigned i = n; i >= 2; i -= 2) {
        m *= i;
    }

    printf("%u!! = %llu \n", n, m);

}