#include <stdio.h>
#include <stdlib.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *result = (int *)malloc(sizeof(int) * numsSize);
    int left = 0, right = numsSize - 1, i = right;
    while(left <= right){
        if(abs(nums[left]) >= abs(nums[right])){
            result[i--] = nums[left] * nums[left];
            left++;
        }else{
            result[i--] = nums[right] * nums[right];
            right--;
        }
    }
    return result;
}