#include <stdio.h>

int main(){
    int detikInput;
    scanf("%d", &detikInput);

    int day = (detikInput % (86400*30))/86400;
    int hour = (detikInput % 86400/3600);
    int minute = (detikInput % 3600)/60;
    int secon = (detikInput % 60);

    if (day == 0){
        printf("%.2d : %.2d : %.2d", hour, minute, secon);
    } else{
        printf("%d hari %.2d : %.2d : %.2d", day, hour, minute, secon);
    }
    return 0;
}
