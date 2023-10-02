#include <stdio.h>

int main(){
    int a = 9, b = 5, x = 8, y = 8, hasilA = a%b, hasilB = x%y, totalHasil = hasilA + hasilB;
    printf("Variabel a bernilai ""%d", a);
    printf("\nVariabel b bernilai ""%d", b);
    printf("\nVariabel x bernilai ""%d", x);
    printf("\nVariabel y bernilai ""%d", y);
    printf("\nTotal sisa bagi dari a dibagi b dan x dibagi y adalah ""%d", totalHasil);
    return 0;
}