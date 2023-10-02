#include <stdio.h>

int main(){
    float a = 4, b = 8, c = 3;
    float hasil = a * b / c;
    printf("Variable a bernilai " "%.0f", a);
    printf("\nVariable b bernilai " "%.0f", b);
    printf("\nVariable c bernilai " "%.0f", c);
    printf("\nHasil dari a dikali b dibagi c adalah " "%f", hasil);
    return 0;
}