// PRAK603-NIM-Nama.c
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Masukkan n1 dan n2: ");
    scanf("%d %d", &n1, &n2);
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int row1[n1], row2[n2];
        printf("Masukkan elemen baris pertama: ");
        for (int i = 0; i < n1; i++) {
            scanf("%d", &row1[i]);
        }
        printf("Masukkan elemen baris kedua: ");
        for (int i = 0; i < n2; i++) {
            scanf("%d", &row2[i]);
        }
        for (int i = 0; i < n1; i++) {
            printf("%d ", row1[i] * row2[i]);
        }
        printf("\n");
    }
    return 0;
}
