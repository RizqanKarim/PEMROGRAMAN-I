#include <stdio.h>

int main() {
    int n, kelipatan, total = 0;

    printf("Masukkan banyaknya baris: ");
    scanf("%d", &n);
    printf("Masukkan kelipatan: ");
    scanf("%d", &kelipatan);

    for (int i = 1; i <= n; i++) {
        int hasil = 0;
        printf("(");
        for (int j = 1; j <= i; j++) {
            printf("%d * %d", j, kelipatan);
            hasil += j * kelipatan;
            if (j < i) {
                printf(") + (");
            }
        }
        printf(") = %d\n", hasil);
        total += hasil;
    }
    printf("%d\n", total);

    return 0;
}
