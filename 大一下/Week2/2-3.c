#include <stdio.h>

int MyStrlen(char* arr){
    int length = 0;
    while(arr[length] != '\0'){
        length++;
    }
    return length;
}