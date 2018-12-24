#include <stdio.h>

int main(){
    int i, sum = 0;
    int arr[10];
    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++){
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}