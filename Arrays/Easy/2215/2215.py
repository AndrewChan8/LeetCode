from typing import List

# class Solution:
#     def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
#         arr1 = []
#         arr2 = []
#         for num in nums1:
#             if num not in nums2 and num not in arr1:
#                 arr1.append(num)
#         for num in nums2:
#             if num not in nums1 and num not in arr2:
#                 arr2.append(num)
#         return [arr1, arr2]
    
class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        nums1, nums2 = set(nums1), set(nums2)
        return [list(nums1 - nums2), list(nums2 - nums1)]