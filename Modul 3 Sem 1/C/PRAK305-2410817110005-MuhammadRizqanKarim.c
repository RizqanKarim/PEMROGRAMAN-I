#include <stdio.h> 
int main() { 
    int detik, jam, menit, sisa; 
    printf("Masukkan jumlah detik: "); 
    scanf("%d", &detik); 
    jam = detik / 3600; 
    sisa = detik % 3600; 
    menit = sisa / 60; 
    sisa = sisa % 60; 
    if (jam >= 24) { 
    int hari = jam / 24; 
    jam = jam % 24; 
    printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, sisa); 
    } else { 
    printf("%02d:%02d:%02d\n", jam, menit, sisa); 
} 
return 0; 
}