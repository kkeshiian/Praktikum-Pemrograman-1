#include <stdio.h>

int main(){
    int a; int b;

    scanf("%d %d", &a, &b);

    if (a <= b){
        printf("%d %d", a, b);
    } else if (a >= b)
    {
        printf("%d %d", b, a);
    }
    
    return 0;
}