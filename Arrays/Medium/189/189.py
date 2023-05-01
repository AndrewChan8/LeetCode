from typing import List

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k %= n
        i, j = 0, n - k - 1
        while i <= j:
            nums[i], nums[j] = nums[j], nums[i]
            i += 1
            j -= 1
        i, j = n - k, n - 1
        while i <= j:
            nums[i], nums[j] = nums[j], nums[i]
            i += 1
            j -= 1
        nums.reverse()