from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        dup = 0

        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1]:
                dup += 1
            else:
                nums[i - dup] = nums[i]

        return len(nums) - dup