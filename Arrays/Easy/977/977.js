var sortedSquares = function(nums) {
    let arr = new Array(nums.length)
    let left = 0
    let right = nums.length - 1
    let i = right
    while(left <= right){
        if(Math.abs(nums[left]) >= Math.abs(nums[right])){
            arr[i--] = nums[left] * nums[left++]
        }else{
            arr[i--] = nums[right] * nums[right--]
        }
    }
    return arr
};