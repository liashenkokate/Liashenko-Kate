﻿// CW 2 Liashenko Kateryna
/*
 Task 1.6
*/
#include <stdio.h>
int main() {
	double C, F;
	printf("c=");
	scanf("%lf", &C);
	F = 9 * C / 5 + 32;
	printf("F=%le", F);
}


/*
Task1_8
*/
#include <stdio.h>
int main() {
	double x, y;
	printf("x=");
	scanf("%lf", &x);
	printf("y=");
	scanf("%lf", &y);
	printf("difference=%lf, multiplication=%lf ", x - y, x * y);
}


/*
Task1_9
*/
#include <stdio.h>
int main() {
	double x, y;
	printf("x,y:");
	scanf("%lf %lf", &x, &y);
	double avg, harmonical;
	avg = (x + y) / 2;
	harmonical = 2 / (1 / x + 1 / y);
	printf("avg=%lf, harmonical=%lf ", avg, harmonical);
}