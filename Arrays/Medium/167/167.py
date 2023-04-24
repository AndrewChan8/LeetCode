from typing import List

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        front = 0
        back = len(numbers) - 1
        while front < back:
            sum = numbers[front] + numbers[back] - target
            if sum < 0:
                front += 1
            elif sum > 0:
                back -= 1
            else:
                return front + 1, back + 1