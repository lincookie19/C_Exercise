#include <stdio.h>

int power(int base, int index){
    if(index == 1){
        return base;
    }
    else{
        return base * power(base,index-1);
    } 
}

int main(){
    int base, index;
    scanf("%d %d", &base, &index);
    printf("%d", power(base, index));
    return 0;
}