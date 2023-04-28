#include <stdio.h>
#include <stdlib.h>

// char *convertToBase7(int num) {
//     char neg = num < 0 ? '-' : NULL;
//     num = abs(num);
//     int n = num;
//     int len = 0;
//     while(n){
//         len++;
//         n /= 7;
//     }
//     char *base7 = (char *)malloc(len + 1);
//     if(neg){
//         base7[0] = '-';
//     }
//     if (num == 0) {
//         base7[0] = '0';
//         base7[1] = '\0';
//         return base7;
//     }
//     while(num){
//         base7[--len] = (num % 7) + 48;
//         num /= 7;
//     }
//     return base7;
// }

char *convertToBase7(int num) {
    int res = 0;
    int neg = num < 0 ? -1 : 1;
    int len = neg < 0 ? 1 : 0;
    num = abs(num);
    int zero = 0;
    int ten = 1;
    while(num){
        res += (num % 7) * ten;
        ten*=10;
        num /= 7;
        len++;
    }
    res *= neg;
    char *str = (char *)malloc(20);
    sprintf(str, "%d", res);
    return str;
}

int main(){
    printf("%s\n", convertToBase7(100));
    printf("%s\n", convertToBase7(-7));
}