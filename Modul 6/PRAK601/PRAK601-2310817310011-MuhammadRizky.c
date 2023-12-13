#include <stdio.h>

int main(){
    int baris; int kolom; int input;
    
    scanf("%d %d", &baris, &kolom);
    int matriks[baris][kolom];
        for (int x = 0; x < baris; x++){
            for (int y = 0; y < kolom; y++){
                scanf("%d", &input);
                matriks[x][y]=input;   
            }
        }

    for (int i = 0; i < baris; i++){
        for (int j = 0;j < kolom; j++){
        printf("%d ", matriks[i][j]);
    }
    printf("\n");
}
    return 0;
}