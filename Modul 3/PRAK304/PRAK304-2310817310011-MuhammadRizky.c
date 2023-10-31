#include <stdio.h>

int main(){
    int angkaInput;
    scanf("%d", &angkaInput);

    if (angkaInput < 0 || angkaInput > 99){
        printf("Anda Menginput Melebihi Limit Bilangan");
    } else if (angkaInput > 0 && angkaInput < 10){
        printf("Satuan\n");
    } else if (angkaInput >= 11 && angkaInput < 20){
        printf("Belasan\n");
    } else if (angkaInput >= 20 && angkaInput < 99){
        printf("Puluhan\n");
    } else if (angkaInput == 10){
        printf("Puluhan\n");
    }
    else if (angkaInput == 0){
        printf("Nol\n");
    }
    
    return 0;
}
