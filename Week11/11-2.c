#include <stdio.h>
#include <stdlib.h>

int main(){
    float num;
    int i, frequency;
    scanf("%d", &frequency);
    for(i = 1; i <= frequency; i++){
        num = (rand()%10)/10.0;
        printf("%.1f ",num);
    }
    return 0;
}