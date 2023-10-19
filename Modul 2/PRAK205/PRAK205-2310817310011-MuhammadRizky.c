#include <stdio.h>
#include <math.h>

int main() {
    float tinggiSegitiga, sisiMiringSegitiga;
    scanf("%f %f", &tinggiSegitiga, &sisiMiringSegitiga);
    
    float alasSegitiga = sqrt((sisiMiringSegitiga * sisiMiringSegitiga) - (tinggiSegitiga * tinggiSegitiga));

    float kelilingSegitiga = tinggiSegitiga + sisiMiringSegitiga + alasSegitiga;

    float luasSegitiga = (alasSegitiga * tinggiSegitiga)/2;

    printf("Alas = %.0f cm\n", alasSegitiga);
    printf("Tinggi = %.0f cm\n", tinggiSegitiga);
    printf("Keliling = %.0f cm\n", kelilingSegitiga);
    printf("Luas = %.0f cm^2\n", luasSegitiga);

    return 0;
}
