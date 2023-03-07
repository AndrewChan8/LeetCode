var maxProduct = function(nums) {
    let highest = nums[0];
    let second = nums[1];
    if(highest < second){
        let temp = highest;
        highest = second;
        second = temp;
    }
    for(let i = 2; i < nums.length; i++){
        if(nums[i] > highest){
            second = highest;
            highest = nums[i];
        }else if(nums[i] > second){
            second = nums[i];
        }
    }
    return (highest - 1) * (second - 1);
};

var maxProduct1 = function(nums) {
    nums = nums.sort((x,y) => y-x);
    return (nums[0] - 1) * (nums[1] - 1)
};