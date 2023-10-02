#include <stdio.h>

int main(){
    float a = 9, b = 6, x = 10, y = 7;
    float hasil = (a + b) * x / y;
    printf("Variable a bernilai " "%.0f", a);
    printf("\nVariable b bernilai " "%.0f", b);
    printf("\nVariable x bernilai " "%.0f", x);
    printf("\nVariable y bernilai " "%.0f", y);
    printf("\nHasil dari a ditambah b dikali x dibagi y adalah " "%.2f", hasil);
    return 0;
}