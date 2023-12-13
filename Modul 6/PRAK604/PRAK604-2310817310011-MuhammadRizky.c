#include <stdio.h>
#include <string.h>

int main(){
    char asli[1000];
    char palsu[1000];
    scanf("%[^\n]%*c", &asli);
    scanf("%[^\n]%*c", &palsu);

    int a = strlen(asli);
    int b = strlen(palsu);

    int x = 0; int y = 0;

    if (a == b){
        for (int i = 0; i < a; i++){
            if(asli[i] == palsu[i]){
                if (asli[i] == ' '){
                    printf(" ");
                } else if (asli[i] == palsu[i]){
                    printf("*");
                    x++;
                }
                
            } else{
                printf("#");
                y++;
            }
        }

        printf("\n* = %d", x);
        printf("\n# = %d", y);

        if (x >= y){
            printf("\nPesan Asli");
        } else{
            printf("\nPesan Palsu");
        }
    } else{
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    return 0;
}
