#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, frequency;
    int i;
    scanf("%d", &frequency);
    for(i = 1; i <= frequency; i++){
        num = (rand()%35)-5;
        printf("%d ",num);
    }
    return 0;
}