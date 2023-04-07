from typing import List

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max = -1
        for row in accounts:
            acc = 0
            for num in row:
                acc += num
            if max < acc:
                max = acc
        return max