#include <stdio.h>
#include <math.h>

int main(){
    float alasSegitiga = 5, tinggiSegitiga = 12, sisiMiringSegitiga = sqrt((alasSegitiga * alasSegitiga) + (tinggiSegitiga * tinggiSegitiga));    
    printf("Diketahui :\nAlas = " "%.0f" " cm", alasSegitiga);
    printf("\nTinggi = " "%.0f" " cm", tinggiSegitiga);
    printf("\nJawab :");
    printf("\n\nSisi A = " "%.0f" " cm", alasSegitiga);
    printf("\nSisi B = " "%.0f" " cm", sisiMiringSegitiga);
    printf("\nSisi C = " "%.0f" " cm", tinggiSegitiga);
    printf("\nKeliling = " "%.0f" " cm", alasSegitiga + tinggiSegitiga + sisiMiringSegitiga);
    printf("\nLuas = " "%.0f" " cm", (alasSegitiga * tinggiSegitiga)/2);
    return 0;
}