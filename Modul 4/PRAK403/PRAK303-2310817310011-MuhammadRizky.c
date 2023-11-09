#include <stdio.h>

int main(){
    int a; int b; int x; int y;
    scanf("%d %d", &a, &b);

    int c = a - b;
    int d = b - a;

    if (a > b){
        for (a >= b; b <= a; a--, b--){
            while (a >= b - c){
                printf("%d %d - ", a, b);
                a--;
                b++;
                continue;
            }
            
        }
    } else{
        for (a <= b; b >= a; a++, b--){
            while (a <= b + d){
                printf("%d %d - ", a, b);
                a++;
                b--;
                continue;
            }
            
        }
    }
    
    return 0;
}