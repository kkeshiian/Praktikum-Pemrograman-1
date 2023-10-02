#include <stdio.h>

int main(){
    int sepatuA = 400000, sepatuB = 350000, diskonA = 400000 - (13*400000/100), diskonB = 350000 - (21*350000/100);
    printf("Harga sepatu A adalah ""%d", sepatuA);
    printf("\nHarga sepatu B adalah ""%d", sepatuB);
    printf("\nSepatu A mendapat diskon 13%% sehingga harganya menjadi ""%d", diskonA);
    printf("\nSepatu B mendapat diskon 21%% sehingga harganya menjadi ""%d", diskonB);
    return 0;
}