#include <stdio.h>
#include <stdlib.h>

char *convertToBase7(int num) {
    if(num == 0){
        return "0";
    }
    char *temp = (char *)calloc(11, sizeof(char));
    int len = 10;
    int neg = 0;
    if(num < 0){
        num *= -1;
        neg = 1;
    }
    temp[len] = '\0';
    while(num){
        temp[--len] = (num % 7) + 48;
        num /= 7;
    }
    if(neg){
        temp[--len] = '-';
    }
    return temp + len;
}