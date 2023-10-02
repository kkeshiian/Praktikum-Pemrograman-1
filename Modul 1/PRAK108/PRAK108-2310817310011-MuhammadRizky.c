#include <stdio.h>

int main(){
    float jumlahPutaran = 5, jumlahJarak = 14;
    float keliling = jumlahJarak / jumlahPutaran, range = keliling / (2 * 3.14);

    printf("Diketahui :\nPak Dengklek mengelilingi taman = " "%.0f" " Putaran", jumlahPutaran);
    printf("\nJarak tempuh Pak Dengklek = " "%.0f" " Kilometer", jumlahJarak);
    printf("\n\nJawaban :\nJari-jari taman yang dikelilingi Pak Dengklek adalah ");
    printf("%.2f" " Kilometer", range);
    return 0;
}