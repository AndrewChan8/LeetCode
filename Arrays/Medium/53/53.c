int maxSubArray(int* nums, int numsSize){
    int max = nums[0];
    int currMax = 0;
    for(int i = 0; i < numsSize; i++){
        currMax += nums[i];
        if(currMax > max){
            max = currMax;
        }
        if(currMax < 0){
            currMax = 0;
        }
    }
    return max;
}