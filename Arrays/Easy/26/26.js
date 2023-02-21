var removeDuplicates = function(nums) {
    let dup = 0;
    for(let i = 1; i < nums.length; i++){
        if(nums[i] == nums[i-1]){
            dup++;
        }else{
            nums[i - dup] = nums[i];
        }
    }
    return nums.length - dup;
};