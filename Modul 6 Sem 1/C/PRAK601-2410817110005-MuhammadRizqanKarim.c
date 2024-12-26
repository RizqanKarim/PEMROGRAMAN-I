// PRAK601-NIM-Nama.c
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Masukkan jumlah baris dan kolom: ");
    scanf("%d %d", &rows, &cols);
    int elements[rows * cols];
    printf("Masukkan elemen matriks: ");
    for (int i = 0; i < rows * cols; i++) {
        scanf("%d", &elements[i]);
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", elements[i * cols + j]);
        }
        printf("\n");
    }
    return 0;
}
