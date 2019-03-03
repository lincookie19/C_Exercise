#include <stdio.h>

int inner_product(int A[], int B[], int n){
    int i, ans;
    for(i = 0; i < n; i++){
        ans = ans + (A[i] * B[i]);
    }
    return ans;
}

int main(){
    int A[] = {1,2,3};
    int B[] = {4,5,6};
    inner_product(A, B, 3);
    return 0;
}