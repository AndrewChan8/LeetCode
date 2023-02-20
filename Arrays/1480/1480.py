from typing import List

# This solution is O(n) runtime

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        for i in range(1, len(nums)):
            nums[i] += nums[i-1]
        return nums

sol = Solution()
print(sol.runningSum([1, 3, 5, 7, 9]))