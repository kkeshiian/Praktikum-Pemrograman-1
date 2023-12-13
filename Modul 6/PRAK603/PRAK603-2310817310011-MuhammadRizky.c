#include <stdio.h>

int main(){
    int a, b, matrix;
    scanf("%d %d", &a, &b);
    int x[a], y[b];

    if (a == b){
        for (int i = 0; i < a; i++){
            scanf("%d", &x[i]);
        }

        for (int i = 0; i < b; i++){
            scanf("%d", &y[i]);
        }

        for (int i = 0; i < a; i++){
            int hasil = x[i] * y[i];
            printf(" %d ", hasil);
        }

    } else {
        printf("Jumlah tidak sama");
    }
    return 0;
}
