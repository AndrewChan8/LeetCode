from typing import List

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max = nums[0]
        currMax = nums[0]

        for i in range(1, len(nums)):
            currMax = nums[i] if nums[i] > currMax + nums[i] else currMax + nums[i]
            max = currMax if currMax > max else max

        return max