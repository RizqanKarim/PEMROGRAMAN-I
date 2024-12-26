// PRAK605-NIM-Nama.c
#include <stdio.h>

int main() {
    int n;
    printf("Masukkan ordo matriks: ");
    scanf("%d", &n);
    int matrix_a[n][n], matrix_b[n][n], result[n][n];

    printf("Masukkan elemen matriks A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }

    printf("Masukkan elemen matriks B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }

    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
