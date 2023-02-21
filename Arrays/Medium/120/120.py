from typing import List

class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        min_sum = 0
        for arr in triangle:
            lowest = arr[0]
            for i in range(1, len(arr)):
                if arr[i] < lowest:
                    lowest = arr[i]
            min_sum += lowest
        return min_sum
