int arraySign(int* nums, int numsSize){
    int negs = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < 0){
            negs++;
        }
        if(nums[i] == 0){
            return 0;
        }
    }
    return negs % 2 ? -1 : 1;
}