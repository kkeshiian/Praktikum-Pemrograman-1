#include <stdio.h>

int reverse(int n) {
    int balik = 0;
    while (n != 0) {
        int angkaBelakang = n % 10;
        balik = balik * 10 + angkaBelakang;
        n /= 10;
    }
    return balik;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
    return 0;
}
