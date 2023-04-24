#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    int dup = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] == nums[i - 1]){
            dup++;
        }else{
            nums[i - dup] = nums[i];
        }
    }
    return numsSize - dup;
}