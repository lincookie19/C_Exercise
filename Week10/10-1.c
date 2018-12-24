#include <stdio.h>

int calc(int num){
    if(num == 1 || num == 0){
        return 1;
    }
    else{
        return num * calc(num - 1);
    }
}
品宏小雞雞；

int main(){
    int num;
    scanf("%d", &num);
    calc(num);
    return 0;
}
