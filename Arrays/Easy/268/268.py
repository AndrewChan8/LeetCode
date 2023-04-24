from typing import List

# class Solution:
#     def missingNumber(self, nums: List[int]) -> int:
#         n = len(nums)
#         for num in range(n + 1):
#             if num not in nums:
#                 return num

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        s = sum(nums)
        n = len(nums)
        return ((n * (n + 1)) // 2) - s