#include <stdio.h>
#include <string.h>

void strReverse(char* arr){
    int length, i;
    char tmp;
    length=strlen(arr);
    for(i=0;i<length/2;i++){
        tmp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = tmp;
    }
}