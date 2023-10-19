#include <stdio.h>

int main() {
    float nilaiPertama, nilaiKedua;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilaiPertama);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilaiKedua); //& hanya digunakaan ketika menerima input dari user
    float hasilJumlah = nilaiPertama + nilaiKedua; //hasil harus dibawah scanf, karena harus menerima input dahulu haru bisa di hiutng
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah %.2f", nilaiPertama, nilaiKedua, hasilJumlah); 
    return 0;
}
