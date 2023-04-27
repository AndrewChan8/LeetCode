from typing import List

class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        while len(nums) != 1:
            numLen = len(nums) - 1
            for i in range(numLen):
                nums[i] = (nums[i] + nums[i+1]) % 10
        return nums[0]