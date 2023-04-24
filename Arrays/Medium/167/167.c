#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *f = numbers;
    int *b = numbers + numbersSize - 1;
    int *res = malloc(sizeof(int) * 2);
    *returnSize = 2;
    int sum;
    while(f < b){
        sum = *f + *b;
        if(sum == target){
            res[0] = f - numbers + 1;
            res[1] = b - numbers + 1;
            return res;
        }else if(sum > target){
            b--;
        }else{
            f++;
        }
    }
    return res;
}
