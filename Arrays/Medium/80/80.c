int removeDuplicates(int* nums, int numsSize) {
  if(numsSize < 2){
    return numsSize;
  }
  
  int i = 1;
  int count = 1;
  for(int j = 1; j < numsSize; j++){
    if(nums[j] == nums[j - 1]){
      count++;
    }else{
      count = 1;
    }
    if(count <= 2){
      nums[i] = nums[j];
      i++;
    }
  }
  return i;
}