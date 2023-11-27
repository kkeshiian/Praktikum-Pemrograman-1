#include <stdio.h>

void biodata(int tahunLahir, char *Namaku, char *Asal) {
    int tahun_sekarang = 2020;
    printf("\nPerkenalkan Nama Saya : %s\n", Namaku);
    printf("Umur Saya : %d\n", tahun_sekarang - tahunLahir);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s", Asal);
}

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", Namaku);
    scanf(" %[^\n]%*c", Asal);
    biodata(tahunLahir, Namaku, Asal);
    return 0;
}
