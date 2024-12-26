#include <stdio.h> 
 
int main() { 
    int bil; 
    printf("Masukkan bilangan (0-99): "); 
    scanf("%d", &bil); 
 
    if (bil < 0 || bil > 99) { 
        printf("Anda Menginput Melebihi Limit Bilangan\n"); 
    } else if (bil == 0) { 
        printf("Nol\n"); 
    } else if (bil < 10) { 
        printf("Satuan\n"); 
    } else if (bil < 20) { 
        printf("Belasan\n"); 
    } else if (bil >= 10 && bil < 100) { 
        printf("Puluhan\n"); 
    } 
 
    return 0; 
} 