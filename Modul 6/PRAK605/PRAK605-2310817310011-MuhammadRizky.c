#include <stdio.h>

int main() {
    int ordo;
    scanf("%d", &ordo);

    int matrixA[10][10], matrixB[10][10], result[10][10];

    printf("Matriks A:\n");
    for (int i = 0; i < ordo; i++){
        for (int j = 0; j < ordo; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Matriks B:\n");
    for (int i = 0; i < ordo; i++){
        for (int j = 0; j < ordo; j++){
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < ordo; i++){
        for (int j = 0; j < ordo; j++){
            result[i][j] = 0;
            for (int k = 0; k < ordo; k++){
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("Matriks AXB:\n");
    for (int i = 0; i < ordo; i++){
        for (int j = 0; j < ordo; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
