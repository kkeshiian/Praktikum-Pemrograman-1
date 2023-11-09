#include <stdio.h>

int main(){
    int inputAngka; int i;
    scanf("%d", &inputAngka);

    for (i = 1; i <= inputAngka; i++){
        if (i % 2 == 1){
             printf("%d ", i);
        } 
        
        if (i == inputAngka){
            printf("\n");
        }
    }


    for (int g = inputAngka; g > 1; g--){
        if (g % 2 == 0){
            printf("%d ", g);
        }
    }
    
    return 0;
}