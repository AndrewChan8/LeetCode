from typing import List

class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        while len(stones) != 1:
            y = max(stones)
            stones.remove(y)
            x = max(stones)
            stones.remove(x)
            if y - x or len(stones) == 0:
                stones.append(y - x)
        return max(stones)