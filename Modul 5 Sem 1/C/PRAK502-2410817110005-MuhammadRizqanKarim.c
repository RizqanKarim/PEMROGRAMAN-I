#include <stdio.h>
#include <math.h>

int mutlak(int angka) {
    return (angka < 0) ? -angka : angka;
}

int hitung(int nilai1, int nilai2) {
    return mutlak(nilai1 - nilai2);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    int hasil = hitung(a, b) + hitung(c, d);
    printf("%d", hasil);
    return 0;
}
