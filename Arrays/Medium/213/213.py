from typing import List

# class Solution:
#     def rob(self, nums: List[int]) -> int:
#         n = len(nums)
#         if n < 3:
#             return max(nums)
#         dp1 = [0] * n
#         dp1[0] = nums[0]
#         dp1[1] = max(nums[0], nums[1])
#         for i in range(2, n-1):
#             dp1[i] = max(dp1[i-1], dp1[i-2] + nums[i])

#         dp2 = [0] * n
#         dp2[1] = nums[1]
#         dp2[2] = max(nums[1], nums[2])
#         for i in range(3, n):
#             dp2[i] = max(dp2[i-1], dp2[i-2] + nums[i])
#         return max(dp1[n-2], dp2[n-1])
    
class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        rob1, rob2 = 0, 0
        for i in range(len(nums) - 1):
            tmp = max(rob1+nums[i], rob2)
            rob1 = rob2
            rob2 = tmp
        r1 = rob2
        rob1,rob2 = 0,0
        for i in range(1, len(nums)):
            tmp = max(rob1 + nums[i], rob2)
            rob1 = rob2
            rob2 = tmp
        r2 = rob2
        return max(r1, r2)