int missingNumber(int* nums, int numsSize){
    int sum = 0;
    int summation = numsSize * (numsSize + 1) / 2;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
    }
    return summation - sum;
}