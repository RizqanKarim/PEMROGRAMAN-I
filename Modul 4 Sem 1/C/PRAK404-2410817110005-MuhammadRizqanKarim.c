#include <stdio.h>

int main() {
    int pilihan;
    float nilai_pertama, nilai_kedua, hasil;

    do {
        printf("\nPilih program:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Rizqan Karim\n");
            break;
        } else if (pilihan < 1 || pilihan > 5) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        printf("Masukkan nilai pertama: ");
        scanf("%f", &nilai_pertama);
        printf("Masukkan nilai kedua: ");
        scanf("%f", &nilai_kedua);

        switch (pilihan) {
            case 1:
                hasil = nilai_pertama + nilai_kedua;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
                break;
            case 2:
                hasil = nilai_pertama - nilai_kedua;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
                break;
            case 3:
                hasil = nilai_pertama * nilai_kedua;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
                break;
            case 4:
                if (nilai_kedua == 0) {
                    printf("Pembagian dengan 0 tidak dapat dilakukan.\n");
                } else {
                    hasil = nilai_pertama / nilai_kedua;
                    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
                }
                break;
        }
    } while (1);

    return 0;
}
