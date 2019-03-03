#include <stdio.h>

int main(){
    int a[5];
    int i;
    for(i = 0; i <= 4; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i <= 4; i++){
        printf("%p %d %p %d\n", &a[i], a[i], a+i, *(a+i));
    }
    return 0;
}