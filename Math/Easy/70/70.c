#include <stdio.h>
#include <stdlib.h>

// int climbStairs(int n){
//     int i = 1, j = 1;
//     int k = 0;
//     for(int x = 0; x < n - 1; x++){
//         k = i + j;
//         i = j;
//         j = k;
//     }
//     return j;
// }

int arr[100];

int climbStairs(int n){
    if(n < 3){
        return n;
    }
    if(arr[n] == NULL){
        arr[n] = climbStairs(n - 1) + climbStairs(n + 2);
    }
    return arr[n];
}