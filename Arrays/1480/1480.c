#include <stdio.h>
#include <stdlib.h>

// This solution is O(n) runtime 

int *runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    for(int i = 1; i < numsSize; i++){
        nums[i] += nums[i-1];
    }
    return nums;
}

int main(){
    int x = 5;
    int arr[5] = {1, 3, 5, 7, 9};
    runningSum(arr, 5, &x);
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}