from typing import List

class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        temp = []
        for num in timeSeries:
            temp.append(num)
            for i in range(duration - 1):
                temp.append(num + i)
        return len(set(temp))