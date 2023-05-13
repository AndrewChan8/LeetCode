class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        num = 1
        while num < n:
            num *= 3
        return num == n