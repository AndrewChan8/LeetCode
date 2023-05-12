from typing import List

class Solution:
    def maxArea(self, height: List[int]) -> int:
        l, r = 0, len(height) - 1
        area = 0
        while l < r:
            dist = r - l
            temp = min(height[l], height[r])
            area = max(area, temp * dist)
            if height[l] < height[r]:
                l += 1
            else:
                r -= 1
        return area