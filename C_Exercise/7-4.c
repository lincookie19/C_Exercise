#include <stdio.h>

int main(){
    int Number;
    int Quantity;
    int Price;
    float ans;
    int i;
    int sum=0;
    scanf("%d %d", &Number, &Quantity);
    while(i!=1){
        if(Number==0 && Quantity==0){
            i++;
        }
        switch(Number){
            case 1 :
                ans=Quantity*2.98;
                break;
            case 2 :
                ans=Quantity*4.5;
                break;
            case 3 :
                ans=Quantity*9.98;
                break;
            case 4 :
                ans=Quantity*4.49;
                break;
            case 5 :
                ans=Quantity*6.87;
                break;
            default:
                printf("Error");
        }
        sum=sum+ans;
        printf("%d",sum);
    }
    return 0;
}
