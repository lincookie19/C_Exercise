#include <stdio.h>

int main(){
    char i;
    int A=0;
    int B=0;
    int C=0;
    int D=0;
    int E=0;
   
    while(getchar()==i){
        if(C=='a' || C=='A'){
            A++;
        }
        if(C=='e' || C=='E'){
            B++;
        }
        if(C=='i' || C=='I'){
            C++;
        }
        if(C=='o' || C=='O'){
            D++;
        }
        if(C=='u' || C=='U'){
            E++;
        }
    }
    printf("%d %d %d %d %d", A, B, C, D, E);
    return 0;
}