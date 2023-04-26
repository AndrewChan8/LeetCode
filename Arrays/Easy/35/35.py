from typing import List

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        min = 0
        max = len(nums) - 1
        while min <= max:
            mid = (min + max) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                min = mid + 1
            else:
                max = mid - 1
        return min