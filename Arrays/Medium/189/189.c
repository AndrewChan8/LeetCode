void rotate(int* nums, int numsSize, int k){
    k %= numsSize;
    int i = 0, j = numsSize - k - 1;
    while(i <= j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    i = numsSize - k;
    j = numsSize - 1;
    while(i <= j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    for(i = 0; i < numsSize / 2; i++){
        int temp = nums[i];
        nums[i] = nums[numsSize - i - 1];
        nums[numsSize - i - 1] = temp;
    }
}