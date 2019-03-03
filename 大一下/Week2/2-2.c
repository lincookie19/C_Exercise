#include <stdio.h>

int* largest(int a[], int n){
    int i;
    int max = -99999;
    int *ptr = &a[0];
        for(i = 0; i < n; i++){
        if(a[i] > *ptr){
            ptr = &a[i];
        }
    }
    return ptr;
}

int main(){
    int a[5] = {9,13,1,10,7};
    largest(a,5);
    
    return 0;
}