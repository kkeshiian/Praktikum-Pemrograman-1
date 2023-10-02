#include <stdio.h>

int main(){
    int a = 4, b = 5, c = 7, costPasang = 85000;
    printf("Diketahui :\nPanjang sisi segitiga berturut-turut adalah " "%d" ", " "%d" ", dan " "%d" , a, b, c);
    printf("\nKeliling Tanah Pak Dengklek adalah " "%d", a+b+c);
    printf("\nHarga tanah Per Meter adalah " "%d", costPasang);
    printf("\nJawaban :\nBiaya yang diperlukan Pak Dengklek adalah : " "%d", costPasang * (a + b + c));
    return 0;
}