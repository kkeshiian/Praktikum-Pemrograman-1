#include <stdio.h>
#include <math.h>

int main() {
    float radiusBejana, heightBejana, phi;
    phi = 22/7.0; //diblkng 7 hrs ditambah .0 
    scanf("%f %f", &radiusBejana, &heightBejana);

    float volumeBejana = phi * (radiusBejana * radiusBejana) * heightBejana;

    float luasPermukaanBejana = 2 * phi * radiusBejana * (radiusBejana + heightBejana);

    float kelilingBejana = 2 * phi * radiusBejana;

    printf("Volume = %.2f\n", volumeBejana);
    printf("Luas = %.2f\n", luasPermukaanBejana);
    printf("Keliling = %.2f", kelilingBejana);
    return 0;
}
