int triangularSum(int* nums, int numsSize){
    while(numsSize != 1){
        numsSize--;
        for(int i = 0; i < numsSize; i++){
            nums[i] = (nums[i] + nums[i+1]) % 10;
        }
    }
    return nums[0];
}