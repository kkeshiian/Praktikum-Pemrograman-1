#include <stdio.h>

int main(){
    float enemyTotal = 958730, heroTotal = 5;
    printf("Jumlah pasukan yang dibawah Yu Zhong = " "%.0lf", enemyTotal);
    printf("\nJumlah pahlawan = " "%.0f", heroTotal);
    printf("\nJumlah pasukan yang harus dikalahkan setiap pahlawan adalah " "%.0lf", enemyTotal/heroTotal);
    return 0;
}