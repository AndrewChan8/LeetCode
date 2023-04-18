from typing import List

class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        highest = -1
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if(highest < (nums[i] - 1) * (nums[j] - 1)):
                    highest = (nums[i] - 1) * (nums[j] - 1)
        return highest
    
class Solution1:
    def maxProduct(self, nums: List[int]) -> int:
        highest = nums[0]
        second = nums[1]
        if highest < second:
            highest, second = second, highest

        for i in range(2, len(nums)):
            if nums[i] > highest:
                second = highest
                highest = nums[i]
            elif nums[i] > second:
                second = nums[i]
            
        return (highest - 1) * (second - 1)
    
class Solution2:
    def maxProduct(self, nums: List[int]) -> int:
        i = max(nums)
        nums.remove(i)
        j = max(nums)
        return (i - 1) * (j - 1)