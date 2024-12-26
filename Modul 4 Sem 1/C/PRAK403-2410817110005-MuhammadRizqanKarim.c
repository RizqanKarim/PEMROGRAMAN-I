#include <stdio.h>

int main() {
    int angka1, angka2;
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    if (angka1 > angka2) {
        for (int i = angka2; i <= angka1; i++) {
            printf("%d %d", i, angka1 + angka2 - i);
            if (i != angka1) printf(" - ");
        }
    } else {
        for (int i = angka1; i <= angka2; i++) {
            printf("%d %d", i, angka1 + angka2 - i);
            if (i != angka2) printf(" - ");
        }
    }
    return 0;
}