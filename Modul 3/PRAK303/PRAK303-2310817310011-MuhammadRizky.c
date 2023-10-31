#include <stdio.h>

int main(){
    int angkaInput;
    scanf("%d", &angkaInput);

    if (angkaInput >= 1){
        printf("positif");
    } else if (angkaInput < 0){
        printf("negatif");
    } else if (angkaInput == 0){
        printf("nol");
    }
    return 0;
}