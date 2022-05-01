// 8.1-8.7.cpp 

//8.1
#include <stdio.h>
#define N 3
#define M 3

int sub(int mas[N][M], int n, int m) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (mas[i][j] == n) {
				mas[i][j] = m;
				return 1;
			}
		}
	}
}

void output(int mas[N][M]) {
    for (int i = 0; i < N; i++) {
        printf("\n");
        for (int j = 0; j < M; j++) {
            printf("\t%d", mas[i][j]);
        }
    }
}
int main() {
    int mas[N][M] = { {1,2,3},{4,5,6},{7,8,9} };
    int n, m;

    printf("n, m: ");
    scanf_s("%d %d", &n, &m);
    sub(mas, n, m);
    output(mas);
}






//8.2
#include <stdio.h>
#define N 3
#define M 3
bool change(double mas[N][M], size_t i, size_t j, double a) {
	if (i >= N || j >= M) return false;

	mas[i][j] = a;
	return true;
}

void output(double mas[N][M]) {
	for (size_t i = 0; i < N; i++) {
		for (size_t j = 0; j < M; j++) {
			printf("a[%zu][%zu]=%lf\n", i, j, mas[i][j]);
		}

	}

}

int main() {
	double mas[N][M] = { {1,2,3}, {4,5,6},{7,8,9} };

	size_t i, j;
	double a;
	printf("i, j, a =");
	scanf_s("%zu %zu %lf", &i, &j, &a);

	output(mas);
}






//8.3
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N1 20
#define M1 20

int main() {
    int n, m;
    double mas[N1][M1];

    printf("n = ");
    scanf_s("%d", &n);
    printf("m = ");
    scanf_s("%d", &m);
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf_s("%lf", &mas[i][j]);
        }
    }
    for (int i = 1; i <= m; i++) {
        printf("\n");
        for (int j = 1; j <= n; j++) {
            printf("%lf ", mas[i][j]);
        }
    }
}





//8.4
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N1 25
#define M1 25
int main() {
    int mas[N1][M1];
    int n, m;

    printf("n= ");
    scanf_s("%d", &n);
    printf("m= ");
    scanf_s("%d", &m);

    for (int i = 1; i <= n; i++) {
        printf("string %d:", i);
        for (int j = 1; j <= m; j++) {
            scanf_s(" %d", &mas[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("\n");
        for (int j = 1; j <= m; j++) {
            printf("%d ", mas[i][j]);
        }
    }
}







//8.5
#include <stdio.h>
#include <stdlib.h>

#define N 10

int input_matr(double mas[N][N]) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            printf("\na[%zu][%zu] =", i, j);
            scanf_s("%d", &mas[i][j]);

        }
    }
    return 0;
}
void output(int mas[N][N]) {
    for (size_t i = 0; i < N; i++) {
        printf("\n");
        for (size_t j = 0; j < N; j++) {
            printf("\ta[%zu][%zu] = %d", i, j, mas[i][j]);


        }
    }

}

void transp(int inp_matr [N][N], int out_matr[N][N]) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            out_matr[i][j] = inp_matr[i][j];
        }
    }

}

int main() {
    int mas[N][N];
    inp_matr(mas);
    int mas2[N][N];
    transp(mas, mas2);
    output(mas2);
}





//8.6
#include <stdio.h>

#define N 3
#define M 3

int input_matr(float mas[N][M]) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < M; j++) {
            printf("\na[%zu][%zu] =", i, j);
            scanf_s("%d", &mas[i][j]);

        }
    }
    return 0;
}
void output(float mas[N][M]) {
    for (size_t i = 0; i < N; i++) {
        printf("\n");
        for (size_t j = 0; j < M; j++) {
            printf("\ta[%zu][%zu] = %d", i, j, mas[i][j]);


        }
    }

}

float sub_diag(float inp_matr[N][M], int k) {
    float res = 0.f;
    for (size_t i = 0; i < N; i++) {
        if ((i - k >= 0) && (i - k <= M)) {
            res += inp_matr[i][i - k];
        }
    }
    return res;
}

int main() {
    float mas[N][M];
    input_matr(mas);
    int k;
    scanf_s("%d", &k);

    output(mas);

    printf("\n sub=%f", sub_diag(mas, k));

}






//8.7
#include <stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int determinant(double matrix[5][5], int n) {
    int det = 0;
    double submatrix[5][5];

    if (n == 1) return matrix[0][0];
    if (n == 2) return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else {
        for (int p = 0; p < n; p++) {
            int sub_row = 0;
            for (int row = 1; row < n; row++) {
                int sub_col = 0;
                for (int col = 0; col < n; col++) {
                    if (col == p)
                        continue;
                    submatrix[sub_row][sub_col] = matrix[row][col];
                    sub_col++;
                }
                sub_row++;
            }
            det = det + (pow(-1, p) * matrix[0][p] * determinant(submatrix, n - 1));
        }
    }
    return det;
}
int main() {
    int n, i, j;
    double matrix[5][5];
    cout << "size of the matrix(up to 5) = ";
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            cout << "element [" << i << "][" << j << "]" << " ";
            cin >> matrix[i][j];
        }

    cout << "The entered matrix is:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    cout << "Determinant:" << determinant(matrix, n);
}
