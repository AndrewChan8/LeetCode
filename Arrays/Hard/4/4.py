from typing import List

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        a, b = nums1, nums2
        total = len(nums1) + len(nums2)
        partition = total // 2

        if len(b) < len(a):
            a, b = b, a

        l, r = 0, len(a) - 1
        while True:
            midA = (l + r) // 2
            midB = partition - midA - 2

            aL = a[midA] if midA >= 0 else float("-infinity")
            aR = a[midA + 1] if (midA + 1) < len(a) else float("-infinity") 
            bL = b[midB] if midB >= 0 else float("-infinity")
            bR = b[midB + 1] if (midB + 1) < len(a) else float("-infinity")

            if aL <= bR and bL <= aR:
                if total % 2:
                    return min(aR, bR)
                return (max(aL, bL) + min(aR, bR)) / 2
            elif aL > bR:
                r = midA - 1
            else:
                l = midA + 1