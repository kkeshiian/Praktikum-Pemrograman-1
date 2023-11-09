#include <stdio.h>

int main(){
    int a; char s[5]; int i;
    scanf("%d %s", &a, &s);
    for (i = 1; i <= 50; i++){
        if (i % a == 0){
            printf("%s ", s);
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}