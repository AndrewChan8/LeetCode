int maxProduct(int* nums, int numsSize){
    int highest = nums[0];
    int second = nums[1];
    if(highest < second){
        int temp = highest;
        highest = second;
        second = temp;
    }
    for(int i = 2; i < numsSize; i++){
        if(nums[i] > highest){
            second = highest;
            highest = nums[i];
        }else if(nums[i] > second){
            second = nums[i];
        }
    }
    return (highest - 1) * (second - 1);
}