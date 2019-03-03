#include <stdio.h>

void sumOfArray(int arr[], int n, int *ans){
    int i;
    *ans = 0;
    for(i = 0; i < n; i++){
        *ans = *ans + arr[i];
    }
}

int main(){
    int arr[5] = {10,9,8,7,6};
    int ans;
    sumOfArray(arr, 5, &ans);
    return 0;
}