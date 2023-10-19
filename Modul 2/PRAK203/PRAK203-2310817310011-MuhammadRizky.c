#include <stdio.h>

int main() {
    float a, b, i, j, x, y;
    scanf("%f %f", &a, &b);
    char nextChar = getchar();

    if (nextChar == ' ' || nextChar == '\n') {
        scanf("%f %f", &i, &j);
        scanf("%f %f", &x, &y);
    }
    float hasilHitung = (a - b) * (i / j) - (x + y);
    printf("%.3f", hasilHitung);
    return 0;
}