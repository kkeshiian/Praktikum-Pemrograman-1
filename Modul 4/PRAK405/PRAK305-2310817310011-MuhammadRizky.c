#include <stdio.h>

int main() {
    int n, kelipatan;
    scanf("%d %d", &n, &kelipatan);

    int totalSemua = 0;

    for (int i = 1; i <= n; i++) {
        int totalBaris = 0;
        for (int j = i; j >= 1; j--) {
            int jumlah = j * kelipatan;
            totalBaris += jumlah;
            printf("(%d * %d)", j, kelipatan, jumlah);
            if (j > 1) {
                printf(" + ");
            }
        }
        totalSemua += totalBaris;
        printf(" = %d\n", totalBaris);
    }

    printf("%d\n", totalSemua);

    return 0;
}
