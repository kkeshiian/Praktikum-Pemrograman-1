#include <stdio.h>

int main() {
    int inputPilihan;
    float inputPertama, inputKedua, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &inputPilihan);

        if (inputPilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Rizky\n");
            break;
        } else if (inputPilihan >= 1 && inputPilihan <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &inputPertama);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &inputKedua);

            switch (inputPilihan) {
                case 1:
                    hasil = inputPertama + inputKedua;
                    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", inputPertama, inputKedua, hasil);
                    break;
                    
                case 2:
                    hasil = inputPertama - inputKedua;
                    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", inputPertama, inputKedua, hasil);
                    break;
                case 3:
                    hasil = inputPertama * inputKedua;
                    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", inputPertama, inputKedua, hasil);
                    break;
                case 4:
                    hasil = inputPertama / inputKedua;
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", inputPertama, inputKedua, hasil);
                    break;
                    
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }

    return 0;
}
