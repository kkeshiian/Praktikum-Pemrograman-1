#include <stdio.h>

int main(){
    int nilaiInput;
    scanf("%d", &nilaiInput);

    if (nilaiInput >= 80){
        printf("A");
    } else if (nilaiInput >= 70 && nilaiInput <= 79){
        printf("B");
    } else if (nilaiInput >= 60 && nilaiInput <= 69){
        printf("C");
    } else if (nilaiInput >= 50 && nilaiInput <= 59){
        printf("D");
    } else{
        printf("E");
    }
    
    
    return 0;
}