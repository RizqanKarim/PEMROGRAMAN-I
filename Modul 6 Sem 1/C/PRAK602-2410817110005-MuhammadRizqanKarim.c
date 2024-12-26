// PRAK602-NIM-Nama.c
#include <stdio.h>

int main() {
    int rooms;
    printf("Masukkan jumlah ruangan: ");
    scanf("%d", &rooms);
    int zetsu[rooms];
    printf("Masukkan jumlah zetsu awal: ");
    for (int i = 0; i < rooms; i++) {
        scanf("%d", &zetsu[i]);
    }
    for (int i = 0; i < rooms; i++) {
        printf("%d ", zetsu[i] * (i + 1));
    }
    printf("\n");
    return 0;
}
