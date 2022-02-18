// h_w_3.18.cpp 
#include <stdio.h>

int main() {
	double x, y; //координати лівого нижнього кута прямокутника #1 (в 3 чверті)
	double x1, y1; // координати правого верхнього кута прямокутника #1 (в 3 чверті)
	double x2, y2;  //координати лівого нижнього кута прямокутника #2 (в 1 чверті)
    double x3, y3;  // координати правого верхнього кута прямокутника #2 (в 1 чверті)

	// Прямокутник #3, що містить прямокутники #1, #2 має спільні координати з лівим нижнім кутом прямокутника #1 і з правим верхнм кутом прямокутника #2
	// тому просто виведемо 2 потрібних пари координат

	printf("x = ");
	scanf_s("%lf", &x);

	printf("y = ");
	scanf_s("%lf", &y);

	printf("x1 = ");
	scanf_s("%lf", &x1);

	printf("y1 = ");
	scanf_s("%lf", &y1);

	printf("x2 = ");
	scanf_s("%lf", &x2);

	printf("y2 = ");
	scanf_s("%lf", &y2);

	printf("x3 = ");
	scanf_s("%lf", &x3);

	printf("y3 = ");
	scanf_s("%lf", &y3);

	printf("Coordinates of the lower left corner of the rectangle #3: %0.1lf, %0.1lf\n", x, y);
	printf("Coordinates of the upper right corner of the rectangle #3: %0.1lf, %0.1lf", x3, y3);
}
