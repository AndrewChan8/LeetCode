from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        low = prices[0]
        max = 0
        for num in prices:
            if num < low:
                low = num
            elif num - low > max:
                max = num - low
        return max